// Name: core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0
// Address: 004f76c0
// Address Range: [[004f76c0, 004f7710]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0()
// Globals:
//   undefined4 s_speed_0062f4d8
//   TerminatedCString s_modelName_0062f4de
//   TerminatedCString s_motion_state_0062f4e8
// Function calls:
//   core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   core_actor.cpp_serializeFloat_FUN_0040b770
//   core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   core_enemy.cpp_CEnemy_serialize_FUN_004a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_CHotDemon_load(CHotDemon* param_1) */

void core_hotdemon_cpp_CHotDemon_load_FUN_004f76c0(void)

{
  CDeformableModelInstance *model_ptr;
  CEnemy *in_stack_00000004;
  
  core_enemy_cpp_CEnemy_serialize_FUN_004a9660(in_stack_00000004);
  core_actor_cpp_serializeFloat_FUN_0040b770(&in_stack_00000004->speed,"@@speed" + 2);
  model_ptr = &(in_stack_00000004->base_character).model;
  core_actor_cpp_serializedDeformableModelInstance_FUN_0040b970(model_ptr,"modelName");
  core_actor_cpp_serializeMotionState_FUN_0040b9f0
            (&model_ptr->motion_controller,"motion state");
  return;
}


// Assembly code:
// 004f76c0: PUSH EBX
//   Label: core_hotdemon.cpp_CHotDemon_load_FUN_004f76c0
// 004f76c1: PUSH ESI
// 004f76c2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f76c6: PUSH ESI
// 004f76c7: CALL core_enemy.cpp_CEnemy_serialize_FUN_004a9660
//   XREF to: 004a9660 (UNCONDITIONAL_CALL)
// 004f76cc: ADD ESP,0x4
// 004f76cf: PUSH 0x62f4d8
//   XREF to: 0062f4d8 (DATA)
// 004f76d4: LEA EBX,[ESI + 0xbe24]
// 004f76da: PUSH EBX
// 004f76db: CALL core_actor.cpp_serializeFloat_FUN_0040b770
//   XREF to: 0040b770 (UNCONDITIONAL_CALL)
// 004f76e0: ADD ESP,0x8
// 004f76e3: PUSH 0x62f4de
//   XREF to: 0062f4de (DATA)
// 004f76e8: LEA EBX,[ESI + 0x158]
// 004f76ee: PUSH EBX
// 004f76ef: CALL core_actor.cpp_serializedDeformableModelInstance_FUN_0040b970
//   XREF to: 0040b970 (UNCONDITIONAL_CALL)
// 004f76f4: ADD ESP,0x8
// 004f76f7: PUSH 0x62f4e8
//   XREF to: 0062f4e8 (DATA)
// 004f76fc: PUSH EBX
// 004f76fd: CALL core_actor.cpp_serializeMotionState_FUN_0040b9f0
//   XREF to: 0040b9f0 (UNCONDITIONAL_CALL)
// 004f7702: ADD ESP,0x8
// 004f7705: POP ESI
// 004f7706: POP EBX
// 004f7707: LEA EAX,[EAX]
// 004f770d: LEA EDX,[EDX]
// 004f7710: RET
