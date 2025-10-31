// Name: core_conveyor.cpp_FUN_00442130
// Address: 00442130
// Address Range: [[00442130, 004421b5]]
// Convention: unknown
// Signature: undefined core_conveyor.cpp_FUN_00442130()
// Globals:
//   undefined4 s_Moving_00618e8b
//   TerminatedCString s_Start_condition_00618e92
//   string s_Stop_condition_00618ea2
//   TerminatedCString s_Direction_00618eb1
//   TerminatedCString s_Actor_class_to_effect_00618ebb
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e260
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_conveyor.cpp_FUN_00442130(undefined4 param_1, undefined4
   param_2) */

void core_conveyor_cpp_FUN_00442130(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e260(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  return;
}


// Assembly code:
// 00442130: PUSH EBX
//   Label: core_conveyor.cpp_FUN_00442130
// 00442131: PUSH ESI
// 00442132: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00442136: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0044213a: PUSH ESI
// 0044213b: PUSH EBX
// 0044213c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 00442141: ADD ESP,0x8
// 00442144: LEA EAX,[EBX + 0x80c]
// 0044214a: PUSH EAX
// 0044214b: PUSH 0x618e8b
//   XREF to: 00618e8b (DATA)
// 00442150: PUSH ESI
// 00442151: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00442156: ADD ESP,0xc
// 00442159: LEA EAX,[EBX + 0x744]
// 0044215f: PUSH EAX
// 00442160: PUSH 0x618e92
//   XREF to: 00618e92 (DATA)
// 00442165: PUSH ESI
// 00442166: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0044216b: ADD ESP,0xc
// 0044216e: LEA EAX,[EBX + 0x7a8]
// 00442174: PUSH EAX
// 00442175: PUSH 0x618ea2
//   XREF to: 00618ea2 (DATA)
// 0044217a: PUSH ESI
// 0044217b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00442180: ADD ESP,0xc
// 00442183: PUSH 0x0
// 00442185: LEA EAX,[EBX + 0x738]
// 0044218b: PUSH EAX
// 0044218c: PUSH 0x618eb1
//   XREF to: 00618eb1 (DATA)
// 00442191: PUSH ESI
// 00442192: CALL core_actor.cpp_CActorPropertyList_FUN_0040e260
//   XREF to: 0040e260 (UNCONDITIONAL_CALL)
// 00442197: ADD ESP,0x10
// 0044219a: PUSH 0x0
// 0044219c: PUSH 0x4f
// 0044219e: ADD EBX,0x810
// 004421a4: PUSH EBX
// 004421a5: PUSH 0x618ebb
//   XREF to: 00618ebb (DATA)
// 004421aa: PUSH ESI
// 004421ab: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004421b0: ADD ESP,0x14
// 004421b3: POP ESI
// 004421b4: POP EBX
// 004421b5: RET
