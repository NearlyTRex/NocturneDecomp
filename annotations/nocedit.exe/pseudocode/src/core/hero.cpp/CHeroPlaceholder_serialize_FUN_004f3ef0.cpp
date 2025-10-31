// Name: core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0
// Address: 004f3ef0
// Address Range: [[004f3ef0, 004f3f14]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0(CHeroPlaceholder * this_ptr)
// Globals:
//   TerminatedCString s_index_0062edb2
// Function calls:
//   core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   core_actor.cpp_serializeInteger_FUN_0040b7f0

#include "nocturne.h"

void __cdecl core_hero_cpp_CHeroPlaceholder_serialize_FUN_004f3ef0(CHeroPlaceholder *this_ptr)

{
  int in_stack_00000008;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(&this_ptr->base_actor);
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(in_stack_00000008 + 0x158),"index");
  return;
}


// Assembly code:
// 004f3ef0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_hero.cpp_CHeroPlaceholder_serialize_FUN_004f3ef0
//   XREF to: Stack[0x4] (READ)
// 004f3ef4: PUSH EDX
// 004f3ef5: CALL core_actor.cpp_CDemonActor_serialize_FUN_0040c1c0
//   XREF to: 0040c1c0 (UNCONDITIONAL_CALL)
// 004f3efa: ADD ESP,0x4
// 004f3efd: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 004f3f01: PUSH 0x62edb2
//   XREF to: 0062edb2 (DATA)
// 004f3f06: ADD EAX,0x158
// 004f3f0b: PUSH EAX
// 004f3f0c: CALL core_actor.cpp_serializeInteger_FUN_0040b7f0
//   XREF to: 0040b7f0 (UNCONDITIONAL_CALL)
// 004f3f11: ADD ESP,0x8
// 004f3f14: RET
