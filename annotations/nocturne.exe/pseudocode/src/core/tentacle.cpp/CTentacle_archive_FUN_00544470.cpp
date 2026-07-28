// Name: core_tentacle.cpp_CTentacle_archive_FUN_00544470
// Address: 00544470
// Address Range: [[00544470, 005444ec]]
// Convention: unknown
// Signature: void core_tentacle_cpp_CTentacle_archive_FUN_00544470(CEnemy *param_1)

#include "nocturne.h"

void core_tentacle_cpp_CTentacle_archive_FUN_00544470(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if (INT_005c10b0 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archivePartStatus_FUN_0040cbf0(model_ptr,"partStatus");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[1].base.base.actor_name + 8),"graveActor");
  return;
}
