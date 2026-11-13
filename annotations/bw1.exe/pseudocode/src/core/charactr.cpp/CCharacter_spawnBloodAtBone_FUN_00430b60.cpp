// Name: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
// Address: 00430b60
// Address Range: [[00430b60, 00430c06]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60(CCharacter *this_ptr,int part_index,int bone_index,float chance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60(CCharacter *this_ptr,int part_index,int bone_index,float chance)

{
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1012];
  float *pfVar3;
  CVector3f local_40;
  CVector3f local_34;
  float local_28;
  float afStack_24 [2];
  CVector3f local_1c;
  float local_10;
  uint auStack_c [2];
  
  bVar2 = 0;
  if ((this_ptr->model).part_data.visibility_flags[part_index] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd00(chance);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00569130
                (&this_ptr->model,bone_index,&local_34);
      pfVar3 = &local_10;
      local_10 = local_34.x;
      auStack_c[(uint)bVar2 * -2] = *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4);
      auStack_c[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
           *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar3);
      local_40.x = local_28;
      *(float *)((int)&local_40 + (uint)bVar2 * -8 + 4) = afStack_24[(uint)bVar2 * -2];
      *(float *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           afStack_24[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
      local_1c.x = 0.0;
      local_1c.y = 7.0;
      local_1c.z = 0.0;
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004e5f40
                (g_CGorePtr,&local_40,&local_1c,this_ptr->blood_type);
      return;
    }
  }
  return;
}
