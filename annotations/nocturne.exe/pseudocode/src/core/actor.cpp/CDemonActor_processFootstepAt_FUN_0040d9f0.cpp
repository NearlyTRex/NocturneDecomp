// Name: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0
// Address: 0040d9f0
// Address Range: [[0040d9f0, 0040db08]]
// Convention: unknown
// Signature: undefined4 core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(int param_1,uint param_2,uint param_3)

{
  uint uVar1;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_8;
  
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_34,param_2);
  local_28 = _DAT_01fb860c;
  local_24 = _DAT_01fb8610;
  local_20 = _DAT_01fb8614;
  if (_DAT_00578015 <
      (local_2c - _DAT_01fb8614) * (local_2c - _DAT_01fb8614) +
      (local_30 - _DAT_01fb8610) * (local_30 - _DAT_01fb8610) +
      (local_34 - _DAT_01fb860c) * (local_34 - _DAT_01fb860c)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  local_1c = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (0x01E57284,&local_34,0);
  uVar1 = *(uint *)(0x01E57284 + 0x14cd4c);
  local_8 = local_1c;
  local_18 = (float)core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                              (0x01E57284,param_1 + 0x20,0);
  local_8 = local_18;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  if (local_1c < local_18 + (float)_DAT_00578019) {
    uVar1 = *(uint *)(0x01E57284 + 0x14cd4c);
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x20))(param_1,&local_34,uVar1,param_3);
  return uVar1;
}
