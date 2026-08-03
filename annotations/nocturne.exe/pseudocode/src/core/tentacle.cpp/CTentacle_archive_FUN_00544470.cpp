// Name: core_tentacle.cpp_CTentacle_archive_FUN_00544470
// Address: 00544470
// Address Range: [[00544470, 005444ec]]
// Convention: __cdecl
// Signature: void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00544470(CTentacle *this_ptr)

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_archive_FUN_00544470(CTentacle *this_ptr)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(&this_ptr->base);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(this_ptr->base).base.model,"modelName");
  if (INT_005c10b0 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880
              (&(this_ptr->base).guard_distance,"guardDistance");
  }
  model_ptr = &(this_ptr->base).base.model;
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(model_ptr,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040c980(&this_ptr->grave_actor,"graveActor");
  return;
}
