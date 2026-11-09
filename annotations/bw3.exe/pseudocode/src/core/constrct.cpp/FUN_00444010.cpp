// Name: core_constrct.cpp_FUN_00444010
// Address: 00444010
// Address Range: [[00444010, 00444101]]
// Convention: unknown
// Signature: undefined4 core_constrct_cpp_FUN_00444010(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_constrct_cpp_FUN_00444010(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1040 [1016];
  uint uStack_58;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007f8e64);
  uStack_4c = uStack_1c;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffb4) {
    *param_2 = uStack_4c;
    param_2[1] = uStack_48;
    param_2[2] = uStack_44;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007f8e94);
  uStack_34 = uStack_40;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffffcc) {
    param_2[3] = uStack_34;
    param_2[4] = uStack_30;
    param_2[5] = uStack_2c;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007f8e9c);
  uStack_28 = uStack_58;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 == &stack0xffffffd8) {
    return 3;
  }
  param_2[6] = uStack_28;
  param_2[7] = uStack_24;
  param_2[8] = uStack_20;
  return 3;
}
