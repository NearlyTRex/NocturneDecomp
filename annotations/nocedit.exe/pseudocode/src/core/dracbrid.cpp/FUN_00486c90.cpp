// Name: core_dracbrid.cpp_FUN_00486c90
// Address: 00486c90
// Address Range: [[00486c90, 00486cfa]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486c90()
// Globals:
//   TerminatedCString s_Model_00621c46
//   TerminatedCString s_Rise_event_00621c4c
//   TerminatedCString s_State_00621c57
//   TerminatedCString s_Which_bride_voice_1_5_00621c5d
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00486c90(undefined4 param_1, undefined4
   param_2) */

void core_dracbrid_cpp_FUN_00486c90(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  return;
}


// Assembly code:
// 00486c90: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00486c90
// 00486c91: PUSH ESI
// 00486c92: PUSH EDI
// 00486c93: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00486c97: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00486c9b: PUSH EBX
// 00486c9c: PUSH EDI
// 00486c9d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00486ca2: ADD ESP,0x8
// 00486ca5: PUSH 0x0
// 00486ca7: LEA ESI,[EDI + 0x158]
// 00486cad: PUSH ESI
// 00486cae: PUSH 0x621c46
//   XREF to: 00621c46 (DATA)
// 00486cb3: PUSH EBX
// 00486cb4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00486cb9: ADD ESP,0x10
// 00486cbc: LEA EAX,[EDI + 0xbee0]
// 00486cc2: PUSH EAX
// 00486cc3: PUSH 0x621c4c
//   XREF to: 00621c4c (DATA)
// 00486cc8: PUSH EBX
// 00486cc9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00486cce: ADD ESP,0xc
// 00486cd1: PUSH ESI
// 00486cd2: PUSH 0x621c57
//   XREF to: 00621c57 (DATA)
// 00486cd7: PUSH EBX
// 00486cd8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00486cdd: ADD ESP,0xc
// 00486ce0: PUSH 0x0
// 00486ce2: ADD EDI,0xbf44
// 00486ce8: PUSH EDI
// 00486ce9: PUSH 0x621c5d
//   XREF to: 00621c5d (DATA)
// 00486cee: PUSH EBX
// 00486cef: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00486cf4: ADD ESP,0x10
// 00486cf7: POP EDI
// 00486cf8: POP ESI
// 00486cf9: POP EBX
// 00486cfa: RET
