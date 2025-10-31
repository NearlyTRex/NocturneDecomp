// Name: core_manpuz.cpp_FUN_0050b3e0
// Address: 0050b3e0
// Address Range: [[0050b3e0, 0050b43e]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b3e0()
// Globals:
//   TerminatedCString s_Panel_model_00635945
//   TerminatedCString s_Gem_model_00635951
//   TerminatedCString s_Slew_mode_00635990
//   void* PTR_s_Normal_0067d0ac = 0063595b
//   undefined4 DAT_02f0cb1c
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b3e0(undefined4 param_1,
   CActorPropertyList* param_2) */

void core_manpuz_cpp_FUN_0050b3e0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  return;
}


// Assembly code:
// 0050b3e0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b3e0
// 0050b3e1: PUSH ESI
// 0050b3e2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050b3e6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0050b3ea: PUSH EBX
// 0050b3eb: PUSH ESI
// 0050b3ec: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0050b3f1: ADD ESP,0x8
// 0050b3f4: PUSH 0x0
// 0050b3f6: LEA EAX,[ESI + 0x158]
// 0050b3fc: PUSH EAX
// 0050b3fd: PUSH 0x635945
//   XREF to: 00635945 (DATA)
// 0050b402: PUSH EBX
// 0050b403: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 0050b408: ADD ESP,0x10
// 0050b40b: PUSH 0x0
// 0050b40d: ADD ESI,0x2d4
// 0050b413: PUSH ESI
// 0050b414: PUSH 0x635951
//   XREF to: 00635951 (DATA)
// 0050b419: PUSH EBX
// 0050b41a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 0050b41f: ADD ESP,0x10
// 0050b422: PUSH 0x2f0cb1c
//   XREF to: 02f0cb1c (DATA)
// 0050b427: PUSH 0x67d0ac
//   XREF to: 0067d0ac (DATA)
// 0050b42c: PUSH 0x5
// 0050b42e: PUSH 0x635990
//   XREF to: 00635990 (DATA)
// 0050b433: PUSH EBX
// 0050b434: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 0050b439: ADD ESP,0x14
// 0050b43c: POP ESI
// 0050b43d: POP EBX
// 0050b43e: RET
