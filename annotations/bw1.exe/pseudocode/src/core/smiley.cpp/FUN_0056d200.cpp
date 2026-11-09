// Name: core_smiley.cpp_FUN_0056d200
// Address: 0056d200
// Address Range: [[0056d200, 0056d3d5]]
// Convention: unknown
// Signature: undefined4 core_smiley_cpp_FUN_0056d200(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_smiley_cpp_FUN_0056d200(int param_1,uint *param_2)

{
  byte bVar1;
  uint auStackY_1064 [1013];
  uint uStack_7c;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
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
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar1 = 0;
  if (*(int *)(param_1 + 0xc2a8) == 3) {
    return 0;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_02c5fcd8);
  uStack_4c = uStack_64;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffa0 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffa4 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 != &stack0xffffffb4) {
    *param_2 = uStack_4c;
    param_2[1] = uStack_48;
    param_2[2] = uStack_44;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_02c5fcec);
  uStack_28 = uStack_40;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 3 != &stack0xffffffd8) {
    param_2[3] = uStack_28;
    param_2[4] = uStack_24;
    param_2[5] = uStack_20;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_02c5fcf0);
  uStack_70 = uStack_10;
  *(uint *)((int)&stack0xffffff94 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff4 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffff98 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xfffffff8 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 6 != &stack0xffffff90) {
    param_2[6] = uStack_70;
    param_2[7] = uStack_6c;
    param_2[8] = uStack_68;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_02c5fcfc);
  uStack_34 = uStack_7c;
  *(uint *)((int)&stack0xffffffd0 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff88 + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffff8c + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 9 != &stack0xffffffcc) {
    param_2[9] = uStack_34;
    param_2[10] = uStack_30;
    param_2[0xb] = uStack_2c;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_02c5fd04);
  uStack_1c = uStack_58;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_2 + 0xc != &stack0xffffffe4) {
    param_2[0xc] = uStack_1c;
    param_2[0xd] = uStack_18;
    param_2[0xe] = uStack_14;
  }
  return 5;
}
