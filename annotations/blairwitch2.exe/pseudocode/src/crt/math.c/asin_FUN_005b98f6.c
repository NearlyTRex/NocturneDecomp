// Name: crt_math.c_asin_FUN_005b98f6
// Address: 005b98f6
// Address Range: [[005b98f6, 005b9910]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_asin_FUN_005b98f6(float10 sine_value)

#include "nocturne.h"

float10 __fpustack_safe asin(float10 sine_value)

{
  char cVar1;
  float10 x;
  
  x = (float10)1 - sine_value * sine_value;
  cVar1 = FUN_005bfc46();
  if (cVar1 == '\0') {
    x = atan2(sine_value,x);
  }
  return x;
}
