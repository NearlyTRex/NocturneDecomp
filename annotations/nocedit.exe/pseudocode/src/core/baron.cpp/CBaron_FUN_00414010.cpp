// Name: core_baron.cpp_CBaron_FUN_00414010
// Address: 00414010
// Address Range: [[00414010, 00414065]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00414010(CBaron * this_ptr)
// Globals:
//   TerminatedCString s_Summon_condition_00615113
//   TerminatedCString s_Go_away_condition_00615124
//   TerminatedCString s_Summoned_00615136
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_hero.cpp_CHero_FUN_004f3f20

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_FUN_00414010(CBaron *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_hero_cpp_CHero_FUN_004f3f20(&this_ptr->field0_0x0);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 00414010: PUSH EBX
//   Label: core_baron.cpp_CBaron_FUN_00414010
// 00414011: PUSH ESI
// 00414012: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414016: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0041401a: PUSH ESI
// 0041401b: PUSH EBX
// 0041401c: CALL core_hero.cpp_CHero_FUN_004f3f20
//   XREF to: 004f3f20 (UNCONDITIONAL_CALL)
// 00414021: ADD ESP,0x8
// 00414024: LEA EAX,[EBX + 0x1fbd4]
// 0041402a: PUSH EAX
// 0041402b: PUSH 0x615113
//   XREF to: 00615113 (DATA)
// 00414030: PUSH ESI
// 00414031: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00414036: ADD ESP,0xc
// 00414039: LEA EAX,[EBX + 0x1fc38]
// 0041403f: PUSH EAX
// 00414040: PUSH 0x615124
//   XREF to: 00615124 (DATA)
// 00414045: PUSH ESI
// 00414046: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0041404b: ADD ESP,0xc
// 0041404e: ADD EBX,0x1fccc
// 00414054: PUSH EBX
// 00414055: PUSH 0x615136
//   XREF to: 00615136 (DATA)
// 0041405a: PUSH ESI
// 0041405b: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00414060: ADD ESP,0xc
// 00414063: POP ESI
// 00414064: POP EBX
// 00414065: RET
