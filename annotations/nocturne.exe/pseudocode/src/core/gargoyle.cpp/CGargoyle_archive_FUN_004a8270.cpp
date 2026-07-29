// Name: core_gargoyle.cpp_CGargoyle_archive_FUN_004a8270
// Address: 004a8270
// Address Range: [[004a8270, 004a8315]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(CEnemy *param_1)

#include "nocturne.h"

void core_gargoyle_cpp_CGargoyle_archive_FUN_004a8270(CEnemy *param_1)

{
  CDeformableModelInstance *model_ptr;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  model_ptr = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(model_ptr,"modelName");
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&model_ptr->motion_controller,"motion state");
  if (INT_005b9624 < 2) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.base.orient,"stoneRed");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.base.orient.vec.y,"stoneGreen");
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)&param_1[1].base.base.orient.vec.z,"stoneBlue");
  core_actor_cpp_archiveActor_FUN_0040c980
            ((CDemonActor **)&param_1[1].base.base.orient_matrix,"homeBase");
  return;
}
