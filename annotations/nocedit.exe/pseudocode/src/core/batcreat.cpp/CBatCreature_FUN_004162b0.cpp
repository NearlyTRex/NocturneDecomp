// Name: core_batcreat.cpp_CBatCreature_FUN_004162b0
// Address: 004162b0
// Address Range: [[004162b0, 004162ec]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_FUN_004162b0(CBatCreature * this_ptr)
// Globals:
//   TerminatedCString s_Model_006156b9
//   TerminatedCString s_State_006156bf
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_batcreat_cpp_CBatCreature_FUN_004162b0(CBatCreature *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  return;
}


// Assembly code:
// 004162b0: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_FUN_004162b0
// 004162b1: PUSH ESI
// 004162b2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004162b6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004162ba: PUSH ESI
// 004162bb: PUSH EBX
// 004162bc: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 004162c1: ADD ESP,0x8
// 004162c4: PUSH 0x0
// 004162c6: ADD EBX,0x158
// 004162cc: PUSH EBX
// 004162cd: PUSH 0x6156b9
//   XREF to: 006156b9 (DATA)
// 004162d2: PUSH ESI
// 004162d3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 004162d8: ADD ESP,0x10
// 004162db: PUSH EBX
// 004162dc: PUSH 0x6156bf
//   XREF to: 006156bf (DATA)
// 004162e1: PUSH ESI
// 004162e2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004162e7: ADD ESP,0xc
// 004162ea: POP ESI
// 004162eb: POP EBX
// 004162ec: RET
