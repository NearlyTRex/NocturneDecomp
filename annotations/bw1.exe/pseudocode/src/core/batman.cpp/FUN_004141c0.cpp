// Name: core_batman.cpp_FUN_004141c0
// Address: 004141c0
// Address Range: [[004141c0, 004142f7]]
// Convention: unknown
// Signature: int core_batman_cpp_FUN_004141c0(int param_1,undefined4 *param_2)

#include "nocturne.h"

int core_batman_cpp_FUN_004141c0(int param_1,uint *param_2)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1040 [1016];
  uint uStack_58;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar2 = 0;
  iVar1 = 1;
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,DAT_007c37b8);
  uStack_4c = uStack_34;
  *(uint *)((int)&stack0xffffffb8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffd4 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (&stack0xffffffb4 != param_2) {
    *param_2 = uStack_4c;
    param_2[1] = uStack_48;
    param_2[2] = uStack_44;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2e8) * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(param_1 + 0x158,DAT_007c37dc);
    uStack_1c = uStack_58;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffac + (uint)bVar2 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    if (param_2 + 3 != &stack0xffffffe4) {
      param_2[3] = uStack_1c;
      param_2[4] = uStack_18;
      param_2[5] = uStack_14;
    }
    iVar1 = 2;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2d4) * 4) == 0) {
    return iVar1;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,DAT_007c37e4);
  param_2 = param_2 + iVar1 * 3;
  uStack_28 = uStack_40;
  *(uint *)((int)&stack0xffffffdc + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc4 + (uint)bVar2 * -8);
  *(uint *)((int)&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(uint *)(&stack0xffffffc8 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
  if (param_2 != &stack0xffffffd8) {
    *param_2 = uStack_28;
    param_2[1] = uStack_24;
    param_2[2] = uStack_20;
  }
  return iVar1 + 1;
}
