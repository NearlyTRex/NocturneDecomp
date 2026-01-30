// Name: core_biggs.cpp_CBiggs_load_FUN_00418ac0
// Address: 00418ac0
// Address Range: [[00418ac0, 00418b43]]
// Convention: __cdecl
// Signature: void __cdecl core_biggs_cpp_CBiggs_load_FUN_00418ac0(void)

#include "nocturne.h"

/* Signature: void actors_enemy_biggs.cpp_CBiggs_load(CBiggs* param_1, char* param_2) */

void __cdecl core_biggs_cpp_CBiggs_load_FUN_00418ac0(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            (&in_stack_00000004[1].base.model.motion_controller.in_transition,"morphing");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)in_stack_00000004[1].base.model.motion_controller.current_motion_name,
             "morphTimer");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.model.bone_transform.bone_rotations + 0x5b),
             "morphEvent");
  return;
}
