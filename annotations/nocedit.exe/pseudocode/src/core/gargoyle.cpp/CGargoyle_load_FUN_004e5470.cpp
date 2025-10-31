// Name: core_gargoyle.cpp_CGargoyle_load_FUN_004e5470
// Address: 004e5470
// Address Range: [[004e5470, 004e5515]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_load_FUN_004e5470()
// Globals:
//   undefined4 s_speed_0062d9bf
//   TerminatedCString s_modelName_0062d9c5
//   TerminatedCString s_motion_state_0062d9cf
//   TerminatedCString s_stoneRed_0062d9dc
//   TerminatedCString s_stoneGreen_0062d9e5
//   TerminatedCString s_stoneBlue_0062d9f0
//   TerminatedCString s_homeBase_0062d9fa
//   int g_CGargoyleClassVersion = 0x2
// Function calls:
//   core_actor.cpp_serializeActor_FUN_0040b870
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeInteger_FUN_0040b7f0
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_load(CGargoyle* pGargoyle) */

void core_gargoyle_cpp_CGargoyle_load_FUN_004e5470(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"@@speed" + 2);
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0(model_ptr,"motion state");
  if (g_CGargoyleClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.base_actor.orient.heading,
             "stoneRed");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.base_actor.orient_matrix,
             "stoneGreen");
  core_actor_cpp_serializeInteger_FUN_0040b7f0
            ((int *)&in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].y,
             "stoneBlue");
  core_actor_cpp_serializeActor_FUN_0040b870
            ((CDemonActor *)&in_stack_00000004[1].base_character.base_actor.orient_matrix.m[0].z,
             "homeBase");
  return;
}


// Assembly code:
// 004e5470: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_load_FUN_004e5470
// 004e5471: PUSH ESI
// 004e5472: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004e5476: PUSH EBX
// 004e5477: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 004e547c: ADD ESP,0x4
// 004e547f: PUSH 0x62d9bf
//   XREF to: 0062d9bf (DATA)
// 004e5484: LEA ESI,[EBX + 0xbe24]
// 004e548a: PUSH ESI
// 004e548b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004e5490: ADD ESP,0x8
// 004e5493: PUSH 0x62d9c5
//   XREF to: 0062d9c5 (DATA)
// 004e5498: LEA ESI,[EBX + 0x158]
// 004e549e: PUSH ESI
// 004e549f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004e54a4: ADD ESP,0x8
// 004e54a7: PUSH 0x62d9cf
//   XREF to: 0062d9cf (DATA)
// 004e54ac: PUSH ESI
// 004e54ad: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004e54b2: MOV EDX,dword ptr [0x0067b900]
//   XREF to: 0067b900 (READ)
// 004e54b8: ADD ESP,0x8
// 004e54bb: CMP EDX,0x2
// 004e54be: JGE 0x004e54c3
//   XREF to: 004e54c3 (CONDITIONAL_JUMP)
// 004e54c0: POP ESI
// 004e54c1: POP EBX
// 004e54c2: RET
// 004e54c3: PUSH 0x62d9dc
//   Label: LAB_004e54c3
//   XREF to: 0062d9dc (DATA)
// 004e54c8: LEA ESI,[EBX + 0xbeec]
// 004e54ce: PUSH ESI
// 004e54cf: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e54d4: ADD ESP,0x8
// 004e54d7: PUSH 0x62d9e5
//   XREF to: 0062d9e5 (DATA)
// 004e54dc: LEA ESI,[EBX + 0xbef0]
// 004e54e2: PUSH ESI
// 004e54e3: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e54e8: ADD ESP,0x8
// 004e54eb: PUSH 0x62d9f0
//   XREF to: 0062d9f0 (DATA)
// 004e54f0: LEA ESI,[EBX + 0xbef4]
// 004e54f6: PUSH ESI
// 004e54f7: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004e54fc: ADD ESP,0x8
// 004e54ff: PUSH 0x62d9fa
//   XREF to: 0062d9fa (DATA)
// 004e5504: ADD EBX,0xbef8
// 004e550a: PUSH EBX
// 004e550b: CALL core_actor.cpp_serializeActor_FUN_0040b870
//   XREF to: 0040b870 (UNCONDITIONAL_CALL)
// 004e5510: ADD ESP,0x8
// 004e5513: POP ESI
// 004e5514: POP EBX
// 004e5515: RET
