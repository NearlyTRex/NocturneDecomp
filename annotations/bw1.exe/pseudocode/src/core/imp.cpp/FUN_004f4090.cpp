// Name: core_imp.cpp_FUN_004f4090
// Address: 004f4090
// Address Range: [[004f4090, 004f42ae]]
// Convention: unknown
// Signature: int core_imp_cpp_FUN_004f4090(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_imp_cpp_FUN_004f4090(int param_1,uint *param_2)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint auStackY_1070 [1016];
  uint uStack_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_70;
  uint uStack_64;
  uint uStack_58;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  
  bVar3 = 0;
  iVar2 = 0;
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc29c) * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01d06cf8);
    uStack_4c = uStack_70;
    *(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff94 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff98 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&stack0xffffffb4 != param_2) {
      *param_2 = uStack_4c;
      param_2[1] = uStack_48;
      param_2[2] = uStack_44;
    }
    iVar2 = 1;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc274) * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01d06d0c);
    puVar1 = param_2 + iVar2 * 3;
    uStack_88 = uStack_34;
    *(uint *)((int)&stack0xffffff7c + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffff80 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (puVar1 != &stack0xffffff78) {
      *puVar1 = uStack_88;
      puVar1[1] = uStack_84;
      puVar1[2] = uStack_80;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc27c) * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01d06d10);
    puVar1 = param_2 + iVar2 * 3;
    uStack_1c = uStack_7c;
    *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff88 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffff8c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (puVar1 != &stack0xffffffe4) {
      *puVar1 = uStack_1c;
      puVar1[1] = uStack_18;
      puVar1[2] = uStack_14;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc294) * 4) != 0) {
    core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01d06d1c);
    puVar1 = param_2 + iVar2 * 3;
    uStack_28 = uStack_64;
    *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa0 + (uint)bVar3 * -8);
    *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
         *(uint *)(&stack0xffffffa4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (puVar1 != &stack0xffffffd8) {
      *puVar1 = uStack_28;
      puVar1[1] = uStack_24;
      puVar1[2] = uStack_20;
    }
    iVar2 = iVar2 + 1;
  }
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc298) * 4) == 0) {
    return iVar2;
  }
  core_skeleton_cpp_FUN_00569130(param_1 + 0x158,_DAT_01d06d24);
  param_2 = param_2 + iVar2 * 3;
  uStack_40 = uStack_58;
  *(uint *)((int)&stack0xffffffc4 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffac + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (param_2 != &stack0xffffffc0) {
    *param_2 = uStack_40;
    param_2[1] = uStack_3c;
    param_2[2] = uStack_38;
  }
  return iVar2 + 1;
}
