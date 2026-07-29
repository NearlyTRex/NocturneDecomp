// Name: core_spike.cpp_CSpike_setup_FUN_00533160
// Address: 00533160
// Address Range: [[00533160, 0053320f]]
// Convention: unknown
// Signature: void core_spike_cpp_CSpike_setup_FUN_00533160(CDemonActor *param_1)

#include "nocturne.h"

void core_spike_cpp_CSpike_setup_FUN_00533160(CDemonActor *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  float local_2c [3];
  CVector3f local_20;
  CVector3f local_14;
  float local_8;
  
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  local_14.z = param_1[2].orient_matrix.m[0].z * *(float *)(param_1[4].actor_name + 0x14);
  local_14.x = 0.0;
  local_14.y = 0.0;
  local_8 = local_14.z;
  pCVar6 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,&local_20,&local_14);
  fVar2 = (param_1->location).position.y;
  fVar3 = pCVar6->y;
  fVar4 = (param_1->location).position.z;
  pfVar1 = &param_1[2].orient.vec.z;
  fVar5 = pCVar6->z;
  if (pfVar1 == local_2c) {
    param_1[3].create_event[0x18] = '\0';
    param_1[3].create_event[0x19] = '\0';
    param_1[3].create_event[0x1a] = '\0';
    param_1[3].create_event[0x1b] = '\0';
    return;
  }
  *pfVar1 = (param_1->location).position.x - pCVar6->x;
  param_1[2].orient_matrix.m[0].x = fVar2 - fVar3;
  param_1[2].orient_matrix.m[0].y = fVar4 - fVar5;
  param_1[3].create_event[0x18] = '\0';
  param_1[3].create_event[0x19] = '\0';
  param_1[3].create_event[0x1a] = '\0';
  param_1[3].create_event[0x1b] = '\0';
  return;
}
