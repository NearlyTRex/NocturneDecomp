// Name: core_imp.cpp_FUN_004fb110
// Address: 004fb110
// Address Range: [[004fb110, 004fb14c]]
// Convention: unknown
// Signature: undefined core_imp.cpp_FUN_004fb110()
// Globals:
//   undefined4 s_Model_0062fa96
//   TerminatedCString s_State_0062fa9c
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_imp.cpp_FUN_004fb110(undefined4 param_1, undefined4 param_2)
    */

void core_imp_cpp_FUN_004fb110(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 004fb110: PUSH EBX
//   Label: core_imp.cpp_FUN_004fb110
// 004fb111: PUSH ESI
// 004fb112: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004fb116: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004fb11a: PUSH ESI
// 004fb11b: PUSH EBX
// 004fb11c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 004fb121: ADD ESP,0x8
// 004fb124: PUSH 0x0
// 004fb126: ADD EBX,0x158
// 004fb12c: PUSH EBX
// 004fb12d: PUSH 0x62fa96
//   XREF to: 0062fa96 (DATA)
// 004fb132: PUSH ESI
// 004fb133: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 004fb138: ADD ESP,0x10
// 004fb13b: PUSH EBX
// 004fb13c: PUSH 0x62fa9c
//   XREF to: 0062fa9c (DATA)
// 004fb141: PUSH ESI
// 004fb142: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004fb147: ADD ESP,0xc
// 004fb14a: POP ESI
// 004fb14b: POP EBX
// 004fb14c: RET
