// Name: core_cow.cpp_CZombieCow_archive_FUN_004456b0
// Address: 004456b0
// Address Range: [[004456b0, 0044571c]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_archive_FUN_004456b0(CZombieCow *this_ptr)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_archive_FUN_004456b0(CZombieCow *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b830(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
