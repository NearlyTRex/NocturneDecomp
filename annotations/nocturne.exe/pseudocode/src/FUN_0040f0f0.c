// Name: FUN_0040f0f0
// Address: 0040f0f0
// Address Range: [[0040f0f0, 0040f11f]]
// Convention: unknown
// Signature: undefined4 FUN_0040f0f0(int param_1)

#include "nocturne.h"

uint FUN_0040f0f0(int param_1)

{
  uint uVar1;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510(param_1 + 0x150);
  uVar1 = core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  *(uint *)(param_1 + 0x340) = 0;
  return uVar1;
}
