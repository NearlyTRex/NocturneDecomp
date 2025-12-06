// Name: crt_math.c_sqrt_FUN_0060710c
// Address: 0060710c
// Address Range: [[0060710c, 00607149]]
// Convention: __fpustack
// Signature: float10 crt_math.c_sqrt_FUN_0060710c(float10 value_to_sqrt, float10 original_value)

#include "nocturne.h"

float10 __fpustack crt_math_c_sqrt_FUN_0060710c(float10 value_to_sqrt,float10 original_value)

{
  float10 fVar1;
  double dVar2;
  
  LOCK();
  UNLOCK();
  if ((float10)0 <= value_to_sqrt) {
    fVar1 = SQRT(value_to_sqrt);
  }
  else {
    dVar2 = crt_math_c_handle_math_error_FUN_0060c02b();
    fVar1 = (float10)dVar2;
  }
  return fVar1;
}
