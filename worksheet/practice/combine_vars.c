#include <stdio.h>

/*
 * Example using different variable types
 * We should use casts to properly combine values and get accurate results
 */

int main( void ) {

    double d = 1.0/3.0;
    float f = 2.3;
    int k = -7;

    // you can verify sums by comparing to a calculator

    // compute and print d/k as a double to 16 d.p.
    double d_divides_k = d/ (double)k;
    printf("d/k as double  = %.16f\n", d_divides_k);
    // compute and print f-d as a double to 16 d.p.
    double double_f_minus_d = (double)f - d;
    printf("f-d as double  = %.16f\n", double_f_minus_d);
    // compute and print f-d as a float to 16 d.p.
    float float_f_minus_d = f - (float)d;
    printf("f - d as float   = %.16f\n", float_f_minus_d);
    // compute and print k+d as a double to 16 d.p.
    double k_plus_d = (double)k + d;
    printf("k + d as double  = %.16f\n", k_plus_d);

    return 0;
}