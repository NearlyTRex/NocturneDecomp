// Name: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427990
// Address: 00427990
// Address Range: [[00427990, 00427a1e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(CCharacter *this_ptr,int part_index,int bone_index,float chance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(CCharacter *this_ptr,int part_index,int bone_index,float chance)

{
  int iVar1;
  CVector3f *input_local_point;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if ((this_ptr->model).part_data.visibility_flags[part_index] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040dea0(chance);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                     (&this_ptr->model,&local_1c,bone_index);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (&this_ptr->base,&local_28,input_local_point);
      local_10.x = 0.0;
      local_10.y = 7.0;
      local_10.z = 0.0;
      core_gore_cpp_CGore_spawnBloodParticles_FUN_004b00f0
                (g_CGore_PTR_005b96c4,&local_28,&local_10,this_ptr->blood_type);
      return;
    }
  }
  return;
}
