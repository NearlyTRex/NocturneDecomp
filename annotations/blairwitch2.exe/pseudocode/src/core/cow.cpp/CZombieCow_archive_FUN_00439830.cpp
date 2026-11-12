// Name: core_cow.cpp_CZombieCow_archive_FUN_00439830
// Address: 00439830
// Address Range: [[00439830, 0043989c]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_archive_FUN_00439830(CZombieCow *this_ptr)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_archive_FUN_00439830(CZombieCow *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CZombieCowClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
