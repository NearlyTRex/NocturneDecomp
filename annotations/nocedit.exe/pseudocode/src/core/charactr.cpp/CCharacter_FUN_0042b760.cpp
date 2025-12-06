// Name: core_charactr.cpp_CCharacter_FUN_0042b760
// Address: 0042b760
// Address Range: [[0042b760, 0042b801]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b760(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b760(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float in_stack_00000010;
  byte local_28 [8];
  float fStack_20;
  CVector3f local_10;
  
  if ((this_ptr->model).part_visibility_flags[in_stack_00000008] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000010);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&this_ptr->model,(CVector3f *)(local_28 + 4),(int)in_stack_00000010);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,(CVector3f *)&local_10.z,input_local_point);
      local_28._0_4_ = -3.0;
      local_28._4_4_ = 0.0;
      fStack_20 = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&this_ptr->base_actor,&local_10,(CVector3f *)local_28);
      core_gore_cpp_FUN_004edaa0();
      return;
    }
  }
  return;
}
