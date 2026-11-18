// Name: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90
// Address: 0042fe90
// Address Range: [[0042fe90, 0042ff36]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90(CCharacter *this_ptr,int part_index,int bone_index,float chance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042fe90(CCharacter *this_ptr,int part_index,int bone_index,float chance)

{
  int iVar1;
  byte bVar2;
  float afStackY_1028 [1012];
  CVector3f *input_local_point;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  bVar2 = 0;
  if ((this_ptr->model).part_data.visibility_flags[part_index] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cf40(chance);
    if (iVar1 != 0) {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_0054dcc0
                (&this_ptr->model,bone_index,&local_34);
      input_local_point = &local_10;
      local_10.x = local_34.x;
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_34 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_10 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_34 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                (&this_ptr->base,input_local_point,&local_28);
      local_40.x = local_28.x;
      *(uint *)((int)&local_40 + (uint)bVar2 * -8 + 4) =
           *(uint *)((int)&local_28 + (uint)bVar2 * -8 + 4);
      *(uint *)((int)&local_40 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
           *(uint *)((int)&local_28 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8);
      local_1c.x = 0.0;
      local_1c.y = 7.0;
      local_1c.z = 0.0;
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004ce8a0
                (g_CGorePtr,&local_40,&local_1c,this_ptr->blood_type);
      return;
    }
  }
  return;
}
