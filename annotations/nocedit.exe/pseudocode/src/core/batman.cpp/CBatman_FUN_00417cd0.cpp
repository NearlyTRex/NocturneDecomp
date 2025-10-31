// Name: core_batman.cpp_CBatman_FUN_00417cd0
// Address: 00417cd0
// Address Range: [[00417cd0, 00417d23]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_FUN_00417cd0(CBatman * this_ptr)
// Globals:
//   undefined4 s_Model_006159a5
//   TerminatedCString s_State_006159ab
//   TerminatedCString s_Fall_event_006159b1
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_batman_cpp_CBatman_FUN_00417cd0(CBatman *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 00417cd0: PUSH EBX
//   Label: core_batman.cpp_CBatman_FUN_00417cd0
// 00417cd1: PUSH ESI
// 00417cd2: PUSH EDI
// 00417cd3: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00417cd7: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00417cdb: PUSH ESI
// 00417cdc: PUSH EDI
// 00417cdd: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00417ce2: ADD ESP,0x8
// 00417ce5: PUSH 0x0
// 00417ce7: LEA EBX,[EDI + 0x158]
// 00417ced: PUSH EBX
// 00417cee: PUSH 0x6159a5
//   XREF to: 006159a5 (DATA)
// 00417cf3: PUSH ESI
// 00417cf4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00417cf9: ADD ESP,0x10
// 00417cfc: PUSH EBX
// 00417cfd: PUSH 0x6159ab
//   XREF to: 006159ab (DATA)
// 00417d02: PUSH ESI
// 00417d03: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00417d08: ADD ESP,0xc
// 00417d0b: ADD EDI,0xbebc
// 00417d11: PUSH EDI
// 00417d12: PUSH 0x6159b1
//   XREF to: 006159b1 (DATA)
// 00417d17: PUSH ESI
// 00417d18: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00417d1d: ADD ESP,0xc
// 00417d20: POP EDI
// 00417d21: POP ESI
// 00417d22: POP EBX
// 00417d23: RET
