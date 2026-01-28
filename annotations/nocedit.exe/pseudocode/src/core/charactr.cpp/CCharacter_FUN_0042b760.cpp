// Name: core_charactr.cpp_CCharacter_FUN_0042b760
// Address: 0042b760
// Address Range: [[0042b760, 0042b801]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_0042b760(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b760(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  int in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000010;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  CVector3f local_10;
  
  if ((this_ptr->model).part_visibility_flags[in_stack_00000008] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000010);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&this_ptr->model,&local_28,in_stack_0000000c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&local_10,input_local_point);
      local_34.x = -3.0;
      local_34.y = 0.0;
      local_34.z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base,&local_1c,&local_34);
      core_gore_cpp_FUN_004edaa0();
      return;
    }
  }
  return;
}
