// Name: core_sentinel.cpp_CSentinel_archive_FUN_00532210
// Address: 00532210
// Address Range: [[00532210, 00532268]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_00532210(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_00532210(CSentinel *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00489120(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
            (&(this_ptr->base).base.model,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b830
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bab0
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
