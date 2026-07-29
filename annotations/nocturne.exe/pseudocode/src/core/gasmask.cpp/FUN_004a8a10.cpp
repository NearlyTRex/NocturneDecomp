// Name: core_gasmask.cpp_FUN_004a8a10
// Address: 004a8a10
// Address Range: [[004a8a10, 004a8a5d]]
// Convention: unknown
// Signature: int * core_gasmask_cpp_FUN_004a8a10(CDemonActor *param_1)

#include "nocturne.h"

int * core_gasmask_cpp_FUN_004a8a10(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  
  pCVar1 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&g_CGasMaskVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"gasmask.kfm")
  ;
  this_ptr[1].part_visibility_flags[0] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
