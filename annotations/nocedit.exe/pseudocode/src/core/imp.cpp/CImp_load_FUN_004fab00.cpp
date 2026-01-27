// Name: core_imp.cpp_CImp_load_FUN_004fab00
// Address: 004fab00
// Address Range: [[004fab00, 004fab47]]
// Convention: unknown
// Signature: undefined core_imp.cpp_CImp_load_FUN_004fab00()

#include "nocturne.h"

/* Signature: byte actors_enemy_imp.cpp_CImp_load(CImp* param_1) */

void core_imp_cpp_CImp_load_FUN_004fab00(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}
