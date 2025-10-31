// Name: core_mobster.cpp_FUN_00527b70
// Address: 00527b70
// Address Range: [[00527b70, 00527c29]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00527b70()
// Globals:
//   undefined4 s_Model_00639a1a
//   TerminatedCString s_State_00639a20
//   TerminatedCString s_CWayPoint_00639a26
//   TerminatedCString s_Our_post_00639a30
//   TerminatedCString s_CVehicle_00639a39
//   TerminatedCString s_Our_car_00639a42
//   TerminatedCString s_Left_side_of_car_00639a4a
//   TerminatedCString s_Hold_pos_sniper_00639a5b
//   TerminatedCString s_Hold_pos_cond_sniper_00639a6d
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e350
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   core_enemy.cpp_CEnemy_FUN_004aa170

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00527b70(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_00527b70(void)

{
  CEnemy *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_enemy_cpp_CEnemy_FUN_004aa170(in_stack_00000004);
  core_actor_cpp_CActorPropertyList_FUN_0040e4a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e4d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  return;
}


// Assembly code:
// 00527b70: PUSH EBX
//   Label: core_mobster.cpp_FUN_00527b70
// 00527b71: PUSH ESI
// 00527b72: PUSH EDI
// 00527b73: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00527b77: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00527b7b: PUSH EBX
// 00527b7c: PUSH ESI
// 00527b7d: CALL core_enemy.cpp_CEnemy_FUN_004aa170
//   XREF to: 004aa170 (UNCONDITIONAL_CALL)
// 00527b82: ADD ESP,0x8
// 00527b85: PUSH 0x0
// 00527b87: LEA EDI,[ESI + 0x158]
// 00527b8d: PUSH EDI
// 00527b8e: PUSH 0x639a1a
//   XREF to: 00639a1a (DATA)
// 00527b93: PUSH EBX
// 00527b94: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0
//   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
// 00527b99: ADD ESP,0x10
// 00527b9c: PUSH EDI
// 00527b9d: PUSH 0x639a20
//   XREF to: 00639a20 (DATA)
// 00527ba2: PUSH EBX
// 00527ba3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0
//   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
// 00527ba8: ADD ESP,0xc
// 00527bab: PUSH 0x0
// 00527bad: PUSH 0x639a26
//   XREF to: 00639a26 (DATA)
// 00527bb2: PUSH 0x1
// 00527bb4: LEA EDI,[ESI + 0xbedc]
// 00527bba: PUSH EDI
// 00527bbb: PUSH 0x639a30
//   XREF to: 00639a30 (DATA)
// 00527bc0: PUSH EBX
// 00527bc1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 00527bc6: ADD ESP,0x18
// 00527bc9: PUSH 0x0
// 00527bcb: PUSH 0x639a39
//   XREF to: 00639a39 (DATA)
// 00527bd0: PUSH 0x1
// 00527bd2: LEA EDI,[ESI + 0xbee0]
// 00527bd8: PUSH EDI
// 00527bd9: PUSH 0x639a42
//   XREF to: 00639a42 (DATA)
// 00527bde: PUSH EBX
// 00527bdf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e350
//   XREF to: 0040e350 (UNCONDITIONAL_CALL)
// 00527be4: ADD ESP,0x18
// 00527be7: LEA EDI,[ESI + 0xbee4]
// 00527bed: PUSH EDI
// 00527bee: PUSH 0x639a4a
//   XREF to: 00639a4a (DATA)
// 00527bf3: PUSH EBX
// 00527bf4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00527bf9: ADD ESP,0xc
// 00527bfc: LEA EDI,[ESI + 0xbee8]
// 00527c02: PUSH EDI
// 00527c03: PUSH 0x639a5b
//   XREF to: 00639a5b (DATA)
// 00527c08: PUSH EBX
// 00527c09: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 00527c0e: ADD ESP,0xc
// 00527c11: ADD ESI,0xbeec
// 00527c17: PUSH ESI
// 00527c18: PUSH 0x639a6d
//   XREF to: 00639a6d (DATA)
// 00527c1d: PUSH EBX
// 00527c1e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 00527c23: ADD ESP,0xc
// 00527c26: POP EDI
// 00527c27: POP ESI
// 00527c28: POP EBX
// 00527c29: RET
