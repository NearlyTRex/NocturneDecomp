// Name: core_tvbat.cpp_CTVBat_FUN_005e51a0
// Address: 005e51a0
// Address Range: [[005e51a0, 005e5253]]
// Convention: __cdecl
// Signature: void core_tvbat.cpp_CTVBat_FUN_005e51a0(CTVBat * this_ptr)
// Globals:
//   undefined4 s_Model_file_(.kfm)_006569f6
//   TerminatedCString s_Rotation_speed_00656a08
//   TerminatedCString s_Movement_speed_00656a17
//   TerminatedCString s_Follow_orders_00656a26
//   TerminatedCString s_Periodic_sound_00656a34
//   TerminatedCString s_Sound_period_min_00656a43
//   TerminatedCString s_Sound_period_max_00656a54
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_tvbat_cpp_CTVBat_FUN_005e51a0(CTVBat *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack00000010;
  float *pfStack00000014;
  undefined4 uStack00000018;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  pcStack00000010 = this_ptr->field13_0xc07c;
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  pfStack00000014 = (float *)0x0;
  pcStack00000010 = (char *)&this_ptr->periodic_sound_timer_min;
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  uStack00000018 = 0;
  pfStack00000014 = &this_ptr->periodic_sound_timer_max;
  pcStack00000010 = "Sound period max";
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 005e51a0: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_FUN_005e51a0
// 005e51a1: PUSH ESI
// 005e51a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e51a6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e51aa: PUSH ESI
// 005e51ab: PUSH EBX
// 005e51ac: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005e51b1: ADD ESP,0x8
// 005e51b4: PUSH 0x0
// 005e51b6: LEA EAX,[EBX + 0xbec0]
// 005e51bc: PUSH EAX
// 005e51bd: PUSH 0x6569f6
//   XREF to: 006569f6 (DATA)
// 005e51c2: PUSH ESI
// 005e51c3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005e51c8: ADD ESP,0x10
// 005e51cb: PUSH 0x0
// 005e51cd: LEA EAX,[EBX + 0xc058]
// 005e51d3: PUSH EAX
// 005e51d4: PUSH 0x656a08
//   XREF to: 00656a08 (DATA)
// 005e51d9: PUSH ESI
// 005e51da: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e51df: ADD ESP,0x10
// 005e51e2: PUSH 0x0
// 005e51e4: LEA EAX,[EBX + 0xc05c]
// 005e51ea: PUSH EAX
// 005e51eb: PUSH 0x656a17
//   XREF to: 00656a17 (DATA)
// 005e51f0: PUSH ESI
// 005e51f1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e51f6: ADD ESP,0x10
// 005e51f9: LEA EAX,[EBX + 0xc064]
// 005e51ff: PUSH EAX
// 005e5200: PUSH 0x656a26
//   XREF to: 00656a26 (DATA)
// 005e5205: PUSH ESI
// 005e5206: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 005e520b: ADD ESP,0xc
// 005e520e: LEA EAX,[EBX + 0xc07c]
// 005e5214: PUSH EAX
// 005e5215: PUSH 0x656a34
//   XREF to: 00656a34 (DATA)
// 005e521a: PUSH ESI
// 005e521b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 005e5220: ADD ESP,0xc
// 005e5223: PUSH 0x0
// 005e5225: LEA EAX,[EBX + 0xc0e0]
// 005e522b: PUSH EAX
// 005e522c: PUSH 0x656a43
//   XREF to: 00656a43 (DATA)
// 005e5231: PUSH ESI
// 005e5232: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e5237: ADD ESP,0x10
// 005e523a: PUSH 0x0
// 005e523c: ADD EBX,0xc0e4
// 005e5242: PUSH EBX
// 005e5243: PUSH 0x656a54
//   XREF to: 00656a54 (DATA)
// 005e5248: PUSH ESI
// 005e5249: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005e524e: ADD ESP,0x10
// 005e5251: POP ESI
// 005e5252: POP EBX
// 005e5253: RET
