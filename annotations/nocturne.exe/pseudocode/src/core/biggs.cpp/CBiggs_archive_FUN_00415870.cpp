// Name: core_biggs.cpp_CBiggs_archive_FUN_00415870
// Address: 00415870
// Address Range: [[00415870, 004158f3]]
// Convention: unknown
// Signature: void core_biggs_cpp_CBiggs_archive_FUN_00415870(CEnemy *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_biggs_cpp_CBiggs_archive_FUN_00415870(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.model.motion_controller.in_transition,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)param_1[1].base.model.motion_controller.current_motion_name,
             "morphTimer");
  core_actor_cpp_archiveString_FUN_0040c6d0
            ((char *)(param_1[1].base.model.bone_transform.pose_data.bone_rotations + 0x5b),
             "morphEvent");
  return;
}
