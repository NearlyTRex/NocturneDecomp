// Name: core_beast.cpp_CBeast_load_FUN_00418330
// Address: 00418330
// Address Range: [[00418330, 00418377]]
// Convention: __cdecl
// Signature: void __cdecl core_beast_cpp_CBeast_load_FUN_00418330(void)

#include "nocturne.h"

/* Signature: void actors_enemy_beast.cpp_CBeast_load(CBeast* param_1, char* param_2) */

void __cdecl core_beast_cpp_CBeast_load_FUN_00418330(void)

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
