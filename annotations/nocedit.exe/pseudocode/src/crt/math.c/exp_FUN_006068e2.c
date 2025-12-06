// Name: crt_math.c_exp_FUN_006068e2
// Address: 006068e2
// Address Range: [[006068e2, 0060694a]]
// Convention: __watcallRegister
// Signature: float10 crt_math.c_exp_FUN_006068e2(float10 x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 crt_math_c_exp_FUN_006068e2(float10 x)

{
  char in_AL;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  if ((float10)1.595618312253977202E-468._0_8_ < x) {
    if (in_AL != '\a') {
      dVar3 = crt_math_c_handle_math_error_FUN_0060c02b();
      x = (float10)dVar3;
    }
    return x;
  }
  if ((float10)ram0x0068506c < x) {
    fVar1 = ROUND((float10)1.4426950408889634 * x);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * x - fVar1);
    fVar1 = (float10)fscale((float10)1 + fVar2,fVar1);
  }
  else {
    fVar1 = (float10)0;
  }
  return fVar1;
}
