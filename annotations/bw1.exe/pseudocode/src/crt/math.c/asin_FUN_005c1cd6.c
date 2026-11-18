// Name: crt_math.c_asin_FUN_005c1cd6
// Address: 005c1cd6
// Address Range: [[005c1cd6, 005c1cf0]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_asin_FUN_005c1cd6(float10 sine_value)

#include "nocturne.h"

float10 __fpustack_safe asin(float10 sine_value)

{
  char cVar1;
  float10 x;
  
  x = (float10)1 - sine_value * sine_value;
  cVar1 = FUN_005c7f06();
  if (cVar1 == '\0') {
    x = atan2(sine_value,x);
  }
  return x;
}
