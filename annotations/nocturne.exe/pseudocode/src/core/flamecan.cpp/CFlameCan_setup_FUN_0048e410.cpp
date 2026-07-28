// Name: core_flamecan.cpp_CFlameCan_setup_FUN_0048e410
// Address: 0048e410
// Address Range: [[0048e410, 0048e54c]]
// Convention: unknown
// Signature: void core_flamecan_cpp_CFlameCan_setup_FUN_0048e410(CDemonActor *param_1)

#include "nocturne.h"

void core_flamecan_cpp_CFlameCan_setup_FUN_0048e410(CDemonActor *param_1)

{
  float fVar1;
  float fVar2;
  CDemonActor_vtable *pCVar3;
  CBoundingBox3D local_38;
  float afStack_20 [6];
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  pCVar3 = (param_1->vtable)._ub;
  param_1[3].platform_orientation_delta.z = 0.0;
  (*pCVar3->getBoundingBox)(param_1,&local_38);
  *(float *)(param_1[2].create_event + 0x40) = (param_1->location).position.x;
  *(float *)(param_1[2].create_event + 0x44) = (param_1->location).position.y;
  *(float *)(param_1[2].create_event + 0x48) = (param_1->location).position.z;
  *(int *)(param_1[2].create_event + 0x4c) = (param_1->location).area_id;
  *(float *)(param_1[2].create_event + 0x44) =
       (local_38.max.y - local_38.min.y) + *(float *)(param_1[2].create_event + 0x44);
  if ((float *)(param_1[3].create_event + 0x20) != afStack_20) {
    *(float *)(param_1[3].create_event + 0x20) = local_38.max.x - local_38.min.x;
    *(float *)(param_1[3].create_event + 0x24) = local_38.max.y - local_38.min.y;
    *(float *)(param_1[3].create_event + 0x28) = local_38.max.z - local_38.min.z;
  }
  fVar1 = *(float *)(param_1[3].create_event + 0x20);
  param_1[3].platform_position_delta.z = 0.0;
  fVar1 = fVar1 * (float)2;
  fVar2 = *(float *)(param_1[3].create_event + 0x24);
  param_1[3].platform_orientation_delta.x = 0.0;
  if (fVar2 < fVar1) {
    *(float *)(param_1[3].create_event + 0x24) = fVar1;
  }
  param_1[4].create_event[0x1c] = '\0';
  param_1[4].create_event[0x1d] = '\0';
  param_1[4].create_event[0x1e] = '\0';
  param_1[4].create_event[0x1f] = '\0';
  param_1->is_transparent = 1;
  return;
}
