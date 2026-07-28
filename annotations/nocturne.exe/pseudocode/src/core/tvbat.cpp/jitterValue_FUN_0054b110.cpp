// Name: core_tvbat.cpp_jitterValue_FUN_0054b110
// Address: 0054b110
// Address Range: [[0054b110, 0054b13a]]
// Convention: unknown
// Signature: float core_tvbat_cpp_jitterValue_FUN_0054b110(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

float core_tvbat_cpp_jitterValue_FUN_0054b110(void)

{
  float fVar1;
  float in_stack_00000004;
  
  fVar1 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f666666,0x3f8ccccd);
  return fVar1 * in_stack_00000004;
}
