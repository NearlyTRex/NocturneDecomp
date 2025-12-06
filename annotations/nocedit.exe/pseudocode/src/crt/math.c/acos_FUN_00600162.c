// Name: crt_math.c_acos_FUN_00600162
// Address: 00600162
// Address Range: [[00600162, 0060019e]]
// Convention: __fpustack
// Signature: double crt_math.c_acos_FUN_00600162(double x)

#include "nocturne.h"

double __fpustack crt_math_c_acos_FUN_00600162(double x)

{
  char extraout_AL;
  float10 fVar1;
  float10 value_to_sqrt;
  float10 y;
  
  fVar1 = (float10)x;
  value_to_sqrt = (float10)1 - fVar1 * fVar1;
  if (value_to_sqrt == (float10)0) {
    if (fVar1 < value_to_sqrt) {
      fVar1 = (float10)3.141592653589793;
    }
    else {
      fVar1 = (float10)0;
    }
  }
  else {
    fVar1 = crt_math_c_sqrt_FUN_0060710c(value_to_sqrt,fVar1);
    if (extraout_AL == '\0') {
      fVar1 = crt_math_c_atan2_FUN_006013b1(y,fVar1);
      fVar1 = 1.5707963f - fVar1;
    }
  }
  return (double)fVar1;
}
