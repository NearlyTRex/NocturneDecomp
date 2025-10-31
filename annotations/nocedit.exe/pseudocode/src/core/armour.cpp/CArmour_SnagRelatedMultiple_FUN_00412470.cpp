// Name: core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470
// Address: 00412470
// Address Range: [[00412470, 004124c3]]
// Convention: __cdecl
// Signature: void core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470(CArmour * this_ptr)
// Globals:
//   TerminatedCString s_Model_00614e17
//   TerminatedCString s_State_00614e1d
//   TerminatedCString s_Fall_event_00614e23
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_armour_cpp_CArmour_SnagRelatedMultiple_FUN_00412470(CArmour *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 00412470: PUSH EBX
//   Label: core_armour.cpp_CArmour_SnagRelatedMultiple_FUN_00412470
// 00412471: PUSH ESI
// 00412472: PUSH EDI
// 00412473: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00412477: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0041247b: PUSH ESI
// 0041247c: PUSH EDI
// 0041247d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00412482: ADD ESP,0x8
// 00412485: PUSH 0x0
// 00412487: LEA EBX,[EDI + 0x158]
// 0041248d: PUSH EBX
// 0041248e: PUSH 0x614e17
//   XREF to: 00614e17 (DATA)
// 00412493: PUSH ESI
// 00412494: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00412499: ADD ESP,0x10
// 0041249c: PUSH EBX
// 0041249d: PUSH 0x614e1d
//   XREF to: 00614e1d (DATA)
// 004124a2: PUSH ESI
// 004124a3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004124a8: ADD ESP,0xc
// 004124ab: ADD EDI,0xbebc
// 004124b1: PUSH EDI
// 004124b2: PUSH 0x614e23
//   XREF to: 00614e23 (DATA)
// 004124b7: PUSH ESI
// 004124b8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004124bd: ADD ESP,0xc
// 004124c0: POP EDI
// 004124c1: POP ESI
// 004124c2: POP EBX
// 004124c3: RET
