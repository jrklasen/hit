// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// clusterInx
List clusterInx(IntegerMatrix x);
RcppExport SEXP hit_clusterInx(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< IntegerMatrix >::type x(xSEXP );
        List __result = clusterInx(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// sigCluster
NumericMatrix sigCluster(NumericVector pVal, List clustLevel, List clustMemb, const size_t p, const double alpha, int minDistInx, int maxDistInx);
RcppExport SEXP hit_sigCluster(SEXP pValSEXP, SEXP clustLevelSEXP, SEXP clustMembSEXP, SEXP pSEXP, SEXP alphaSEXP, SEXP minDistInxSEXP, SEXP maxDistInxSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericVector >::type pVal(pValSEXP );
        Rcpp::traits::input_parameter< List >::type clustLevel(clustLevelSEXP );
        Rcpp::traits::input_parameter< List >::type clustMemb(clustMembSEXP );
        Rcpp::traits::input_parameter< const size_t >::type p(pSEXP );
        Rcpp::traits::input_parameter< const double >::type alpha(alphaSEXP );
        Rcpp::traits::input_parameter< int >::type minDistInx(minDistInxSEXP );
        Rcpp::traits::input_parameter< int >::type maxDistInx(maxDistInxSEXP );
        NumericMatrix __result = sigCluster(pVal, clustLevel, clustMemb, p, alpha, minDistInx, maxDistInx);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
