// Name: core_keyactor.cpp_FUN_004c3460
// Address: 004c3460
// Address Range: [[004c3460, 004c34b7]]
// Convention: unknown
// Signature: int * core_keyactor_cpp_FUN_004c3460(CDemonActor *param_1)

#include "nocturne.h"

int * core_keyactor_cpp_FUN_004c3460(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&g_CKeyActorVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"key1.kfm");
  this_ptr[1].part_visibility_flags[0] = 1;
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
