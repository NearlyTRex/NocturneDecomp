// Name: core_curtain.cpp_FUN_0044b610
// Address: 0044b610
// Address Range: [[0044b610, 0044b79d]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_0044b610()
// Globals:
//   TerminatedCString s_Texture_00619d27
//   TerminatedCString s_Opacity_00619d2f
//   TerminatedCString s_Weight_00619d37
//   TerminatedCString s_Dampen_00619d3e
//   TerminatedCString s_Spring_00619d45
//   TerminatedCString s_Friction_00619d4c
//   TerminatedCString s_Gravity_00619d55
//   TerminatedCString s_Simulated_00619d5d
//   TerminatedCString s_Hit_floor_00619d67
//   TerminatedCString s_cinchedTop_00619d71
//   TerminatedCString s_cinchedBottom_00619d7c
//   TerminatedCString s_cinchedLeft_00619d8a
//   TerminatedCString s_cinchedRight_00619d96
//   TerminatedCString s_falling_00619da3
//   TerminatedCString s_Let_go_condition_00619dab
//   TerminatedCString s_Patch_size_00619dbc
//   TerminatedCString s_Block_virtual_director_00619dc7
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e290
//   core_actor.cpp_CActorPropertyList_FUN_0040e330
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_curtain.cpp_FUN_0044b610(undefined4 param_1, undefined4
   param_2) */

void core_curtain_cpp_FUN_0044b610(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}


// Assembly code:
// 0044b610: PUSH EBX
//   Label: core_curtain.cpp_FUN_0044b610
// 0044b611: PUSH ESI
// 0044b612: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0044b616: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0044b61a: PUSH ESI
// 0044b61b: PUSH EBX
// 0044b61c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 0044b621: ADD ESP,0x8
// 0044b624: PUSH 0x0
// 0044b626: PUSH 0x10
// 0044b628: LEA EAX,[EBX + 0x16c]
// 0044b62e: PUSH EAX
// 0044b62f: PUSH 0x619d27
//   XREF to: 00619d27 (DATA)
// 0044b634: PUSH ESI
// 0044b635: CALL core_actor.cpp_CActorPropertyList_FUN_0040e290
//   XREF to: 0040e290 (UNCONDITIONAL_CALL)
// 0044b63a: ADD ESP,0x14
// 0044b63d: PUSH 0x0
// 0044b63f: LEA EAX,[EBX + 0x17c]
// 0044b645: PUSH EAX
// 0044b646: PUSH 0x619d2f
//   XREF to: 00619d2f (DATA)
// 0044b64b: PUSH ESI
// 0044b64c: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 0044b651: ADD ESP,0x10
// 0044b654: PUSH 0x0
// 0044b656: LEA EAX,[EBX + 0x65b14]
// 0044b65c: PUSH EAX
// 0044b65d: PUSH 0x619d37
//   XREF to: 00619d37 (DATA)
// 0044b662: PUSH ESI
// 0044b663: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0044b668: ADD ESP,0x10
// 0044b66b: PUSH 0x0
// 0044b66d: LEA EAX,[EBX + 0x65b18]
// 0044b673: PUSH EAX
// 0044b674: PUSH 0x619d3e
//   XREF to: 00619d3e (DATA)
// 0044b679: PUSH ESI
// 0044b67a: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0044b67f: ADD ESP,0x10
// 0044b682: PUSH 0x0
// 0044b684: LEA EAX,[EBX + 0x65b1c]
// 0044b68a: PUSH EAX
// 0044b68b: PUSH 0x619d45
//   XREF to: 00619d45 (DATA)
// 0044b690: PUSH ESI
// 0044b691: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0044b696: ADD ESP,0x10
// 0044b699: PUSH 0x0
// 0044b69b: LEA EAX,[EBX + 0x65b20]
// 0044b6a1: PUSH EAX
// 0044b6a2: PUSH 0x619d4c
//   XREF to: 00619d4c (DATA)
// 0044b6a7: PUSH ESI
// 0044b6a8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0044b6ad: ADD ESP,0x10
// 0044b6b0: PUSH 0x0
// 0044b6b2: LEA EAX,[EBX + 0x65b24]
// 0044b6b8: PUSH EAX
// 0044b6b9: PUSH 0x619d55
//   XREF to: 00619d55 (DATA)
// 0044b6be: PUSH ESI
// 0044b6bf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0044b6c4: ADD ESP,0x10
// 0044b6c7: LEA EAX,[EBX + 0x1f8]
// 0044b6cd: PUSH EAX
// 0044b6ce: PUSH 0x619d5d
//   XREF to: 00619d5d (DATA)
// 0044b6d3: PUSH ESI
// 0044b6d4: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b6d9: ADD ESP,0xc
// 0044b6dc: LEA EAX,[EBX + 0x65b2c]
// 0044b6e2: PUSH EAX
// 0044b6e3: PUSH 0x619d67
//   XREF to: 00619d67 (DATA)
// 0044b6e8: PUSH ESI
// 0044b6e9: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b6ee: ADD ESP,0xc
// 0044b6f1: LEA EAX,[EBX + 0x180]
// 0044b6f7: PUSH EAX
// 0044b6f8: PUSH 0x619d71
//   XREF to: 00619d71 (DATA)
// 0044b6fd: PUSH ESI
// 0044b6fe: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b703: ADD ESP,0xc
// 0044b706: LEA EAX,[EBX + 0x18c]
// 0044b70c: PUSH EAX
// 0044b70d: PUSH 0x619d7c
//   XREF to: 00619d7c (DATA)
// 0044b712: PUSH ESI
// 0044b713: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b718: ADD ESP,0xc
// 0044b71b: LEA EAX,[EBX + 0x184]
// 0044b721: PUSH EAX
// 0044b722: PUSH 0x619d8a
//   XREF to: 00619d8a (DATA)
// 0044b727: PUSH ESI
// 0044b728: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b72d: ADD ESP,0xc
// 0044b730: LEA EAX,[EBX + 0x188]
// 0044b736: PUSH EAX
// 0044b737: PUSH 0x619d96
//   XREF to: 00619d96 (DATA)
// 0044b73c: PUSH ESI
// 0044b73d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b742: ADD ESP,0xc
// 0044b745: LEA EAX,[EBX + 0x190]
// 0044b74b: PUSH EAX
// 0044b74c: PUSH 0x619da3
//   XREF to: 00619da3 (DATA)
// 0044b751: PUSH ESI
// 0044b752: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b757: ADD ESP,0xc
// 0044b75a: LEA EAX,[EBX + 0x194]
// 0044b760: PUSH EAX
// 0044b761: PUSH 0x619dab
//   XREF to: 00619dab (DATA)
// 0044b766: PUSH ESI
// 0044b767: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 0044b76c: ADD ESP,0xc
// 0044b76f: PUSH 0x0
// 0044b771: LEA EAX,[EBX + 0x1fc]
// 0044b777: PUSH EAX
// 0044b778: PUSH 0x619dbc
//   XREF to: 00619dbc (DATA)
// 0044b77d: PUSH ESI
// 0044b77e: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 0044b783: ADD ESP,0x10
// 0044b786: ADD EBX,0x200
// 0044b78c: PUSH EBX
// 0044b78d: PUSH 0x619dc7
//   XREF to: 00619dc7 (DATA)
// 0044b792: PUSH ESI
// 0044b793: CALL core_actor.cpp_CActorPropertyList_FUN_0040e330
//   XREF to: 0040e330 (UNCONDITIONAL_CALL)
// 0044b798: ADD ESP,0xc
// 0044b79b: POP ESI
// 0044b79c: POP EBX
// 0044b79d: RET
