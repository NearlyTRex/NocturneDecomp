// Name: core_armour.cpp_FUN_0040fb60
// Address: 0040fb60
// Address Range: [[0040fb60, 0040fbbb]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040fb60(CEnemy *param_1)

#include "nocturne.h"

void core_armour_cpp_FUN_0040fb60(CEnemy *param_1)

{
  CDeformableModelInstance *motion_controller;
  
  core_enemy_cpp_CEnemy_archive_FUN_004796c0(param_1);
  core_actor_cpp_archiveFloat_FUN_0040c880(&param_1->speed,"speed");
  motion_controller = &(param_1->base).model;
  core_actor_cpp_archiveDeformableModelInstance_FUN_0040ca80(motion_controller,"modelName")
  ;
  core_actor_cpp_archiveMotionState_FUN_0040cb00
            (&motion_controller->motion_controller,"motion state");
  core_actor_cpp_archiveString_FUN_0040c6d0((char *)(param_1 + 1),"fallApartEvent");
  return;
}
