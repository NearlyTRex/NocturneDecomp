// Name: core_sentinel.cpp_FUN_00568f10
// Address: 00568f10
// Address Range: [[00568f10, 00568f4c]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568f10()
// Globals:
//   TerminatedCString s_Model_006458d7
//   TerminatedCString s_State_006458dd
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00568f10(undefined4 param_1, undefined4
   param_2) */

void core_sentinel_cpp_FUN_00568f10(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 00568f10: PUSH EBX
//   Label: core_sentinel.cpp_FUN_00568f10
// 00568f11: PUSH ESI
// 00568f12: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00568f16: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00568f1a: PUSH ESI
// 00568f1b: PUSH EBX
// 00568f1c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00568f21: ADD ESP,0x8
// 00568f24: PUSH 0x0
// 00568f26: ADD EBX,0x158
// 00568f2c: PUSH EBX
// 00568f2d: PUSH 0x6458d7
//   XREF to: 006458d7 (DATA)
// 00568f32: PUSH ESI
// 00568f33: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00568f38: ADD ESP,0x10
// 00568f3b: PUSH EBX
// 00568f3c: PUSH 0x6458dd
//   XREF to: 006458dd (DATA)
// 00568f41: PUSH ESI
// 00568f42: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00568f47: ADD ESP,0xc
// 00568f4a: POP ESI
// 00568f4b: POP EBX
// 00568f4c: RET
