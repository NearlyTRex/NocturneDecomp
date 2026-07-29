// Name: core_smiley.cpp_CSmiley_archive_FUN_00520ae0
// Address: 00520ae0
// Address Range: [[00520ae0, 00520b3b]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_archive_FUN_00520ae0(CEnemy *param_1)

#include "nocturne.h"

void core_smiley_cpp_CSmiley_archive_FUN_00520ae0(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].base.base.actor_name + 4),"guardDistance");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  return;
}
