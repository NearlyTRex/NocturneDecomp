// Name: core_flamecan.cpp_FUN_004cb340
// Address: 004cb340
// Address Range: [[004cb340, 004cb38f]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb340()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004cb340(uint param_1) */

void core_flamecan_cpp_FUN_004cb340(void)

{
  int iVar1;
  int in_stack_00000004;
  
  *(uint *)(in_stack_00000004 + 0x2d4) = 1;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 1;
    core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
  } while (iVar1 < 5);
  *(uint *)(in_stack_00000004 + 0x4f4) = 1;
  return;
}
