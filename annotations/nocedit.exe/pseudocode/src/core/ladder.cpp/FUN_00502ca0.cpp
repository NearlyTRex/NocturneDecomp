// Name: core_ladder.cpp_FUN_00502ca0
// Address: 00502ca0
// Address Range: [[00502ca0, 00502cfd]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_00502ca0()
// Globals:
//   TerminatedCString s_Model_00630e60
//   TerminatedCString s_Master_actor_00630e66
//   TerminatedCString s_ground_type_00630e73
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_00502ca0(undefined4 param_1,
   CActorPropertyList* param_2) */

void core_ladder_cpp_FUN_00502ca0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  return;
}


// Assembly code:
// 00502ca0: PUSH EBX
//   Label: core_ladder.cpp_FUN_00502ca0
// 00502ca1: PUSH ESI
// 00502ca2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00502ca6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00502caa: PUSH ESI
// 00502cab: PUSH EBX
// 00502cac: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00502cb1: ADD ESP,0x8
// 00502cb4: PUSH 0x0
// 00502cb6: LEA EAX,[EBX + 0x158]
// 00502cbc: PUSH EAX
// 00502cbd: PUSH 0x630e60
//   XREF to: 00630e60 (DATA)
// 00502cc2: PUSH ESI
// 00502cc3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00502cc8: ADD ESP,0x10
// 00502ccb: PUSH 0x0
// 00502ccd: PUSH 0x0
// 00502ccf: PUSH 0x1
// 00502cd1: LEA EAX,[EBX + 0x2e0]
// 00502cd7: PUSH EAX
// 00502cd8: PUSH 0x630e66
//   XREF to: 00630e66 (DATA)
// 00502cdd: PUSH ESI
// 00502cde: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 00502ce3: ADD ESP,0x18
// 00502ce6: ADD EBX,0x2fc
// 00502cec: PUSH EBX
// 00502ced: PUSH 0x630e73
//   XREF to: 00630e73 (DATA)
// 00502cf2: PUSH ESI
// 00502cf3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 00502cf8: ADD ESP,0xc
// 00502cfb: POP ESI
// 00502cfc: POP EBX
// 00502cfd: RET
