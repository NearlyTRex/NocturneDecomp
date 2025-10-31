// Name: core_biggs.cpp_snag_FUN_00418c80
// Address: 00418c80
// Address Range: [[00418c80, 00418cd3]]
// Convention: unknown
// Signature: undefined core_biggs.cpp_snag_FUN_00418c80()
// Globals:
//   TerminatedCString s_Model_00615b55
//   TerminatedCString s_State_00615b5b
//   TerminatedCString s_Morph_cond_00615b61
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_biggs.cpp_snag_FUN_00418c80(undefined4 param_1, undefined4
   param_2) */

void core_biggs_cpp_snag_FUN_00418c80(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 00418c80: PUSH EBX
//   Label: core_biggs.cpp_snag_FUN_00418c80
// 00418c81: PUSH ESI
// 00418c82: PUSH EDI
// 00418c83: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00418c87: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00418c8b: PUSH ESI
// 00418c8c: PUSH EDI
// 00418c8d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00418c92: ADD ESP,0x8
// 00418c95: PUSH 0x0
// 00418c97: LEA EBX,[EDI + 0x158]
// 00418c9d: PUSH EBX
// 00418c9e: PUSH 0x615b55
//   XREF to: 00615b55 (DATA)
// 00418ca3: PUSH ESI
// 00418ca4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00418ca9: ADD ESP,0x10
// 00418cac: PUSH EBX
// 00418cad: PUSH 0x615b5b
//   XREF to: 00615b5b (DATA)
// 00418cb2: PUSH ESI
// 00418cb3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00418cb8: ADD ESP,0xc
// 00418cbb: ADD EDI,0xcc6c
// 00418cc1: PUSH EDI
// 00418cc2: PUSH 0x615b61
//   XREF to: 00615b61 (DATA)
// 00418cc7: PUSH ESI
// 00418cc8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00418ccd: ADD ESP,0xc
// 00418cd0: POP EDI
// 00418cd1: POP ESI
// 00418cd2: POP EBX
// 00418cd3: RET
