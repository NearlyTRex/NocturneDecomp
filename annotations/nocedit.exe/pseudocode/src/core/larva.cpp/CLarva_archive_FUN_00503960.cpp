// Name: core_larva.cpp_CLarva_archive_FUN_00503960
// Address: 00503960
// Address Range: [[00503960, 005039cc]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_archive_FUN_00503960(CLarva *this_ptr)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_archive_FUN_00503960(CLarva *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b770(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CLarvaClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&(this_ptr->base).base.model.motion_controller,"motion state");
  return;
}
