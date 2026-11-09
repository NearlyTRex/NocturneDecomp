// Name: core_beast.cpp_FUN_00414b90
// Address: 00414b90
// Address Range: [[00414b90, 00414bed]]
// Convention: unknown
// Signature: undefined4 core_beast_cpp_FUN_00414b90(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_beast_cpp_FUN_00414b90(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_100c [1016];
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,0);
  uStack_24 = uStack_18;
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 == &stack0xffffffdc) {
    return 1;
  }
  *param_2 = uStack_24;
  param_2[1] = uStack_20;
  param_2[2] = uStack_1c;
  return 1;
}
