// Name: core_imp.cpp_FUN_004bc9c0
// Address: 004bc9c0
// Address Range: [[004bc9c0, 004bca07]]
// Convention: unknown
// Signature: void core_imp_cpp_FUN_004bc9c0(CEnemy *param_1)

#include "nocturne.h"

void core_imp_cpp_FUN_004bc9c0(CEnemy *param_1)

{
  CDeformableModelInstance *motion_controller;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  motion_controller = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(motion_controller,"modelName")
  ;
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&motion_controller->motion_controller,"motion state");
  return;
}
