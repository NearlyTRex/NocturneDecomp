// Name: core_grave.cpp_FUN_004ee9e0
// Address: 004ee9e0
// Address Range: [[004ee9e0, 004eea6a]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004ee9e0()
// Globals:
//   TerminatedCString s_Grave_model_KFM_0062e4e1
//   TerminatedCString s_Animation_FPS_0062e4f4
//   TerminatedCString s_Hide_on_first_frame_0062e502
//   TerminatedCString s_Start_condition_0062e516
//   TerminatedCString s_Start_sound_0062e526
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004ee9e0(undefined4 param_1, undefined4 param_2)
    */

void core_grave_cpp_FUN_004ee9e0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  return;
}


// Assembly code:
// 004ee9e0: PUSH EBX
//   Label: core_grave.cpp_FUN_004ee9e0
// 004ee9e1: PUSH ESI
// 004ee9e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004ee9e6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ee9ea: PUSH ESI
// 004ee9eb: PUSH EBX
// 004ee9ec: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004ee9f1: ADD ESP,0x8
// 004ee9f4: PUSH 0x0
// 004ee9f6: LEA EAX,[EBX + 0x158]
// 004ee9fc: PUSH EAX
// 004ee9fd: PUSH 0x62e4e1
//   XREF to: 0062e4e1 (DATA)
// 004eea02: PUSH ESI
// 004eea03: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004eea08: ADD ESP,0x10
// 004eea0b: PUSH 0x0
// 004eea0d: PUSH 0x43480000
// 004eea12: LEA EAX,[EBX + 0x2d8]
// 004eea18: PUSH 0x0
// 004eea1a: PUSH EAX
// 004eea1b: PUSH 0x62e4f4
//   XREF to: 0062e4f4 (DATA)
// 004eea20: PUSH ESI
// 004eea21: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0
//   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)
// 004eea26: ADD ESP,0x18
// 004eea29: LEA EAX,[EBX + 0x2e4]
// 004eea2f: PUSH EAX
// 004eea30: PUSH 0x62e502
//   XREF to: 0062e502 (DATA)
// 004eea35: PUSH ESI
// 004eea36: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004eea3b: ADD ESP,0xc
// 004eea3e: LEA EAX,[EBX + 0x2e8]
// 004eea44: PUSH EAX
// 004eea45: PUSH 0x62e516
//   XREF to: 0062e516 (DATA)
// 004eea4a: PUSH ESI
// 004eea4b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004eea50: ADD ESP,0xc
// 004eea53: ADD EBX,0x34c
// 004eea59: PUSH EBX
// 004eea5a: PUSH 0x62e526
//   XREF to: 0062e526 (DATA)
// 004eea5f: PUSH ESI
// 004eea60: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 004eea65: ADD ESP,0xc
// 004eea68: POP ESI
// 004eea69: POP EBX
// 004eea6a: RET
