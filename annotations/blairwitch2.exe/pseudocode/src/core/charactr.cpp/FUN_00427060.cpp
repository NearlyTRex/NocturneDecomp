// Name: core_charactr.cpp_FUN_00427060
// Address: 00427060
// Address Range: [[00427060, 00427123]]
// Convention: unknown
// Signature: void core_charactr_cpp_FUN_00427060(int param_1,int param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void core_charactr_cpp_FUN_00427060(int param_1,int param_2,uint param_3,float param_4)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1040 [1012];
  uint *puVar3;
  uint local_58;
  CVector3f local_4c;
  CVector3f local_40;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  uint auStack_24 [2];
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar2 = 0;
  if (*(int *)(param_1 + 0x23f4 + param_2 * 4) == 0) {
    iVar1 = core_actor_cpp_FUN_0040d060(param_4);
    if (iVar1 != 0) {
      core_skeleton_cpp_FUN_00546a90(param_1 + 0x2b4,param_3);
      puVar3 = &local_28;
      local_28 = local_58;
      auStack_24[(uint)bVar2 * -2] = *(uint *)(&stack0xffffffac + (uint)bVar2 * -8);
      auStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(uint *)(&stack0xffffffb0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
      core_actor_cpp_FUN_00408d70(param_1,puVar3);
      local_10._0_4_ = local_4c._0_4_;
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_4c + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_4c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      local_34 = 0xc0400000;
      local_30 = 0;
      local_2c = 0;
      core_actor_cpp_FUN_00408cf0(param_1,&local_34);
      local_1c._0_4_ = local_40._0_4_;
      *(uint *)((int)&local_1c + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_1c + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_gore_cpp_FUN_004c9730(g_CGorePtr,&local_10,&local_1c,*(EBloodType *)(param_1 + 0x280c));
      return;
    }
  }
  return;
}
