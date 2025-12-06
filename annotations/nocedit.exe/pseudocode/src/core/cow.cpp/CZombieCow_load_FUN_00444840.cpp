// Name: core_cow.cpp_CZombieCow_load_FUN_00444840
// Address: 00444840
// Address Range: [[00444840, 004448ac]]
// Convention: unknown
// Signature: undefined core_cow.cpp_CZombieCow_load_FUN_00444840()

#include "nocturne.h"

/* Signature: void actors_enemy_cow.cpp_CZombieCow_load(CZombieCow* param_1, char* param_2) */

void core_cow_cpp_CZombieCow_load_FUN_00444840(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base_character).model,"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_serializeFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base_character).model.motion_controller,"motion state");
  return;
}
