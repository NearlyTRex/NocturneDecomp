// Name: core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_0042b810
// Address: 0042b810
// Address Range: [[0042b810, 0042b89e]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter *this_ptr,int part_index,int bone_index,float chance)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_0042b810(CCharacter *this_ptr,int part_index,int bone_index,float chance)

{
  int iVar1;
  CVector3f *input_local_point;
  CVector3f local_28;
  CVector3f local_1c;
  uint local_10;
  uint local_c;
  uint local_8;
  
  if ((this_ptr->model).part_data.visibility_flags[part_index] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(chance);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&this_ptr->model,&local_1c,bone_index);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&local_28,input_local_point);
      local_10 = 0;
      local_c = 0x40e00000;
      local_8 = 0;
      core_gore_cpp_CGore_FUN_004edaa0(g_CGorePtr);
      return;
    }
  }
  return;
}
