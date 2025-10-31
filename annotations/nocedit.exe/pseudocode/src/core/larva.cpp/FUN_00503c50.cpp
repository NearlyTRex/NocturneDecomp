// Name: core_larva.cpp_FUN_00503c50
// Address: 00503c50
// Address Range: [[00503c50, 00503c8c]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503c50()
// Globals:
//   TerminatedCString s_Model_0063100b
//   TerminatedCString s_State_00631011
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_larva.cpp_FUN_00503c50(undefined4 param_1, undefined4 param_2)
    */

void core_larva_cpp_FUN_00503c50(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 00503c50: PUSH EBX
//   Label: core_larva.cpp_FUN_00503c50
// 00503c51: PUSH ESI
// 00503c52: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00503c56: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00503c5a: PUSH ESI
// 00503c5b: PUSH EBX
// 00503c5c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00503c61: ADD ESP,0x8
// 00503c64: PUSH 0x0
// 00503c66: ADD EBX,0x158
// 00503c6c: PUSH EBX
// 00503c6d: PUSH 0x63100b
//   XREF to: 0063100b (DATA)
// 00503c72: PUSH ESI
// 00503c73: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00503c78: ADD ESP,0x10
// 00503c7b: PUSH EBX
// 00503c7c: PUSH 0x631011
//   XREF to: 00631011 (DATA)
// 00503c81: PUSH ESI
// 00503c82: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00503c87: ADD ESP,0xc
// 00503c8a: POP ESI
// 00503c8b: POP EBX
// 00503c8c: RET
