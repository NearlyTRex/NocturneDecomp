// Name: crt_math.c_asin_FUN_00600b94
// Address: 00600b94
// Address Range: [[00600b94, 00600bae]]
// Convention: __fpustack
// Signature: float10 crt_math.c_asin_FUN_00600b94(float10 sine_value)

#include "nocturne.h"

float10 __fpustack crt_math_c_asin_FUN_00600b94(float10 sine_value)

{
  char extraout_AL;
  float10 x;
  float10 y;
  
  x = crt_math_c_sqrt_FUN_0060710c((float10)1 - sine_value * sine_value,sine_value);
  if (extraout_AL == '\0') {
    x = crt_math_c_atan2_FUN_006013b1(y,x);
  }
  return x;
}
