// Name: core_larva.cpp_CLarva_archive_FUN_004fe450
// Address: 004fe450
// Address Range: [[004fe450, 004fe4bc]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_archive_FUN_004fe450(CLarva *this_ptr)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_archive_FUN_004fe450(CLarva *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&(this_ptr->base).speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CLarvaClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040b870
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
