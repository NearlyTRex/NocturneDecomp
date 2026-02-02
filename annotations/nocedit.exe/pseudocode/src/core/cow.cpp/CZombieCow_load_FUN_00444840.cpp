// Name: core_cow.cpp_CZombieCow_load_FUN_00444840
// Address: 00444840
// Address Range: [[00444840, 004448ac]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_load_FUN_00444840(void)

#include "nocturne.h"

/* Signature: void actors_enemy_cow.cpp_CZombieCow_load(CZombieCow* param_1, char* param_2) */

void __cdecl core_cow_cpp_CZombieCow_load_FUN_00444840(void)

{
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_archiveFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(in_stack_00000004->base).model,"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&in_stack_00000004->guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&(in_stack_00000004->base).model.motion_controller,"motion state");
  return;
}
