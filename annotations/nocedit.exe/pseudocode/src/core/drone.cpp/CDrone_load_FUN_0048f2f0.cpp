// Name: core_drone.cpp_CDrone_load_FUN_0048f2f0
// Address: 0048f2f0
// Address Range: [[0048f2f0, 0048f35c]]
// Convention: __cdecl
// Signature: void __cdecl core_drone_cpp_CDrone_load_FUN_0048f2f0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_drone.cpp_CDrone_load(CDrone* param_1) */

void __cdecl core_drone_cpp_CDrone_load_FUN_0048f2f0(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if (g_CDroneClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base).model.motion_controller,"motion state");
  return;
}
