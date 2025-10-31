// Name: core_vampboss.cpp_CVampireBoss_FUN_005e7650
// Address: 005e7650
// Address Range: [[005e7650, 005e76f3]]
// Convention: __cdecl
// Signature: void core_vampboss.cpp_CVampireBoss_FUN_005e7650(CVampireBoss * this_ptr)
// Globals:
//   TerminatedCString s_Model_state_00656d4e
//   TerminatedCString s_CWayPoint_00656d5a
//   TerminatedCString s_Waypoint_0_00656d64
//   TerminatedCString s_CWayPoint_00656d6f
//   TerminatedCString s_Waypoint_1_00656d79
//   TerminatedCString s_CWayPoint_00656d84
//   TerminatedCString s_Waypoint_2_00656d8e
//   TerminatedCString s_CWayPoint_00656d99
//   TerminatedCString s_Waypoint_3_00656da3
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

void __cdecl core_vampboss_cpp_CVampireBoss_FUN_005e7650(CVampireBoss *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  undefined4 uStack00000010;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(&this_ptr->base_enemy);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  uStack00000010 = 0;
  pcStack0000000c = "CWayPoint";
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  return;
}


// Assembly code:
// 005e7650: PUSH EBX
//   Label: core_vampboss.cpp_CVampireBoss_FUN_005e7650
// 005e7651: PUSH ESI
// 005e7652: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e7656: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e765a: PUSH ESI
// 005e765b: PUSH EBX
// 005e765c: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 005e7661: ADD ESP,0x8
// 005e7664: LEA EAX,[EBX + 0x158]
// 005e766a: PUSH EAX
// 005e766b: PUSH 0x656d4e
//   XREF to: 00656d4e (DATA)
// 005e7670: PUSH ESI
// 005e7671: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 005e7676: ADD ESP,0xc
// 005e7679: PUSH 0x0
// 005e767b: PUSH 0x656d5a
//   XREF to: 00656d5a (DATA)
// 005e7680: PUSH 0x1
// 005e7682: LEA EAX,[EBX + 0xce90c]
// 005e7688: PUSH EAX
// 005e7689: PUSH 0x656d64
//   XREF to: 00656d64 (DATA)
// 005e768e: PUSH ESI
// 005e768f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e7694: ADD ESP,0x18
// 005e7697: PUSH 0x0
// 005e7699: PUSH 0x656d6f
//   XREF to: 00656d6f (DATA)
// 005e769e: PUSH 0x1
// 005e76a0: LEA EAX,[EBX + 0xce910]
// 005e76a6: PUSH EAX
// 005e76a7: PUSH 0x656d79
//   XREF to: 00656d79 (DATA)
// 005e76ac: PUSH ESI
// 005e76ad: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e76b2: ADD ESP,0x18
// 005e76b5: PUSH 0x0
// 005e76b7: PUSH 0x656d84
//   XREF to: 00656d84 (DATA)
// 005e76bc: PUSH 0x1
// 005e76be: LEA EAX,[EBX + 0xce914]
// 005e76c4: PUSH EAX
// 005e76c5: PUSH 0x656d8e
//   XREF to: 00656d8e (DATA)
// 005e76ca: PUSH ESI
// 005e76cb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e76d0: ADD ESP,0x18
// 005e76d3: PUSH 0x0
// 005e76d5: PUSH 0x656d99
//   XREF to: 00656d99 (DATA)
// 005e76da: PUSH 0x1
// 005e76dc: ADD EBX,0xce918
// 005e76e2: PUSH EBX
// 005e76e3: PUSH 0x656da3
//   XREF to: 00656da3 (DATA)
// 005e76e8: PUSH ESI
// 005e76e9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 005e76ee: ADD ESP,0x18
// 005e76f1: POP ESI
// 005e76f2: POP EBX
// 005e76f3: RET
