// Name: core_imp.cpp_CImp_load_FUN_004fab00
// Address: 004fab00
// Address Range: [[004fab00, 004fab47]]
// Convention: unknown
// Signature: undefined core_imp.cpp_CImp_load_FUN_004fab00()
// Globals:
//   undefined4 s_speed_0062fa2e
//   TerminatedCString s_modelName_0062fa34
//   TerminatedCString s_motion_state_0062fa3e
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_CImp_load(CImp* param_1) */

void core_imp_cpp_CImp_load_FUN_004fab00(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"@speed" + 1);
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}


// Assembly code:
// 004fab00: PUSH EBX
//   Label: core_imp.cpp_CImp_load_FUN_004fab00
// 004fab01: PUSH ESI
// 004fab02: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fab06: PUSH ESI
// 004fab07: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 004fab0c: ADD ESP,0x4
// 004fab0f: PUSH 0x62fa2e
//   XREF to: 0062fa2e (DATA)
// 004fab14: LEA EBX,[ESI + 0xbe24]
// 004fab1a: PUSH EBX
// 004fab1b: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004fab20: ADD ESP,0x8
// 004fab23: PUSH 0x62fa34
//   XREF to: 0062fa34 (DATA)
// 004fab28: LEA EBX,[ESI + 0x158]
// 004fab2e: PUSH EBX
// 004fab2f: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004fab34: ADD ESP,0x8
// 004fab37: PUSH 0x62fa3e
//   XREF to: 0062fa3e (DATA)
// 004fab3c: PUSH EBX
// 004fab3d: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004fab42: ADD ESP,0x8
// 004fab45: POP ESI
// 004fab46: POP EBX
// 004fab47: RET
