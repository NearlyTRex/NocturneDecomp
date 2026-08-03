// Name: core_sentinel.cpp_CSentinel_archive_FUN_005067e0
// Address: 005067e0
// Address Range: [[005067e0, 00506838]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_005067e0(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_005067e0(CSentinel *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if (INT_005be310 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  return;
}
