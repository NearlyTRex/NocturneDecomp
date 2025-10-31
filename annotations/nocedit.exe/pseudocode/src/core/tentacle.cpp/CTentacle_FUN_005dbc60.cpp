// Name: core_tentacle.cpp_CTentacle_FUN_005dbc60
// Address: 005dbc60
// Address Range: [[005dbc60, 005dbcbc]]
// Convention: __cdecl
// Signature: void core_tentacle.cpp_CTentacle_FUN_005dbc60(CTentacle * this_ptr)
// Globals:
//   TerminatedCString s_Model_00654e99
//   TerminatedCString s_State_00654e9f
//   TerminatedCString s_CGrave_00654ea5
//   TerminatedCString s_Grave_actor_00654eac
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_tentacle_cpp_CTentacle_FUN_005dbc60(CTentacle *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}


// Assembly code:
// 005dbc60: PUSH EBX
//   Label: core_tentacle.cpp_CTentacle_FUN_005dbc60
// 005dbc61: PUSH ESI
// 005dbc62: PUSH EDI
// 005dbc63: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005dbc67: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005dbc6b: PUSH ESI
// 005dbc6c: PUSH EDI
// 005dbc6d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005dbc72: ADD ESP,0x8
// 005dbc75: PUSH 0x0
// 005dbc77: LEA EBX,[EDI + 0x158]
// 005dbc7d: PUSH EBX
// 005dbc7e: PUSH 0x654e99
//   XREF to: 00654e99 (DATA)
// 005dbc83: PUSH ESI
// 005dbc84: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 005dbc89: ADD ESP,0x10
// 005dbc8c: PUSH EBX
// 005dbc8d: PUSH 0x654e9f
//   XREF to: 00654e9f (DATA)
// 005dbc92: PUSH ESI
// 005dbc93: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 005dbc98: ADD ESP,0xc
// 005dbc9b: PUSH 0x0
// 005dbc9d: PUSH 0x654ea5
//   XREF to: 00654ea5 (DATA)
// 005dbca2: PUSH 0x0
// 005dbca4: ADD EDI,0xbec4
// 005dbcaa: PUSH EDI
// 005dbcab: PUSH 0x654eac
//   XREF to: 00654eac (DATA)
// 005dbcb0: PUSH ESI
// 005dbcb1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005dbcb6: ADD ESP,0x18
// 005dbcb9: POP EDI
// 005dbcba: POP ESI
// 005dbcbb: POP EBX
// 005dbcbc: RET
