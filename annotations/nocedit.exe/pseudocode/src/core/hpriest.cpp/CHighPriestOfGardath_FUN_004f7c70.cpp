// Name: core_hpriest.cpp_CHighPriestOfGardath_FUN_004f7c70
// Address: 004f7c70
// Address Range: [[004f7c70, 004f7ca0]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_CHighPriestOfGardath_FUN_004f7c70()
// Globals:
//   TerminatedCString s_Kill_me_event_0062f57d
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_npc.cpp_CNPC_FUN_00544e40

#include "nocturne.h"

/* Signature: undefined1 actors_npc_highpriestg.cpp_CHighPriestOfGardath_FUN_004f7c70(undefined4
   param_1, undefined4 param_2) */

void core_hpriest_cpp_CHighPriestOfGardath_FUN_004f7c70(void)

{
  CNPC *in_stack_00000004;
  CActorPropertyList *in_stack_0000000c;
  
  core_npc_cpp_CNPC_FUN_00544e40(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_0000000c);
  return;
}


// Assembly code:
// 004f7c70: PUSH EBX
//   Label: core_hpriest.cpp_CHighPriestOfGardath_FUN_004f7c70
// 004f7c71: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f7c75: PUSH EDX
// 004f7c76: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f7c7a: PUSH ECX
// 004f7c7b: CALL core_npc.cpp_CNPC_FUN_00544e40
//   XREF to: 00544e40 (UNCONDITIONAL_CALL)
// 004f7c80: ADD ESP,0x8
// 004f7c83: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f7c87: ADD EAX,0x1f708
// 004f7c8c: PUSH EAX
// 004f7c8d: PUSH 0x62f57d
//   XREF to: 0062f57d (DATA)
// 004f7c92: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f7c96: PUSH EBX
// 004f7c97: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004f7c9c: ADD ESP,0xc
// 004f7c9f: POP EBX
// 004f7ca0: RET
