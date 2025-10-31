// Name: core_smiley.cpp_CSmiley_load_FUN_005a3220
// Address: 005a3220
// Address Range: [[005a3220, 005a327b]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_CSmiley_load_FUN_005a3220()
// Globals:
//   TerminatedCString s_speed_0064f326
//   TerminatedCString s_modelName_0064f32c
//   TerminatedCString s_guardDistance_0064f336
//   TerminatedCString s_motion_state_0064f344
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_smiley.cpp_CSmiley_load(CSmiley* param_1) */

void core_smiley_cpp_CSmiley_load_FUN_005a3220(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"speed");
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeFloat_FUN_0040b770
            ((float *)(in_stack_00000004[1].base_character.base_actor.actor_name + 0xc),
             "guardDistance");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0(model_ptr,"motion state");
  return;
}


// Assembly code:
// 005a3220: PUSH EBX
//   Label: core_smiley.cpp_CSmiley_load_FUN_005a3220
// 005a3221: PUSH ESI
// 005a3222: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a3226: PUSH ESI
// 005a3227: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 005a322c: ADD ESP,0x4
// 005a322f: PUSH 0x64f326
//   XREF to: 0064f326 (DATA)
// 005a3234: LEA EBX,[ESI + 0xbe24]
// 005a323a: PUSH EBX
// 005a323b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005a3240: ADD ESP,0x8
// 005a3243: PUSH 0x64f32c
//   XREF to: 0064f32c (DATA)
// 005a3248: LEA EBX,[ESI + 0x158]
// 005a324e: PUSH EBX
// 005a324f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 005a3254: ADD ESP,0x8
// 005a3257: PUSH 0x64f336
//   XREF to: 0064f336 (DATA)
// 005a325c: ADD ESI,0xbec0
// 005a3262: PUSH ESI
// 005a3263: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 005a3268: ADD ESP,0x8
// 005a326b: PUSH 0x64f344
//   XREF to: 0064f344 (DATA)
// 005a3270: PUSH EBX
// 005a3271: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 005a3276: ADD ESP,0x8
// 005a3279: POP ESI
// 005a327a: POP EBX
// 005a327b: RET
