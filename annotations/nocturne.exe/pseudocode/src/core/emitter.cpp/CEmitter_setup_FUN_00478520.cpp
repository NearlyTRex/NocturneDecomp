// Name: core_emitter.cpp_CEmitter_setup_FUN_00478520
// Address: 00478520
// Address Range: [[00478520, 00478594]]
// Convention: unknown
// Signature: void core_emitter_cpp_CEmitter_setup_FUN_00478520(CDemonActor *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_emitter_cpp_CEmitter_setup_FUN_00478520(CDemonActor *param_1)

{
  int iVar1;
  uint uVar2;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  iVar1 = *(int *)param_1[1].actor_name;
  param_1[3].orient_matrix.m[1].z = (float)param_1[1].standing_platform;
  if (iVar1 == 4) {
    core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
              ((CKeyFramedModelInstance *)&param_1[1].platform_orientation_delta.y);
  }
  if (param_1[2].previous_transform_state.position.x == 0.0) {
    param_1[2].previous_transform_state.position.x = *(float *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
  }
  param_1[3].orient_matrix.m[0].y = 0.0;
  uVar2 = *(uint *)(param_1[1].actor_name + 0x10);
  param_1[3].create_event[0x1c] = '\0';
  param_1[3].create_event[0x1d] = '\0';
  param_1[3].create_event[0x1e] = '\0';
  param_1[3].create_event[0x1f] = '\0';
  *(uint *)(param_1[3].create_event + 0x20) = uVar2;
  return;
}
