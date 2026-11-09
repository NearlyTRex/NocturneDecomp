// Name: core_charactr.cpp_FUN_00430b60
// Address: 00430b60
// Address Range: [[00430b60, 00430c06]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00430b60(CCharacter *this_ptr,int part_index,int bone_index,float chance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_FUN_00430b60(CCharacter *this_ptr,int part_index,int bone_index,float chance)

{
  int iVar1;
  byte bVar2;
  uint auStackY_1028 [1012];
  uint *puVar3;
  CVector3f local_40;
  uint local_34;
  uint auStack_30 [2];
  CVector3f local_28;
  CVector3f local_1c;
  uint local_10;
  uint auStack_c [2];
  
  bVar2 = 0;
  if (*(int *)(&this_ptr->field_0x2298 + part_index * 4) == 0) {
    iVar1 = core_actor_cpp_FUN_0040cd00(chance);
    if (iVar1 != 0) {
      core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,bone_index);
      puVar3 = &local_10;
      local_10 = local_34;
      auStack_c[(uint)bVar2 * -2] = auStack_30[(uint)bVar2 * -2];
      auStack_c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           auStack_30[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar3);
      local_40._0_4_ = local_28._0_4_;
      *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      local_1c._0_4_ = 0;
      local_1c._4_4_ = 0x40e00000;
      local_1c._8_4_ = 0;
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
                (g_CGorePtr,&local_40,&local_1c,*(EBloodType *)&this_ptr->field_0x27a0);
      return;
    }
  }
  return;
}
