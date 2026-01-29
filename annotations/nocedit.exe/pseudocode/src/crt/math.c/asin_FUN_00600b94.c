// Name: crt_math.c_asin_FUN_00600b94
// Address: 00600b94
// Address Range: [[00600b94, 00600bae]]
// Convention: __fpustack
// Signature: float10 __fpustack crt_math_c_asin_FUN_00600b94(float10 sine_value)

#include "nocturne.h"

float10 __fpustack asin(float10 sine_value)

{
  char extraout_AL;
  float10 x;
  double dVar1;
  
  dVar1 = sqrt((double)((float10)1 - sine_value * sine_value));
  x = (float10)dVar1;
  if (extraout_AL == '\0') {
    x = atan2(sine_value,x);
  }
  return x;
}
