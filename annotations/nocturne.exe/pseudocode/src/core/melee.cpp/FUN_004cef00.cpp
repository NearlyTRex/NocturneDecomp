// Name: core_melee.cpp_FUN_004cef00
// Address: 004cef00
// Address Range: [[004cef00, 004cef2f]]
// Convention: unknown
// Signature: undefined4 core_melee_cpp_FUN_004cef00(int param_1)

#include "nocturne.h"

uint core_melee_cpp_FUN_004cef00(int param_1)

{
  uint uVar1;
  
  uVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                    (*(uint *)(param_1 + 0x574),*(uint *)(param_1 + 0x578));
  return uVar1;
}
