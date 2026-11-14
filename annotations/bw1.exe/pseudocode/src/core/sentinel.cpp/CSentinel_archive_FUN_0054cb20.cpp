// Name: core_sentinel.cpp_CSentinel_archive_FUN_0054cb20
// Address: 0054cb20
// Address Range: [[0054cb20, 0054cb78]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_0054cb20(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_0054cb20(CSentinel *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b870
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
