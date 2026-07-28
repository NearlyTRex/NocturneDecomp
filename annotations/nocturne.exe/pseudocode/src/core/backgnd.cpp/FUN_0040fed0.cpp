// Name: core_backgnd.cpp_FUN_0040fed0
// Address: 0040fed0
// Address Range: [[0040fed0, 0040ff27]]
// Convention: unknown
// Signature: int * core_backgnd_cpp_FUN_0040fed0(undefined4 param_1)

#include "nocturne.h"

int * core_backgnd_cpp_FUN_0040fed0(uint param_1)

{
  int iVar1;
  CKeyFramedModelInstance *this_ptr;
  
  iVar1 = core_actor_cpp_FUN_00409d30(param_1);
  this_ptr = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                       ((CKeyFramedModelInstance *)(iVar1 + 0x150));
  this_ptr[-1].model_ptr =
       (CKeyFramedModel *)&PTR_core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30_005999a4;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(this_ptr,"candle.kfm");
  this_ptr[1].part_visibility_flags[0] = 0;
  this_ptr[1].part_visibility_flags[1] = 0;
  return this_ptr[-1].part_visibility_flags + 0xb;
}
