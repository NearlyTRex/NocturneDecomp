// Name: core_crate.cpp_FUN_0043c810
// Address: 0043c810
// Address Range: [[0043c810, 0043c867]]
// Convention: unknown
// Signature: int * core_crate_cpp_FUN_0043c810(CDemonActor *param_1)

#include "nocturne.h"

int * core_crate_cpp_FUN_0043c810(CDemonActor *param_1)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *this_ptr;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(pCVar1 + 1));
  this_ptr[-1].model_ptr = (CKeyFramedModel *)&g_CCrateVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            (this_ptr,"question.kfm");
  this_ptr[1].part_visibility_flags[2] = 0;
  this_ptr[1].part_visibility_flags[0] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
