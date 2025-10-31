// Name: core_cow.cpp_FUN_00444c50
// Address: 00444c50
// Address Range: [[00444c50, 00444c8c]]
// Convention: unknown
// Signature: undefined core_cow.cpp_FUN_00444c50()
// Globals:
//   TerminatedCString s_Model_006195b6
//   TerminatedCString s_State_006195bc
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_cow.cpp_FUN_00444c50(undefined4 param_1, undefined4 param_2)
    */

void core_cow_cpp_FUN_00444c50(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 00444c50: PUSH EBX
//   Label: core_cow.cpp_FUN_00444c50
// 00444c51: PUSH ESI
// 00444c52: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00444c56: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00444c5a: PUSH ESI
// 00444c5b: PUSH EBX
// 00444c5c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00444c61: ADD ESP,0x8
// 00444c64: PUSH 0x0
// 00444c66: ADD EBX,0x158
// 00444c6c: PUSH EBX
// 00444c6d: PUSH 0x6195b6
//   XREF to: 006195b6 (DATA)
// 00444c72: PUSH ESI
// 00444c73: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00444c78: ADD ESP,0x10
// 00444c7b: PUSH EBX
// 00444c7c: PUSH 0x6195bc
//   XREF to: 006195bc (DATA)
// 00444c81: PUSH ESI
// 00444c82: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00444c87: ADD ESP,0xc
// 00444c8a: POP ESI
// 00444c8b: POP EBX
// 00444c8c: RET
