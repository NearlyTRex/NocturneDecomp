// Name: core_hostage.cpp_FUN_004f69c0
// Address: 004f69c0
// Address Range: [[004f69c0, 004f6b2d]]
// Convention: unknown
// Signature: undefined core_hostage.cpp_FUN_004f69c0()
// Globals:
//   TerminatedCString s_CWayPoint_0062f22d
//   TerminatedCString s_goalWayPoint_0062f237
//   TerminatedCString s_CDemonActor_0062f244
//   TerminatedCString s_sitDownWayPoint_0062f250
//   TerminatedCString s_rescueDistance_0062f260
//   TerminatedCString s_rescueCondition_0062f26f
//   TerminatedCString s_heroFoundMeEvent_0062f27f
//   TerminatedCString s_heroLeftMeEvent_0062f290
//   TerminatedCString s_heroCameBackEvent_0062f2a0
//   TerminatedCString s_getEatenEvent_0062f2b2
//   TerminatedCString s_goingToSitDownEvent_0062f2c0
//   TerminatedCString s_sitDownEvent_0062f2d4
//   TerminatedCString s_rescueEventName_persiste_0062f2e1
//   TerminatedCString s_noShadowsWhenSaved_0062f2fe
//   TerminatedCString s_descriptiveName_0062f311
//   TerminatedCString s_Damage_sound_0062f321
//   TerminatedCString s_Die_sound_0062f32e
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e480
//   core_npc.cpp_CNPC_FUN_00544e40

#include "nocturne.h"

/* Signature: undefined1 actors_npc_hostage.cpp_FUN_004f69c0(undefined4 param_1, undefined4 param_2)
    */

void core_hostage_cpp_FUN_004f69c0(void)

{
  CNPC *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_npc_cpp_CNPC_FUN_00544e40(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e480(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  return;
}


// Assembly code:
// 004f69c0: PUSH EBX
//   Label: core_hostage.cpp_FUN_004f69c0
// 004f69c1: PUSH ESI
// 004f69c2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f69c6: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004f69ca: PUSH ESI
// 004f69cb: PUSH EBX
// 004f69cc: CALL core_npc.cpp_CNPC_FUN_00544e40
//   XREF to: 00544e40 (UNCONDITIONAL_CALL)
// 004f69d1: ADD ESP,0x8
// 004f69d4: PUSH 0x0
// 004f69d6: PUSH 0x62f22d
//   XREF to: 0062f22d (DATA)
// 004f69db: PUSH 0x1
// 004f69dd: LEA EAX,[EBX + 0x1fac0]
// 004f69e3: PUSH EAX
// 004f69e4: PUSH 0x62f237
//   XREF to: 0062f237 (DATA)
// 004f69e9: PUSH ESI
// 004f69ea: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 004f69ef: ADD ESP,0x18
// 004f69f2: PUSH 0x0
// 004f69f4: PUSH 0x62f244
//   XREF to: 0062f244 (DATA)
// 004f69f9: PUSH 0x1
// 004f69fb: LEA EAX,[EBX + 0x1fac4]
// 004f6a01: PUSH EAX
// 004f6a02: PUSH 0x62f250
//   XREF to: 0062f250 (DATA)
// 004f6a07: PUSH ESI
// 004f6a08: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 004f6a0d: ADD ESP,0x18
// 004f6a10: PUSH 0x0
// 004f6a12: LEA EAX,[EBX + 0x1f708]
// 004f6a18: PUSH EAX
// 004f6a19: PUSH 0x62f260
//   XREF to: 0062f260 (DATA)
// 004f6a1e: PUSH ESI
// 004f6a1f: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 004f6a24: ADD ESP,0x10
// 004f6a27: LEA EAX,[EBX + 0x1f70c]
// 004f6a2d: PUSH EAX
// 004f6a2e: PUSH 0x62f26f
//   XREF to: 0062f26f (DATA)
// 004f6a33: PUSH ESI
// 004f6a34: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 004f6a39: ADD ESP,0xc
// 004f6a3c: LEA EAX,[EBX + 0x1f790]
// 004f6a42: PUSH EAX
// 004f6a43: PUSH 0x62f27f
//   XREF to: 0062f27f (DATA)
// 004f6a48: PUSH ESI
// 004f6a49: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004f6a4e: ADD ESP,0xc
// 004f6a51: LEA EAX,[EBX + 0x1f7f4]
// 004f6a57: PUSH EAX
// 004f6a58: PUSH 0x62f290
//   XREF to: 0062f290 (DATA)
// 004f6a5d: PUSH ESI
// 004f6a5e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004f6a63: ADD ESP,0xc
// 004f6a66: LEA EAX,[EBX + 0x1f858]
// 004f6a6c: PUSH EAX
// 004f6a6d: PUSH 0x62f2a0
//   XREF to: 0062f2a0 (DATA)
// 004f6a72: PUSH ESI
// 004f6a73: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004f6a78: ADD ESP,0xc
// 004f6a7b: LEA EAX,[EBX + 0x1f8bc]
// 004f6a81: PUSH EAX
// 004f6a82: PUSH 0x62f2b2
//   XREF to: 0062f2b2 (DATA)
// 004f6a87: PUSH ESI
// 004f6a88: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004f6a8d: ADD ESP,0xc
// 004f6a90: LEA EAX,[EBX + 0x1f920]
// 004f6a96: PUSH EAX
// 004f6a97: PUSH 0x62f2c0
//   XREF to: 0062f2c0 (DATA)
// 004f6a9c: PUSH ESI
// 004f6a9d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004f6aa2: ADD ESP,0xc
// 004f6aa5: LEA EAX,[EBX + 0x1f984]
// 004f6aab: PUSH EAX
// 004f6aac: PUSH 0x62f2d4
//   XREF to: 0062f2d4 (DATA)
// 004f6ab1: PUSH ESI
// 004f6ab2: CALL core_actor.cpp_CActorPropertyList_FUN_0040e480
//   XREF to: 0040e480 (UNCONDITIONAL_CALL)
// 004f6ab7: ADD ESP,0xc
// 004f6aba: PUSH 0x0
// 004f6abc: PUSH 0x20
// 004f6abe: LEA EAX,[EBX + 0x1f770]
// 004f6ac4: PUSH EAX
// 004f6ac5: PUSH 0x62f2e1
//   XREF to: 0062f2e1 (DATA)
// 004f6aca: PUSH ESI
// 004f6acb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004f6ad0: ADD ESP,0x14
// 004f6ad3: LEA EAX,[EBX + 0x1fadc]
// 004f6ad9: PUSH EAX
// 004f6ada: PUSH 0x62f2fe
//   XREF to: 0062f2fe (DATA)
// 004f6adf: PUSH ESI
// 004f6ae0: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 004f6ae5: ADD ESP,0xc
// 004f6ae8: PUSH 0x0
// 004f6aea: PUSH 0x64
// 004f6aec: LEA EAX,[EBX + 0x2448]
// 004f6af2: PUSH EAX
// 004f6af3: PUSH 0x62f311
//   XREF to: 0062f311 (DATA)
// 004f6af8: PUSH ESI
// 004f6af9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 004f6afe: ADD ESP,0x14
// 004f6b01: LEA EAX,[EBX + 0x1f9e8]
// 004f6b07: PUSH EAX
// 004f6b08: PUSH 0x62f321
//   XREF to: 0062f321 (DATA)
// 004f6b0d: PUSH ESI
// 004f6b0e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 004f6b13: ADD ESP,0xc
// 004f6b16: ADD EBX,0x1fa4c
// 004f6b1c: PUSH EBX
// 004f6b1d: PUSH 0x62f32e
//   XREF to: 0062f32e (DATA)
// 004f6b22: PUSH ESI
// 004f6b23: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 004f6b28: ADD ESP,0xc
// 004f6b2b: POP ESI
// 004f6b2c: POP EBX
// 004f6b2d: RET
