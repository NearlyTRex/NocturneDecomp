// Name: core_drone.cpp_FUN_0048f520
// Address: 0048f520
// Address Range: [[0048f520, 0048f55c]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048f520()
// Globals:
//   TerminatedCString s_Model_00622456
//   TerminatedCString s_State_0062245c
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048f520(undefined4 param_1, undefined4 param_2)
    */

void core_drone_cpp_FUN_0048f520(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 0048f520: PUSH EBX
//   Label: core_drone.cpp_FUN_0048f520
// 0048f521: PUSH ESI
// 0048f522: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0048f526: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0048f52a: PUSH ESI
// 0048f52b: PUSH EBX
// 0048f52c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 0048f531: ADD ESP,0x8
// 0048f534: PUSH 0x0
// 0048f536: ADD EBX,0x158
// 0048f53c: PUSH EBX
// 0048f53d: PUSH 0x622456
//   XREF to: 00622456 (DATA)
// 0048f542: PUSH ESI
// 0048f543: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 0048f548: ADD ESP,0x10
// 0048f54b: PUSH EBX
// 0048f54c: PUSH 0x62245c
//   XREF to: 0062245c (DATA)
// 0048f551: PUSH ESI
// 0048f552: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 0048f557: ADD ESP,0xc
// 0048f55a: POP ESI
// 0048f55b: POP EBX
// 0048f55c: RET
