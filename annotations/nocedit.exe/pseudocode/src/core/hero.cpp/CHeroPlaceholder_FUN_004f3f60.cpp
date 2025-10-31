// Name: core_hero.cpp_CHeroPlaceholder_FUN_004f3f60
// Address: 004f3f60
// Address Range: [[004f3f60, 004f3f96]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHeroPlaceholder_FUN_004f3f60(CHeroPlaceholder * this_ptr)
// Globals:
//   TerminatedCString s_index_0062edbe
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e220
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_FUN_004f3f60(CHeroPlaceholder *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  CActorPropertyList *in_stack_0000000c;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base_actor,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e220(in_stack_0000000c);
  return;
}


// Assembly code:
// 004f3f60: PUSH EBX
//   Label: core_hero.cpp_CHeroPlaceholder_FUN_004f3f60
// 004f3f61: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f3f65: PUSH EDX
// 004f3f66: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f3f6a: PUSH ECX
// 004f3f6b: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 004f3f70: ADD ESP,0x8
// 004f3f73: PUSH 0x0
// 004f3f75: PUSH 0x3
// 004f3f77: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f3f7b: PUSH 0x0
// 004f3f7d: ADD EAX,0x158
// 004f3f82: PUSH EAX
// 004f3f83: PUSH 0x62edbe
//   XREF to: 0062edbe (DATA)
// 004f3f88: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 004f3f8c: PUSH EBX
// 004f3f8d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e220
//   XREF to: 0040e220 (UNCONDITIONAL_CALL)
// 004f3f92: ADD ESP,0x18
// 004f3f95: POP EBX
// 004f3f96: RET
