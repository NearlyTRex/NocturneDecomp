// Name: core_hiram.cpp_FUN_004f46a0
// Address: 004f46a0
// Address Range: [[004f46a0, 004f46d0]]
// Convention: unknown
// Signature: undefined core_hiram.cpp_FUN_004f46a0()
// Globals:
//   TerminatedCString s_deathEvent_0062ee07
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_npc.cpp_CNPC_FUN_00544e40

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hiram.cpp_FUN_004f46a0(undefined4 param_1, undefined4 param_2)
    */

void core_hiram_cpp_FUN_004f46a0(void)

{
  CNPC *in_stack_00000004;
  CActorPropertyList *in_stack_0000000c;
  
  core_npc_cpp_CNPC_FUN_00544e40(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_0000000c);
  return;
}


// Assembly code:
// 004f46a0: PUSH EBX
//   Label: core_hiram.cpp_FUN_004f46a0
// 004f46a1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f46a5: PUSH EDX
// 004f46a6: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f46aa: PUSH ECX
// 004f46ab: CALL core_npc.cpp_CNPC_FUN_00544e40
//   XREF to: 00544e40 (UNCONDITIONAL_CALL)
// 004f46b0: ADD ESP,0x8
// 004f46b3: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f46b7: ADD EAX,0x1f708
// 004f46bc: PUSH EAX
// 004f46bd: PUSH 0x62ee07
//   XREF to: 0062ee07 (DATA)
// 004f46c2: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f46c6: PUSH EBX
// 004f46c7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004f46cc: ADD ESP,0xc
// 004f46cf: POP EBX
// 004f46d0: RET
