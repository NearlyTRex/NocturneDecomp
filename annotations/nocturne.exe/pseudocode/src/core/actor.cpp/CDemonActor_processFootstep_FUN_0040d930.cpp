// Name: core_actor.cpp_CDemonActor_processFootstep_FUN_0040d930
// Address: 0040d930
// Address Range: [[0040d930, 0040d9e7]]
// Convention: unknown
// Signature: int core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int core_actor_cpp_CDemonActor_processFootstep_FUN_0040d930(CDemonActor *param_1,float param_2)

{
  CLocation *position;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  position = &param_1->location;
  fVar1 = (position->position).x - _DAT_01fb860c;
  fVar3 = (param_1->location).position.y - _DAT_01fb8610;
  fVar2 = (param_1->location).position.z - _DAT_01fb8614;
  if (10000.0f < fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1) {
    return 0;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
  core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80(0x01E57284,position,0);
  core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
  iVar4 = (*((param_1->vtable)._ub)->handleFootstep)
                    (param_1,&position->position,
                     *(EGroundType *)(0x01E57284->lights[199].filter_names[0x13] + 8),param_2);
  return iVar4;
}
