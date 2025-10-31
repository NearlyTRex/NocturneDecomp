// Name: core_dest.cpp_FUN_0046fe80
// Address: 0046fe80
// Address Range: [[0046fe80, 0046fef7]]
// Convention: unknown
// Signature: undefined core_dest.cpp_FUN_0046fe80()
// Cross-references:
//   core_filmreel.cpp_CFilmReel_FUN_004bee30 (004bee30) at 004bee3c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CDemonActor_0061e434
//   TerminatedCString s_Actor_who_goes_here_0061e440
//   TerminatedCString s_Event_to_raise_when_in_p_0061e454
//   TerminatedCString s_Actor_class_to_go_here_0061e471
//   TerminatedCString s_Persistant_event_flag_0061e488
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_dest.cpp_FUN_0046fe80(undefined4 param_1, undefined4 param_2)
    */

void core_dest_cpp_FUN_0046fe80(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 0046fe80: PUSH EBX
//   Label: core_dest.cpp_FUN_0046fe80
// 0046fe81: PUSH ESI
// 0046fe82: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0046fe86: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0046fe8a: PUSH ESI
// 0046fe8b: PUSH EBX
// 0046fe8c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0046fe91: ADD ESP,0x8
// 0046fe94: PUSH 0x0
// 0046fe96: PUSH 0x61e434
//   XREF to: 0061e434 (DATA)
// 0046fe9b: PUSH 0x1
// 0046fe9d: LEA EAX,[EBX + 0x158]
// 0046fea3: PUSH EAX
// 0046fea4: PUSH 0x61e440
//   XREF to: 0061e440 (DATA)
// 0046fea9: PUSH ESI
// 0046feaa: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 0046feaf: ADD ESP,0x18
// 0046feb2: LEA EAX,[EBX + 0x188]
// 0046feb8: PUSH EAX
// 0046feb9: PUSH 0x61e454
//   XREF to: 0061e454 (DATA)
// 0046febe: PUSH ESI
// 0046febf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 0046fec4: ADD ESP,0xc
// 0046fec7: PUSH 0x0
// 0046fec9: PUSH 0x27
// 0046fecb: LEA EAX,[EBX + 0x15c]
// 0046fed1: PUSH EAX
// 0046fed2: PUSH 0x61e471
//   XREF to: 0061e471 (DATA)
// 0046fed7: PUSH ESI
// 0046fed8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0046fedd: ADD ESP,0x14
// 0046fee0: ADD EBX,0x1ec
// 0046fee6: PUSH EBX
// 0046fee7: PUSH 0x61e488
//   XREF to: 0061e488 (DATA)
// 0046feec: PUSH ESI
// 0046feed: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0046fef2: ADD ESP,0xc
// 0046fef5: POP ESI
// 0046fef6: POP EBX
// 0046fef7: RET
