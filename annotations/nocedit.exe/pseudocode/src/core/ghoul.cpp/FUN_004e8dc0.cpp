// Name: core_ghoul.cpp_FUN_004e8dc0
// Address: 004e8dc0
// Address Range: [[004e8dc0, 004e8e1c]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8dc0()
// Globals:
//   undefined4 s_Model_0062deea
//   TerminatedCString s_State_0062def0
//   TerminatedCString s_Lives_left_0062def6
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e220
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e8dc0(undefined4 param_1, undefined4 param_2)
    */

void core_ghoul_cpp_FUN_004e8dc0(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(in_stack_00000008);
  return;
}


// Assembly code:
// 004e8dc0: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e8dc0
// 004e8dc1: PUSH ESI
// 004e8dc2: PUSH EDI
// 004e8dc3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004e8dc7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004e8dcb: PUSH ESI
// 004e8dcc: PUSH EDI
// 004e8dcd: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 004e8dd2: ADD ESP,0x8
// 004e8dd5: PUSH 0x0
// 004e8dd7: LEA EBX,[EDI + 0x158]
// 004e8ddd: PUSH EBX
// 004e8dde: PUSH 0x62deea
//   XREF to: 0062deea (DATA)
// 004e8de3: PUSH ESI
// 004e8de4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 004e8de9: ADD ESP,0x10
// 004e8dec: PUSH EBX
// 004e8ded: PUSH 0x62def0
//   XREF to: 0062def0 (DATA)
// 004e8df2: PUSH ESI
// 004e8df3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004e8df8: ADD ESP,0xc
// 004e8dfb: PUSH 0x0
// 004e8dfd: PUSH 0xf423f
// 004e8e02: PUSH 0x0
// 004e8e04: ADD EDI,0xbed8
// 004e8e0a: PUSH EDI
// 004e8e0b: PUSH 0x62def6
//   XREF to: 0062def6 (DATA)
// 004e8e10: PUSH ESI
// 004e8e11: CALL core_actor.cpp_CActorPropertyList_FUN_0040e220
//   XREF to: 0040e220 (UNCONDITIONAL_CALL)
// 004e8e16: ADD ESP,0x18
// 004e8e19: POP EDI
// 004e8e1a: POP ESI
// 004e8e1b: POP EBX
// 004e8e1c: RET
