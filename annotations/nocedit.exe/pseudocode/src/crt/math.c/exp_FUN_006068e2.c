// Name: crt_math.c_exp_FUN_006068e2
// Address: 006068e2
// Address Range: [[006068e2, 0060694a]]
// Convention: __fpureg
// Signature: float10 __fpureg crt_math_c_exp_FUN_006068e2(float10 x)

#include "nocturne.h"

float10 __fpureg crt_math_c_exp_FUN_006068e2(float10 x)

{
  char in_AL;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  if ((float10)709.78271289338397 < x) {
    if (in_AL != '\a') {
      dVar3 = crt_math_c_handle_math_error_FUN_0060c02b();
      x = (float10)dVar3;
    }
    return x;
  }
  if ((float10)-709.78271289338397 < x) {
    fVar1 = ROUND((float10)1.4426950408889634 * x);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * x - fVar1);
    fVar1 = (float10)fscale((float10)1 + fVar2,fVar1);
  }
  else {
    fVar1 = (float10)0;
  }
  return fVar1;
}
