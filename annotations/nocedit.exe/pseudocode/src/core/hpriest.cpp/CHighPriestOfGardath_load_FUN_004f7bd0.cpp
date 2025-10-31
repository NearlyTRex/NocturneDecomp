// Name: core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0
// Address: 004f7bd0
// Address Range: [[004f7bd0, 004f7bf4]]
// Convention: unknown
// Signature: undefined core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0()
// Globals:
//   TerminatedCString s_killEvent_0062f573
// Function calls:
//   core_actor.cpp_serializeString_FUN_0040b5c0
//   core_npc.cpp_CNPC_serialize_FUN_00544ba0

#include "nocturne.h"

/* Signature: undefined1 actors_npc_highpriestg.cpp_CHighPriestOfGardath_load(CHighPriestOfGardath*
   param_1) */

void core_hpriest_cpp_CHighPriestOfGardath_load_FUN_004f7bd0(void)

{
  CNPC *in_stack_00000004;
  int in_stack_00000008;
  
  core_npc_cpp_CNPC_serialize_FUN_00544ba0(in_stack_00000004);
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)(in_stack_00000008 + 0x1f708),"killEvent");
  return;
}


// Assembly code:
// 004f7bd0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_hpriest.cpp_CHighPriestOfGardath_load_FUN_004f7bd0
//   XREF to: Stack[0x4] (READ)
// 004f7bd4: PUSH EDX
// 004f7bd5: CALL core_npc.cpp_CNPC_serialize_FUN_00544ba0
//   XREF to: 00544ba0 (UNCONDITIONAL_CALL)
// 004f7bda: ADD ESP,0x4
// 004f7bdd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004f7be1: PUSH 0x62f573
//   XREF to: 0062f573 (DATA)
// 004f7be6: ADD EAX,0x1f708
// 004f7beb: PUSH EAX
// 004f7bec: CALL core_actor.cpp_serializeString_FUN_0040b5c0
//   XREF to: 0040b5c0 (UNCONDITIONAL_CALL)
// 004f7bf1: ADD ESP,0x8
// 004f7bf4: RET
