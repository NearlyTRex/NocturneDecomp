// Name: crt_math.c_exp_FUN_0056bdd2
// Address: 0056bdd2
// Address Range: [[0056bdd2, 0056be3a]]
// Convention: __fpureg_safe
// Signature: float10 __fpureg_safe crt_math_c_exp_FUN_0056bdd2(float10 x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fpureg_safe exp(float10 x)

{
  char unaff_AL;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  if ((float10)_DAT_005c1d9c < x) {
    if (unaff_AL != '\a') {
      dVar3 = handle_math_error();
      x = (float10)dVar3;
    }
    return x;
  }
  if ((float10)_DAT_005c1da4 < x) {
    fVar1 = ROUND((float10)1.4426950408889634 * x);
    fVar2 = (float10)f2xm1((float10)1.4426950408889634 * x - fVar1);
    fVar1 = (float10)fscale((float10)1 + fVar2,fVar1);
  }
  else {
    fVar1 = (float10)0;
  }
  return fVar1;
}
