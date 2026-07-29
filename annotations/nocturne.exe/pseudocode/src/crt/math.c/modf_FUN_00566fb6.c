// Name: crt_math.c_modf_FUN_00566fb6
// Address: 00566fb6
// Address Range: [[00566fb6, 00566fd5]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_modf_FUN_00566fb6(double value,double *integer_part)

#include "nocturne.h"

double __crtmath modf(double value,double *integer_part)

{
  double dVar1;
  
  dVar1 = round(value);
  *value._4_4_ = dVar1;
  return value - dVar1;
}
