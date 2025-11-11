// Name: core_spike.cpp_FUN_005b8e90
// Address: 005b8e90
// Address Range: [[005b8e90, 005b901f]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b8e90()
// Globals:
//   TerminatedCString s_Model_file_kfm_00652ecc
//   TerminatedCString s_Type_00652ef7
//   TerminatedCString s_State_00652f24
//   TerminatedCString s_Are_we_active_00652f2a
//   TerminatedCString s_Extend_distance_00652f38
//   TerminatedCString s_Start_cond_00652f48
//   TerminatedCString s_Stop_cond_00652f53
//   TerminatedCString s_Extend_cond_00652f5d
//   TerminatedCString s_Retract_cond_00652f69
//   TerminatedCString s_Extend_time_00652f76
//   TerminatedCString s_Retract_time_00652f82
//   TerminatedCString s_Extend_sound_00652f8f
//   TerminatedCString s_Retract_sound_00652f9c
//   TerminatedCString s_Period_00652faa
//   TerminatedCString s_Param_00652fb1
//   TerminatedCString s_DamageStrength_00652fb7
//   void* PTR_s_Periodic_00684120 = 00652ede
//   void* PTR_s_Retracted_00684138 = 00652efc
// Function calls:
//   core_actor.cpp_CActorPropertyList_FUN_0040e160
//   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   core_actor.cpp_CActorPropertyList_FUN_0040e460
//   core_actor.cpp_CActorPropertyList_FUN_0040e640
//   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b8e90(undefined4 param_1, undefined4 param_2)
    */

void core_spike_cpp_FUN_005b8e90(void)

{
  CDemonActor *in_stack_00000004;
  CActorPropertyList *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(in_stack_00000004,in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e3b0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1e0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  if (in_stack_00000004[2].location.position.y == 2.8026e-45) {
    core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  }
  else {
    core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  }
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e2d0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e160(in_stack_00000008);
  return;
}


// Assembly code:
// 005b8e90: PUSH EBX
//   Label: core_spike.cpp_FUN_005b8e90
// 005b8e91: PUSH ESI
// 005b8e92: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005b8e96: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005b8e9a: PUSH ESI
// 005b8e9b: PUSH EBX
// 005b8e9c: CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
//   XREF to: 0040d290 (UNCONDITIONAL_CALL)
// 005b8ea1: ADD ESP,0x8
// 005b8ea4: PUSH 0x0
// 005b8ea6: LEA EAX,[EBX + 0x158]
// 005b8eac: PUSH EAX
// 005b8ead: PUSH 0x652ecc
//   XREF to: 00652ecc (DATA)
// 005b8eb2: PUSH ESI
// 005b8eb3: CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0
//   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)
// 005b8eb8: ADD ESP,0x10
// 005b8ebb: LEA EAX,[EBX + 0x2d4]
// 005b8ec1: PUSH EAX
// 005b8ec2: PUSH 0x684120
//   XREF to: 00684120 (DATA)
// 005b8ec7: PUSH 0x3
// 005b8ec9: PUSH 0x652ef7
//   XREF to: 00652ef7 (DATA)
// 005b8ece: PUSH ESI
// 005b8ecf: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005b8ed4: ADD ESP,0x14
// 005b8ed7: LEA EAX,[EBX + 0x2d8]
// 005b8edd: PUSH EAX
// 005b8ede: PUSH 0x684138
//   XREF to: 00684138 (DATA)
// 005b8ee3: PUSH 0x4
// 005b8ee5: PUSH 0x652f24
//   XREF to: 00652f24 (DATA)
// 005b8eea: PUSH ESI
// 005b8eeb: CALL core_actor.cpp_CActorPropertyList_FUN_0040e640
//   XREF to: 0040e640 (UNCONDITIONAL_CALL)
// 005b8ef0: ADD ESP,0x14
// 005b8ef3: PUSH 0x0
// 005b8ef5: LEA EAX,[EBX + 0x2dc]
// 005b8efb: PUSH EAX
// 005b8efc: PUSH 0x652f2a
//   XREF to: 00652f2a (DATA)
// 005b8f01: PUSH ESI
// 005b8f02: CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0
//   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)
// 005b8f07: ADD ESP,0x10
// 005b8f0a: PUSH 0x0
// 005b8f0c: LEA EAX,[EBX + 0x2ec]
// 005b8f12: PUSH EAX
// 005b8f13: PUSH 0x652f38
//   XREF to: 00652f38 (DATA)
// 005b8f18: PUSH ESI
// 005b8f19: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005b8f1e: MOV EDX,dword ptr [EBX + 0x2d4]
// 005b8f24: ADD ESP,0x10
// 005b8f27: CMP EDX,0x2
// 005b8f2a: JZ 0x005b8ffa
//   XREF to: 005b8ffa (CONDITIONAL_JUMP)
// 005b8f30: LEA EAX,[EBX + 0x2f0]
// 005b8f36: PUSH EAX
// 005b8f37: PUSH 0x652f48
//   XREF to: 00652f48 (DATA)
// 005b8f3c: PUSH ESI
// 005b8f3d: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005b8f42: ADD ESP,0xc
// 005b8f45: LEA EAX,[EBX + 0x354]
// 005b8f4b: PUSH EAX
// 005b8f4c: PUSH 0x652f53
//   XREF to: 00652f53 (DATA)
// 005b8f51: PUSH ESI
//   Label: LAB_005b8f51
// 005b8f52: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005b8f57: ADD ESP,0xc
// 005b8f5a: PUSH 0x0
// 005b8f5c: LEA EAX,[EBX + 0x480]
// 005b8f62: PUSH EAX
// 005b8f63: PUSH 0x652f76
//   XREF to: 00652f76 (DATA)
// 005b8f68: PUSH ESI
// 005b8f69: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005b8f6e: ADD ESP,0x10
// 005b8f71: PUSH 0x0
// 005b8f73: LEA EAX,[EBX + 0x484]
// 005b8f79: PUSH EAX
// 005b8f7a: PUSH 0x652f82
//   XREF to: 00652f82 (DATA)
// 005b8f7f: PUSH ESI
// 005b8f80: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005b8f85: ADD ESP,0x10
// 005b8f88: LEA EAX,[EBX + 0x48c]
// 005b8f8e: PUSH EAX
// 005b8f8f: PUSH 0x652f8f
//   XREF to: 00652f8f (DATA)
// 005b8f94: PUSH ESI
// 005b8f95: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 005b8f9a: ADD ESP,0xc
// 005b8f9d: LEA EAX,[EBX + 0x4f0]
// 005b8fa3: PUSH EAX
// 005b8fa4: PUSH 0x652f9c
//   XREF to: 00652f9c (DATA)
// 005b8fa9: PUSH ESI
// 005b8faa: CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0
//   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)
// 005b8faf: ADD ESP,0xc
// 005b8fb2: PUSH 0x0
// 005b8fb4: LEA EAX,[EBX + 0x554]
// 005b8fba: PUSH EAX
// 005b8fbb: PUSH 0x652faa
//   XREF to: 00652faa (DATA)
// 005b8fc0: PUSH ESI
// 005b8fc1: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005b8fc6: ADD ESP,0x10
// 005b8fc9: PUSH 0x0
// 005b8fcb: LEA EAX,[EBX + 0x55c]
// 005b8fd1: PUSH EAX
// 005b8fd2: PUSH 0x652fb1
//   XREF to: 00652fb1 (DATA)
// 005b8fd7: PUSH ESI
// 005b8fd8: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005b8fdd: ADD ESP,0x10
// 005b8fe0: PUSH 0x0
// 005b8fe2: ADD EBX,0x558
// 005b8fe8: PUSH EBX
// 005b8fe9: PUSH 0x652fb7
//   XREF to: 00652fb7 (DATA)
// 005b8fee: PUSH ESI
// 005b8fef: CALL core_actor.cpp_CActorPropertyList_FUN_0040e160
//   XREF to: 0040e160 (UNCONDITIONAL_CALL)
// 005b8ff4: ADD ESP,0x10
// 005b8ff7: POP ESI
// 005b8ff8: POP EBX
// 005b8ff9: RET
// 005b8ffa: LEA EAX,[EBX + 0x3b8]
//   Label: LAB_005b8ffa
// 005b9000: PUSH EAX
// 005b9001: PUSH 0x652f5d
//   XREF to: 00652f5d (DATA)
// 005b9006: PUSH ESI
// 005b9007: CALL core_actor.cpp_CActorPropertyList_FUN_0040e460
//   XREF to: 0040e460 (UNCONDITIONAL_CALL)
// 005b900c: ADD ESP,0xc
// 005b900f: LEA EAX,[EBX + 0x41c]
// 005b9015: PUSH EAX
// 005b9016: PUSH 0x652f69
//   XREF to: 00652f69 (DATA)
// 005b901b: JMP 0x005b8f51
//   XREF to: 005b8f51 (UNCONDITIONAL_JUMP)
