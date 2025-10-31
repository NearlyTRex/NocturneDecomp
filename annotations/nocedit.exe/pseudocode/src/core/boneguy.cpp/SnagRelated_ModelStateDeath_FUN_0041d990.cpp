// Name: core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990
// Address: 0041d990
// Address Range: [[0041d990, 0041d9fa]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990()
// Globals:
//   TerminatedCString s_Model_0061636d
//   TerminatedCString s_State_00616373
//   TerminatedCString s_Recombine_time_00616379
//   TerminatedCString s_Death_condition_00616388
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_SnagRelated_ModelStateDeath(undefined4 param_1,
   undefined4 param_2) */

void core_boneguy_cpp_SnagRelated_ModelStateDeath_FUN_0041d990(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 0041d990: PUSH EBX
//   Label: core_boneguy.cpp_SnagRelated_ModelStateDeath_FUN_0041d990
// 0041d991: PUSH ESI
// 0041d992: PUSH EDI
// 0041d993: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0041d997: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0041d99b: PUSH EBX
// 0041d99c: PUSH ESI
// 0041d99d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 0041d9a2: ADD ESP,0x8
// 0041d9a5: PUSH 0x0
// 0041d9a7: LEA EDI,[ESI + 0x158]
// 0041d9ad: PUSH EDI
// 0041d9ae: PUSH 0x61636d
//   XREF to: 0061636d (DATA)
// 0041d9b3: PUSH EBX
// 0041d9b4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 0041d9b9: ADD ESP,0x10
// 0041d9bc: PUSH EDI
// 0041d9bd: PUSH 0x616373
//   XREF to: 00616373 (DATA)
// 0041d9c2: PUSH EBX
// 0041d9c3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 0041d9c8: ADD ESP,0xc
// 0041d9cb: PUSH 0x0
// 0041d9cd: LEA EDI,[ESI + 0xbf34]
// 0041d9d3: PUSH EDI
// 0041d9d4: PUSH 0x616379
//   XREF to: 00616379 (DATA)
// 0041d9d9: PUSH EBX
// 0041d9da: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0041d9df: ADD ESP,0x10
// 0041d9e2: ADD ESI,0xbed0
// 0041d9e8: PUSH ESI
// 0041d9e9: PUSH 0x616388
//   XREF to: 00616388 (DATA)
// 0041d9ee: PUSH EBX
// 0041d9ef: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0041d9f4: ADD ESP,0xc
// 0041d9f7: POP EDI
// 0041d9f8: POP ESI
// 0041d9f9: POP EBX
// 0041d9fa: RET
