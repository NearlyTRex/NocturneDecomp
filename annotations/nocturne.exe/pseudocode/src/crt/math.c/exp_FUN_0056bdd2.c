// Name: crt_math.c_exp_FUN_0056bdd2
// Address: 0056bdd2
// Address Range: [[0056bdd2, 0056be3a]]
// Convention: __fpureg_safe
// Signature: float10 __fpureg_safe crt_math_c_exp_FUN_0056bdd2(float10 x)

#include "nocturne.h"

float10 __fpureg_safe exp(float10 x)

{
  char unaff_AL;
  float10 fVar1;
  float10 fVar2;
  double dVar3;
  
  if ((float10)709.78271289338397 < x) {
    if (unaff_AL != '\a') {
      dVar3 = handle_math_error();
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
