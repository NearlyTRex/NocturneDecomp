// Name: core_backgnd.cpp_CBackgroundActor_setup_FUN_0040ff30
// Address: 0040ff30
// Address Range: [[0040ff30, 0040ff6f]]
// Convention: unknown
// Signature: undefined8 core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(int param_1)

#include "nocturne.h"

ulonglong core_backgnd_cpp_CBackgroundActor_setup_FUN_0040ff30(int param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  uVar1 = (uint)(*(int *)(param_1 + 0x2cc) == 0);
  *(uint *)(param_1 + 0x100) = uVar1;
  return CONCAT44(*(int *)(param_1 + 0x2cc),uVar1);
}
