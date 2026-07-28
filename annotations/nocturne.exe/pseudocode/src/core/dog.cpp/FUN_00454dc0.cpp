// Name: core_dog.cpp_FUN_00454dc0
// Address: 00454dc0
// Address Range: [[00454dc0, 00454e2c]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_00454dc0(CEnemy *param_1)

#include "nocturne.h"

void core_dog_cpp_FUN_00454dc0(CEnemy *param_1)

{
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80
            (&(param_1->base).model,"modelName");
  if (g_INT_005ae678 < 2) {
    core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->guard_distance,"guardDistance");
  }
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&(param_1->base).model.motion_controller,"motion state");
  return;
}
