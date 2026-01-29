// Name: crt_math.c_modf_FUN_00602102
// Address: 00602102
// Address Range: [[00602102, 00602121]]
// Convention: __softfp_double
// Signature: double __softfp_double crt_math_c_modf_FUN_00602102(double value,double *integer_part)

#include "nocturne.h"

double __softfp_double modf(double value,double *integer_part)

{
  double dVar1;
  
  dVar1 = round(value);
  *value._4_4_ = dVar1;
  return value - dVar1;
}
