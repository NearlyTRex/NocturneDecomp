// Name: core_lever.cpp_FUN_00505240
// Address: 00505240
// Address Range: [[00505240, 0050536e]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00505240()
// Globals:
//   TerminatedCString s_Model_file_kfm_00631188
//   TerminatedCString s_Lever_type_0063119a
//   TerminatedCString s_Lever_state_006311a5
//   TerminatedCString s_On_event_006311b1
//   TerminatedCString s_Off_event_006311ba
//   TerminatedCString s_Sound_006311c4
//   TerminatedCString s_Momentary_event_006311ca
//   TerminatedCString s_CLever_006311da
//   TerminatedCString s_Linked_lever_006311e1
//   TerminatedCString s_End_vertex_index_006311ee
//   TerminatedCString s_Rule_006311ff
//   TerminatedCString s_Open_from_side_0063121f
//   TerminatedCString s_Enable_collision_0063122e
//   void* PTR_s_Both_0067cf9c = 00631204
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_actor.cpp_CActorPropertyList_FUN_0040e5a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00505240(undefined4 param_1, undefined4 param_2)
    */

void core_lever_cpp_FUN_00505240(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e5a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 00505240: PUSH EBX
//   Label: core_lever.cpp_FUN_00505240
// 00505241: PUSH ESI
// 00505242: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00505246: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050524a: PUSH EBX
// 0050524b: PUSH ESI
// 0050524c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00505251: ADD ESP,0x8
// 00505254: PUSH 0x0
// 00505256: LEA EAX,[ESI + 0x158]
// 0050525c: PUSH EAX
// 0050525d: PUSH 0x631188
//   XREF to: 00631188 (DATA)
// 00505262: PUSH EBX
// 00505263: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 00505268: ADD ESP,0x10
// 0050526b: PUSH 0x505160
//   XREF to: 00505160 (DATA)
// 00505270: PUSH 0x505100
//   XREF to: 00505100 (DATA)
// 00505275: PUSH 0x63119a
//   XREF to: 0063119a (DATA)
// 0050527a: PUSH EBX
// 0050527b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 00505280: ADD ESP,0x10
// 00505283: PUSH 0x505210
//   XREF to: 00505210 (DATA)
// 00505288: PUSH 0x5051a0
//   XREF to: 005051a0 (DATA)
// 0050528d: PUSH 0x6311a5
//   XREF to: 006311a5 (DATA)
// 00505292: PUSH EBX
// 00505293: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 00505298: ADD ESP,0x10
// 0050529b: LEA EAX,[ESI + 0x2e0]
// 005052a1: PUSH EAX
// 005052a2: PUSH 0x6311b1
//   XREF to: 006311b1 (DATA)
// 005052a7: PUSH EBX
// 005052a8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 005052ad: ADD ESP,0xc
// 005052b0: LEA EAX,[ESI + 0x344]
// 005052b6: PUSH EAX
// 005052b7: PUSH 0x6311ba
//   XREF to: 006311ba (DATA)
// 005052bc: PUSH EBX
// 005052bd: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 005052c2: ADD ESP,0xc
// 005052c5: LEA EAX,[ESI + 0x3a8]
// 005052cb: PUSH EAX
// 005052cc: PUSH 0x6311c4
//   XREF to: 006311c4 (DATA)
// 005052d1: PUSH EBX
// 005052d2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 005052d7: ADD ESP,0xc
// 005052da: LEA EAX,[ESI + 0x40c]
// 005052e0: PUSH EAX
// 005052e1: PUSH 0x6311ca
//   XREF to: 006311ca (DATA)
// 005052e6: PUSH EBX
// 005052e7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005052ec: ADD ESP,0xc
// 005052ef: PUSH 0x0
// 005052f1: PUSH 0x6311da
//   XREF to: 006311da (DATA)
// 005052f6: PUSH 0x1
// 005052f8: LEA EAX,[ESI + 0x410]
// 005052fe: PUSH EAX
// 005052ff: PUSH 0x6311e1
//   XREF to: 006311e1 (DATA)
// 00505304: PUSH EBX
// 00505305: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 0050530a: ADD ESP,0x18
// 0050530d: PUSH 0x0
// 0050530f: LEA EAX,[ESI + 0x414]
// 00505315: PUSH EAX
// 00505316: PUSH 0x6311ee
//   XREF to: 006311ee (DATA)
// 0050531b: PUSH EBX
// 0050531c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 00505321: ADD ESP,0x10
// 00505324: PUSH -0x1
// 00505326: LEA EAX,[ESI + 0x420]
// 0050532c: PUSH EAX
// 0050532d: PUSH 0x6311ff
//   XREF to: 006311ff (DATA)
// 00505332: PUSH EBX
// 00505333: CALL core_actor.cpp_CActorPropertyList_FUN_0040e5a0
//   XREF to: 0040e5a0 (UNCONDITIONAL_CALL)
// 00505338: ADD ESP,0x10
// 0050533b: LEA EAX,[ESI + 0x80c]
// 00505341: PUSH EAX
// 00505342: PUSH 0x67cf9c
//   XREF to: 0067cf9c (DATA)
// 00505347: PUSH 0x3
// 00505349: PUSH 0x63121f
//   XREF to: 0063121f (DATA)
// 0050534e: PUSH EBX
// 0050534f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 00505354: ADD ESP,0x14
// 00505357: ADD ESI,0x810
// 0050535d: PUSH ESI
// 0050535e: PUSH 0x63122e
//   XREF to: 0063122e (DATA)
// 00505363: PUSH EBX
// 00505364: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00505369: ADD ESP,0xc
// 0050536c: POP ESI
// 0050536d: POP EBX
// 0050536e: RET
