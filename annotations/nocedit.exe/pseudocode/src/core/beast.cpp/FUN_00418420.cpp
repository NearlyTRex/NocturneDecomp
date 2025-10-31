// Name: core_beast.cpp_FUN_00418420
// Address: 00418420
// Address Range: [[00418420, 0041845c]]
// Convention: unknown
// Signature: undefined core_beast.cpp_FUN_00418420()
// Globals:
//   TerminatedCString s_Model_00615a95
//   TerminatedCString s_State_00615a9b
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_beast.cpp_FUN_00418420(undefined4 param_1, undefined4 param_2)
    */

void core_beast_cpp_FUN_00418420(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 00418420: PUSH EBX
//   Label: core_beast.cpp_FUN_00418420
// 00418421: PUSH ESI
// 00418422: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00418426: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041842a: PUSH ESI
// 0041842b: PUSH EBX
// 0041842c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00418431: ADD ESP,0x8
// 00418434: PUSH 0x0
// 00418436: ADD EBX,0x158
// 0041843c: PUSH EBX
// 0041843d: PUSH 0x615a95
//   XREF to: 00615a95 (DATA)
// 00418442: PUSH ESI
// 00418443: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00418448: ADD ESP,0x10
// 0041844b: PUSH EBX
// 0041844c: PUSH 0x615a9b
//   XREF to: 00615a9b (DATA)
// 00418451: PUSH ESI
// 00418452: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00418457: ADD ESP,0xc
// 0041845a: POP ESI
// 0041845b: POP EBX
// 0041845c: RET
