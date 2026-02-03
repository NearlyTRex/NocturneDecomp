// Name: core_sentinel.cpp_CSentinel_archive_FUN_00568c70
// Address: 00568c70
// Address Range: [[00568c70, 00568cc8]]
// Convention: __cdecl
// Signature: void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_00568c70(CSentinel *this_ptr)

#include "nocturne.h"

void __cdecl core_sentinel_cpp_CSentinel_archive_FUN_00568c70(CSentinel *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CSentinelClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  return;
}
