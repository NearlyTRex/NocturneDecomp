// Name: unkafter_conveyor.cpp_FUN_00437ee0
// Address: 00437ee0
// Address Range: [[00437ee0, 0043805e]]
// Convention: unknown
// Signature: undefined4 unkafter_conveyor_cpp_FUN_00437ee0(int param_1,undefined4 *param_2)

#include "nocturne.h"

uint unkafter_conveyor_cpp_FUN_00437ee0(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1070 [1016];
  uint uStack_88;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_1c;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007c254c);
  uStack_58 = uStack_70;
  *(uint *)((int)&stack0xffffffac + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff94 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffa8) {
    *param_2 = uStack_58;
    param_2[1] = uStack_54;
    param_2[2] = uStack_50;
  }
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007c2568);
  uStack_40 = uStack_28;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffffc0) {
    param_2[3] = uStack_40;
    param_2[4] = uStack_3c;
    param_2[5] = uStack_38;
  }
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007c256c);
  uStack_34 = uStack_1c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 != &stack0xffffffcc) {
    param_2[6] = uStack_34;
    param_2[7] = uStack_30;
    param_2[8] = uStack_2c;
  }
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007c2578);
  uStack_7c = uStack_4c;
  *(uint *)((int)&stack0xffffff88 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffb8 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 9 != &stack0xffffff84) {
    param_2[9] = uStack_7c;
    param_2[10] = uStack_78;
    param_2[0xb] = uStack_74;
  }
  core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,DAT_007c2580);
  uStack_64 = uStack_88;
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff7c + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff80 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 0xc == &stack0xffffff9c) {
    return 5;
  }
  param_2[0xc] = uStack_64;
  param_2[0xd] = uStack_60;
  param_2[0xe] = uStack_5c;
  return 5;
}
