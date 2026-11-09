// Name: crt_math.c_modf_FUN_005bada6
// Address: 005bada6
// Address Range: [[005bada6, 005badc5]]
// Convention: __crtmath
// Signature: double __crtmath crt_math_c_modf_FUN_005bada6(double value,double *integer_part)

#include "nocturne.h"

double __crtmath modf(double value,double *integer_part)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)value;
  fVar2 = fVar1;
  round();
  *integer_part = (double)fVar1;
  return (double)(fVar2 - fVar1);
}
