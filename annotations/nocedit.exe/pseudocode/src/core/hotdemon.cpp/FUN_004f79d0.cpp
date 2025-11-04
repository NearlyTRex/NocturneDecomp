// Name: core_hotdemon.cpp_FUN_004f79d0
// Address: 004f79d0
// Address Range: [[004f79d0, 004f7a0c]]
// Convention: unknown
// Signature: undefined core_hotdemon.cpp_FUN_004f79d0()
// Globals:
//   TerminatedCString s_Model_0062f528
//   TerminatedCString s_State_0062f52e
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_hotdemon.cpp_FUN_004f79d0(undefined4 param_1, undefined4
   param_2) */

void core_hotdemon_cpp_FUN_004f79d0(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 004f79d0: PUSH EBX
//   Label: core_hotdemon.cpp_FUN_004f79d0
// 004f79d1: PUSH ESI
// 004f79d2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f79d6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004f79da: PUSH ESI
// 004f79db: PUSH EBX
// 004f79dc: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 004f79e1: ADD ESP,0x8
// 004f79e4: PUSH 0x0
// 004f79e6: ADD EBX,0x158
// 004f79ec: PUSH EBX
// 004f79ed: PUSH 0x62f528
//   XREF to: 0062f528 (DATA)
// 004f79f2: PUSH ESI
// 004f79f3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 004f79f8: ADD ESP,0x10
// 004f79fb: PUSH EBX
// 004f79fc: PUSH 0x62f52e
//   XREF to: 0062f52e (DATA)
// 004f7a01: PUSH ESI
// 004f7a02: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004f7a07: ADD ESP,0xc
// 004f7a0a: POP ESI
// 004f7a0b: POP EBX
// 004f7a0c: RET
