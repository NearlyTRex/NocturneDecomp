// Name: core_beast.cpp_CBeast_load_FUN_00418330
// Address: 00418330
// Address Range: [[00418330, 00418377]]
// Convention: unknown
// Signature: undefined core_beast.cpp_CBeast_load_FUN_00418330()
// Globals:
//   TerminatedCString s_speed_00615a78
//   TerminatedCString s_modelName_00615a7e
//   TerminatedCString s_motion_state_00615a88
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: void actors_enemy_beast.cpp_CBeast_load(CBeast* param_1, char* param_2) */

void core_beast_cpp_CBeast_load_FUN_00418330(void)

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


// Assembly code:
// 00418330: PUSH EBX
//   Label: core_beast.cpp_CBeast_load_FUN_00418330
// 00418331: PUSH ESI
// 00418332: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00418336: PUSH ESI
// 00418337: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 0041833c: ADD ESP,0x4
// 0041833f: PUSH 0x615a78
//   XREF to: 00615a78 (DATA)
// 00418344: LEA EBX,[ESI + 0xbe24]
// 0041834a: PUSH EBX
// 0041834b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 00418350: ADD ESP,0x8
// 00418353: PUSH 0x615a7e
//   XREF to: 00615a7e (DATA)
// 00418358: LEA EBX,[ESI + 0x158]
// 0041835e: PUSH EBX
// 0041835f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 00418364: ADD ESP,0x8
// 00418367: PUSH 0x615a88
//   XREF to: 00615a88 (DATA)
// 0041836c: PUSH EBX
// 0041836d: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 00418372: ADD ESP,0x8
// 00418375: POP ESI
// 00418376: POP EBX
// 00418377: RET
