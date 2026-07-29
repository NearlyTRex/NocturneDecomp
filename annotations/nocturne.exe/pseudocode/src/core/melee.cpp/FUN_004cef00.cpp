// Name: core_melee.cpp_FUN_004cef00
// Address: 004cef00
// Address Range: [[004cef00, 004cef2f]]
// Convention: unknown
// Signature: float core_melee_cpp_FUN_004cef00(int param_1)

#include "nocturne.h"

float core_melee_cpp_FUN_004cef00(int param_1)

{
  float fVar1;
  
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (*(float *)(param_1 + 0x574),*(float *)(param_1 + 0x578));
  return fVar1;
}
