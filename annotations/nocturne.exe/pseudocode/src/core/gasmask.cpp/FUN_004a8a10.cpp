// Name: core_gasmask.cpp_FUN_004a8a10
// Address: 004a8a10
// Address Range: [[004a8a10, 004a8a5d]]
// Convention: unknown
// Signature: int * core_gasmask_cpp_FUN_004a8a10(undefined4 param_1)

#include "nocturne.h"

int * core_gasmask_cpp_FUN_004a8a10(uint param_1)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(iVar1 + 0x150));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&PTR_core_gasmask_cpp_FUN_004a8a60_0059e0e4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"gasmask.kfm")
  ;
  this_ptr[1].part_visibility_flags[0] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
