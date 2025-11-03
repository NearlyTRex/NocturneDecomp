// Name: core_hostage.cpp_CHostage_load_FUN_004f6170
// Address: 004f6170
// Address Range: [[004f6170, 004f638c]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_CHostage_load_FUN_004f6170()
// Globals:
//   TerminatedCString s_followState_0062f0fd
//   TerminatedCString s_hostageState_0062f109
//   TerminatedCString s_goalWayPoint_0062f116
//   TerminatedCString s_modelName_0062f123
//   TerminatedCString s_motion_state_0062f12d
//   TerminatedCString s_partStatus_0062f13a
//   TerminatedCString s_rescueDistance_0062f145
//   TerminatedCString s_rescueCondition_0062f154
//   TerminatedCString s_clothList_0062f164
//   TerminatedCString s_rescueEvent_0062f16e
//   TerminatedCString s_heroFoundMeEvent_0062f17a
//   TerminatedCString s_heroLeftMeEvent_0062f18b
//   TerminatedCString s_heroCameBackEvent_0062f19b
//   TerminatedCString s_goingToSitDownEvent_0062f1ad
//   TerminatedCString s_sitDownEvent_0062f1c1
//   TerminatedCString s_noShadowsWhenSaved_0062f1ce
//   TerminatedCString s_getEatenEvent_0062f1e1
//   TerminatedCString s_descriptiveName_0062f1ef
//   TerminatedCString s_sitDownWayPoint_0062f1ff
//   TerminatedCString s_damageSound_0062f20f
//   TerminatedCString s_dieSound_0062f21b
//   undefined4 g_CHostageClassVersion
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializeClothList_FUN_0040be60
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_actor.cpp_serializePartStatus_FUN_0040bae0
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_CHostage_load(CHostage* param_1) */

void core_hostage_cpp_CHostage_load_FUN_004f6170(void)

{
  CDeformableModelInstance *model_ptr;
  CNPC *in_stack_00000004;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.model.transformed_vertices[0x2a].y,
             "followState");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)(in_stack_00000004[1].base_character.model.transformed_vertices + 0x2b),
             "hostageState");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[1].base_character.model.transformed_vertices[0x2b].y,
             "goalWayPoint");
  if (g_CHostageClassVersion < 10) {
    model_ptr = &(in_stack_00000004->base_character).model;
    core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
    core_actor_cpp_serializeMotionState_FUN_0040b9f0
              (&model_ptr->motion_controller,"motion state");
  }
  core_actor_cpp_serializePartStatus_FUN_0040bae0
            (&(in_stack_00000004->base_character).model,"partStatus");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004 + 1),"rescueDistance");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000004[1].base_character.base_actor.actor_name + 4),
             "rescueCondition");
  if ((1 < g_CHostageClassVersion) && (g_CHostageClassVersion < 5)) {
    core_actor_cpp_serializeClothList_FUN_0040be60
              ((CClothList *)&(in_stack_00000004->base_character).cloth_count,"clothList");
  }
  if (2 < g_CHostageClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base_character.base_actor.field6_0x68,
               "rescueEvent");
  }
  if (3 < g_CHostageClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base_character.base_actor.create_event + 0x10),
               "heroFoundMeEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base_character.base_actor.field13_0xec,
               "heroLeftMeEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base_character.base_actor.field28_0x150,
               "heroCameBackEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base_character.model.transformed_vertices[8].z,
               "goingToSitDownEvent");
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)(in_stack_00000004[1].base_character.model.transformed_vertices + 0x11),
               "sitDownEvent");
  }
  if (5 < g_CHostageClassVersion) {
    core_actor_cpp_serializeInteger_FUN_0040b7f0
              ((int *)&in_stack_00000004[1].base_character.model.transformed_vertices[0x2d].z,
               "noShadowsWhenSaved");
  }
  if (6 < g_CHostageClassVersion) {
    core_actor_cpp_serializeString_FUN_0040b5c0
              ((char **)&in_stack_00000004[1].base_character.model.transformed_vertices[0].y,
               "getEatenEvent");
  }
  if ((7 < g_CHostageClassVersion) && (g_CHostageClassVersion < 0xc)) {
    core_actor_cpp_serializeLocalizedString_FUN_0040b6e0
              ((char **)(in_stack_00000004->base_character).descriptive_name,
               "descriptiveName");
  }
  if (8 < g_CHostageClassVersion) {
    core_actor_cpp_serializeActor_FUN_0040b870
              ((CDemonActor *)
               &in_stack_00000004[1].base_character.model.transformed_vertices[0x2b].z,
               "sitDownWayPoint");
  }
  if (g_CHostageClassVersion < 0xb) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_character.model.transformed_vertices[0x19].y,
             "damageSound");
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[1].base_character.model.transformed_vertices[0x21].z,
             "dieSound");
  return;
}


// Assembly code:
// 004f6170: PUSH EBX
//   Label: core_hostage.cpp_CHostage_load_FUN_004f6170
// 004f6171: PUSH ESI
// 004f6172: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f6176: PUSH EBX
// 004f6177: CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0
//   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
// 004f617c: ADD ESP,0x4
// 004f617f: PUSH 0x62f0fd
//   XREF to: 0062f0fd (DATA)
// 004f6184: LEA ESI,[EBX + 0x1fab4]
// 004f618a: PUSH ESI
// 004f618b: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f6190: ADD ESP,0x8
// 004f6193: PUSH 0x62f109
//   XREF to: 0062f109 (DATA)
// 004f6198: LEA ESI,[EBX + 0x1fabc]
// 004f619e: PUSH ESI
// 004f619f: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f61a4: ADD ESP,0x8
// 004f61a7: PUSH 0x62f116
//   XREF to: 0062f116 (DATA)
// 004f61ac: LEA ESI,[EBX + 0x1fac0]
// 004f61b2: PUSH ESI
// 004f61b3: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f61b8: MOV EDX,dword ptr [0x0067cc5c]
//   XREF to: 0067cc5c (READ)
// 004f61be: ADD ESP,0x8
// 004f61c1: CMP EDX,0xa
// 004f61c4: JL 0x004f633b
//   XREF to: 004f633b (CONDITIONAL_JUMP)
// 004f61ca: PUSH 0x62f13a
//   Label: LAB_004f61ca
//   XREF to: 0062f13a (DATA)
// 004f61cf: LEA ESI,[EBX + 0x158]
// 004f61d5: PUSH ESI
// 004f61d6: CALL core_actor.cpp_serializePartStatus_FUN_0040bae0
//   XREF to: 0040bae0 (UNCONDITIONAL_CALL)
// 004f61db: ADD ESP,0x8
// 004f61de: PUSH 0x62f145
//   XREF to: 0062f145 (DATA)
// 004f61e3: LEA ESI,[EBX + 0x1f708]
// 004f61e9: PUSH ESI
// 004f61ea: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004f61ef: ADD ESP,0x8
// 004f61f2: PUSH 0x62f154
//   XREF to: 0062f154 (DATA)
// 004f61f7: LEA ESI,[EBX + 0x1f70c]
// 004f61fd: PUSH ESI
// 004f61fe: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6203: MOV ECX,dword ptr [0x0067cc5c]
//   XREF to: 0067cc5c (READ)
// 004f6209: ADD ESP,0x8
// 004f620c: CMP ECX,0x2
// 004f620f: JL 0x004f622a
//   XREF to: 004f622a (CONDITIONAL_JUMP)
// 004f6211: CMP ECX,0x5
// 004f6214: JGE 0x004f622a
//   XREF to: 004f622a (CONDITIONAL_JUMP)
// 004f6216: PUSH 0x62f164
//   XREF to: 0062f164 (DATA)
// 004f621b: LEA ESI,[EBX + 0x2a94]
// 004f6221: PUSH ESI
// 004f6222: CALL core_actor.cpp_serializeClothList_FUN_0040be60
//   XREF to: 0040be60 (UNCONDITIONAL_CALL)
// 004f6227: ADD ESP,0x8
// 004f622a: CMP dword ptr [0x0067cc5c],0x3
//   Label: LAB_004f622a
//   XREF to: 0067cc5c (READ)
// 004f6231: JL 0x004f6247
//   XREF to: 004f6247 (CONDITIONAL_JUMP)
// 004f6233: PUSH 0x62f16e
//   XREF to: 0062f16e (DATA)
// 004f6238: LEA ESI,[EBX + 0x1f770]
// 004f623e: PUSH ESI
// 004f623f: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6244: ADD ESP,0x8
// 004f6247: CMP dword ptr [0x0067cc5c],0x4
//   Label: LAB_004f6247
//   XREF to: 0067cc5c (READ)
// 004f624e: JL 0x004f62b4
//   XREF to: 004f62b4 (CONDITIONAL_JUMP)
// 004f6250: PUSH 0x62f17a
//   XREF to: 0062f17a (DATA)
// 004f6255: LEA ESI,[EBX + 0x1f790]
// 004f625b: PUSH ESI
// 004f625c: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6261: ADD ESP,0x8
// 004f6264: PUSH 0x62f18b
//   XREF to: 0062f18b (DATA)
// 004f6269: LEA ESI,[EBX + 0x1f7f4]
// 004f626f: PUSH ESI
// 004f6270: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6275: ADD ESP,0x8
// 004f6278: PUSH 0x62f19b
//   XREF to: 0062f19b (DATA)
// 004f627d: LEA ESI,[EBX + 0x1f858]
// 004f6283: PUSH ESI
// 004f6284: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6289: ADD ESP,0x8
// 004f628c: PUSH 0x62f1ad
//   XREF to: 0062f1ad (DATA)
// 004f6291: LEA ESI,[EBX + 0x1f920]
// 004f6297: PUSH ESI
// 004f6298: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f629d: ADD ESP,0x8
// 004f62a0: PUSH 0x62f1c1
//   XREF to: 0062f1c1 (DATA)
// 004f62a5: LEA ESI,[EBX + 0x1f984]
// 004f62ab: PUSH ESI
// 004f62ac: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f62b1: ADD ESP,0x8
// 004f62b4: CMP dword ptr [0x0067cc5c],0x6
//   Label: LAB_004f62b4
//   XREF to: 0067cc5c (READ)
// 004f62bb: JL 0x004f62d1
//   XREF to: 004f62d1 (CONDITIONAL_JUMP)
// 004f62bd: PUSH 0x62f1ce
//   XREF to: 0062f1ce (DATA)
// 004f62c2: LEA ESI,[EBX + 0x1fadc]
// 004f62c8: PUSH ESI
// 004f62c9: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f62ce: ADD ESP,0x8
// 004f62d1: CMP dword ptr [0x0067cc5c],0x7
//   Label: LAB_004f62d1
//   XREF to: 0067cc5c (READ)
// 004f62d8: JL 0x004f62ee
//   XREF to: 004f62ee (CONDITIONAL_JUMP)
// 004f62da: PUSH 0x62f1e1
//   XREF to: 0062f1e1 (DATA)
// 004f62df: LEA ESI,[EBX + 0x1f8bc]
// 004f62e5: PUSH ESI
// 004f62e6: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f62eb: ADD ESP,0x8
// 004f62ee: MOV ECX,dword ptr [0x0067cc5c]
//   Label: LAB_004f62ee
//   XREF to: 0067cc5c (READ)
// 004f62f4: CMP ECX,0x8
// 004f62f7: JL 0x004f6312
//   XREF to: 004f6312 (CONDITIONAL_JUMP)
// 004f62f9: CMP ECX,0xc
// 004f62fc: JGE 0x004f6312
//   XREF to: 004f6312 (CONDITIONAL_JUMP)
// 004f62fe: PUSH 0x62f1ef
//   XREF to: 0062f1ef (DATA)
// 004f6303: LEA ESI,[EBX + 0x2448]
// 004f6309: PUSH ESI
// 004f630a: CALL core_actor.cpp_serializeLocalizedString_FUN_0040b6e0
//   XREF to: 0040b6e0 (UNCONDITIONAL_CALL)
// 004f630f: ADD ESP,0x8
// 004f6312: CMP dword ptr [0x0067cc5c],0x9
//   Label: LAB_004f6312
//   XREF to: 0067cc5c (READ)
// 004f6319: JL 0x004f632f
//   XREF to: 004f632f (CONDITIONAL_JUMP)
// 004f631b: PUSH 0x62f1ff
//   XREF to: 0062f1ff (DATA)
// 004f6320: LEA ESI,[EBX + 0x1fac4]
// 004f6326: PUSH ESI
// 004f6327: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004f632c: ADD ESP,0x8
// 004f632f: CMP dword ptr [0x0067cc5c],0xb
//   Label: LAB_004f632f
//   XREF to: 0067cc5c (READ)
// 004f6336: JGE 0x004f6362
//   XREF to: 004f6362 (CONDITIONAL_JUMP)
// 004f6338: POP ESI
// 004f6339: POP EBX
// 004f633a: RET
// 004f633b: PUSH 0x62f123
//   Label: LAB_004f633b
//   XREF to: 0062f123 (DATA)
// 004f6340: LEA ESI,[EBX + 0x158]
// 004f6346: PUSH ESI
// 004f6347: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004f634c: ADD ESP,0x8
// 004f634f: PUSH 0x62f12d
//   XREF to: 0062f12d (DATA)
// 004f6354: PUSH ESI
// 004f6355: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004f635a: ADD ESP,0x8
// 004f635d: JMP 0x004f61ca
//   XREF to: 004f61ca (UNCONDITIONAL_JUMP)
// 004f6362: PUSH 0x62f20f
//   Label: LAB_004f6362
//   XREF to: 0062f20f (DATA)
// 004f6367: LEA ESI,[EBX + 0x1f9e8]
// 004f636d: PUSH ESI
// 004f636e: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6373: ADD ESP,0x8
// 004f6376: PUSH 0x62f21b
//   XREF to: 0062f21b (DATA)
// 004f637b: ADD EBX,0x1fa4c
// 004f6381: PUSH EBX
// 004f6382: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f6387: ADD ESP,0x8
// 004f638a: POP ESI
// 004f638b: POP EBX
// 004f638c: RET
