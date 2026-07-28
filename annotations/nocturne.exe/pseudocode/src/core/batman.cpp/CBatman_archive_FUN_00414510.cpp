// Name: core_batman.cpp_CBatman_archive_FUN_00414510
// Address: 00414510
// Address Range: [[00414510, 004145ca]]
// Convention: unknown
// Signature: void core_batman_cpp_CBatman_archive_FUN_00414510(CEnemy *param_1)

#include "nocturne.h"

void core_batman_cpp_CBatman_archive_FUN_00414510(CEnemy *param_1)

{
  CDeformableModelInstance *motion_controller;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  motion_controller = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(motion_controller,"modelName")
  ;
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&motion_controller->motion_controller,"motion state");
  if (g_INT_005acfbc < 2) {
    if (g_INT_005acfbc < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 1),"fallEvent");
    if (g_INT_005acfbc < 3) {
      return;
    }
  }
  core_actor_cpp_archiveInteger_FUN_0040c900
            ((int *)(param_1[1].base.base.create_event + 0x24),"mistState");
  core_actor_cpp_archiveFloat_FUN_0040c880
            ((float *)(param_1[1].base.base.create_event + 0x28),"vanishTimer");
  core_actor_cpp_archiveVector_FUN_0040c450
            ((CVector3f *)(param_1[1].base.base.create_event + 0x2c),"newPos");
  return;
}
