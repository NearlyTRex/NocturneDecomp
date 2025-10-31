// Name: core_smiley.cpp_FUN_005a3810
// Address: 005a3810
// Address Range: [[005a3810, 005a384c]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a3810()
// Globals:
//   TerminatedCString s_Model_0064f38b
//   TerminatedCString s_State_0064f391
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a3810(undefined4 param_1, undefined4
   param_2) */

void core_smiley_cpp_FUN_005a3810(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 005a3810: PUSH EBX
//   Label: core_smiley.cpp_FUN_005a3810
// 005a3811: PUSH ESI
// 005a3812: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005a3816: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005a381a: PUSH ESI
// 005a381b: PUSH EBX
// 005a381c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005a3821: ADD ESP,0x8
// 005a3824: PUSH 0x0
// 005a3826: ADD EBX,0x158
// 005a382c: PUSH EBX
// 005a382d: PUSH 0x64f38b
//   XREF to: 0064f38b (DATA)
// 005a3832: PUSH ESI
// 005a3833: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 005a3838: ADD ESP,0x10
// 005a383b: PUSH EBX
// 005a383c: PUSH 0x64f391
//   XREF to: 0064f391 (DATA)
// 005a3841: PUSH ESI
// 005a3842: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 005a3847: ADD ESP,0xc
// 005a384a: POP ESI
// 005a384b: POP EBX
// 005a384c: RET
