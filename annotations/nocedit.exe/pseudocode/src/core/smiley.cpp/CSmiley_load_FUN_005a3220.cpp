// Name: core_smiley.cpp_CSmiley_load_FUN_005a3220
// Address: 005a3220
// Address Range: [[005a3220, 005a327b]]
// Convention: __cdecl
// Signature: void __cdecl core_smiley_cpp_CSmiley_load_FUN_005a3220(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_smiley.cpp_CSmiley_load(CSmiley* param_1) */

void __cdecl core_smiley_cpp_CSmiley_load_FUN_005a3220(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].base.base.actor_name + 0xc),"guardDistance");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}
