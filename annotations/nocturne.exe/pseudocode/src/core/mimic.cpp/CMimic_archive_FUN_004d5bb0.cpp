// Name: core_mimic.cpp_CMimic_archive_FUN_004d5bb0
// Address: 004d5bb0
// Address Range: [[004d5bb0, 004d5c7e]]
// Convention: unknown
// Signature: void core_mimic_cpp_CMimic_archive_FUN_004d5bb0(CEnemy *param_1)

#include "nocturne.h"

void core_mimic_cpp_CMimic_archive_FUN_004d5bb0(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)&param_1[1].base.base.health,"attackCondition");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[5].base.motion_transition_costs[3] + 0xb),"attackMode");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)(param_1[5].base.motion_transition_costs[3] + 0xc),
             "mirrorPlaneActor");
  if (INT_005baf48 < 2) {
    if (INT_005baf48 < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveMotionState_FUN_0040cb00
              (&model_ptr->motion_controller,"motion state");
    core_actor_cpp_archiveString_FUN_0040c6d0
              ((char *)(param_1[5].base.motion_transition_costs[3] + 0xd),"morphActorType")
    ;
    if (INT_005baf48 < 3) {
      return;
    }
  }
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 1),"mirrorCondition");
  return;
}
