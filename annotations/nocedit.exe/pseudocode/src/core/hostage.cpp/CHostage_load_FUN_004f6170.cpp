// Name: core_hostage.cpp_CHostage_load_FUN_004f6170
// Address: 004f6170
// Address Range: [[004f6170, 004f638c]]
// Convention: __cdecl
// Signature: void __cdecl core_hostage_cpp_CHostage_load_FUN_004f6170(void)

#include "nocturne.h"

/* Signature: byte actors_npc_hostage.cpp_CHostage_load(CHostage* param_1) */

void __cdecl core_hostage_cpp_CHostage_load_FUN_004f6170(void)

{
  CDeformableModelInstance *model_ptr;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base.model.transformed_vertices[0x2a].y,
             "followState");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base.model.transformed_vertices + 0x2b),
             "hostageState");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[1].base.model.transformed_vertices[0x2b].y,
             "goalWayPoint");
  if (g_CHostageClassVersion < 10) {
    model_ptr = &(in_stack_00000004->base).model;
    core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  core_actor_cpp_serializePartStatus_FUN_0040bae0
            (&(in_stack_00000004->base).model,"partStatus");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004 + 1),"rescueDistance");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base.base.actor_name + 4),"rescueCondition");
  if ((1 < g_CHostageClassVersion) && (g_CHostageClassVersion < 5)) {
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&(in_stack_00000004->base).cloth_count,"clothList");
  }
  if (2 < g_CHostageClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base.base.validation_magic,"rescueEvent");
  }
  if (3 < g_CHostageClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base.base.create_event + 0x10),
               "heroFoundMeEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base.base.unk4,"heroLeftMeEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base.base.unk15,"heroCameBackEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base.model.transformed_vertices[8].z,
               "goingToSitDownEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base.model.transformed_vertices + 0x11),
               "sitDownEvent");
  }
  if (5 < g_CHostageClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base.model.transformed_vertices[0x2d].z,
               "noShadowsWhenSaved");
  }
  if (6 < g_CHostageClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base.model.transformed_vertices[0].y,
               "getEatenEvent");
  }
  if ((7 < g_CHostageClassVersion) && (g_CHostageClassVersion < 0xc)) {
    core_actor_cpp_serializeLocalizedString_FUN_0040b6e0
              ((char **)(in_stack_00000004->base).descriptive_name,"descriptiveName");
  }
  if (8 < g_CHostageClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)&in_stack_00000004[1].base.model.transformed_vertices[0x2b].z,
               "sitDownWayPoint");
  }
  if (g_CHostageClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.model.transformed_vertices[0x19].y,
             "damageSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base.model.transformed_vertices[0x21].z,
             "dieSound");
  return;
}
