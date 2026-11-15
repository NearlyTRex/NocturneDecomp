// Name: crt_math.c_modf_FUN_005c3166
// Address: 005c3166
// Address Range: [[005c3166, 005c3185]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_modf_FUN_005c3166(double value,double *integer_part)

#include "nocturne.h"

double __crtmath modf(double value,double *integer_part)

{
  double dVar1;
  
  dVar1 = round(value);
  *value._4_4_ = dVar1;
  return value - dVar1;
}
