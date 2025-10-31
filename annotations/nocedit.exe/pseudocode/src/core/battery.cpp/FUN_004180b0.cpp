// Name: core_battery.cpp_FUN_004180b0
// Address: 004180b0
// Address Range: [[004180b0, 0041810b]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_004180b0()
// Globals:
//   TerminatedCString s_Model_file_kfm_00615a11
//   TerminatedCString s_Discharge_time_sec_00615a23
//   TerminatedCString s_Charge_time_sec_00615a38
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_battery.cpp_FUN_004180b0(undefined4 param_1,
   CActorPropertyList* param_2) */

void core_battery_cpp_FUN_004180b0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 004180b0: PUSH EBX
//   Label: core_battery.cpp_FUN_004180b0
// 004180b1: PUSH ESI
// 004180b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004180b6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004180ba: PUSH ESI
// 004180bb: PUSH EBX
// 004180bc: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004180c1: ADD ESP,0x8
// 004180c4: PUSH 0x0
// 004180c6: LEA EAX,[EBX + 0x158]
// 004180cc: PUSH EAX
// 004180cd: PUSH 0x615a11
//   XREF to: 00615a11 (DATA)
// 004180d2: PUSH ESI
// 004180d3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004180d8: ADD ESP,0x10
// 004180db: PUSH 0x0
// 004180dd: LEA EAX,[EBX + 0x2dc]
// 004180e3: PUSH EAX
// 004180e4: PUSH 0x615a23
//   XREF to: 00615a23 (DATA)
// 004180e9: PUSH ESI
// 004180ea: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004180ef: ADD ESP,0x10
// 004180f2: PUSH 0x0
// 004180f4: ADD EBX,0x2d8
// 004180fa: PUSH EBX
// 004180fb: PUSH 0x615a38
//   XREF to: 00615a38 (DATA)
// 00418100: PUSH ESI
// 00418101: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 00418106: ADD ESP,0x10
// 00418109: POP ESI
// 0041810a: POP EBX
// 0041810b: RET
