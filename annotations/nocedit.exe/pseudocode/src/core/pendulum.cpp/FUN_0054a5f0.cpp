// Name: core_pendulum.cpp_FUN_0054a5f0
// Address: 0054a5f0
// Address Range: [[0054a5f0, 0054a781]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a5f0()
// Globals:
//   TerminatedCString s_Model_file_kfm_0063edc1
//   TerminatedCString s_Start_event_0063edd3
//   TerminatedCString s_Stop_event_0063eddf
//   TerminatedCString s_Moving_0063edea
//   TerminatedCString s_Parameter_0063edf1
//   TerminatedCString s_Max_angle_0063edfb
//   TerminatedCString s_SwooshSound_0063ee05
//   TerminatedCString s_SwooshPhaseBias_0063ee11
//   TerminatedCString s_creak1Sound_0063ee21
//   TerminatedCString s_creak2Sound_0063ee2d
//   TerminatedCString s_s_1_2_period_0063ee39
//   TerminatedCString s_Kill_hero_0063ee44
//   TerminatedCString s_Kill_enemies_0063ee4e
//   TerminatedCString s_Decay_of_exp_1_0_decay_d_0063ee5b
//   TerminatedCString s_Decay_timer_should_be_0__0063ee83
//   TerminatedCString s_groundType_0063ee9f
//   TerminatedCString s_Half_movement_0063eeaa
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e300
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e670
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a5f0(undefined4 param_1, undefined4
   param_2) */

void core_pendulum_cpp_FUN_0054a5f0(void)

{
  int extraout_EAX;
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e670(in_stack_00000008);
  *(undefined4 *)(extraout_EAX + 0x54) = 0;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e300(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 0054a5f0: PUSH EBX
//   Label: core_pendulum.cpp_FUN_0054a5f0
// 0054a5f1: PUSH ESI
// 0054a5f2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0054a5f6: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0054a5fa: PUSH EBX
// 0054a5fb: PUSH ESI
// 0054a5fc: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0054a601: ADD ESP,0x8
// 0054a604: PUSH 0x0
// 0054a606: LEA EAX,[ESI + 0x158]
// 0054a60c: PUSH EAX
// 0054a60d: PUSH 0x63edc1
//   XREF to: 0063edc1 (DATA)
// 0054a612: PUSH EBX
// 0054a613: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 0054a618: ADD ESP,0x10
// 0054a61b: LEA EAX,[ESI + 0x2d4]
// 0054a621: PUSH EAX
// 0054a622: PUSH 0x63edd3
//   XREF to: 0063edd3 (DATA)
// 0054a627: PUSH EBX
// 0054a628: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0054a62d: ADD ESP,0xc
// 0054a630: LEA EAX,[ESI + 0x338]
// 0054a636: PUSH EAX
// 0054a637: PUSH 0x63eddf
//   XREF to: 0063eddf (DATA)
// 0054a63c: PUSH EBX
// 0054a63d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0054a642: ADD ESP,0xc
// 0054a645: LEA EAX,[ESI + 0x39c]
// 0054a64b: PUSH EAX
// 0054a64c: PUSH 0x63edea
//   XREF to: 0063edea (DATA)
// 0054a651: PUSH EBX
// 0054a652: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054a657: ADD ESP,0xc
// 0054a65a: PUSH 0x0
// 0054a65c: LEA EAX,[ESI + 0x3a0]
// 0054a662: PUSH EAX
// 0054a663: PUSH 0x63edf1
//   XREF to: 0063edf1 (DATA)
// 0054a668: PUSH EBX
// 0054a669: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054a66e: ADD ESP,0x10
// 0054a671: PUSH 0x0
// 0054a673: LEA EAX,[ESI + 0x3a8]
// 0054a679: PUSH EAX
// 0054a67a: PUSH 0x63edfb
//   XREF to: 0063edfb (DATA)
// 0054a67f: PUSH EBX
// 0054a680: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054a685: ADD ESP,0x10
// 0054a688: LEA EAX,[ESI + 0x3ac]
// 0054a68e: PUSH EAX
// 0054a68f: PUSH 0x63ee05
//   XREF to: 0063ee05 (DATA)
// 0054a694: PUSH EBX
// 0054a695: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0054a69a: ADD ESP,0xc
// 0054a69d: PUSH 0x0
// 0054a69f: LEA EAX,[ESI + 0x3cc]
// 0054a6a5: PUSH EAX
// 0054a6a6: PUSH 0x63ee11
//   XREF to: 0063ee11 (DATA)
// 0054a6ab: PUSH EBX
// 0054a6ac: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054a6b1: ADD ESP,0x10
// 0054a6b4: LEA EAX,[ESI + 0x3d0]
// 0054a6ba: PUSH EAX
// 0054a6bb: PUSH 0x63ee21
//   XREF to: 0063ee21 (DATA)
// 0054a6c0: PUSH EBX
// 0054a6c1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0054a6c6: ADD ESP,0xc
// 0054a6c9: LEA EAX,[ESI + 0x3f0]
// 0054a6cf: PUSH EAX
// 0054a6d0: PUSH 0x63ee2d
//   XREF to: 0063ee2d (DATA)
// 0054a6d5: PUSH EBX
// 0054a6d6: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 0054a6db: ADD ESP,0xc
// 0054a6de: PUSH 0x54a5e0
//   XREF to: 0054a5e0 (DATA)
// 0054a6e3: PUSH 0x54a5a0
//   XREF to: 0054a5a0 (DATA)
// 0054a6e8: PUSH 0x63ee39
//   XREF to: 0063ee39 (DATA)
// 0054a6ed: PUSH EBX
// 0054a6ee: CALL core_actor.cpp_CActorPropertyList_FUN_0040e670
//   XREF to: 0040e670 (UNCONDITIONAL_CALL)
// 0054a6f3: ADD ESP,0x10
// 0054a6f6: MOV dword ptr [EAX + 0x54],0x0
// 0054a6fd: LEA EAX,[ESI + 0x428]
// 0054a703: PUSH EAX
// 0054a704: PUSH 0x63ee44
//   XREF to: 0063ee44 (DATA)
// 0054a709: PUSH EBX
// 0054a70a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054a70f: ADD ESP,0xc
// 0054a712: LEA EAX,[ESI + 0x42c]
// 0054a718: PUSH EAX
// 0054a719: PUSH 0x63ee4e
//   XREF to: 0063ee4e (DATA)
// 0054a71e: PUSH EBX
// 0054a71f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054a724: ADD ESP,0xc
// 0054a727: PUSH 0x0
// 0054a729: LEA EAX,[ESI + 0x430]
// 0054a72f: PUSH EAX
// 0054a730: PUSH 0x63ee5b
//   XREF to: 0063ee5b (DATA)
// 0054a735: PUSH EBX
// 0054a736: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054a73b: ADD ESP,0x10
// 0054a73e: PUSH 0x0
// 0054a740: LEA EAX,[ESI + 0x434]
// 0054a746: PUSH EAX
// 0054a747: PUSH 0x63ee83
//   XREF to: 0063ee83 (DATA)
// 0054a74c: PUSH EBX
// 0054a74d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0054a752: ADD ESP,0x10
// 0054a755: LEA EAX,[ESI + 0x438]
// 0054a75b: PUSH EAX
// 0054a75c: PUSH 0x63ee9f
//   XREF to: 0063ee9f (DATA)
// 0054a761: PUSH EBX
// 0054a762: CALL core_actor.cpp_CActorPropertyList_FUN_0040e300
//   XREF to: 0040e300 (UNCONDITIONAL_CALL)
// 0054a767: ADD ESP,0xc
// 0054a76a: ADD ESI,0x43c
// 0054a770: PUSH ESI
// 0054a771: PUSH 0x63eeaa
//   XREF to: 0063eeaa (DATA)
// 0054a776: PUSH EBX
// 0054a777: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0054a77c: ADD ESP,0xc
// 0054a77f: POP ESI
// 0054a780: POP EBX
// 0054a781: RET
