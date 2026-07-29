// Name: core_actor.cpp_CDemonActor_processFootstepAt_FUN_0040d9f0
// Address: 0040d9f0
// Address Range: [[0040d9f0, 0040db08]]
// Convention: unknown
// Signature: int core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *param_1,CVector3f *param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_actor_cpp_CDemonActor_processFootstepAt_FUN_0040d9f0(CDemonActor *param_1,CVector3f *param_2,float param_3)

{
  int iVar1;
  EGroundType ground_type;
  CVector3f local_34;
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
  if (10000.0f <
      (local_34.z - _DAT_01fb8614) * (local_34.z - _DAT_01fb8614) +
      (local_34.y - _DAT_01fb8610) * (local_34.y - _DAT_01fb8610) +
      (local_34.x - _DAT_01fb860c) * (local_34.x - _DAT_01fb860c)) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  local_1c = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                       (0x01E57284,&local_34,0.0);
  ground_type = *(EGroundType *)(0x01E57284->lights[199].filter_names[0x13] + 8);
  local_8 = local_1c;
  local_18 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                       (0x01E57284,&(param_1->location).position,0.0);
  local_8 = local_18;
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  if (local_1c < local_18 + (float)-1) {
    ground_type = *(EGroundType *)(0x01E57284->lights[199].filter_names[0x13] + 8);
  }
  iVar1 = (*((param_1->vtable)._ub)->handleFootstep)(param_1,&local_34,ground_type,param_3);
  return iVar1;
}
