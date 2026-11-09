// Name: core_boneguy.cpp_FUN_004193c0
// Address: 004193c0
// Address Range: [[004193c0, 00419542]]
// Convention: unknown
// Signature: undefined4 core_boneguy_cpp_FUN_004193c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint core_boneguy_cpp_FUN_004193c0(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1068 [1014];
  uint uStack_80;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_14;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 0xd0e4) != 0) {
    return 0;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007e1620);
  uStack_44 = uStack_38;
  *(uint *)((int)&stack0xffffffc0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffbc) {
    *param_2 = uStack_44;
    param_2[1] = uStack_40;
    param_2[2] = uStack_3c;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007e1634);
  uStack_74 = uStack_80;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff84 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffff94 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffff8c) {
    param_2[3] = uStack_74;
    param_2[4] = uStack_70;
    param_2[5] = uStack_6c;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007e1638);
  uStack_68 = uStack_14;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 != &stack0xffffff98) {
    param_2[6] = uStack_68;
    param_2[7] = uStack_64;
    param_2[8] = uStack_60;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007e1644);
  uStack_2c = uStack_50;
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffb4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 9 != &stack0xffffffd4) {
    param_2[9] = uStack_2c;
    param_2[10] = uStack_28;
    param_2[0xb] = uStack_24;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,DAT_007e1648);
  uStack_5c = uStack_20;
  *(uint *)((int)&stack0xffffffa8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 0xc != &stack0xffffffa4) {
    param_2[0xc] = uStack_5c;
    param_2[0xd] = uStack_58;
    param_2[0xe] = uStack_54;
  }
  return 5;
}
