// Name: core_keyactor.cpp_FUN_00501690
// Address: 00501690
// Address Range: [[00501690, 005016e7]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501690()

#include "nocturne.h"

int * core_keyactor_cpp_FUN_00501690(void)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  CDemonActor *in_stack_00000004;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(in_stack_00000004);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_keyactor_cpp_FUN_006604b4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(this_ptr,"key1.kfm");
  this_ptr[1].part_visibility_flags[0] = 1;
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 9;
}
