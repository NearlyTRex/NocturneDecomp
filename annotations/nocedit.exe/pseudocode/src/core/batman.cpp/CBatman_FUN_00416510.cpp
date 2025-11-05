// Name: core_batman.cpp_CBatman_FUN_00416510
// Address: 00416510
// Address Range: [[00416510, 004167e1]]
// Convention: __cdecl
// Signature: void core_batman.cpp_CBatman_FUN_00416510(CBatman * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_Head_006156f0
//   TerminatedCString s_Bip01_L_ForeArm_006156fb
//   TerminatedCString s_Bip01_R_ForeArm_0061570b
//   TerminatedCString s_Bip01_L_UpperArm_0061571b
//   TerminatedCString s_Bip01_R_UpperArm_0061572c
//   TerminatedCString s_Bip01_L_Foot_0061573d
//   TerminatedCString s_Bip01_R_Foot_0061574a
//   TerminatedCString s_Bip01_L_Hand_00615757
//   TerminatedCString s_Bip01_R_Hand_00615764
//   TerminatedCString s_Bip01_Spine_00615771
//   TerminatedCString s_Bip01_Spine1_0061577d
//   TerminatedCString s_Bip01_Spine2_0061578a
//   TerminatedCString s_Bip01_Head_00615797
//   TerminatedCString s_Bip01_L_UpperArm_006157a2
//   TerminatedCString s_Bip01_R_UpperArm_006157b3
//   TerminatedCString s_Bip01_Spine_006157c4
//   TerminatedCString s_Bip01_Spine2_006157d0
//   TerminatedCString s_head01_006157dd
//   TerminatedCString s_torso01_006157e4
//   TerminatedCString s_larm01_006157ec
//   TerminatedCString s_l4arm01_006157f3
//   TerminatedCString s_rarm01_006157fb
//   TerminatedCString s_r4arm01_00615802
//   TerminatedCString s_ass01_0061580a
//   TerminatedCString s_tail01_00615810
//   TerminatedCString s_lthigh01_00615817
//   TerminatedCString s_lshin01_00615820
//   TerminatedCString s_rthigh01_00615828
//   TerminatedCString s_rshin01_00615831
//   TerminatedCString s_lfoot01_00615839
//   TerminatedCString s_rfoot01_00615841
//   undefined4 DAT_008227b8
//   undefined4 DAT_008227bc
//   undefined4 DAT_008227c0
//   undefined4 DAT_008227c4
//   undefined4 DAT_008227c8
//   undefined4 DAT_008227cc
//   undefined4 DAT_008227d0
//   undefined4 DAT_008227d4
//   undefined4 DAT_008227d8
//   undefined4 DAT_008227dc
//   undefined4 DAT_008227e0
//   undefined4 DAT_008227e4
// Function calls:
//   core_enemy.cpp_CEnemy_FUN_004a9650
//   core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_batman_cpp_CBatman_FUN_00416510(CBatman *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CSkeleton *this_ptr_01;
  CDeformableModel *this_ptr_02;
  int iVar1;
  
  core_enemy_cpp_CEnemy_FUN_004a9650(&this_ptr->base_enemy);
  this_ptr_00 = &(this_ptr->base_enemy).base_character.model;
  core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_005a0450(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(this_ptr_00);
  DAT_008227b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_008227c4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L ForeArm");
  _DAT_008227c8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R ForeArm");
  _DAT_008227cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_008227d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  _DAT_008227d4 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Foot");
  _DAT_008227d8 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R Foot");
  _DAT_008227bc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L Hand");
  DAT_008227c0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 R Hand");
  DAT_008227dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  _DAT_008227e0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 Spine1");
  DAT_008227e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  DAT_008227b8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Head");
  _DAT_008227cc =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 L UpperArm");
  _DAT_008227d0 =
       core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0(this_ptr_01,"Bip01 R UpperArm");
  DAT_008227dc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine");
  DAT_008227e4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0
                           (this_ptr_01,"Bip01 Spine2");
  this_ptr_02 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"head01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x6c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"torso01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x70) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"larm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x74) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"l4arm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x78) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rarm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x7c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"r4arm01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x80) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"ass01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x84) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"tail01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x88) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lthigh01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x8c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lshin01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x90) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rthigh01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x94) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rshin01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x98) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"lfoot01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0x9c) = iVar1;
  iVar1 = core_skeleton_cpp_CDeformableModel_findPartByName_FUN_0059c240
                    (this_ptr_02,"rfoot01",1);
  *(int *)(this_ptr->field1_0xbeb4 + 0xa0) = iVar1;
  return;
}


// Assembly code:
// 00416510: PUSH EBX
//   Label: core_batman.cpp_CBatman_FUN_00416510
// 00416511: PUSH ESI
// 00416512: PUSH EDI
// 00416513: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00416517: PUSH ESI
// 00416518: CALL core_enemy.cpp_CEnemy_FUN_004a9650
//   XREF to: 004a9650 (UNCONDITIONAL_CALL)
// 0041651d: ADD ESP,0x4
// 00416520: LEA EDI,[ESI + 0x158]
// 00416526: PUSH EDI
// 00416527: CALL core_skeleton.cpp_CDeformableModelInstance_preCache_FUN_005a0450
//   XREF to: 005a0450 (UNCONDITIONAL_CALL)
// 0041652c: ADD ESP,0x4
// 0041652f: PUSH EDI
// 00416530: CALL core_skeleton.cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 00416535: ADD ESP,0x4
// 00416538: PUSH 0x1
// 0041653a: PUSH 0x6156f0
//   XREF to: 006156f0 (DATA)
// 0041653f: PUSH EAX
// 00416540: MOV EBX,EAX
// 00416542: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416547: ADD ESP,0xc
// 0041654a: PUSH 0x1
// 0041654c: PUSH 0x6156fb
//   XREF to: 006156fb (DATA)
// 00416551: PUSH EBX
// 00416552: MOV [0x008227b8],EAX
//   XREF to: 008227b8 (WRITE)
// 00416557: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041655c: ADD ESP,0xc
// 0041655f: PUSH 0x1
// 00416561: PUSH 0x61570b
//   XREF to: 0061570b (DATA)
// 00416566: PUSH EBX
// 00416567: MOV [0x008227c4],EAX
//   XREF to: 008227c4 (WRITE)
// 0041656c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416571: ADD ESP,0xc
// 00416574: PUSH 0x1
// 00416576: PUSH 0x61571b
//   XREF to: 0061571b (DATA)
// 0041657b: PUSH EBX
// 0041657c: MOV [0x008227c8],EAX
//   XREF to: 008227c8 (WRITE)
// 00416581: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416586: ADD ESP,0xc
// 00416589: PUSH 0x1
// 0041658b: PUSH 0x61572c
//   XREF to: 0061572c (DATA)
// 00416590: PUSH EBX
// 00416591: MOV [0x008227cc],EAX
//   XREF to: 008227cc (WRITE)
// 00416596: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041659b: ADD ESP,0xc
// 0041659e: PUSH 0x1
// 004165a0: PUSH 0x61573d
//   XREF to: 0061573d (DATA)
// 004165a5: PUSH EBX
// 004165a6: MOV [0x008227d0],EAX
//   XREF to: 008227d0 (WRITE)
// 004165ab: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004165b0: ADD ESP,0xc
// 004165b3: PUSH 0x1
// 004165b5: PUSH 0x61574a
//   XREF to: 0061574a (DATA)
// 004165ba: PUSH EBX
// 004165bb: MOV [0x008227d4],EAX
//   XREF to: 008227d4 (WRITE)
// 004165c0: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004165c5: ADD ESP,0xc
// 004165c8: PUSH 0x1
// 004165ca: PUSH 0x615757
//   XREF to: 00615757 (DATA)
// 004165cf: PUSH EBX
// 004165d0: MOV [0x008227d8],EAX
//   XREF to: 008227d8 (WRITE)
// 004165d5: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004165da: ADD ESP,0xc
// 004165dd: MOV [0x008227bc],EAX
//   XREF to: 008227bc (WRITE)
// 004165e2: PUSH 0x1
// 004165e4: PUSH 0x615764
//   XREF to: 00615764 (DATA)
// 004165e9: PUSH EBX
// 004165ea: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 004165ef: ADD ESP,0xc
// 004165f2: PUSH 0x1
// 004165f4: PUSH 0x615771
//   XREF to: 00615771 (DATA)
// 004165f9: PUSH EBX
// 004165fa: MOV [0x008227c0],EAX
//   XREF to: 008227c0 (WRITE)
// 004165ff: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416604: ADD ESP,0xc
// 00416607: PUSH 0x1
// 00416609: PUSH 0x61577d
//   XREF to: 0061577d (DATA)
// 0041660e: PUSH EBX
// 0041660f: MOV [0x008227dc],EAX
//   XREF to: 008227dc (WRITE)
// 00416614: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416619: ADD ESP,0xc
// 0041661c: PUSH 0x1
// 0041661e: PUSH 0x61578a
//   XREF to: 0061578a (DATA)
// 00416623: PUSH EBX
// 00416624: MOV [0x008227e0],EAX
//   XREF to: 008227e0 (WRITE)
// 00416629: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041662e: ADD ESP,0xc
// 00416631: PUSH 0x1
// 00416633: PUSH 0x615797
//   XREF to: 00615797 (DATA)
// 00416638: PUSH EBX
// 00416639: MOV [0x008227e4],EAX
//   XREF to: 008227e4 (WRITE)
// 0041663e: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416643: ADD ESP,0xc
// 00416646: PUSH 0x1
// 00416648: PUSH 0x6157a2
//   XREF to: 006157a2 (DATA)
// 0041664d: PUSH EBX
// 0041664e: MOV [0x008227b8],EAX
//   XREF to: 008227b8 (WRITE)
// 00416653: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416658: ADD ESP,0xc
// 0041665b: PUSH 0x1
// 0041665d: PUSH 0x6157b3
//   XREF to: 006157b3 (DATA)
// 00416662: PUSH EBX
// 00416663: MOV [0x008227cc],EAX
//   XREF to: 008227cc (WRITE)
// 00416668: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 0041666d: ADD ESP,0xc
// 00416670: PUSH 0x1
// 00416672: PUSH 0x6157c4
//   XREF to: 006157c4 (DATA)
// 00416677: PUSH EBX
// 00416678: MOV [0x008227d0],EAX
//   XREF to: 008227d0 (WRITE)
// 0041667d: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416682: ADD ESP,0xc
// 00416685: PUSH 0x1
// 00416687: PUSH 0x6157d0
//   XREF to: 006157d0 (DATA)
// 0041668c: PUSH EBX
// 0041668d: MOV [0x008227dc],EAX
//   XREF to: 008227dc (WRITE)
// 00416692: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 00416697: ADD ESP,0xc
// 0041669a: PUSH EDI
// 0041669b: MOV [0x008227e4],EAX
//   XREF to: 008227e4 (WRITE)
// 004166a0: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 004166a5: MOV EBX,EAX
// 004166a7: ADD ESP,0x4
// 004166aa: PUSH 0x1
// 004166ac: PUSH 0x6157dd
//   XREF to: 006157dd (DATA)
// 004166b1: PUSH EAX
// 004166b2: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004166b7: ADD ESP,0xc
// 004166ba: PUSH 0x1
// 004166bc: PUSH 0x6157e4
//   XREF to: 006157e4 (DATA)
// 004166c1: PUSH EBX
// 004166c2: MOV dword ptr [ESI + 0xbf20],EAX
// 004166c8: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004166cd: ADD ESP,0xc
// 004166d0: PUSH 0x1
// 004166d2: PUSH 0x6157ec
//   XREF to: 006157ec (DATA)
// 004166d7: PUSH EBX
// 004166d8: MOV dword ptr [ESI + 0xbf24],EAX
// 004166de: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004166e3: ADD ESP,0xc
// 004166e6: PUSH 0x1
// 004166e8: PUSH 0x6157f3
//   XREF to: 006157f3 (DATA)
// 004166ed: PUSH EBX
// 004166ee: MOV dword ptr [ESI + 0xbf28],EAX
// 004166f4: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004166f9: ADD ESP,0xc
// 004166fc: PUSH 0x1
// 004166fe: PUSH 0x6157fb
//   XREF to: 006157fb (DATA)
// 00416703: PUSH EBX
// 00416704: MOV dword ptr [ESI + 0xbf2c],EAX
// 0041670a: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0041670f: ADD ESP,0xc
// 00416712: PUSH 0x1
// 00416714: PUSH 0x615802
//   XREF to: 00615802 (DATA)
// 00416719: PUSH EBX
// 0041671a: MOV dword ptr [ESI + 0xbf30],EAX
// 00416720: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00416725: ADD ESP,0xc
// 00416728: PUSH 0x1
// 0041672a: PUSH 0x61580a
//   XREF to: 0061580a (DATA)
// 0041672f: PUSH EBX
// 00416730: MOV dword ptr [ESI + 0xbf34],EAX
// 00416736: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0041673b: ADD ESP,0xc
// 0041673e: PUSH 0x1
// 00416740: PUSH 0x615810
//   XREF to: 00615810 (DATA)
// 00416745: PUSH EBX
// 00416746: MOV dword ptr [ESI + 0xbf38],EAX
// 0041674c: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00416751: ADD ESP,0xc
// 00416754: PUSH 0x1
// 00416756: PUSH 0x615817
//   XREF to: 00615817 (DATA)
// 0041675b: PUSH EBX
// 0041675c: MOV dword ptr [ESI + 0xbf3c],EAX
// 00416762: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00416767: ADD ESP,0xc
// 0041676a: MOV dword ptr [ESI + 0xbf40],EAX
// 00416770: PUSH 0x1
// 00416772: PUSH 0x615820
//   XREF to: 00615820 (DATA)
// 00416777: PUSH EBX
// 00416778: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 0041677d: ADD ESP,0xc
// 00416780: PUSH 0x1
// 00416782: PUSH 0x615828
//   XREF to: 00615828 (DATA)
// 00416787: PUSH EBX
// 00416788: MOV dword ptr [ESI + 0xbf44],EAX
// 0041678e: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 00416793: ADD ESP,0xc
// 00416796: PUSH 0x1
// 00416798: PUSH 0x615831
//   XREF to: 00615831 (DATA)
// 0041679d: PUSH EBX
// 0041679e: MOV dword ptr [ESI + 0xbf48],EAX
// 004167a4: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004167a9: ADD ESP,0xc
// 004167ac: PUSH 0x1
// 004167ae: PUSH 0x615839
//   XREF to: 00615839 (DATA)
// 004167b3: PUSH EBX
// 004167b4: MOV dword ptr [ESI + 0xbf4c],EAX
// 004167ba: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004167bf: ADD ESP,0xc
// 004167c2: PUSH 0x1
// 004167c4: PUSH 0x615841
//   XREF to: 00615841 (DATA)
// 004167c9: PUSH EBX
// 004167ca: MOV dword ptr [ESI + 0xbf50],EAX
// 004167d0: CALL core_skeleton.cpp_CDeformableModel_findPartByName_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 004167d5: ADD ESP,0xc
// 004167d8: MOV dword ptr [ESI + 0xbf54],EAX
// 004167de: POP EDI
// 004167df: POP ESI
// 004167e0: POP EBX
// 004167e1: RET
