// Name: core_charactr.cpp_CCharacter_FUN_0042b810
// Address: 0042b810
// Address Range: [[0042b810, 0042b89e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b810(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b810(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float in_stack_00000010;
  byte auStack_20 [28];
  
  if ((this_ptr->model).part_visibility_flags[in_stack_00000008] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000010);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&this_ptr->model,(CVector3f *)(auStack_20 + 8),(int)in_stack_00000010);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,(CVector3f *)auStack_20,input_local_point);
      core_gore_cpp_FUN_004edaa0();
      return;
    }
  }
  return;
}
