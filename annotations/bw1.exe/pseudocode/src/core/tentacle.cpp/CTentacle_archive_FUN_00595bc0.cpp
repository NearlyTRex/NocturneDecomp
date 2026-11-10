// Name: core_tentacle.cpp_CTentacle_archive_FUN_00595bc0
// Address: 00595bc0
// Address Range: [[00595bc0, 00595c3c]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00595bc0(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00595bc0(CTentacle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a0520(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b7f0
            (&(this_ptr->base).base.model,"0@modelName" + 2);
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b5f0
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040b870(&model_ptr->base,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040b960(model_ptr,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040b6f0(&this_ptr->grave_actor,"graveActor");
  return;
}
