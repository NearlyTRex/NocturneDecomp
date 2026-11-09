// Name: unkafter_zombiepr.cpp_FUN_0058fb20
// Address: 0058fb20
// Address Range: [[0058fb20, 0058fc57]]
// Convention: unknown
// Signature: int unkafter_zombiepr_cpp_FUN_0058fb20(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int unkafter_zombiepr_cpp_FUN_0058fb20(int param_1,uint *param_2)

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
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_02d24970);
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
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd100) * 4) != 0) {
    core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_02d24994);
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
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xd104) * 4) == 0) {
    return iVar1;
  }
  core_skeleton_cpp_FUN_0054dcc0(param_1 + 0x158,_DAT_02d2499c);
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
