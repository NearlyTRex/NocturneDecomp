// Name: core_bride.cpp_CBride_load_FUN_00424560
// Address: 00424560
// Address Range: [[00424560, 004245e7]]
// Convention: unknown
// Signature: void core_bride_cpp_CBride_load_FUN_00424560(void)

#include "nocturne.h"

/* Signature: void actors_enemy_bride.cpp_CBride_load(CBride* param_1, char* param_2) */

void core_bride_cpp_CBride_load_FUN_00424560(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  if (g_CBrideClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  }
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if ((1 < g_CBrideClassVersion) && (g_CBrideClassVersion < 4)) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  if (g_CBrideClassVersion < 3) {
    return;
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base).model.motion_controller,"state");
  return;
}
