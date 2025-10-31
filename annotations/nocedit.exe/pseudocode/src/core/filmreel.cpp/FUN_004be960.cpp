// Name: core_filmreel.cpp_FUN_004be960
// Address: 004be960
// Address Range: [[004be960, 004be9a6]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be960()
// Globals:
//   TerminatedCString s_Model_file_kfm_00629aff
//   TerminatedCString s_Movie_name_00629b11
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be960(undefined4 param_1, undefined4
   param_2) */

void core_filmreel_cpp_FUN_004be960(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}


// Assembly code:
// 004be960: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004be960
// 004be961: PUSH ESI
// 004be962: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004be966: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004be96a: PUSH ESI
// 004be96b: PUSH EBX
// 004be96c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004be971: ADD ESP,0x8
// 004be974: PUSH 0x0
// 004be976: LEA EAX,[EBX + 0x158]
// 004be97c: PUSH EAX
// 004be97d: PUSH 0x629aff
//   XREF to: 00629aff (DATA)
// 004be982: PUSH ESI
// 004be983: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004be988: ADD ESP,0x10
// 004be98b: PUSH 0x0
// 004be98d: PUSH 0x1f
// 004be98f: LEA EAX,[EBX + 0x2d8]
// 004be995: PUSH EAX
// 004be996: PUSH 0x629b11
//   XREF to: 00629b11 (DATA)
// 004be99b: PUSH ESI
// 004be99c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004be9a1: ADD ESP,0x14
// 004be9a4: POP ESI
// 004be9a5: POP EBX
// 004be9a6: RET
