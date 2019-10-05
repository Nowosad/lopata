#ifndef get_motifels_incoma_H
#define get_motifels_incoma_H
#include <comat.h>
// [[Rcpp::depends(comat)]]
#include "create_attributes.h"
#include "get_motifel_size.h"
#include "na_prop.h"

Rcpp::List get_motifels_incoma(const Rcpp::List input,
                               const arma::imat directions,
                               int size,
                               int shift);

#endif // get_motifels_incoma_H
