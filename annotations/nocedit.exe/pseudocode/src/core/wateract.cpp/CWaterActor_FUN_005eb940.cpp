// Name: core_wateract.cpp_CWaterActor_FUN_005eb940
// Address: 005eb940
// Address Range: [[005eb940, 005ebaaa]]
// Convention: __cdecl
// Signature: void core_wateract.cpp_CWaterActor_FUN_005eb940(CWaterActor * this_ptr)
// Globals:
//   TerminatedCString s_Opacity_006573d8
//   TerminatedCString s_Height_delta_006573e0
//   TerminatedCString s_Time_to_move_up_006573ed
//   TerminatedCString s_Time_to_move_down_006573fd
//   TerminatedCString s_Move_up_sound_0065740f
//   TerminatedCString s_Move_down_sound_0065741d
//   TerminatedCString s_Move_up_condition_0065742d
//   TerminatedCString s_Move_down_condition_0065743f
//   TerminatedCString s_Parameter_00657453
//   TerminatedCString s_State_0065747c
//   TerminatedCString s_Patch_size_00657482
//   TerminatedCString s_Round_0065748d
//   TerminatedCString s_Red_value_00657493
//   TerminatedCString s_Green_value_0065749d
//   TerminatedCString s_Blue_value_006574a9
//   void* PTR_s_Lowered_006846d0 = 0065745d
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_wateract_cpp_CWaterActor_FUN_005eb940(CWaterActor *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack00000010;
  void **ppvStack00000018;
  char *pcStack00000028;
  int *piStack0000002c;
  undefined4 uStack00000030;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  pcStack00000010 = (char *)&this_ptr->move_event;
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  pcStack00000010 = "Move down condition";
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  ppvStack00000018 = (void **)0x0;
  pcStack00000010 = "Parameter";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  ppvStack00000018 = &PTR_s_Lowered_006846d0;
  pcStack00000010 = "State";
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  ppvStack00000018 = (void **)"Patch size";
  pcStack00000010 = (char *)0x5eba4b;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  ppvStack00000018 = (void **)0x5eba60;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack00000028 = (char *)0x0;
  ppvStack00000018 = (void **)0x5eba77;
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  piStack0000002c = (int *)0x0;
  pcStack00000028 = (char *)&this_ptr->col_g;
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  uStack00000030 = 0;
  piStack0000002c = &this_ptr->col_b;
  pcStack00000028 = "Blue value";
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  return;
}


// Assembly code:
// 005eb940: PUSH EBX
//   Label: core_wateract.cpp_CWaterActor_FUN_005eb940
// 005eb941: PUSH ESI
// 005eb942: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005eb946: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005eb94a: PUSH ESI
// 005eb94b: PUSH EBX
// 005eb94c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005eb951: ADD ESP,0x8
// 005eb954: PUSH 0x0
// 005eb956: LEA EAX,[EBX + 0x164]
// 005eb95c: PUSH EAX
// 005eb95d: PUSH 0x6573d8
//   XREF to: 006573d8 (DATA)
// 005eb962: PUSH ESI
// 005eb963: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005eb968: ADD ESP,0x10
// 005eb96b: PUSH 0x0
// 005eb96d: LEA EAX,[EBX + 0x168]
// 005eb973: PUSH EAX
// 005eb974: PUSH 0x6573e0
//   XREF to: 006573e0 (DATA)
// 005eb979: PUSH ESI
// 005eb97a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005eb97f: ADD ESP,0x10
// 005eb982: PUSH 0x0
// 005eb984: LEA EAX,[EBX + 0x16c]
// 005eb98a: PUSH EAX
// 005eb98b: PUSH 0x6573ed
//   XREF to: 006573ed (DATA)
// 005eb990: PUSH ESI
// 005eb991: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005eb996: ADD ESP,0x10
// 005eb999: PUSH 0x0
// 005eb99b: LEA EAX,[EBX + 0x170]
// 005eb9a1: PUSH EAX
// 005eb9a2: PUSH 0x6573fd
//   XREF to: 006573fd (DATA)
// 005eb9a7: PUSH ESI
// 005eb9a8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005eb9ad: ADD ESP,0x10
// 005eb9b0: LEA EAX,[EBX + 0x174]
// 005eb9b6: PUSH EAX
// 005eb9b7: PUSH 0x65740f
//   XREF to: 0065740f (DATA)
// 005eb9bc: PUSH ESI
// 005eb9bd: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 005eb9c2: ADD ESP,0xc
// 005eb9c5: LEA EAX,[EBX + 0x194]
// 005eb9cb: PUSH EAX
// 005eb9cc: PUSH 0x65741d
//   XREF to: 0065741d (DATA)
// 005eb9d1: PUSH ESI
// 005eb9d2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 005eb9d7: ADD ESP,0xc
// 005eb9da: LEA EAX,[EBX + 0x1b4]
// 005eb9e0: PUSH EAX
// 005eb9e1: PUSH 0x65742d
//   XREF to: 0065742d (DATA)
// 005eb9e6: PUSH ESI
// 005eb9e7: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005eb9ec: ADD ESP,0xc
// 005eb9ef: LEA EAX,[EBX + 0x218]
// 005eb9f5: PUSH EAX
// 005eb9f6: PUSH 0x65743f
//   XREF to: 0065743f (DATA)
// 005eb9fb: PUSH ESI
// 005eb9fc: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005eba01: ADD ESP,0xc
// 005eba04: PUSH 0x0
// 005eba06: LEA EAX,[EBX + 0x27c]
// 005eba0c: PUSH EAX
// 005eba0d: PUSH 0x657453
//   XREF to: 00657453 (DATA)
// 005eba12: PUSH ESI
// 005eba13: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005eba18: ADD ESP,0x10
// 005eba1b: LEA EAX,[EBX + 0x280]
// 005eba21: PUSH EAX
// 005eba22: PUSH 0x6846d0
//   XREF to: 006846d0 (DATA)
// 005eba27: PUSH 0x4
// 005eba29: PUSH 0x65747c
//   XREF to: 0065747c (DATA)
// 005eba2e: PUSH ESI
// 005eba2f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005eba34: ADD ESP,0x14
// 005eba37: PUSH 0x0
// 005eba39: LEA EAX,[EBX + 0x284]
// 005eba3f: PUSH EAX
// 005eba40: PUSH 0x657482
//   XREF to: 00657482 (DATA)
// 005eba45: PUSH ESI
// 005eba46: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005eba4b: ADD ESP,0x10
// 005eba4e: LEA EAX,[EBX + 0x288]
// 005eba54: PUSH EAX
// 005eba55: PUSH 0x65748d
//   XREF to: 0065748d (DATA)
// 005eba5a: PUSH ESI
// 005eba5b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005eba60: ADD ESP,0xc
// 005eba63: PUSH 0x0
// 005eba65: LEA EAX,[EBX + 0x28c]
// 005eba6b: PUSH EAX
// 005eba6c: PUSH 0x657493
//   XREF to: 00657493 (DATA)
// 005eba71: PUSH ESI
// 005eba72: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005eba77: ADD ESP,0x10
// 005eba7a: PUSH 0x0
// 005eba7c: LEA EAX,[EBX + 0x290]
// 005eba82: PUSH EAX
// 005eba83: PUSH 0x65749d
//   XREF to: 0065749d (DATA)
// 005eba88: PUSH ESI
// 005eba89: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005eba8e: ADD ESP,0x10
// 005eba91: PUSH 0x0
// 005eba93: ADD EBX,0x294
// 005eba99: PUSH EBX
// 005eba9a: PUSH 0x6574a9
//   XREF to: 006574a9 (DATA)
// 005eba9f: PUSH ESI
// 005ebaa0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005ebaa5: ADD ESP,0x10
// 005ebaa8: POP ESI
// 005ebaa9: POP EBX
// 005ebaaa: RET
