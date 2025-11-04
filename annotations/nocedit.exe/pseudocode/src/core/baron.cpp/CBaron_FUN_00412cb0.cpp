// Name: core_baron.cpp_CBaron_FUN_00412cb0
// Address: 00412cb0
// Address Range: [[00412cb0, 00412e64]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaron_FUN_00412cb0(CBaron * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_head_00614efa
//   TerminatedCString s_Bip01_L_Clavicle_00614f05
//   TerminatedCString s_Bip01_R_Clavicle_00614f16
//   TerminatedCString s_Bip01_L_UpperArm_00614f27
//   TerminatedCString s_Bip01_R_UpperArm_00614f38
//   TerminatedCString s_Bip01_L_ForeArm_00614f49
//   TerminatedCString s_Bip01_R_ForeArm_00614f59
//   TerminatedCString s_Bip01_L_Foot_00614f69
//   TerminatedCString s_Bip01_R_Foot_00614f76
//   TerminatedCString s_Bip01_L_Thigh_00614f83
//   TerminatedCString s_Bip01_R_Thigh_00614f91
//   TerminatedCString s_Bip01_L_Calf_00614f9f
//   TerminatedCString s_Bip01_R_Calf_00614fac
//   TerminatedCString s_Bip01_L_Hand_00614fb9
//   TerminatedCString s_Bip01_R_Hand_00614fc6
//   TerminatedCString s_Bip01_Spine2_00614fd3
//   TerminatedCString s_Bip01_Spine_00614fe0
//   TerminatedCString s_Bip01_Spine1_00614fec
//   undefined4 DAT_00822498
//   undefined4 DAT_0082249c
//   undefined4 DAT_008224a0
//   undefined4 DAT_008224a4
//   undefined4 DAT_008224a8
//   undefined4 DAT_008224ac
//   undefined4 DAT_008224b0
//   undefined4 DAT_008224b4
//   undefined4 DAT_008224b8
//   undefined4 DAT_008224bc
//   undefined4 DAT_008224c0
//   undefined4 DAT_008224c4
//   undefined4 DAT_008224c8
//   undefined4 DAT_008224cc
//   undefined4 DAT_008224d0
//   undefined4 DAT_008224d4
//   undefined4 DAT_008224d8
//   CKeyFramedModelInstance g_CKeyFramedModelInstanceInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_hero.cpp_CHero_FUN_004f2540
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_baron_cpp_CBaron_FUN_00412cb0(CBaron *this_ptr)

{
  CSkeleton *this_ptr_00;
  int iVar1;
  undefined4 uStack00000040;
  
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->field0_0x0);
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                          (&(this_ptr->field0_0x0).base_character.model);
  DAT_00822498 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 head");
  _DAT_0082249c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Clavicle");
  _DAT_008224a0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Clavicle");
  _DAT_008224a4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L UpperArm");
  _DAT_008224a8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R UpperArm");
  _DAT_008224ac =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L ForeArm");
  _DAT_008224b0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R ForeArm");
  _DAT_008224b4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Foot");
  _DAT_008224b8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Foot");
  _DAT_008224bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Thigh");
  _DAT_008224c0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Thigh");
  _DAT_008224c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 L Calf");
  _DAT_008224c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 R Calf");
  DAT_008224cc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 L Hand");
  DAT_008224d0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_00,"Bip01 R Hand");
  _DAT_008224d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine2");
  _DAT_008224d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine");
  uStack00000040 = 1;
  iVar1 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_00,"Bip01 Spine1");
  this_ptr->field1_0x1fbd4[0xd8] = '\0';
  this_ptr->field1_0x1fbd4[0xd9] = '\0';
  this_ptr->field1_0x1fbd4[0xda] = '\0';
  this_ptr->field1_0x1fbd4[0xdb] = '\0';
  *(int *)((this_ptr->field0_0x0).base_character.field11_0x25a0 + 0x24) = iVar1;
  uStack00000040 = 0x412e5f;
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&g_CKeyFramedModelInstanceInstance);
  return;
}


// Assembly code:
// 00412cb0: PUSH EBX
//   Label: core_baron.cpp_CBaron_FUN_00412cb0
// 00412cb1: PUSH ESI
// 00412cb2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00412cb6: PUSH ESI
// 00412cb7: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 00412cbc: ADD ESP,0x4
// 00412cbf: LEA EAX,[ESI + 0x158]
// 00412cc5: PUSH EAX
// 00412cc6: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00412ccb: ADD ESP,0x4
// 00412cce: PUSH 0x1
// 00412cd0: PUSH 0x614efa
//   XREF to: 00614efa (DATA)
// 00412cd5: PUSH EAX
// 00412cd6: MOV EBX,EAX
// 00412cd8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412cdd: ADD ESP,0xc
// 00412ce0: PUSH 0x1
// 00412ce2: PUSH 0x614f05
//   XREF to: 00614f05 (DATA)
// 00412ce7: PUSH EBX
// 00412ce8: MOV [0x00822498],EAX
//   XREF to: 00822498 (WRITE)
// 00412ced: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412cf2: ADD ESP,0xc
// 00412cf5: PUSH 0x1
// 00412cf7: PUSH 0x614f16
//   XREF to: 00614f16 (DATA)
// 00412cfc: PUSH EBX
// 00412cfd: MOV [0x0082249c],EAX
//   XREF to: 0082249c (WRITE)
// 00412d02: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d07: ADD ESP,0xc
// 00412d0a: PUSH 0x1
// 00412d0c: PUSH 0x614f27
//   XREF to: 00614f27 (DATA)
// 00412d11: PUSH EBX
// 00412d12: MOV [0x008224a0],EAX
//   XREF to: 008224a0 (WRITE)
// 00412d17: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d1c: ADD ESP,0xc
// 00412d1f: PUSH 0x1
// 00412d21: PUSH 0x614f38
//   XREF to: 00614f38 (DATA)
// 00412d26: PUSH EBX
// 00412d27: MOV [0x008224a4],EAX
//   XREF to: 008224a4 (WRITE)
// 00412d2c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d31: ADD ESP,0xc
// 00412d34: PUSH 0x1
// 00412d36: PUSH 0x614f49
//   XREF to: 00614f49 (DATA)
// 00412d3b: PUSH EBX
// 00412d3c: MOV [0x008224a8],EAX
//   XREF to: 008224a8 (WRITE)
// 00412d41: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d46: ADD ESP,0xc
// 00412d49: PUSH 0x1
// 00412d4b: PUSH 0x614f59
//   XREF to: 00614f59 (DATA)
// 00412d50: PUSH EBX
// 00412d51: MOV [0x008224ac],EAX
//   XREF to: 008224ac (WRITE)
// 00412d56: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d5b: ADD ESP,0xc
// 00412d5e: PUSH 0x1
// 00412d60: PUSH 0x614f69
//   XREF to: 00614f69 (DATA)
// 00412d65: PUSH EBX
// 00412d66: MOV [0x008224b0],EAX
//   XREF to: 008224b0 (WRITE)
// 00412d6b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d70: ADD ESP,0xc
// 00412d73: PUSH 0x1
// 00412d75: PUSH 0x614f76
//   XREF to: 00614f76 (DATA)
// 00412d7a: PUSH EBX
// 00412d7b: MOV [0x008224b4],EAX
//   XREF to: 008224b4 (WRITE)
// 00412d80: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d85: ADD ESP,0xc
// 00412d88: MOV [0x008224b8],EAX
//   XREF to: 008224b8 (WRITE)
// 00412d8d: PUSH 0x1
// 00412d8f: PUSH 0x614f83
//   XREF to: 00614f83 (DATA)
// 00412d94: PUSH EBX
// 00412d95: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412d9a: ADD ESP,0xc
// 00412d9d: PUSH 0x1
// 00412d9f: PUSH 0x614f91
//   XREF to: 00614f91 (DATA)
// 00412da4: PUSH EBX
// 00412da5: MOV [0x008224bc],EAX
//   XREF to: 008224bc (WRITE)
// 00412daa: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412daf: ADD ESP,0xc
// 00412db2: PUSH 0x1
// 00412db4: PUSH 0x614f9f
//   XREF to: 00614f9f (DATA)
// 00412db9: PUSH EBX
// 00412dba: MOV [0x008224c0],EAX
//   XREF to: 008224c0 (WRITE)
// 00412dbf: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412dc4: ADD ESP,0xc
// 00412dc7: PUSH 0x1
// 00412dc9: PUSH 0x614fac
//   XREF to: 00614fac (DATA)
// 00412dce: PUSH EBX
// 00412dcf: MOV [0x008224c4],EAX
//   XREF to: 008224c4 (WRITE)
// 00412dd4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412dd9: ADD ESP,0xc
// 00412ddc: PUSH 0x1
// 00412dde: PUSH 0x614fb9
//   XREF to: 00614fb9 (DATA)
// 00412de3: PUSH EBX
// 00412de4: MOV [0x008224c8],EAX
//   XREF to: 008224c8 (WRITE)
// 00412de9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412dee: ADD ESP,0xc
// 00412df1: PUSH 0x1
// 00412df3: PUSH 0x614fc6
//   XREF to: 00614fc6 (DATA)
// 00412df8: PUSH EBX
// 00412df9: MOV [0x008224cc],EAX
//   XREF to: 008224cc (WRITE)
// 00412dfe: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412e03: ADD ESP,0xc
// 00412e06: PUSH 0x1
// 00412e08: PUSH 0x614fd3
//   XREF to: 00614fd3 (DATA)
// 00412e0d: PUSH EBX
// 00412e0e: MOV [0x008224d0],EAX
//   XREF to: 008224d0 (WRITE)
// 00412e13: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412e18: ADD ESP,0xc
// 00412e1b: PUSH 0x1
// 00412e1d: PUSH 0x614fe0
//   XREF to: 00614fe0 (DATA)
// 00412e22: PUSH EBX
// 00412e23: MOV [0x008224d4],EAX
//   XREF to: 008224d4 (WRITE)
// 00412e28: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412e2d: ADD ESP,0xc
// 00412e30: PUSH 0x1
// 00412e32: PUSH 0x614fec
//   XREF to: 00614fec (DATA)
// 00412e37: PUSH EBX
// 00412e38: MOV [0x008224d8],EAX
//   XREF to: 008224d8 (WRITE)
// 00412e3d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00412e42: ADD ESP,0xc
// 00412e45: MOV dword ptr [ESI + 0x1fcac],0x0
// 00412e4f: PUSH 0x82251c
//   XREF to: 0082251c (DATA)
// 00412e54: MOV dword ptr [ESI + 0x25c4],EAX
// 00412e5a: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 00412e5f: ADD ESP,0x4
// 00412e62: POP ESI
// 00412e63: POP EBX
// 00412e64: RET
