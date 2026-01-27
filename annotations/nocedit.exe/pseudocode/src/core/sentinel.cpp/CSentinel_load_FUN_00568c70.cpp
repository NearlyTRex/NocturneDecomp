// Name: core_sentinel.cpp_CSentinel_load_FUN_00568c70
// Address: 00568c70
// Address Range: [[00568c70, 00568cc8]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_CSentinel_load_FUN_00568c70()

#include "nocturne.h"

/* Signature: byte actors_enemy_sentinel.cpp_CSentinel_load(CSentinel* param_1) */

void core_sentinel_cpp_CSentinel_load_FUN_00568c70(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base).model.motion_controller,"motion state");
  return;
}
