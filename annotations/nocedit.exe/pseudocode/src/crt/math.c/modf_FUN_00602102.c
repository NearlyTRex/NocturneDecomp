// Name: crt_math.c_modf_FUN_00602102
// Address: 00602102
// Address Range: [[00602102, 00602121]]
// Convention: __softfp_double
// Signature: double crt_math.c_modf_FUN_00602102(double value, double * integer_part)

#include "nocturne.h"

double __softfp_double crt_math_c_modf_FUN_00602102(double value,double *integer_part)

{
  float10 fVar1;
  double dVar2;
  
  fVar1 = (float10)value;
  dVar2 = crt_math_c_round_FUN_005fe6b0(value);
  *value._4_4_ = dVar2;
  return (double)(fVar1 - (float10)dVar2);
}
