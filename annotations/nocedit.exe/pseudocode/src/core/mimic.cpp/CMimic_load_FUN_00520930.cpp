// Name: core_mimic.cpp_CMimic_load_FUN_00520930
// Address: 00520930
// Address Range: [[00520930, 005209fe]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_CMimic_load_FUN_00520930()

#include "nocturne.h"

/* Signature: byte actors_enemy_mimic.cpp_CMimic_load(CMimic* param_1) */

void core_mimic_cpp_CMimic_load_FUN_00520930(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.base.unk1,"attackCondition");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[6].base.cloth_data + 0x1b24),"attackMode");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)(in_stack_00000004[6].base.cloth_data + 0x1b28),
             "mirrorPlaneActor");
  if (g_CMimicClassVersion < 2) {
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  else {
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[6].base.cloth_data + 0x1b2c),"morphActorType");
    if (g_CMimicClassVersion < 3) {
      return;
    }
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.base.actor_name + 8),"mirrorCondition");
  return;
}
