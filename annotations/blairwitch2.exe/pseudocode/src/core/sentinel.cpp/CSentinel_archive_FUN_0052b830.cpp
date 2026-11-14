// Name: core_sentinel.cpp_CSentinel_archive_FUN_0052b830
// Address: 0052b830
// Address Range: [[0052b830, 0052b888]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_0052b830(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_0052b830(CSentinel *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
