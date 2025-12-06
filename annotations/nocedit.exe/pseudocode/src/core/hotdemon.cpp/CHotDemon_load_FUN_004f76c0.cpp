// Name: core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0
// Address: 004f76c0
// Address Range: [[004f76c0, 004f7710]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0()

#include "nocturne.h"

/* Signature: byte actors_enemy_hotdemon.cpp_CHotDemon_load(CHotDemon* param_1) */

void core_hotdemon_cpp_CHotDemon_load_FUN_004f76c0(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}
