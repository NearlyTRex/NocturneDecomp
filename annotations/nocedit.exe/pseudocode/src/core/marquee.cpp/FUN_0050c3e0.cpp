// Name: core_marquee.cpp_FUN_0050c3e0
// Address: 0050c3e0
// Address Range: [[0050c3e0, 0050c47d]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c3e0()
// Globals:
//   TerminatedCString s_courseName_006359e7
//   TerminatedCString s_totalTime_006359f2
//   TerminatedCString s_Display_type_00635a09
//   TerminatedCString s_phase_00635a16
//   void* PTR_s_Ring_0067d13c = 006359fc
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_marquee.cpp_FUN_0050c3e0(undefined4 param_1, undefined4
   param_2) */

void core_marquee_cpp_FUN_0050c3e0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  if (in_stack_00000004[1].orient_matrix.m[1].x != 0.0) {
    (*((in_stack_00000004->metadata).vtable)->setup)(in_stack_00000004);
    return;
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  (*((in_stack_00000004->metadata).vtable)->setup)(in_stack_00000004);
  return;
}


// Assembly code:
// 0050c3e0: PUSH EBX
//   Label: core_marquee.cpp_FUN_0050c3e0
// 0050c3e1: PUSH ESI
// 0050c3e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050c3e6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050c3ea: PUSH ESI
// 0050c3eb: PUSH EBX
// 0050c3ec: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0050c3f1: ADD ESP,0x8
// 0050c3f4: PUSH 0x0
// 0050c3f6: PUSH 0x1f
// 0050c3f8: LEA EAX,[EBX + 0x158]
// 0050c3fe: PUSH EAX
// 0050c3ff: PUSH 0x6359e7
//   XREF to: 006359e7 (DATA)
// 0050c404: PUSH ESI
// 0050c405: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0050c40a: ADD ESP,0x14
// 0050c40d: PUSH 0x0
// 0050c40f: LEA EAX,[EBX + 0x178]
// 0050c415: PUSH EAX
// 0050c416: PUSH 0x6359f2
//   XREF to: 006359f2 (DATA)
// 0050c41b: PUSH ESI
// 0050c41c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0050c421: ADD ESP,0x10
// 0050c424: LEA EAX,[EBX + 0x1a0]
// 0050c42a: PUSH EAX
// 0050c42b: PUSH 0x67d13c
//   XREF to: 0067d13c (DATA)
// 0050c430: PUSH 0x2
// 0050c432: PUSH 0x635a09
//   XREF to: 00635a09 (DATA)
// 0050c437: PUSH ESI
// 0050c438: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 0050c43d: MOV EDX,dword ptr [EBX + 0x1a0]
// 0050c443: ADD ESP,0x14
// 0050c446: TEST EDX,EDX
// 0050c448: JZ 0x0050c459
//   XREF to: 0050c459 (CONDITIONAL_JUMP)
// 0050c44a: PUSH EBX
// 0050c44b: MOV EAX,dword ptr [EBX + 0x154]
// 0050c451: CALL dword ptr [EAX]
// 0050c453: ADD ESP,0x4
// 0050c456: POP ESI
// 0050c457: POP EBX
// 0050c458: RET
// 0050c459: PUSH EDX
//   Label: LAB_0050c459
// 0050c45a: LEA EAX,[EBX + 0x180]
// 0050c460: PUSH EAX
// 0050c461: PUSH 0x635a16
//   XREF to: 00635a16 (DATA)
// 0050c466: PUSH ESI
// 0050c467: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 0050c46c: ADD ESP,0x10
// 0050c46f: PUSH EBX
// 0050c470: MOV EAX,dword ptr [EBX + 0x154]
// 0050c476: CALL dword ptr [EAX]
// 0050c478: ADD ESP,0x4
// 0050c47b: POP ESI
// 0050c47c: POP EBX
// 0050c47d: RET
