// Name: core_batcreat.cpp_FUN_00412990
// Address: 00412990
// Address Range: [[00412990, 004129f7]]
// Convention: unknown
// Signature: undefined4 core_batcreat_cpp_FUN_00412990(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_batcreat_cpp_FUN_00412990(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1010 [1016];
  uint uStack_28;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007bc74c);
  uStack_1c = uStack_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 == &stack0xffffffe4) {
    return 1;
  }
  *param_2 = uStack_1c;
  param_2[1] = uStack_18;
  param_2[2] = uStack_14;
  return 1;
}
