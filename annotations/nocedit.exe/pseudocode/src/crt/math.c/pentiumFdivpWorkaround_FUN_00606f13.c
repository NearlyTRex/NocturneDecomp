// Name: crt_math.c_pentiumFdivpWorkaround_FUN_00606f13
// Address: 00606f13
// Address Range: [[00606f13, 00606f25]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_pentiumFdivpWorkaround_FUN_00606f13(float10 dividend,float10 divisor)

#include "nocturne.h"

float10 __fpustack_safe
pentiumFdivpWorkaround(float10 dividend,float10 divisor)

{
  float10 fVar1;
  
  fVar1 = fdiv(dividend,divisor);
  return fVar1;
}
