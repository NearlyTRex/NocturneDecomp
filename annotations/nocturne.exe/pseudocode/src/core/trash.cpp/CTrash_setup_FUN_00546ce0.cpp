// Name: core_trash.cpp_CTrash_setup_FUN_00546ce0
// Address: 00546ce0
// Address Range: [[00546ce0, 00546d9e]]
// Convention: unknown
// Signature: void core_trash_cpp_CTrash_setup_FUN_00546ce0(CDemonActor *param_1)

#include "nocturne.h"

void core_trash_cpp_CTrash_setup_FUN_00546ce0(CDemonActor *param_1)

{
  int iVar1;
  
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0(param_1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00454510
            ((CKeyFramedModelInstance *)(param_1 + 1));
  param_1[2].runtime_state = 0;
  param_1[2].orient_matrix.m[2].z = (float)param_1[2].runtime_state;
  param_1[2].orient_matrix.m[2].y = param_1[2].orient_matrix.m[2].z;
  param_1[2].orient_matrix.m[1].x = 0.0;
  param_1[2].orient_matrix.m[0].z = param_1[2].orient_matrix.m[1].x;
  param_1[2].orient_matrix.m[0].y = param_1[2].orient_matrix.m[0].z;
  param_1[2].orient.vec.z = 0.5;
  param_1[2].orient_matrix.m[0].x = 2.0;
  param_1[2].health = 0x3f800000;
  param_1[2].validation_magic = 0x3f800000;
  iVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40c00000,0x41a00000);
  param_1[2].direction_hint = iVar1;
  param_1[2].create_event[0] = '\0';
  param_1[2].create_event[1] = '\0';
  param_1[2].create_event[2] = '\0';
  param_1[2].create_event[3] = '\0';
  param_1[2].create_prob = *(float *)param_1[2].create_event;
  param_1[2].lifecycle_state = (EActorLifecycleState)param_1[2].create_prob;
  param_1[2].create_event[4] = '\0';
  param_1[2].create_event[5] = '\0';
  param_1[2].create_event[6] = '\0';
  param_1[2].create_event[7] = 'A';
  return;
}
