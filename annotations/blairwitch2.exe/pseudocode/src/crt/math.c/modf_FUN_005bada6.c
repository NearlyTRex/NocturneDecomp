// Name: crt_math.c_modf_FUN_005bada6
// Address: 005bada6
// Address Range: [[005bada6, 005badc5]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_modf_FUN_005bada6(double value,double *integer_part)

#include "nocturne.h"

double __crtmath modf(double value,double *integer_part)

{
  double dVar1;
  
  dVar1 = round(value);
  *value._4_4_ = dVar1;
  return value - dVar1;
}
