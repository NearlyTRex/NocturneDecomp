// Name: core_bride.cpp_FUN_00424b10
// Address: 00424b10
// Address Range: [[00424b10, 00424b42]]
// Convention: unknown
// Signature: undefined core_bride.cpp_FUN_00424b10()
// Globals:
//   TerminatedCString s_Model_00616cbd
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bride.cpp_FUN_00424b10(undefined4 param_1, undefined4 param_2)
    */

void core_bride_cpp_FUN_00424b10(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000014;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000014);
  return;
}


// Assembly code:
// 00424b10: PUSH EBX
//   Label: core_bride.cpp_FUN_00424b10
// 00424b11: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00424b15: PUSH EDX
// 00424b16: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00424b1a: PUSH ECX
// 00424b1b: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00424b20: ADD ESP,0x8
// 00424b23: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00424b27: PUSH 0x0
// 00424b29: ADD EAX,0x158
// 00424b2e: PUSH EAX
// 00424b2f: PUSH 0x616cbd
//   XREF to: 00616cbd (DATA)
// 00424b34: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00424b38: PUSH EBX
// 00424b39: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00424b3e: ADD ESP,0x10
// 00424b41: POP EBX
// 00424b42: RET
