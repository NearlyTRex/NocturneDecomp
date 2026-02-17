// Name: crt_math.c_atan2_FUN_006013b1
// Address: 006013b1
// Address Range: [[006013b1, 006013c5]]
// Convention: __fpureg
// Signature: float10 __fpureg crt_math_c_atan2_FUN_006013b1(float10 y,float10 x)

#include "nocturne.h"

/* WARNING: This is an inlined function */

float10 __fpureg atan2(float10 y,float10 x)

{
  float10 fVar1;
  
  fVar1 = (float10)fpatan(y,x);
  return fVar1;
}
