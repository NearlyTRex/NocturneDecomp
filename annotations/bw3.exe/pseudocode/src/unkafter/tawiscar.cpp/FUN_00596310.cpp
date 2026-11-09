// Name: unkafter_tawiscar.cpp_FUN_00596310
// Address: 00596310
// Address Range: [[00596310, 00596375]]
// Convention: unknown
// Signature: undefined4 unkafter_tawiscar_cpp_FUN_00596310(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint unkafter_tawiscar_cpp_FUN_00596310(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint uStack_24;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,*(uint *)(param_1 + 0xd058));
  uStack_18 = uStack_24;
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 == &stack0xffffffe8) {
    return 1;
  }
  *param_2 = uStack_18;
  param_2[1] = uStack_14;
  param_2[2] = uStack_10;
  return 1;
}
