// Name: core_cow.cpp_CZombieCow_archive_FUN_0043c2e0
// Address: 0043c2e0
// Address Range: [[0043c2e0, 0043c34c]]
// Convention: __cdecl
// Signature: void __cdecl core_cow_cpp_CZombieCow_archive_FUN_0043c2e0(CZombieCow *this_ptr)

#include "nocturne.h"

void __cdecl core_cow_cpp_CZombieCow_archive_FUN_0043c2e0(CZombieCow *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040c880(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if (g_INT_005ad3ac < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  return;
}
