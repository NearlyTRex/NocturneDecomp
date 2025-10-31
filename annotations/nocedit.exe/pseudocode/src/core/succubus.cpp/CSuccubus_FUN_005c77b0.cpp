// Name: core_succubus.cpp_CSuccubus_FUN_005c77b0
// Address: 005c77b0
// Address Range: [[005c77b0, 005c77ec]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_FUN_005c77b0(CSuccubus * this_ptr)
// Globals:
//   TerminatedCString s_Model_006541d6
//   TerminatedCString s_State_006541dc
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_succubus_cpp_CSuccubus_FUN_005c77b0(CSuccubus *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 005c77b0: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_FUN_005c77b0
// 005c77b1: PUSH ESI
// 005c77b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005c77b6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005c77ba: PUSH ESI
// 005c77bb: PUSH EBX
// 005c77bc: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005c77c1: ADD ESP,0x8
// 005c77c4: PUSH 0x0
// 005c77c6: ADD EBX,0x158
// 005c77cc: PUSH EBX
// 005c77cd: PUSH 0x6541d6
//   XREF to: 006541d6 (DATA)
// 005c77d2: PUSH ESI
// 005c77d3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 005c77d8: ADD ESP,0x10
// 005c77db: PUSH EBX
// 005c77dc: PUSH 0x6541dc
//   XREF to: 006541dc (DATA)
// 005c77e1: PUSH ESI
// 005c77e2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 005c77e7: ADD ESP,0xc
// 005c77ea: POP ESI
// 005c77eb: POP EBX
// 005c77ec: RET
