// Name: core_sentinel.cpp_CSentinel_archive_FUN_005067e0
// Address: 005067e0
// Address Range: [[005067e0, 00506838]]
// Convention: unknown
// Signature: void core_sentinel_cpp_CSentinel_archive_FUN_005067e0(CEnemy *param_1)

#include "nocturne.h"

void core_sentinel_cpp_CSentinel_archive_FUN_005067e0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if (INT_005be310 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(param_1->base).model.motion_controller,"motion state");
  return;
}
