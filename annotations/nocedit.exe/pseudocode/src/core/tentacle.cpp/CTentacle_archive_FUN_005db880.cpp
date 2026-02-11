// Name: core_tentacle.cpp_CTentacle_archive_FUN_005db880
// Address: 005db880
// Address Range: [[005db880, 005db8fc]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_005db880(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_005db880(CTentacle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004a9660(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040b970
            (&(this_ptr->base).base.model,"modelName");
  if (g_CTentacleClassVersion < 2) {
    core_actor_cpp_archiveFloat_FUN_0040b770
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040bae0(model_ptr,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040b870
            ((CDemonActor *)&this_ptr->grave_actor,"graveActor");
  return;
}
