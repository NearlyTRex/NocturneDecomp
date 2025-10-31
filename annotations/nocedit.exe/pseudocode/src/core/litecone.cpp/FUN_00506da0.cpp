// Name: core_litecone.cpp_FUN_00506da0
// Address: 00506da0
// Address Range: [[00506da0, 00506e23]]
// Convention: unknown
// Signature: undefined core_litecone.cpp_FUN_00506da0()
// Globals:
//   TerminatedCString s_fov_00631591
//   TerminatedCString s_falloff_00631595
//   TerminatedCString s_state_0063159d
//   TerminatedCString s_On_condition_006315a3
//   TerminatedCString s_Off_condition_006315b0
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_litecone.cpp_FUN_00506da0(undefined4 param_1, undefined4
   param_2) */

void core_litecone_cpp_FUN_00506da0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 00506da0: PUSH EBX
//   Label: core_litecone.cpp_FUN_00506da0
// 00506da1: PUSH ESI
// 00506da2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00506da6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00506daa: PUSH ESI
// 00506dab: PUSH EBX
// 00506dac: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00506db1: ADD ESP,0x8
// 00506db4: PUSH 0x0
// 00506db6: LEA EAX,[EBX + 0x158]
// 00506dbc: PUSH EAX
// 00506dbd: PUSH 0x631591
//   XREF to: 00631591 (DATA)
// 00506dc2: PUSH ESI
// 00506dc3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00506dc8: ADD ESP,0x10
// 00506dcb: PUSH 0x0
// 00506dcd: LEA EAX,[EBX + 0x15c]
// 00506dd3: PUSH EAX
// 00506dd4: PUSH 0x631595
//   XREF to: 00631595 (DATA)
// 00506dd9: PUSH ESI
// 00506dda: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00506ddf: ADD ESP,0x10
// 00506de2: LEA EAX,[EBX + 0x160]
// 00506de8: PUSH EAX
// 00506de9: PUSH 0x63159d
//   XREF to: 0063159d (DATA)
// 00506dee: PUSH ESI
// 00506def: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00506df4: ADD ESP,0xc
// 00506df7: LEA EAX,[EBX + 0x164]
// 00506dfd: PUSH EAX
// 00506dfe: PUSH 0x6315a3
//   XREF to: 006315a3 (DATA)
// 00506e03: PUSH ESI
// 00506e04: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00506e09: ADD ESP,0xc
// 00506e0c: ADD EBX,0x1c8
// 00506e12: PUSH EBX
// 00506e13: PUSH 0x6315b0
//   XREF to: 006315b0 (DATA)
// 00506e18: PUSH ESI
// 00506e19: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00506e1e: ADD ESP,0xc
// 00506e21: POP ESI
// 00506e22: POP EBX
// 00506e23: RET
