// Name: core_hero.cpp_CHero_FUN_004f3f20
// Address: 004f3f20
// Address Range: [[004f3f20, 004f3f50]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f3f20(CHero * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaron_FUN_00414010 (00414010) at 0041401c [UNCONDITIONAL_CALL]
//   core_colonel.cpp_FUN_00440610 (00440610) at 0044061a [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d7610 (004d7610) at 004d761a [UNCONDITIONAL_CALL]
//   core_haystack.cpp_FUN_004f1cd0 (004f1cd0) at 004f1cda [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f97a0 (004f97a0) at 004f97aa [UNCONDITIONAL_CALL]
//   core_moloch.cpp_FUN_00529950 (00529950) at 0052995c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00559120 (00559120) at 0055912a [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c68f0 (005c68f0) at 005c68fa [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d9f10 (005d9f10) at 005d9f1a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_State_0062edb8
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_charactr.cpp_CCharacter_FUN_0042f730

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f3f20(CHero *this_ptr)

{
  CActorPropertyList *in_stack_0000000c;
  
  core_charactr_cpp_CCharacter_FUN_0042f730(&this_ptr->base_character);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_0000000c);
  return;
}


// Assembly code:
// 004f3f20: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f3f20
// 004f3f21: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f3f25: PUSH EDX
// 004f3f26: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f3f2a: PUSH ECX
// 004f3f2b: CALL core_charactr.cpp_CCharacter_FUN_0042f730
//   XREF to: 0042f730 (UNCONDITIONAL_CALL)
// 004f3f30: ADD ESP,0x8
// 004f3f33: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f3f37: ADD EAX,0x158
// 004f3f3c: PUSH EAX
// 004f3f3d: PUSH 0x62edb8
//   XREF to: 0062edb8 (DATA)
// 004f3f42: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f3f46: PUSH EBX
// 004f3f47: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004f3f4c: ADD ESP,0xc
// 004f3f4f: POP EBX
// 004f3f50: RET
