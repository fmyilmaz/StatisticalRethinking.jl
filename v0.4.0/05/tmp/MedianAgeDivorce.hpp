// Code generated by Stan version 2.18.0

#include <stan/model/model_header.hpp>

namespace MedianAgeDivorce_model_namespace {

using std::istream;
using std::string;
using std::stringstream;
using std::vector;
using stan::io::dump;
using stan::math::lgamma;
using stan::model::prob_grad;
using namespace stan::math;

static int current_statement_begin__;

stan::io::program_reader prog_reader__() {
    stan::io::program_reader reader;
    reader.add_event(0, 0, "start", "/home/travis/build/StanJulia/StatisticalRethinking.jl/docs/build/05/tmp/MedianAgeDivorce.stan");
    reader.add_event(29, 27, "end", "/home/travis/build/StanJulia/StatisticalRethinking.jl/docs/build/05/tmp/MedianAgeDivorce.stan");
    return reader;
}

class MedianAgeDivorce_model : public prob_grad {
private:
    int N;
    vector_d divorce;
    vector_d median_age;
public:
    MedianAgeDivorce_model(stan::io::var_context& context__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, 0, pstream__);
    }

    MedianAgeDivorce_model(stan::io::var_context& context__,
        unsigned int random_seed__,
        std::ostream* pstream__ = 0)
        : prob_grad(0) {
        ctor_body(context__, random_seed__, pstream__);
    }

    void ctor_body(stan::io::var_context& context__,
                   unsigned int random_seed__,
                   std::ostream* pstream__) {
        typedef double local_scalar_t__;

        boost::ecuyer1988 base_rng__ =
          stan::services::util::create_rng(random_seed__, 0);
        (void) base_rng__;  // suppress unused var warning

        current_statement_begin__ = -1;

        static const char* function__ = "MedianAgeDivorce_model_namespace::MedianAgeDivorce_model";
        (void) function__;  // dummy to suppress unused var warning
        size_t pos__;
        (void) pos__;  // dummy to suppress unused var warning
        std::vector<int> vals_i__;
        std::vector<double> vals_r__;
        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        // initialize member variables
        try {
            current_statement_begin__ = 2;
            context__.validate_dims("data initialization", "N", "int", context__.to_vec());
            N = int(0);
            vals_i__ = context__.vals_i("N");
            pos__ = 0;
            N = vals_i__[pos__++];
            current_statement_begin__ = 3;
            validate_non_negative_index("divorce", "N", N);
            context__.validate_dims("data initialization", "divorce", "vector_d", context__.to_vec(N));
            validate_non_negative_index("divorce", "N", N);
            divorce = vector_d(static_cast<Eigen::VectorXd::Index>(N));
            vals_r__ = context__.vals_r("divorce");
            pos__ = 0;
            size_t divorce_i_vec_lim__ = N;
            for (size_t i_vec__ = 0; i_vec__ < divorce_i_vec_lim__; ++i_vec__) {
                divorce[i_vec__] = vals_r__[pos__++];
            }
            current_statement_begin__ = 4;
            validate_non_negative_index("median_age", "N", N);
            context__.validate_dims("data initialization", "median_age", "vector_d", context__.to_vec(N));
            validate_non_negative_index("median_age", "N", N);
            median_age = vector_d(static_cast<Eigen::VectorXd::Index>(N));
            vals_r__ = context__.vals_r("median_age");
            pos__ = 0;
            size_t median_age_i_vec_lim__ = N;
            for (size_t i_vec__ = 0; i_vec__ < median_age_i_vec_lim__; ++i_vec__) {
                median_age[i_vec__] = vals_r__[pos__++];
            }

            // validate, data variables
            current_statement_begin__ = 2;
            check_greater_or_equal(function__,"N",N,1);
            current_statement_begin__ = 3;
            current_statement_begin__ = 4;
            // initialize data variables


            // validate transformed data

            // validate, set parameter ranges
            num_params_r__ = 0U;
            param_ranges_i__.clear();
            current_statement_begin__ = 8;
            ++num_params_r__;
            current_statement_begin__ = 9;
            ++num_params_r__;
            current_statement_begin__ = 10;
            ++num_params_r__;
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    ~MedianAgeDivorce_model() { }


    void transform_inits(const stan::io::var_context& context__,
                         std::vector<int>& params_i__,
                         std::vector<double>& params_r__,
                         std::ostream* pstream__) const {
        stan::io::writer<double> writer__(params_r__,params_i__);
        size_t pos__;
        (void) pos__; // dummy call to supress warning
        std::vector<double> vals_r__;
        std::vector<int> vals_i__;

        if (!(context__.contains_r("a")))
            throw std::runtime_error("variable a missing");
        vals_r__ = context__.vals_r("a");
        pos__ = 0U;
        context__.validate_dims("initialization", "a", "double", context__.to_vec());
        double a(0);
        a = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(a);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable a: ") + e.what());
        }

        if (!(context__.contains_r("bA")))
            throw std::runtime_error("variable bA missing");
        vals_r__ = context__.vals_r("bA");
        pos__ = 0U;
        context__.validate_dims("initialization", "bA", "double", context__.to_vec());
        double bA(0);
        bA = vals_r__[pos__++];
        try {
            writer__.scalar_unconstrain(bA);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable bA: ") + e.what());
        }

        if (!(context__.contains_r("sigma")))
            throw std::runtime_error("variable sigma missing");
        vals_r__ = context__.vals_r("sigma");
        pos__ = 0U;
        context__.validate_dims("initialization", "sigma", "double", context__.to_vec());
        double sigma(0);
        sigma = vals_r__[pos__++];
        try {
            writer__.scalar_lb_unconstrain(0,sigma);
        } catch (const std::exception& e) { 
            throw std::runtime_error(std::string("Error transforming variable sigma: ") + e.what());
        }

        params_r__ = writer__.data_r();
        params_i__ = writer__.data_i();
    }

    void transform_inits(const stan::io::var_context& context,
                         Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                         std::ostream* pstream__) const {
      std::vector<double> params_r_vec;
      std::vector<int> params_i_vec;
      transform_inits(context, params_i_vec, params_r_vec, pstream__);
      params_r.resize(params_r_vec.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r(i) = params_r_vec[i];
    }


    template <bool propto__, bool jacobian__, typename T__>
    T__ log_prob(vector<T__>& params_r__,
                 vector<int>& params_i__,
                 std::ostream* pstream__ = 0) const {

        typedef T__ local_scalar_t__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        T__ lp__(0.0);
        stan::math::accumulator<T__> lp_accum__;

        try {
            // model parameters
            stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);

            local_scalar_t__ a;
            (void) a;  // dummy to suppress unused var warning
            if (jacobian__)
                a = in__.scalar_constrain(lp__);
            else
                a = in__.scalar_constrain();

            local_scalar_t__ bA;
            (void) bA;  // dummy to suppress unused var warning
            if (jacobian__)
                bA = in__.scalar_constrain(lp__);
            else
                bA = in__.scalar_constrain();

            local_scalar_t__ sigma;
            (void) sigma;  // dummy to suppress unused var warning
            if (jacobian__)
                sigma = in__.scalar_lb_constrain(0,lp__);
            else
                sigma = in__.scalar_lb_constrain(0);


            // transformed parameters
            current_statement_begin__ = 14;
            validate_non_negative_index("mu", "N", N);
            Eigen::Matrix<local_scalar_t__,Eigen::Dynamic,1>  mu(static_cast<Eigen::VectorXd::Index>(N));
            (void) mu;  // dummy to suppress unused var warning

            stan::math::initialize(mu, DUMMY_VAR__);
            stan::math::fill(mu,DUMMY_VAR__);


            current_statement_begin__ = 15;
            for (int i = 1; i <= N; ++i) {
                current_statement_begin__ = 16;
                stan::model::assign(mu, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            (a + (bA * get_base1(median_age,i,"median_age",1))), 
                            "assigning variable mu");
            }

            // validate transformed parameters
            for (int i0__ = 0; i0__ < N; ++i0__) {
                if (stan::math::is_uninitialized(mu(i0__))) {
                    std::stringstream msg__;
                    msg__ << "Undefined transformed parameter: mu" << '[' << i0__ << ']';
                    throw std::runtime_error(msg__.str());
                }
            }

            const char* function__ = "validate transformed params";
            (void) function__;  // dummy to suppress unused var warning
            current_statement_begin__ = 14;

            // model body

            current_statement_begin__ = 20;
            lp_accum__.add(normal_log<propto__>(a, 10, 10));
            current_statement_begin__ = 21;
            lp_accum__.add(normal_log<propto__>(bA, 0, 1));
            current_statement_begin__ = 22;
            lp_accum__.add(uniform_log<propto__>(sigma, 0, 10));
            current_statement_begin__ = 23;
            lp_accum__.add(normal_log<propto__>(divorce, mu, sigma));

        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }

        lp_accum__.add(lp__);
        return lp_accum__.sum();

    } // log_prob()

    template <bool propto, bool jacobian, typename T_>
    T_ log_prob(Eigen::Matrix<T_,Eigen::Dynamic,1>& params_r,
               std::ostream* pstream = 0) const {
      std::vector<T_> vec_params_r;
      vec_params_r.reserve(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        vec_params_r.push_back(params_r(i));
      std::vector<int> vec_params_i;
      return log_prob<propto,jacobian,T_>(vec_params_r, vec_params_i, pstream);
    }


    void get_param_names(std::vector<std::string>& names__) const {
        names__.resize(0);
        names__.push_back("a");
        names__.push_back("bA");
        names__.push_back("sigma");
        names__.push_back("mu");
    }


    void get_dims(std::vector<std::vector<size_t> >& dimss__) const {
        dimss__.resize(0);
        std::vector<size_t> dims__;
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dimss__.push_back(dims__);
        dims__.resize(0);
        dims__.push_back(N);
        dimss__.push_back(dims__);
    }

    template <typename RNG>
    void write_array(RNG& base_rng__,
                     std::vector<double>& params_r__,
                     std::vector<int>& params_i__,
                     std::vector<double>& vars__,
                     bool include_tparams__ = true,
                     bool include_gqs__ = true,
                     std::ostream* pstream__ = 0) const {
        typedef double local_scalar_t__;

        vars__.resize(0);
        stan::io::reader<local_scalar_t__> in__(params_r__,params_i__);
        static const char* function__ = "MedianAgeDivorce_model_namespace::write_array";
        (void) function__;  // dummy to suppress unused var warning
        // read-transform, write parameters
        double a = in__.scalar_constrain();
        double bA = in__.scalar_constrain();
        double sigma = in__.scalar_lb_constrain(0);
        vars__.push_back(a);
        vars__.push_back(bA);
        vars__.push_back(sigma);

        // declare and define transformed parameters
        double lp__ = 0.0;
        (void) lp__;  // dummy to suppress unused var warning
        stan::math::accumulator<double> lp_accum__;

        local_scalar_t__ DUMMY_VAR__(std::numeric_limits<double>::quiet_NaN());
        (void) DUMMY_VAR__;  // suppress unused var warning

        try {
            current_statement_begin__ = 14;
            validate_non_negative_index("mu", "N", N);
            Eigen::Matrix<local_scalar_t__,Eigen::Dynamic,1>  mu(static_cast<Eigen::VectorXd::Index>(N));
            (void) mu;  // dummy to suppress unused var warning

            stan::math::initialize(mu, DUMMY_VAR__);
            stan::math::fill(mu,DUMMY_VAR__);


            current_statement_begin__ = 15;
            for (int i = 1; i <= N; ++i) {
                current_statement_begin__ = 16;
                stan::model::assign(mu, 
                            stan::model::cons_list(stan::model::index_uni(i), stan::model::nil_index_list()), 
                            (a + (bA * get_base1(median_age,i,"median_age",1))), 
                            "assigning variable mu");
            }

            // validate transformed parameters
            current_statement_begin__ = 14;

            // write transformed parameters
            if (include_tparams__) {
            for (int k_0__ = 0; k_0__ < N; ++k_0__) {
            vars__.push_back(mu[k_0__]);
            }
            }
            if (!include_gqs__) return;
            // declare and define generated quantities



            // validate generated quantities

            // write generated quantities
        } catch (const std::exception& e) {
            stan::lang::rethrow_located(e, current_statement_begin__, prog_reader__());
            // Next line prevents compiler griping about no return
            throw std::runtime_error("*** IF YOU SEE THIS, PLEASE REPORT A BUG ***");
        }
    }

    template <typename RNG>
    void write_array(RNG& base_rng,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& params_r,
                     Eigen::Matrix<double,Eigen::Dynamic,1>& vars,
                     bool include_tparams = true,
                     bool include_gqs = true,
                     std::ostream* pstream = 0) const {
      std::vector<double> params_r_vec(params_r.size());
      for (int i = 0; i < params_r.size(); ++i)
        params_r_vec[i] = params_r(i);
      std::vector<double> vars_vec;
      std::vector<int> params_i_vec;
      write_array(base_rng,params_r_vec,params_i_vec,vars_vec,include_tparams,include_gqs,pstream);
      vars.resize(vars_vec.size());
      for (int i = 0; i < vars.size(); ++i)
        vars(i) = vars_vec[i];
    }

    static std::string model_name() {
        return "MedianAgeDivorce_model";
    }


    void constrained_param_names(std::vector<std::string>& param_names__,
                                 bool include_tparams__ = true,
                                 bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "a";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "bA";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            for (int k_0__ = 1; k_0__ <= N; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "mu" << '.' << k_0__;
                param_names__.push_back(param_name_stream__.str());
            }
        }


        if (!include_gqs__) return;
    }


    void unconstrained_param_names(std::vector<std::string>& param_names__,
                                   bool include_tparams__ = true,
                                   bool include_gqs__ = true) const {
        std::stringstream param_name_stream__;
        param_name_stream__.str(std::string());
        param_name_stream__ << "a";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "bA";
        param_names__.push_back(param_name_stream__.str());
        param_name_stream__.str(std::string());
        param_name_stream__ << "sigma";
        param_names__.push_back(param_name_stream__.str());

        if (!include_gqs__ && !include_tparams__) return;

        if (include_tparams__) {
            for (int k_0__ = 1; k_0__ <= N; ++k_0__) {
                param_name_stream__.str(std::string());
                param_name_stream__ << "mu" << '.' << k_0__;
                param_names__.push_back(param_name_stream__.str());
            }
        }


        if (!include_gqs__) return;
    }

}; // model

}

typedef MedianAgeDivorce_model_namespace::MedianAgeDivorce_model stan_model;
