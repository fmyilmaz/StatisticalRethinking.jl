using StatisticalRethinking, Turing

Turing.setadbackend(:reverse_diff)
#nb Turing.turnprogress(false)

# Turing model

@model m8_3(y) = begin
    α ~ Normal(1, 10)
    σ ~ Truncated(Cauchy(0, 1), 0, Inf)

    for i ∈ 1:length(y)
        y[i] ~ Normal(α, σ)
    end
end

y = [-1,1]

# Sample

posterior = sample(m8_3(y), Turing.NUTS(4000, 1000, 0.95));

# Draw summary

describe(posterior)

# Results rethinking

m83rethinking = "
          Mean StdDev lower 0.89 upper 0.89 n_eff Rhat
alpha  -0.01   1.60      -1.98       2.37  1121    1
sigma  1.98   1.91       0.47       3.45  1077    1
";
