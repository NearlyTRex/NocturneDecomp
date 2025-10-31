// Name: core_haystack.cpp_FUN_004f0c80
// Address: 004f0c80
// Address Range: [[004f0c80, 004f0e11]]
// Convention: unknown
// Signature: undefined core_haystack.cpp_FUN_004f0c80()
// Globals:
//   TerminatedCString s_Bip01_head_0062e807
//   TerminatedCString s_Bip01_L_Clavicle_0062e812
//   TerminatedCString s_Bip01_R_Clavicle_0062e823
//   TerminatedCString s_Bip01_L_UpperArm_0062e834
//   TerminatedCString s_Bip01_R_UpperArm_0062e845
//   TerminatedCString s_Bip01_L_ForeArm_0062e856
//   TerminatedCString s_Bip01_R_ForeArm_0062e866
//   TerminatedCString s_Bip01_L_Foot_0062e876
//   TerminatedCString s_Bip01_R_Foot_0062e883
//   TerminatedCString s_Bip01_L_Thigh_0062e890
//   TerminatedCString s_Bip01_R_Thigh_0062e89e
//   TerminatedCString s_Bip01_L_Calf_0062e8ac
//   TerminatedCString s_Bip01_R_Calf_0062e8b9
//   TerminatedCString s_Bip01_L_Hand_0062e8c6
//   TerminatedCString s_Bip01_R_Hand_0062e8d3
//   TerminatedCString s_Bip01_Spine2_0062e8e0
//   TerminatedCString s_Bip01_Spine_0062e8ed
//   undefined4 DAT_02db8700
//   undefined4 DAT_02db8704
//   undefined4 DAT_02db8708
//   undefined4 DAT_02db870c
//   undefined4 DAT_02db8710
//   undefined4 DAT_02db8714
//   undefined4 DAT_02db8718
//   undefined4 DAT_02db871c
//   undefined4 DAT_02db8720
//   undefined4 DAT_02db8724
//   undefined4 DAT_02db8728
//   undefined4 DAT_02db872c
//   undefined4 DAT_02db8730
//   undefined4 DAT_02db8734
//   undefined4 DAT_02db8738
//   undefined4 DAT_02db873c
//   undefined4 DAT_02db8740
// Function calls:
//   core_hero.cpp_CHero_FUN_004f2540
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_hero_haystack.cpp_FUN_004f0c80(undefined4 param_1) */

void core_haystack_cpp_FUN_004f0c80(void)

{
  CHero *in_stack_00000004;
  
  core_hero_cpp_CHero_FUN_004f2540(in_stack_00000004);
  core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  DAT_02db8700 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8704 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8708 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db870c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8710 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8714 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8718 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db871c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8720 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8724 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8728 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db872c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8730 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02db8734 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_02db8738 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db873c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_02db8740 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  in_stack_00000004 = in_stack_00000004 + 1;
  (in_stack_00000004->base_character).base_actor.actor_name[0] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[1] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[2] = '\0';
  (in_stack_00000004->base_character).base_actor.actor_name[3] = '\0';
  return;
}


// Assembly code:
// 004f0c80: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f0c80
// 004f0c81: PUSH ESI
// 004f0c82: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004f0c86: PUSH ESI
// 004f0c87: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 004f0c8c: ADD ESP,0x4
// 004f0c8f: LEA EAX,[ESI + 0x158]
// 004f0c95: PUSH EAX
// 004f0c96: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 004f0c9b: ADD ESP,0x4
// 004f0c9e: PUSH 0x1
// 004f0ca0: PUSH 0x62e807
//   XREF to: 0062e807 (DATA)
// 004f0ca5: PUSH EAX
// 004f0ca6: MOV EBX,EAX
// 004f0ca8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0cad: ADD ESP,0xc
// 004f0cb0: PUSH 0x1
// 004f0cb2: PUSH 0x62e812
//   XREF to: 0062e812 (DATA)
// 004f0cb7: PUSH EBX
// 004f0cb8: MOV [0x02db8700],EAX
//   XREF to: 02db8700 (WRITE)
// 004f0cbd: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0cc2: ADD ESP,0xc
// 004f0cc5: PUSH 0x1
// 004f0cc7: PUSH 0x62e823
//   XREF to: 0062e823 (DATA)
// 004f0ccc: PUSH EBX
// 004f0ccd: MOV [0x02db8704],EAX
//   XREF to: 02db8704 (WRITE)
// 004f0cd2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0cd7: ADD ESP,0xc
// 004f0cda: PUSH 0x1
// 004f0cdc: PUSH 0x62e834
//   XREF to: 0062e834 (DATA)
// 004f0ce1: PUSH EBX
// 004f0ce2: MOV [0x02db8708],EAX
//   XREF to: 02db8708 (WRITE)
// 004f0ce7: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0cec: ADD ESP,0xc
// 004f0cef: PUSH 0x1
// 004f0cf1: PUSH 0x62e845
//   XREF to: 0062e845 (DATA)
// 004f0cf6: PUSH EBX
// 004f0cf7: MOV [0x02db870c],EAX
//   XREF to: 02db870c (WRITE)
// 004f0cfc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d01: ADD ESP,0xc
// 004f0d04: PUSH 0x1
// 004f0d06: PUSH 0x62e856
//   XREF to: 0062e856 (DATA)
// 004f0d0b: PUSH EBX
// 004f0d0c: MOV [0x02db8710],EAX
//   XREF to: 02db8710 (WRITE)
// 004f0d11: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d16: ADD ESP,0xc
// 004f0d19: PUSH 0x1
// 004f0d1b: PUSH 0x62e866
//   XREF to: 0062e866 (DATA)
// 004f0d20: PUSH EBX
// 004f0d21: MOV [0x02db8714],EAX
//   XREF to: 02db8714 (WRITE)
// 004f0d26: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d2b: ADD ESP,0xc
// 004f0d2e: PUSH 0x1
// 004f0d30: PUSH 0x62e876
//   XREF to: 0062e876 (DATA)
// 004f0d35: PUSH EBX
// 004f0d36: MOV [0x02db8718],EAX
//   XREF to: 02db8718 (WRITE)
// 004f0d3b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d40: ADD ESP,0xc
// 004f0d43: PUSH 0x1
// 004f0d45: PUSH 0x62e883
//   XREF to: 0062e883 (DATA)
// 004f0d4a: PUSH EBX
// 004f0d4b: MOV [0x02db871c],EAX
//   XREF to: 02db871c (WRITE)
// 004f0d50: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d55: ADD ESP,0xc
// 004f0d58: MOV [0x02db8720],EAX
//   XREF to: 02db8720 (WRITE)
// 004f0d5d: PUSH 0x1
// 004f0d5f: PUSH 0x62e890
//   XREF to: 0062e890 (DATA)
// 004f0d64: PUSH EBX
// 004f0d65: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d6a: ADD ESP,0xc
// 004f0d6d: PUSH 0x1
// 004f0d6f: PUSH 0x62e89e
//   XREF to: 0062e89e (DATA)
// 004f0d74: PUSH EBX
// 004f0d75: MOV [0x02db8724],EAX
//   XREF to: 02db8724 (WRITE)
// 004f0d7a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d7f: ADD ESP,0xc
// 004f0d82: PUSH 0x1
// 004f0d84: PUSH 0x62e8ac
//   XREF to: 0062e8ac (DATA)
// 004f0d89: PUSH EBX
// 004f0d8a: MOV [0x02db8728],EAX
//   XREF to: 02db8728 (WRITE)
// 004f0d8f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0d94: ADD ESP,0xc
// 004f0d97: PUSH 0x1
// 004f0d99: PUSH 0x62e8b9
//   XREF to: 0062e8b9 (DATA)
// 004f0d9e: PUSH EBX
// 004f0d9f: MOV [0x02db872c],EAX
//   XREF to: 02db872c (WRITE)
// 004f0da4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0da9: ADD ESP,0xc
// 004f0dac: PUSH 0x1
// 004f0dae: PUSH 0x62e8c6
//   XREF to: 0062e8c6 (DATA)
// 004f0db3: PUSH EBX
// 004f0db4: MOV [0x02db8730],EAX
//   XREF to: 02db8730 (WRITE)
// 004f0db9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0dbe: ADD ESP,0xc
// 004f0dc1: PUSH 0x1
// 004f0dc3: PUSH 0x62e8d3
//   XREF to: 0062e8d3 (DATA)
// 004f0dc8: PUSH EBX
// 004f0dc9: MOV [0x02db8734],EAX
//   XREF to: 02db8734 (WRITE)
// 004f0dce: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0dd3: ADD ESP,0xc
// 004f0dd6: PUSH 0x1
// 004f0dd8: PUSH 0x62e8e0
//   XREF to: 0062e8e0 (DATA)
// 004f0ddd: PUSH EBX
// 004f0dde: MOV [0x02db8738],EAX
//   XREF to: 02db8738 (WRITE)
// 004f0de3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0de8: ADD ESP,0xc
// 004f0deb: PUSH 0x1
// 004f0ded: PUSH 0x62e8ed
//   XREF to: 0062e8ed (DATA)
// 004f0df2: PUSH EBX
// 004f0df3: MOV [0x02db873c],EAX
//   XREF to: 02db873c (WRITE)
// 004f0df8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004f0dfd: ADD ESP,0xc
// 004f0e00: MOV [0x02db8740],EAX
//   XREF to: 02db8740 (WRITE)
// 004f0e05: MOV dword ptr [ESI + 0x1fbd4],0x0
// 004f0e0f: POP ESI
// 004f0e10: POP EBX
// 004f0e11: RET
