// Name: core_batcreat.cpp_CBatCreature_FUN_00415150
// Address: 00415150
// Address Range: [[00415150, 00415449]]
// Convention: __cdecl
// Signature: void core_batcreat.cpp_CBatCreature_FUN_00415150(CBatCreature * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_Head_00615478
//   TerminatedCString s_Bip01_L_ForeArm_00615483
//   TerminatedCString s_Bip01_R_ForeArm_00615493
//   TerminatedCString s_Bip01_L_UpperArm_006154a3
//   TerminatedCString s_Bip01_R_UpperArm_006154b4
//   TerminatedCString s_Bip01_L_Foot_006154c5
//   TerminatedCString s_Bip01_R_Foot_006154d2
//   TerminatedCString s_Bip01_L_Hand_006154df
//   TerminatedCString s_Bip01_R_Hand_006154ec
//   TerminatedCString s_Bip01_Spine_006154f9
//   TerminatedCString s_Bip01_Spine1_00615505
//   TerminatedCString s_Bip01_Spine2_00615512
//   TerminatedCString s_Bip01_Head_0061551f
//   TerminatedCString s_Bip01_L_UpperArm_0061552a
//   TerminatedCString s_Bip01_R_UpperArm_0061553b
//   TerminatedCString s_Bip01_Spine_0061554c
//   TerminatedCString s_Bip01_Spine2_00615558
//   TerminatedCString s_head01_00615565
//   TerminatedCString s_torso01_0061556c
//   TerminatedCString s_ass01_00615574
//   TerminatedCString s_tail01_0061557a
//   TerminatedCString s_lthigh01_00615581
//   TerminatedCString s_lshin01_0061558a
//   TerminatedCString s_rthigh01_00615592
//   TerminatedCString s_rshin01_0061559b
//   TerminatedCString s_larm01_006155a3
//   TerminatedCString s_l4arm01_006155aa
//   TerminatedCString s_rarm01_006155b2
//   TerminatedCString s_r4arm01_006155b9
//   TerminatedCString s_lwing_006155c1
//   TerminatedCString s_rwing_006155c7
//   undefined4 DAT_0082274c
//   undefined4 DAT_00822750
//   undefined4 DAT_00822754
//   undefined4 DAT_00822758
//   undefined4 DAT_0082275c
//   undefined4 DAT_00822760
//   undefined4 DAT_00822764
//   undefined4 DAT_00822768
//   undefined4 DAT_0082276c
//   undefined4 DAT_00822770
//   undefined4 DAT_00822774
//   undefined4 DAT_00822778
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batcreat_cpp_CBatCreature_FUN_00415150(CBatCreature *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  undefined4 uStack0000003c;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0450(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr_00);
  DAT_0082274c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_00822758 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_0082275c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_00822760 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_00822764 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_00822768 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_0082276c =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_00822750 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  DAT_00822754 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  _DAT_00822770 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  _DAT_00822774 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  _DAT_00822778 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  DAT_0082274c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_00822760 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_00822764 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_00822770 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine");
  uStack0000003c = 1;
  _DAT_00822778 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine2");
  uStack0000003c = 0x4152e5;
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  uStack0000003c = 0x4152f8;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 8) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0xc) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"ass01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x10) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"tail01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x14) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x18) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x1c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x20) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x24) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x28) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x2c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x30) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x34) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lwing",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x38) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rwing",1);
  this_ptr->field1_0xbeb4[0x40] = '\0';
  this_ptr->field1_0xbeb4[0x41] = '\0';
  this_ptr->field1_0xbeb4[0x42] = '\0';
  this_ptr->field1_0xbeb4[0x43] = '\0';
  this_ptr->field1_0xbeb4[0x44] = '\0';
  this_ptr->field1_0xbeb4[0x45] = '\0';
  this_ptr->field1_0xbeb4[0x46] = '\0';
  this_ptr->field1_0xbeb4[0x47] = '\0';
  this_ptr->field1_0xbeb4[0x48] = '\0';
  this_ptr->field1_0xbeb4[0x49] = '\0';
  this_ptr->field1_0xbeb4[0x4a] = '\0';
  this_ptr->field1_0xbeb4[0x4b] = '\0';
  this_ptr->field1_0xbeb4[0x4c] = '\0';
  this_ptr->field1_0xbeb4[0x4d] = '\0';
  this_ptr->field1_0xbeb4[0x4e] = '\0';
  this_ptr->field1_0xbeb4[0x4f] = '\0';
  *(int *)(this_ptr->field1_0xbeb4 + 0x3c) = iVar1;
  return;
}


// Assembly code:
// 00415150: PUSH EBX
//   Label: core_batcreat.cpp_CBatCreature_FUN_00415150
// 00415151: PUSH ESI
// 00415152: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00415156: PUSH EDI
// 00415157: PUSH EBX
// 00415158: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0041515d: ADD ESP,0x4
// 00415160: LEA EDI,[EBX + 0x158]
// 00415166: PUSH EDI
// 00415167: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041516c: ADD ESP,0x4
// 0041516f: PUSH EDI
// 00415170: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00415175: ADD ESP,0x4
// 00415178: PUSH 0x1
// 0041517a: PUSH 0x615478
//   XREF to: 00615478 (DATA)
// 0041517f: PUSH EAX
// 00415180: MOV ESI,EAX
// 00415182: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00415187: ADD ESP,0xc
// 0041518a: PUSH 0x1
// 0041518c: PUSH 0x615483
//   XREF to: 00615483 (DATA)
// 00415191: PUSH ESI
// 00415192: MOV [0x0082274c],EAX
//   XREF to: 0082274c (WRITE)
// 00415197: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041519c: ADD ESP,0xc
// 0041519f: PUSH 0x1
// 004151a1: PUSH 0x615493
//   XREF to: 00615493 (DATA)
// 004151a6: PUSH ESI
// 004151a7: MOV [0x00822758],EAX
//   XREF to: 00822758 (WRITE)
// 004151ac: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004151b1: ADD ESP,0xc
// 004151b4: PUSH 0x1
// 004151b6: PUSH 0x6154a3
//   XREF to: 006154a3 (DATA)
// 004151bb: PUSH ESI
// 004151bc: MOV [0x0082275c],EAX
//   XREF to: 0082275c (WRITE)
// 004151c1: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004151c6: ADD ESP,0xc
// 004151c9: PUSH 0x1
// 004151cb: PUSH 0x6154b4
//   XREF to: 006154b4 (DATA)
// 004151d0: PUSH ESI
// 004151d1: MOV [0x00822760],EAX
//   XREF to: 00822760 (WRITE)
// 004151d6: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004151db: ADD ESP,0xc
// 004151de: PUSH 0x1
// 004151e0: PUSH 0x6154c5
//   XREF to: 006154c5 (DATA)
// 004151e5: PUSH ESI
// 004151e6: MOV [0x00822764],EAX
//   XREF to: 00822764 (WRITE)
// 004151eb: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004151f0: ADD ESP,0xc
// 004151f3: PUSH 0x1
// 004151f5: PUSH 0x6154d2
//   XREF to: 006154d2 (DATA)
// 004151fa: PUSH ESI
// 004151fb: MOV [0x00822768],EAX
//   XREF to: 00822768 (WRITE)
// 00415200: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00415205: ADD ESP,0xc
// 00415208: PUSH 0x1
// 0041520a: PUSH 0x6154df
//   XREF to: 006154df (DATA)
// 0041520f: PUSH ESI
// 00415210: MOV [0x0082276c],EAX
//   XREF to: 0082276c (WRITE)
// 00415215: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041521a: ADD ESP,0xc
// 0041521d: MOV [0x00822750],EAX
//   XREF to: 00822750 (WRITE)
// 00415222: PUSH 0x1
// 00415224: PUSH 0x6154ec
//   XREF to: 006154ec (DATA)
// 00415229: PUSH ESI
// 0041522a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041522f: ADD ESP,0xc
// 00415232: PUSH 0x1
// 00415234: PUSH 0x6154f9
//   XREF to: 006154f9 (DATA)
// 00415239: PUSH ESI
// 0041523a: MOV [0x00822754],EAX
//   XREF to: 00822754 (WRITE)
// 0041523f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00415244: ADD ESP,0xc
// 00415247: PUSH 0x1
// 00415249: PUSH 0x615505
//   XREF to: 00615505 (DATA)
// 0041524e: PUSH ESI
// 0041524f: MOV [0x00822770],EAX
//   XREF to: 00822770 (WRITE)
// 00415254: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00415259: ADD ESP,0xc
// 0041525c: PUSH 0x1
// 0041525e: PUSH 0x615512
//   XREF to: 00615512 (DATA)
// 00415263: PUSH ESI
// 00415264: MOV [0x00822774],EAX
//   XREF to: 00822774 (WRITE)
// 00415269: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041526e: ADD ESP,0xc
// 00415271: PUSH 0x1
// 00415273: PUSH 0x61551f
//   XREF to: 0061551f (DATA)
// 00415278: PUSH ESI
// 00415279: MOV [0x00822778],EAX
//   XREF to: 00822778 (WRITE)
// 0041527e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00415283: ADD ESP,0xc
// 00415286: PUSH 0x1
// 00415288: PUSH 0x61552a
//   XREF to: 0061552a (DATA)
// 0041528d: PUSH ESI
// 0041528e: MOV [0x0082274c],EAX
//   XREF to: 0082274c (WRITE)
// 00415293: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00415298: ADD ESP,0xc
// 0041529b: PUSH 0x1
// 0041529d: PUSH 0x61553b
//   XREF to: 0061553b (DATA)
// 004152a2: PUSH ESI
// 004152a3: MOV [0x00822760],EAX
//   XREF to: 00822760 (WRITE)
// 004152a8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004152ad: ADD ESP,0xc
// 004152b0: PUSH 0x1
// 004152b2: PUSH 0x61554c
//   XREF to: 0061554c (DATA)
// 004152b7: PUSH ESI
// 004152b8: MOV [0x00822764],EAX
//   XREF to: 00822764 (WRITE)
// 004152bd: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004152c2: ADD ESP,0xc
// 004152c5: PUSH 0x1
// 004152c7: PUSH 0x615558
//   XREF to: 00615558 (DATA)
// 004152cc: PUSH ESI
// 004152cd: MOV [0x00822770],EAX
//   XREF to: 00822770 (WRITE)
// 004152d2: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004152d7: ADD ESP,0xc
// 004152da: PUSH EDI
// 004152db: MOV [0x00822778],EAX
//   XREF to: 00822778 (WRITE)
// 004152e0: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004152e5: MOV ESI,EAX
// 004152e7: ADD ESP,0x4
// 004152ea: POP EDI
// 004152eb: PUSH 0x1
// 004152ed: PUSH 0x615565
//   XREF to: 00615565 (DATA)
// 004152f2: PUSH EAX
// 004152f3: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004152f8: ADD ESP,0xc
// 004152fb: PUSH 0x1
// 004152fd: PUSH 0x61556c
//   XREF to: 0061556c (DATA)
// 00415302: PUSH ESI
// 00415303: MOV dword ptr [EBX + 0xbebc],EAX
// 00415309: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0041530e: ADD ESP,0xc
// 00415311: PUSH 0x1
// 00415313: PUSH 0x615574
//   XREF to: 00615574 (DATA)
// 00415318: PUSH ESI
// 00415319: MOV dword ptr [EBX + 0xbec0],EAX
// 0041531f: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00415324: ADD ESP,0xc
// 00415327: PUSH 0x1
// 00415329: PUSH 0x61557a
//   XREF to: 0061557a (DATA)
// 0041532e: PUSH ESI
// 0041532f: MOV dword ptr [EBX + 0xbec4],EAX
// 00415335: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0041533a: ADD ESP,0xc
// 0041533d: PUSH 0x1
// 0041533f: PUSH 0x615581
//   XREF to: 00615581 (DATA)
// 00415344: PUSH ESI
// 00415345: MOV dword ptr [EBX + 0xbec8],EAX
// 0041534b: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00415350: ADD ESP,0xc
// 00415353: PUSH 0x1
// 00415355: PUSH 0x61558a
//   XREF to: 0061558a (DATA)
// 0041535a: PUSH ESI
// 0041535b: MOV dword ptr [EBX + 0xbecc],EAX
// 00415361: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00415366: ADD ESP,0xc
// 00415369: PUSH 0x1
// 0041536b: PUSH 0x615592
//   XREF to: 00615592 (DATA)
// 00415370: PUSH ESI
// 00415371: MOV dword ptr [EBX + 0xbed0],EAX
// 00415377: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0041537c: ADD ESP,0xc
// 0041537f: PUSH 0x1
// 00415381: PUSH 0x61559b
//   XREF to: 0061559b (DATA)
// 00415386: PUSH ESI
// 00415387: MOV dword ptr [EBX + 0xbed4],EAX
// 0041538d: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00415392: ADD ESP,0xc
// 00415395: PUSH 0x1
// 00415397: PUSH 0x6155a3
//   XREF to: 006155a3 (DATA)
// 0041539c: PUSH ESI
// 0041539d: MOV dword ptr [EBX + 0xbed8],EAX
// 004153a3: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004153a8: ADD ESP,0xc
// 004153ab: MOV dword ptr [EBX + 0xbedc],EAX
// 004153b1: PUSH 0x1
// 004153b3: PUSH 0x6155aa
//   XREF to: 006155aa (DATA)
// 004153b8: PUSH ESI
// 004153b9: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004153be: ADD ESP,0xc
// 004153c1: PUSH 0x1
// 004153c3: PUSH 0x6155b2
//   XREF to: 006155b2 (DATA)
// 004153c8: PUSH ESI
// 004153c9: MOV dword ptr [EBX + 0xbee0],EAX
// 004153cf: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004153d4: ADD ESP,0xc
// 004153d7: PUSH 0x1
// 004153d9: PUSH 0x6155b9
//   XREF to: 006155b9 (DATA)
// 004153de: PUSH ESI
// 004153df: MOV dword ptr [EBX + 0xbee4],EAX
// 004153e5: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004153ea: ADD ESP,0xc
// 004153ed: PUSH 0x1
// 004153ef: PUSH 0x6155c1
//   XREF to: 006155c1 (DATA)
// 004153f4: PUSH ESI
// 004153f5: MOV dword ptr [EBX + 0xbee8],EAX
// 004153fb: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00415400: ADD ESP,0xc
// 00415403: PUSH 0x1
// 00415405: PUSH 0x6155c7
//   XREF to: 006155c7 (DATA)
// 0041540a: PUSH ESI
// 0041540b: MOV dword ptr [EBX + 0xbeec],EAX
// 00415411: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00415416: MOV dword ptr [EBX + 0xbef4],0x0
// 00415420: MOV dword ptr [EBX + 0xbef8],0x0
// 0041542a: MOV dword ptr [EBX + 0xbefc],0x0
// 00415434: MOV dword ptr [EBX + 0xbf00],0x0
// 0041543e: ADD ESP,0xc
// 00415441: MOV dword ptr [EBX + 0xbef0],EAX
// 00415447: POP ESI
// 00415448: POP EBX
// 00415449: RET
