// Name: core_hino.cpp_FUN_0059d410
// Address: 0059d410
// Address Range: [[0059d410, 0059d502]]
// Convention: unknown
// Signature: undefined4 core_hino_cpp_FUN_0059d410(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_hino_cpp_FUN_0059d410(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1040 [1016];
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_02d24c4c);
  uStack_28 = uStack_1c;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffd8) {
    *param_2 = uStack_28;
    param_2[1] = uStack_24;
    param_2[2] = uStack_20;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_02d24c70);
  uStack_40 = uStack_4c;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffffc0) {
    param_2[3] = uStack_40;
    param_2[4] = uStack_3c;
    param_2[5] = uStack_38;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_02d24c78);
  uStack_58 = uStack_34;
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 == &stack0xffffffa8) {
    return 3;
  }
  param_2[6] = uStack_58;
  param_2[7] = uStack_54;
  param_2[8] = uStack_50;
  return 3;
}
