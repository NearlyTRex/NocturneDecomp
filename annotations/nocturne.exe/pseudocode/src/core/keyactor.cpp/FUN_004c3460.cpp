// Name: core_keyactor.cpp_FUN_004c3460
// Address: 004c3460
// Address Range: [[004c3460, 004c34b7]]
// Convention: unknown
// Signature: int * core_keyactor_cpp_FUN_004c3460(undefined4 param_1)

#include "nocturne.h"

int * core_keyactor_cpp_FUN_004c3460(uint param_1)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(iVar1 + 0x150));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_keyactor_cpp_FUN_004c34c0_0059f824;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"key1.kfm");
  this_ptr[1].part_visibility_flags[0] = 1;
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
