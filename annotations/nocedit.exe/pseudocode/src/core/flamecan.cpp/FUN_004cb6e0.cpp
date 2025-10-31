// Name: core_flamecan.cpp_FUN_004cb6e0
// Address: 004cb6e0
// Address Range: [[004cb6e0, 004cb74e]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb6e0()
// Globals:
//   TerminatedCString s_Model_file_kfm_0062a31f
//   TerminatedCString s_Time_to_explode_0062a331
//   TerminatedCString s_On_fire_0062a341
//   TerminatedCString s_Event_to_catch_on_fire_0062a349
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_flamecan.cpp_FUN_004cb6e0(undefined4 param_1,
   CActorPropertyList* param_2) */

void core_flamecan_cpp_FUN_004cb6e0(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 004cb6e0: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb6e0
// 004cb6e1: PUSH ESI
// 004cb6e2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004cb6e6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004cb6ea: PUSH ESI
// 004cb6eb: PUSH EBX
// 004cb6ec: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004cb6f1: ADD ESP,0x8
// 004cb6f4: PUSH 0x0
// 004cb6f6: LEA EAX,[EBX + 0x158]
// 004cb6fc: PUSH EAX
// 004cb6fd: PUSH 0x62a31f
//   XREF to: 0062a31f (DATA)
// 004cb702: PUSH ESI
// 004cb703: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 004cb708: ADD ESP,0x10
// 004cb70b: PUSH 0x0
// 004cb70d: LEA EAX,[EBX + 0x2d8]
// 004cb713: PUSH EAX
// 004cb714: PUSH 0x62a331
//   XREF to: 0062a331 (DATA)
// 004cb719: PUSH ESI
// 004cb71a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004cb71f: ADD ESP,0x10
// 004cb722: LEA EAX,[EBX + 0x2d4]
// 004cb728: PUSH EAX
// 004cb729: PUSH 0x62a341
//   XREF to: 0062a341 (DATA)
// 004cb72e: PUSH ESI
// 004cb72f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004cb734: ADD ESP,0xc
// 004cb737: ADD EBX,0x2dc
// 004cb73d: PUSH EBX
// 004cb73e: PUSH 0x62a349
//   XREF to: 0062a349 (DATA)
// 004cb743: PUSH ESI
// 004cb744: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004cb749: ADD ESP,0xc
// 004cb74c: POP ESI
// 004cb74d: POP EBX
// 004cb74e: RET
