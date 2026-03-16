// Name: crt_math.c_asin_FUN_00600b94
// Address: 00600b94
// Address Range: [[00600b94, 00600bae]]
// Convention: __fpustack_safe
// Signature: float10 __fpustack_safe crt_math_c_asin_FUN_00600b94(float10 sine_value)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_atan2_FUN_006013b1 */
/* WARNING: Removing unreachable block (ram,0x00600ba7) */

float10 __fpustack_safe asin(float10 sine_value)

{
  double dVar1;
  
  dVar1 = sqrt((double)((float10)1 - sine_value * sine_value));
  return (float10)dVar1;
}
