// Name: core_fire.cpp_FUN_004ac690
// Address: 004ac690
// Address Range: [[004ac690, 004ac6e6]]
// Convention: unknown
// Signature: void core_fire_cpp_FUN_004ac690(undefined4 *param_1)

#include "nocturne.h"

void core_fire_cpp_FUN_004ac690(uint *param_1)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint local_24;
  uint local_18;
  uint local_14;
  uint local_10;
  
  bVar1 = 0;
  if (param_1[4] != 0) {
    core_actor_cpp_FUN_00408b40(param_1[4],param_1 + 9);
    local_18 = local_24;
    *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
    *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
         *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
    if (param_1 != &stack0xffffffe8) {
      *param_1 = local_18;
      param_1[1] = local_14;
      param_1[2] = local_10;
      return;
    }
  }
  return;
}
