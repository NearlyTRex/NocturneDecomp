// Name: core_succubus.cpp_CSuccubus_FUN_005c6b60
// Address: 005c6b60
// Address Range: [[005c6b60, 005c6e85]]
// Convention: __cdecl
// Signature: void core_succubus.cpp_CSuccubus_FUN_005c6b60(CSuccubus * this_ptr)
// Globals:
//   TerminatedCString s_succubusx_dfm_00653ffd
//   TerminatedCString s_hotdemonx_dfm_0065400b
//   TerminatedCString s_succubus_dfm_00654019
//   TerminatedCString s_hotdemon_dfm_00654026
//   TerminatedCString s_Bip01_Head_00654033
//   TerminatedCString s_Bip01_L_ForeArm_0065403e
//   TerminatedCString s_Bip01_R_ForeArm_0065404e
//   TerminatedCString s_Bip01_L_UpperArm_0065405e
//   TerminatedCString s_Bip01_R_UpperArm_0065406f
//   TerminatedCString s_Bip01_L_Foot_00654080
//   TerminatedCString s_Bip01_R_Foot_0065408d
//   TerminatedCString s_Bip01_L_Hand_0065409a
//   TerminatedCString s_Bip01_R_Hand_006540a7
//   TerminatedCString s_Bip01_Spine_006540b4
//   TerminatedCString s_Bip01_Spine1_006540c0
//   TerminatedCString s_Bip01_Spine2_006540cd
//   TerminatedCString s_Bip01_Head_006540da
//   TerminatedCString s_Bip01_L_UpperArm_006540e5
//   TerminatedCString s_Bip01_R_UpperArm_006540f6
//   TerminatedCString s_Bip01_Spine_00654107
//   TerminatedCString s_Bip01_Spine2_00654113
//   float FLOAT_00654121 = 0.4000000
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CGameInstance.nudity_flag
//   undefined4 DAT_02f43974
//   undefined4 DAT_03f6bb68
//   undefined4 DAT_03f6bb6c
//   undefined4 DAT_03f6bb70
//   undefined4 DAT_03f6bb74
//   undefined4 DAT_03f6bb78
//   undefined4 DAT_03f6bb7c
//   undefined4 DAT_03f6bb80
//   undefined4 DAT_03f6bb84
//   undefined4 DAT_03f6bb88
//   undefined4 DAT_03f6bb8c
//   undefined4 DAT_03f6bb90
//   undefined4 DAT_03f6bb94
// Function calls:
//   core_cloth.cpp_CClothList_load_FUN_0043bfa0
//   core_cloth.cpp_FUN_0043c290
//   core_cloth.cpp_FUN_0043c2d0
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_morph.cpp_CMorph_getReady_FUN_0052b680
//   core_morph.cpp_FUN_0052b430
//   core_morph.cpp_FUN_0052b580
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_succubus_cpp_CSuccubus_FUN_005c6b60(CSuccubus *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  undefined4 uStack00000048;
  CMorph *pCStack0000005c;
  CDeformableModelInstance *pCStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack00000068;
  CDeformableModelInstance *pCStack00000070;
  CDeformableModelInstance *pCStack00000074;
  
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  if (g_CGamePtr->nudity_flag == 0) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(pCVar1);
  }
  else {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840(pCVar1);
  }
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0840
            ((CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8));
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  pCVar1 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(pCVar1);
  this_ptr_00 = (CDeformableModelInstance *)(this_ptr->field1_0xbeb4 + 8);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr_00);
  core_cloth_cpp_CClothList_load_FUN_0043bfa0((CClothList *)(this_ptr->field1_0xbeb4 + 0x22bc));
  core_cloth_cpp_FUN_0043c290();
  core_cloth_cpp_FUN_0043c2d0();
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(pCVar1);
  _DAT_03f6bb68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  _DAT_03f6bb74 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_03f6bb78 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_03f6bb7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_03f6bb80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_03f6bb84 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_03f6bb88 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_03f6bb6c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  _DAT_03f6bb70 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Hand");
  _DAT_03f6bb8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  _DAT_03f6bb90 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  _DAT_03f6bb94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  _DAT_03f6bb68 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Head");
  _DAT_03f6bb7c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_03f6bb80 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_03f6bb8c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  uStack00000048 = 1;
  _DAT_03f6bb94 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  uStack00000048 = 0x5c6d8f;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059df80(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059df80(pCVar1);
  *(float *)((this_ptr->base_enemy).base_character.model.field3_0x508 + 0x1a4) =
       *(float *)((this_ptr->base_enemy).base_character.model.field3_0x508 + 0x1a4) + FLOAT_00654121
  ;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40(pCVar1);
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb40(this_ptr_00);
  pCStack0000005c = (CMorph *)pCVar1;
  core_morph_cpp_FUN_0052b430();
  pCStack0000005c = (CMorph *)0x1;
  pCStack00000060 = this_ptr_00;
  core_morph_cpp_FUN_0052b430();
  uStack00000064 = 0;
  pCStack00000060 = *(CDeformableModelInstance **)(this_ptr->field1_0xbeb4 + 0x2450);
  pCStack0000005c = (CMorph *)0x1;
  DAT_02f43974 = 0;
  core_morph_cpp_FUN_0052b580();
  uStack00000068 = 0;
  uStack00000064 = *(undefined4 *)(this_ptr->field1_0xbeb4 + 0x2450);
  pCStack00000060 = (CDeformableModelInstance *)0x1;
  DAT_02f43974 = 1;
  pCStack0000005c = (CMorph *)(this_ptr->field1_0xbeb4 + 0x2488);
  core_morph_cpp_FUN_0052b580();
  DAT_02f43974 = 0;
  this_ptr->field1_0xbeb4[0x30b0] = '\0';
  this_ptr->field1_0xbeb4[0x30b1] = '\0';
  this_ptr->field1_0xbeb4[0x30b2] = '\0';
  this_ptr->field1_0xbeb4[0x30b3] = '\0';
  uStack00000068 = 0x5c6e29;
  core_morph_cpp_CMorph_getReady_FUN_0052b680((CMorph *)(this_ptr->field1_0xbeb4 + 0x2488));
  this_ptr->field1_0xbeb4[0x2480] = '\0';
  this_ptr->field1_0xbeb4[0x2481] = '\0';
  this_ptr->field1_0xbeb4[0x2482] = '\0';
  this_ptr->field1_0xbeb4[0x2483] = '\0';
  this_ptr->field1_0xbeb4[0x2484] = '\0';
  this_ptr->field1_0xbeb4[0x2485] = '\0';
  this_ptr->field1_0xbeb4[0x2486] = '\0';
  this_ptr->field1_0xbeb4[0x2487] = '\0';
  this_ptr->field1_0xbeb4[0x2478] = '\0';
  this_ptr->field1_0xbeb4[0x2479] = '\0';
  this_ptr->field1_0xbeb4[0x247a] = '\0';
  this_ptr->field1_0xbeb4[0x247b] = '\0';
  this_ptr->field1_0xbeb4[0x247c] = '\0';
  this_ptr->field1_0xbeb4[0x247d] = '\0';
  this_ptr->field1_0xbeb4[0x247e] = -0x60;
  this_ptr->field1_0xbeb4[0x247f] = '@';
  pCStack00000070 = this_ptr_00;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  pCStack00000070 = (CDeformableModelInstance *)0x5c6e63;
  pCStack00000074 = pCVar1;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e000();
  return;
}


// Assembly code:
// 005c6b60: PUSH EBX
//   Label: core_succubus.cpp_CSuccubus_FUN_005c6b60
// 005c6b61: PUSH ESI
// 005c6b62: PUSH EDI
// 005c6b63: PUSH EBP
// 005c6b64: SUB ESP,0x8
// 005c6b67: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 005c6b6b: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005c6b71: LEA ESI,[EBX + 0xbebc]
// 005c6b77: MOV EDX,dword ptr [EDI + 0x18]
//   XREF to: 02d81ab4 (READ)
// 005c6b7a: LEA EAX,[EBX + 0x158]
// 005c6b80: TEST EDX,EDX
// 005c6b82: JZ 0x005c6e6e
//   XREF to: 005c6e6e (CONDITIONAL_JUMP)
// 005c6b88: PUSH 0x654019
//   XREF to: 00654019 (DATA)
// 005c6b8d: PUSH EAX
// 005c6b8e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005c6b93: ADD ESP,0x8
// 005c6b96: PUSH 0x654026
//   XREF to: 00654026 (DATA)
// 005c6b9b: PUSH ESI
//   Label: LAB_005c6b9b
// 005c6b9c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005c6ba1: ADD ESP,0x8
// 005c6ba4: PUSH EBX
// 005c6ba5: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 005c6baa: ADD ESP,0x4
// 005c6bad: LEA EBP,[EBX + 0x158]
// 005c6bb3: PUSH EBP
// 005c6bb4: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005c6bb9: ADD ESP,0x4
// 005c6bbc: LEA EDI,[EBX + 0xbebc]
// 005c6bc2: PUSH EDI
// 005c6bc3: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 005c6bc8: ADD ESP,0x4
// 005c6bcb: LEA ESI,[EBX + 0xe170]
// 005c6bd1: PUSH ESI
// 005c6bd2: CALL core_cloth.cpp_CClothList_load_FUN_0043bfa0
//   XREF to: 0043bfa0 (UNCONDITIONAL_CALL)
// 005c6bd7: ADD ESP,0x4
// 005c6bda: PUSH EDI
// 005c6bdb: LEA EAX,[EBX + 0x30]
// 005c6bde: PUSH EAX
// 005c6bdf: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c6be3: LEA EAX,[EBX + 0x20]
// 005c6be6: PUSH EAX
// 005c6be7: PUSH ESI
// 005c6be8: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005c6bec: CALL core_cloth.cpp_FUN_0043c290
//   XREF to: 0043c290 (UNCONDITIONAL_CALL)
// 005c6bf1: ADD ESP,0x10
// 005c6bf4: PUSH EDI
// 005c6bf5: PUSH dword ptr [EBX + 0x2414]
// 005c6bfb: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005c6bff: PUSH 0x3d4ccccd
// 005c6c04: PUSH EDX
// 005c6c05: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 005c6c09: PUSH ECX
// 005c6c0a: LEA EAX,[EBX + 0x2a94]
// 005c6c10: PUSH EAX
// 005c6c11: CALL core_cloth.cpp_FUN_0043c2d0
//   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)
// 005c6c16: ADD ESP,0x18
// 005c6c19: PUSH EBP
// 005c6c1a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005c6c1f: ADD ESP,0x4
// 005c6c22: PUSH 0x1
// 005c6c24: PUSH 0x654033
//   XREF to: 00654033 (DATA)
// 005c6c29: PUSH EAX
// 005c6c2a: MOV ESI,EAX
// 005c6c2c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6c31: ADD ESP,0xc
// 005c6c34: PUSH 0x1
// 005c6c36: PUSH 0x65403e
//   XREF to: 0065403e (DATA)
// 005c6c3b: PUSH ESI
// 005c6c3c: MOV [0x03f6bb68],EAX
//   XREF to: 03f6bb68 (WRITE)
// 005c6c41: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6c46: ADD ESP,0xc
// 005c6c49: PUSH 0x1
// 005c6c4b: PUSH 0x65404e
//   XREF to: 0065404e (DATA)
// 005c6c50: PUSH ESI
// 005c6c51: MOV [0x03f6bb74],EAX
//   XREF to: 03f6bb74 (WRITE)
// 005c6c56: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6c5b: ADD ESP,0xc
// 005c6c5e: PUSH 0x1
// 005c6c60: PUSH 0x65405e
//   XREF to: 0065405e (DATA)
// 005c6c65: PUSH ESI
// 005c6c66: MOV [0x03f6bb78],EAX
//   XREF to: 03f6bb78 (WRITE)
// 005c6c6b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6c70: ADD ESP,0xc
// 005c6c73: PUSH 0x1
// 005c6c75: PUSH 0x65406f
//   XREF to: 0065406f (DATA)
// 005c6c7a: PUSH ESI
// 005c6c7b: MOV [0x03f6bb7c],EAX
//   XREF to: 03f6bb7c (WRITE)
// 005c6c80: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6c85: ADD ESP,0xc
// 005c6c88: MOV [0x03f6bb80],EAX
//   XREF to: 03f6bb80 (WRITE)
// 005c6c8d: PUSH 0x1
// 005c6c8f: PUSH 0x654080
//   XREF to: 00654080 (DATA)
// 005c6c94: PUSH ESI
// 005c6c95: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6c9a: ADD ESP,0xc
// 005c6c9d: PUSH 0x1
// 005c6c9f: PUSH 0x65408d
//   XREF to: 0065408d (DATA)
// 005c6ca4: PUSH ESI
// 005c6ca5: MOV [0x03f6bb84],EAX
//   XREF to: 03f6bb84 (WRITE)
// 005c6caa: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6caf: ADD ESP,0xc
// 005c6cb2: PUSH 0x1
// 005c6cb4: PUSH 0x65409a
//   XREF to: 0065409a (DATA)
// 005c6cb9: PUSH ESI
// 005c6cba: MOV [0x03f6bb88],EAX
//   XREF to: 03f6bb88 (WRITE)
// 005c6cbf: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6cc4: ADD ESP,0xc
// 005c6cc7: PUSH 0x1
// 005c6cc9: PUSH 0x6540a7
//   XREF to: 006540a7 (DATA)
// 005c6cce: PUSH ESI
// 005c6ccf: MOV [0x03f6bb6c],EAX
//   XREF to: 03f6bb6c (WRITE)
// 005c6cd4: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6cd9: ADD ESP,0xc
// 005c6cdc: PUSH 0x1
// 005c6cde: PUSH 0x6540b4
//   XREF to: 006540b4 (DATA)
// 005c6ce3: PUSH ESI
// 005c6ce4: MOV [0x03f6bb70],EAX
//   XREF to: 03f6bb70 (WRITE)
// 005c6ce9: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6cee: ADD ESP,0xc
// 005c6cf1: PUSH 0x1
// 005c6cf3: PUSH 0x6540c0
//   XREF to: 006540c0 (DATA)
// 005c6cf8: PUSH ESI
// 005c6cf9: MOV [0x03f6bb8c],EAX
//   XREF to: 03f6bb8c (WRITE)
// 005c6cfe: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d03: ADD ESP,0xc
// 005c6d06: PUSH 0x1
// 005c6d08: PUSH 0x6540cd
//   XREF to: 006540cd (DATA)
// 005c6d0d: PUSH ESI
// 005c6d0e: MOV [0x03f6bb90],EAX
//   XREF to: 03f6bb90 (WRITE)
// 005c6d13: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d18: ADD ESP,0xc
// 005c6d1b: PUSH 0x1
// 005c6d1d: PUSH 0x6540da
//   XREF to: 006540da (DATA)
// 005c6d22: PUSH ESI
// 005c6d23: MOV [0x03f6bb94],EAX
//   XREF to: 03f6bb94 (WRITE)
// 005c6d28: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d2d: ADD ESP,0xc
// 005c6d30: PUSH 0x1
// 005c6d32: PUSH 0x6540e5
//   XREF to: 006540e5 (DATA)
// 005c6d37: PUSH ESI
// 005c6d38: MOV [0x03f6bb68],EAX
//   XREF to: 03f6bb68 (WRITE)
// 005c6d3d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d42: ADD ESP,0xc
// 005c6d45: PUSH 0x1
// 005c6d47: PUSH 0x6540f6
//   XREF to: 006540f6 (DATA)
// 005c6d4c: PUSH ESI
// 005c6d4d: MOV [0x03f6bb7c],EAX
//   XREF to: 03f6bb7c (WRITE)
// 005c6d52: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d57: ADD ESP,0xc
// 005c6d5a: MOV [0x03f6bb80],EAX
//   XREF to: 03f6bb80 (WRITE)
// 005c6d5f: PUSH 0x1
// 005c6d61: PUSH 0x654107
//   XREF to: 00654107 (DATA)
// 005c6d66: PUSH ESI
// 005c6d67: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d6c: ADD ESP,0xc
// 005c6d6f: PUSH 0x1
// 005c6d71: PUSH 0x654113
//   XREF to: 00654113 (DATA)
// 005c6d76: PUSH ESI
// 005c6d77: MOV [0x03f6bb8c],EAX
//   XREF to: 03f6bb8c (WRITE)
// 005c6d7c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005c6d81: ADD ESP,0xc
// 005c6d84: PUSH EDI
// 005c6d85: MOV [0x03f6bb94],EAX
//   XREF to: 03f6bb94 (WRITE)
// 005c6d8a: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 005c6d8f: ADD ESP,0x4
// 005c6d92: PUSH EBP
// 005c6d93: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059df80
//   XREF to: 0059df80 (UNCONDITIONAL_CALL)
// 005c6d98: FLD float ptr [EBX + 0x804]
// 005c6d9e: ADD ESP,0x4
// 005c6da1: FADD float ptr [0x00654121]
//   XREF to: 00654121 (READ)
// 005c6da7: PUSH EBP
// 005c6da8: FSTP float ptr [EBX + 0x804]
// 005c6dae: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 005c6db3: ADD ESP,0x4
// 005c6db6: PUSH EDI
// 005c6db7: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 005c6dbc: ADD ESP,0x4
// 005c6dbf: PUSH EBP
// 005c6dc0: PUSH 0x0
// 005c6dc2: LEA ESI,[EBX + 0xe33c]
// 005c6dc8: PUSH ESI
// 005c6dc9: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 005c6dce: ADD ESP,0xc
// 005c6dd1: PUSH EDI
// 005c6dd2: PUSH 0x1
// 005c6dd4: PUSH ESI
// 005c6dd5: CALL core_morph.cpp_FUN_0052b430
//   XREF to: 0052b430 (UNCONDITIONAL_CALL)
// 005c6dda: ADD ESP,0xc
// 005c6ddd: XOR EAX,EAX
// 005c6ddf: PUSH EAX
// 005c6de0: MOV EDX,dword ptr [EBX + 0xe304]
// 005c6de6: PUSH EDX
// 005c6de7: PUSH 0x1
// 005c6de9: PUSH ESI
// 005c6dea: MOV [0x02f43974],EAX
//   XREF to: 02f43974 (WRITE)
// 005c6def: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005c6df4: ADD ESP,0x10
// 005c6df7: PUSH 0x0
// 005c6df9: MOV EAX,dword ptr [EBX + 0xe304]
// 005c6dff: PUSH EAX
// 005c6e00: MOV ECX,0x1
// 005c6e05: PUSH ECX
// 005c6e06: PUSH ESI
// 005c6e07: MOV dword ptr [0x02f43974],ECX
//   XREF to: 02f43974 (WRITE)
// 005c6e0d: CALL core_morph.cpp_FUN_0052b580
//   XREF to: 0052b580 (UNCONDITIONAL_CALL)
// 005c6e12: ADD ESP,0x10
// 005c6e15: XOR EDX,EDX
// 005c6e17: PUSH ESI
// 005c6e18: MOV dword ptr [0x02f43974],EDX
//   XREF to: 02f43974 (WRITE)
// 005c6e1e: MOV dword ptr [EBX + 0xef64],EDX
// 005c6e24: CALL core_morph.cpp_CMorph_getReady_FUN_0052b680
//   XREF to: 0052b680 (UNCONDITIONAL_CALL)
// 005c6e29: MOV dword ptr [EBX + 0xe334],0x0
// 005c6e33: MOV dword ptr [EBX + 0xe338],0x0
// 005c6e3d: ADD ESP,0x4
// 005c6e40: MOV dword ptr [EBX + 0xe32c],0x0
// 005c6e4a: PUSH EDI
// 005c6e4b: MOV dword ptr [EBX + 0xe330],0x40a00000
// 005c6e55: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005c6e5a: ADD ESP,0x4
// 005c6e5d: PUSH EBP
// 005c6e5e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e000
//   XREF to: 0059e000 (UNCONDITIONAL_CALL)
// 005c6e63: ADD ESP,0x4
// 005c6e66: ADD ESP,0x8
// 005c6e69: POP EBP
// 005c6e6a: POP EDI
// 005c6e6b: POP ESI
// 005c6e6c: POP EBX
// 005c6e6d: RET
// 005c6e6e: PUSH 0x653ffd
//   Label: LAB_005c6e6e
//   XREF to: 00653ffd (DATA)
// 005c6e73: PUSH EAX
// 005c6e74: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 005c6e79: ADD ESP,0x8
// 005c6e7c: PUSH 0x65400b
//   XREF to: 0065400b (DATA)
// 005c6e81: JMP 0x005c6b9b
//   XREF to: 005c6b9b (UNCONDITIONAL_JUMP)
