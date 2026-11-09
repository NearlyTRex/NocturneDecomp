// Name: core_melee.cpp_FUN_004eab50
// Address: 004eab50
// Address Range: [[004eab50, 004eab7f]]
// Convention: unknown
// Signature: undefined4 core_melee_cpp_FUN_004eab50(int param_1)

#include "nocturne.h"

uint core_melee_cpp_FUN_004eab50(int param_1)

{
  uint uVar1;
  
  uVar1 = core_actor_cpp_FUN_0040cf60
                    (*(uint *)(param_1 + 0x6d8),*(uint *)(param_1 + 0x6dc));
  return uVar1;
}
