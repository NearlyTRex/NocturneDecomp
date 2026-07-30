// Name: core_health.cpp_FUN_004b41f0
// Address: 004b41f0
// Address Range: [[004b41f0, 004b4247]]
// Convention: unknown
// Signature: int * core_health_cpp_FUN_004b41f0(CDemonActor *param_1)

#include "nocturne.h"

int * core_health_cpp_FUN_004b41f0(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&g_CHealthItemVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"bullet.kfm");
  this_ptr[1].part_visibility_flags[0] = 1;
  this_ptr[1].part_visibility_flags[1] = 0x42480000;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
