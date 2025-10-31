// Name: core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0
// Address: 004e5af0
// Address Range: [[004e5af0, 004e5b91]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0()
// Globals:
//   TerminatedCString s_Model_0062da47
//   TerminatedCString s_State_0062da4d
//   TerminatedCString s_Stone_red_0062da53
//   TerminatedCString s_Stone_green_0062da5d
//   TerminatedCString s_Stone_blue_0062da69
//   TerminatedCString s_CWayPoint_0062da74
//   TerminatedCString s_Home_waypoint_0062da7e
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_getPropertyList(CGargoyle* pGargoyle,
   undefined4 pActorPropertyList) */

void core_gargoyle_cpp_CGargoyle_getPropertyList_FUN_004e5af0(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}


// Assembly code:
// 004e5af0: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_getPropertyList_FUN_004e5af0
// 004e5af1: PUSH ESI
// 004e5af2: PUSH EDI
// 004e5af3: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004e5af7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004e5afb: PUSH EBX
// 004e5afc: PUSH ESI
// 004e5afd: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 004e5b02: ADD ESP,0x8
// 004e5b05: PUSH 0x0
// 004e5b07: LEA EDI,[ESI + 0x158]
// 004e5b0d: PUSH EDI
// 004e5b0e: PUSH 0x62da47
//   XREF to: 0062da47 (DATA)
// 004e5b13: PUSH EBX
// 004e5b14: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 004e5b19: ADD ESP,0x10
// 004e5b1c: PUSH EDI
// 004e5b1d: PUSH 0x62da4d
//   XREF to: 0062da4d (DATA)
// 004e5b22: PUSH EBX
// 004e5b23: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 004e5b28: ADD ESP,0xc
// 004e5b2b: PUSH 0x0
// 004e5b2d: LEA EDI,[ESI + 0xbeec]
// 004e5b33: PUSH EDI
// 004e5b34: PUSH 0x62da53
//   XREF to: 0062da53 (DATA)
// 004e5b39: PUSH EBX
// 004e5b3a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004e5b3f: ADD ESP,0x10
// 004e5b42: PUSH 0x0
// 004e5b44: LEA EDI,[ESI + 0xbef0]
// 004e5b4a: PUSH EDI
// 004e5b4b: PUSH 0x62da5d
//   XREF to: 0062da5d (DATA)
// 004e5b50: PUSH EBX
// 004e5b51: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004e5b56: ADD ESP,0x10
// 004e5b59: PUSH 0x0
// 004e5b5b: LEA EDI,[ESI + 0xbef4]
// 004e5b61: PUSH EDI
// 004e5b62: PUSH 0x62da69
//   XREF to: 0062da69 (DATA)
// 004e5b67: PUSH EBX
// 004e5b68: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 004e5b6d: ADD ESP,0x10
// 004e5b70: PUSH 0x0
// 004e5b72: PUSH 0x62da74
//   XREF to: 0062da74 (DATA)
// 004e5b77: PUSH 0x1
// 004e5b79: ADD ESI,0xbef8
// 004e5b7f: PUSH ESI
// 004e5b80: PUSH 0x62da7e
//   XREF to: 0062da7e (DATA)
// 004e5b85: PUSH EBX
// 004e5b86: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 004e5b8b: ADD ESP,0x18
// 004e5b8e: POP EDI
// 004e5b8f: POP ESI
// 004e5b90: POP EBX
// 004e5b91: RET
