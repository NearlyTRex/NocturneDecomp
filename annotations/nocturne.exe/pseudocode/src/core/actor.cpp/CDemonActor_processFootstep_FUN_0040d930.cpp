// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040d930
// Address: 0040d930
// Address Range: [[0040d930, 0040d9e7]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(int param_1,uint param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  pfVar1 = (float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_1 + 0x24) - _DAT_01fb8610;
  fVar2 = *(float *)(param_1 + 0x28) - _DAT_01fb8614;
  if (10000.0f <
      fVar2 * fVar2 + fVar3 * fVar3 + (*pfVar1 - _DAT_01fb860c) * (*pfVar1 - _DAT_01fb860c)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(0x01E57284,pfVar1,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x20))
                    (param_1,pfVar1,*(uint *)(0x01E57284 + 0x14cd4c),param_2);
  return uVar4;
}
