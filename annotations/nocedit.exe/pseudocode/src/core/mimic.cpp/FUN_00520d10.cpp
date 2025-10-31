// Name: core_mimic.cpp_FUN_00520d10
// Address: 00520d10
// Address Range: [[00520d10, 00520d9b]]
// Convention: unknown
// Signature: undefined core_mimic.cpp_FUN_00520d10()
// Globals:
//   TerminatedCString s_mirrorCondition_0063890d
//   TerminatedCString s_attackCondition_0063891d
//   TerminatedCString s_attackMode_0063892d
//   TerminatedCString s_mirrorPlaneActor_00638938
//   TerminatedCString s_morphActorType_00638949
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mimic.cpp_FUN_00520d10(undefined4 param_1, undefined4 param_2)
    */

void core_mimic_cpp_FUN_00520d10(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}


// Assembly code:
// 00520d10: PUSH EBX
//   Label: core_mimic.cpp_FUN_00520d10
// 00520d11: PUSH ESI
// 00520d12: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00520d16: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00520d1a: PUSH ESI
// 00520d1b: PUSH EBX
// 00520d1c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00520d21: ADD ESP,0x8
// 00520d24: LEA EAX,[EBX + 0xbebc]
// 00520d2a: PUSH EAX
// 00520d2b: PUSH 0x63890d
//   XREF to: 0063890d (DATA)
// 00520d30: PUSH ESI
// 00520d31: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00520d36: ADD ESP,0xc
// 00520d39: LEA EAX,[EBX + 0xbf20]
// 00520d3f: PUSH EAX
// 00520d40: PUSH 0x63891d
//   XREF to: 0063891d (DATA)
// 00520d45: PUSH ESI
// 00520d46: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00520d4b: ADD ESP,0xc
// 00520d4e: PUSH 0x0
// 00520d50: LEA EAX,[EBX + 0x4bdf4]
// 00520d56: PUSH EAX
// 00520d57: PUSH 0x63892d
//   XREF to: 0063892d (DATA)
// 00520d5c: PUSH ESI
// 00520d5d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00520d62: ADD ESP,0x10
// 00520d65: PUSH 0x0
// 00520d67: PUSH 0x0
// 00520d69: PUSH 0x0
// 00520d6b: LEA EAX,[EBX + 0x4bdf8]
// 00520d71: PUSH EAX
// 00520d72: PUSH 0x638938
//   XREF to: 00638938 (DATA)
// 00520d77: PUSH ESI
// 00520d78: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 00520d7d: ADD ESP,0x18
// 00520d80: PUSH 0x0
// 00520d82: PUSH 0x28
// 00520d84: ADD EBX,0x4bdfc
// 00520d8a: PUSH EBX
// 00520d8b: PUSH 0x638949
//   XREF to: 00638949 (DATA)
// 00520d90: PUSH ESI
// 00520d91: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 00520d96: ADD ESP,0x14
// 00520d99: POP ESI
// 00520d9a: POP EBX
// 00520d9b: RET
