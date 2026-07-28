// Name: crt_math.c_asin_FUN_00565c76
// Address: 00565c76
// Address Range: [[00565c76, 00565c90]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_asin_FUN_00565c76(float10 sine_value)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00565c89) */

float10 __fpustack_safe asin(float10 sine_value)

{
  double dVar1;
  
  dVar1 = sqrt((double)((float10)1 - sine_value * sine_value));
  return (float10)dVar1;
}
