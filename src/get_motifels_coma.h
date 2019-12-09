#ifndef get_motifels_coma_H
#define get_motifels_coma_H
#include <comat.h>
// [[Rcpp::depends(comat)]]
#include "create_attributes.h"
#include "get_motifel_size.h"
#include "na_prop.h"
using namespace Rcpp;

Rcpp::List get_motifels_coma(Rcpp::IntegerMatrix x,
                       const arma::imat directions,
                       int size,
                       int shift,
                       double threshold,
                       List classes);

#endif // get_motifels_coma_H
