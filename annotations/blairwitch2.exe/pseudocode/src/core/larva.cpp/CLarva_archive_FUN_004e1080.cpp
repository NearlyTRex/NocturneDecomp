// Name: core_larva.cpp_CLarva_archive_FUN_004e1080
// Address: 004e1080
// Address Range: [[004e1080, 004e10ec]]
// Convention: __cdecl
// Signature: void __cdecl core_larva_cpp_CLarva_archive_FUN_004e1080(CLarva *this_ptr)

#include "nocturne.h"

void __cdecl core_larva_cpp_CLarva_archive_FUN_004e1080(CLarva *this_ptr)

{
  core_enemy_cpp_CEnemy_archive_FUN_00487ec0(&this_ptr->base);
  core_actor_cpp_archiveFloat_FUN_0040b8e0(&(this_ptr->base).speed,"?speed" + 1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040bae0
            (&(this_ptr->base).base.model,"modelName");
  if (g_CLarvaClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b8e0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040bb60
            (&(this_ptr->base).base.model.base,"motion state");
  return;
}
