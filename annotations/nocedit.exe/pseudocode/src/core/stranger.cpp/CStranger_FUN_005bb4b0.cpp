// Name: core_stranger.cpp_CStranger_FUN_005bb4b0
// Address: 005bb4b0
// Address Range: [[005bb4b0, 005bb7d8]]
// Convention: __cdecl
// Signature: void core_stranger.cpp_CStranger_FUN_005bb4b0(CStranger * this_ptr)
// Globals:
//   TerminatedCString s_Bip01_head_0065335a
//   TerminatedCString s_Bip01_L_Clavicle_00653365
//   TerminatedCString s_Bip01_R_Clavicle_00653376
//   TerminatedCString s_Bip01_L_UpperArm_00653387
//   TerminatedCString s_Bip01_R_UpperArm_00653398
//   TerminatedCString s_Bip01_L_ForeArm_006533a9
//   TerminatedCString s_Bip01_R_ForeArm_006533b9
//   TerminatedCString s_Bip01_L_Foot_006533c9
//   TerminatedCString s_Bip01_R_Foot_006533d6
//   TerminatedCString s_Bip01_L_Thigh_006533e3
//   TerminatedCString s_Bip01_R_Thigh_006533f1
//   TerminatedCString s_Bip01_L_Calf_006533ff
//   TerminatedCString s_Bip01_R_Calf_0065340c
//   TerminatedCString s_Bip01_L_Hand_00653419
//   TerminatedCString s_Bip01_R_Hand_00653426
//   TerminatedCString s_Bip01_Neck_00653433
//   TerminatedCString s_Bip01_Spine2_0065343e
//   TerminatedCString s_Bip01_Spine1_0065344b
//   TerminatedCString s_Bip01_Spine_00653458
//   TerminatedCString s_Bip01_Pelvis_00653464
//   TerminatedCString s_turnlstart_00653471
//   TerminatedCString s_turnrstart_0065347c
//   TerminatedCString s_pickup_00653487
//   TerminatedCString s_stranger_hat_kfm_0065348e
//   TerminatedCString s_head01_0065349f
//   undefined4 DAT_03f6bacc
//   undefined4 DAT_03f6bad0
//   undefined4 DAT_03f6bad4
//   undefined4 DAT_03f6bad8
//   undefined4 DAT_03f6badc
//   undefined4 DAT_03f6bae0
//   undefined4 DAT_03f6bae4
//   undefined4 DAT_03f6bae8
//   undefined4 DAT_03f6baec
//   undefined4 DAT_03f6baf0
//   undefined4 DAT_03f6baf4
//   undefined4 DAT_03f6baf8
//   undefined4 DAT_03f6bafc
//   undefined4 DAT_03f6bb00
//   undefined4 DAT_03f6bb04
//   undefined4 DAT_03f6bb08
//   undefined4 DAT_03f6bb0c
//   undefined4 DAT_03f6bb10
//   undefined4 DAT_03f6bb14
//   undefined4 DAT_03f6bb18
//   undefined4 DAT_03f6bb1c
//   undefined4 DAT_03f6bb20
//   undefined4 DAT_03f6bb24
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   core_hero.cpp_CHero_FUN_004f2540
//   core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   core_stranger.cpp_CStranger_FUN_005be520

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_CStranger_FUN_005bb4b0(CStranger *this_ptr)

{
  CDeformableModelInstance *pCVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  BADSPACEBASE *in_ESP;
  char *pcStack00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000014;
  char *pcStack00000018;
  char *pcStack0000001c;
  char *pcStack00000020;
  char *pcStack00000024;
  char *pcStack00000028;
  char *pcStack0000002c;
  CDeformableModelInstance *pCStack00000030;
  char *pcStack00000034;
  CDeformableModelInstance *pCStack00000038;
  char *pcStack0000003c;
  CDeformableModelInstance *pCStack00000040;
  CDeformableModelInstance *pCStack00000044;
  CDeformableModelInstance *pCStack00000048;
  undefined1 *puStack0000004c;
  undefined4 uStack00000050;
  char *pcStack00000060;
  undefined4 uStack00000064;
  
  core_hero_cpp_CHero_FUN_004f2540(&this_ptr->base_hero);
  pCVar1 = &(this_ptr->base_hero).base_character.model;
  uVar2 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  DAT_03f6bacc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6bad0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6bad4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6bad8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6badc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6bae0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6bae4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6bae8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  DAT_03f6baec = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  _DAT_03f6baf0 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000008 = (char *)0x1;
  _DAT_03f6baf4 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack0000000c = (char *)0x1;
  pcStack00000008 = "Bip01 L Calf";
  _DAT_03f6baf8 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000010 = (char *)0x1;
  pcStack0000000c = "Bip01 R Calf";
  pcStack00000008 = (char *)uVar2;
  DAT_03f6bafc = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000014 = (char *)0x1;
  pcStack00000010 = "Bip01 L Hand";
  pcStack00000008 = (char *)0x5bb5f2;
  pcStack0000000c = (char *)uVar2;
  DAT_03f6bb00 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000018 = (char *)0x1;
  pcStack00000014 = "Bip01 R Hand";
  pcStack0000000c = (char *)0x5bb607;
  pcStack00000010 = (char *)uVar2;
  DAT_03f6bb04 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack0000001c = (char *)0x1;
  pcStack00000018 = "Bip01 Neck";
  pcStack00000010 = (char *)0x5bb61c;
  pcStack00000014 = (char *)uVar2;
  _DAT_03f6bb08 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000020 = (char *)0x1;
  pcStack0000001c = "Bip01 Spine2";
  pcStack00000014 = (char *)0x5bb631;
  pcStack00000018 = (char *)uVar2;
  DAT_03f6bb0c = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000024 = (char *)0x1;
  pcStack00000020 = "Bip01 Spine1";
  pcStack00000018 = (char *)0x5bb646;
  pcStack0000001c = (char *)uVar2;
  DAT_03f6bb10 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack00000028 = (char *)0x1;
  pcStack00000024 = "Bip01 Spine";
  pcStack0000001c = (char *)0x5bb65b;
  pcStack00000020 = (char *)uVar2;
  _DAT_03f6bb14 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pcStack0000002c = (char *)0x1;
  pcStack00000028 = "Bip01 Pelvis";
  pcStack00000020 = (char *)0x5bb670;
  pcStack00000024 = (char *)uVar2;
  _DAT_03f6bb18 = core_skeleton_cpp_CSkeleton_findBone_FUN_00599fc0();
  pCStack00000030 = (CDeformableModelInstance *)0x1;
  pcStack0000002c = "turnlstart";
  *(undefined4 *)(this_ptr->base_hero).base_character.carry_hands[0].field0_0x0 = DAT_03f6bb00;
  *(undefined4 *)(this_ptr->base_hero).base_character.carry_hands[1].field0_0x0 = DAT_03f6bb04;
  pcStack00000024 = (char *)0x5bb69b;
  pcStack00000028 = pCVar1->padding_0x0;
  pcStack0000002c = (char *)core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  pcStack00000028 = (char *)0x5bb6a4;
  DAT_03f6bb1c = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  pCStack00000038 = (CDeformableModelInstance *)0x1;
  pcStack00000034 = "turnrstart";
  pcStack0000002c = (char *)0x5bb6b9;
  pCStack00000030 = pCVar1;
  pcStack00000034 = (char *)core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  pCStack00000030 = (CDeformableModelInstance *)0x5bb6c2;
  DAT_03f6bb20 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  pCStack00000040 = (CDeformableModelInstance *)0x1;
  pcStack0000003c = "pickup";
  pcStack00000034 = (char *)0x5bb6d7;
  pCStack00000038 = pCVar1;
  pcStack0000003c = (char *)core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0();
  pCStack00000038 = (CDeformableModelInstance *)0x5bb6e0;
  pCStack00000044 =
       (CDeformableModelInstance *)core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460();
  pCStack00000048 = (CDeformableModelInstance *)0x41b00000;
  pcStack0000003c = (char *)0x5bb6ef;
  pCStack00000040 = pCVar1;
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059e070();
  puStack0000004c = (undefined1 *)DAT_03f6bb04;
  pCStack00000048 = (CDeformableModelInstance *)&stack0x0000005c;
  pCStack00000040 = (CDeformableModelInstance *)0x5bb70a;
  pCStack00000044 = pCVar1;
  puVar3 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
  puStack0000004c = &stack0x00000054;
  if (this_ptr->field4_0x1fc3c + 0x80 != (char *)puVar3) {
    *(undefined4 *)(this_ptr->field4_0x1fc3c + 0x80) = *puVar3;
    *(undefined4 *)(this_ptr->field4_0x1fc3c + 0x84) = puVar3[1];
    *(undefined4 *)(this_ptr->field4_0x1fc3c + 0x88) = puVar3[2];
  }
  uStack00000050 = DAT_03f6badc;
  pCStack00000048 = &(this_ptr->base_hero).base_character.model;
  pCStack00000044 = (CDeformableModelInstance *)0x5bb739;
  puVar3 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fa20();
  if (this_ptr->field4_0x1fc3c + 0x8c != (char *)puVar3) {
    *(undefined4 *)(this_ptr->field4_0x1fc3c + 0x8c) = *puVar3;
    *(undefined4 *)(this_ptr->field4_0x1fc3c + 0x90) = puVar3[1];
    *(undefined4 *)(this_ptr->field4_0x1fc3c + 0x94) = puVar3[2];
  }
  uStack00000050 = 0x5bb75c;
  core_stranger_cpp_CStranger_FUN_005be520();
  this_ptr->field4_0x1fc3c[0x98] = '\0';
  this_ptr->field4_0x1fc3c[0x99] = '\0';
  this_ptr->field4_0x1fc3c[0x9a] = '\0';
  this_ptr->field4_0x1fc3c[0x9b] = '\0';
  this_ptr->field4_0x1fc3c[0x228] = '\0';
  this_ptr->field4_0x1fc3c[0x229] = '\0';
  this_ptr->field4_0x1fc3c[0x22a] = '\0';
  this_ptr->field4_0x1fc3c[0x22b] = '\0';
  uStack00000050 = 0x5bb784;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(this_ptr->field4_0x1fc3c + 0x9c),
             "stranger-hat.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
            ((CKeyFramedModelInstance *)(this_ptr->field4_0x1fc3c + 0x9c));
  this_ptr->field4_0x1fc3c[0x230] = '\0';
  this_ptr->field4_0x1fc3c[0x231] = '\0';
  this_ptr->field4_0x1fc3c[0x232] = '\0';
  this_ptr->field4_0x1fc3c[0x233] = '\0';
  this_ptr->field4_0x1fc3c[0xc] = '\0';
  this_ptr->field4_0x1fc3c[0xd] = '\0';
  this_ptr->field4_0x1fc3c[0xe] = '\0';
  this_ptr->field4_0x1fc3c[0xf] = '\0';
  this_ptr->field4_0x1fc3c[0x10] = '\0';
  this_ptr->field4_0x1fc3c[0x11] = '\0';
  this_ptr->field4_0x1fc3c[0x12] = '\0';
  this_ptr->field4_0x1fc3c[0x13] = '\0';
  pcStack00000060 = (this_ptr->base_hero).base_character.model.padding_0x0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0();
  uStack00000064 = 1;
  pcStack00000060 = "head01";
  DAT_03f6bb24 = core_skeleton_cpp_CDeformableModel_FindPartInModel_FUN_0059c240();
  return;
}


// Assembly code:
// 005bb4b0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005bb4b0
// 005bb4b1: PUSH ESI
// 005bb4b2: PUSH EDI
// 005bb4b3: SUB ESP,0x18
// 005bb4b6: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 005bb4ba: PUSH ESI
// 005bb4bb: CALL core_hero.cpp_CHero_FUN_004f2540
//   XREF to: 004f2540 (UNCONDITIONAL_CALL)
// 005bb4c0: ADD ESP,0x4
// 005bb4c3: LEA EDI,[ESI + 0x158]
// 005bb4c9: PUSH EDI
// 005bb4ca: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005bb4cf: ADD ESP,0x4
// 005bb4d2: PUSH 0x1
// 005bb4d4: PUSH 0x65335a
//   XREF to: 0065335a (DATA)
// 005bb4d9: PUSH EAX
// 005bb4da: MOV EBX,EAX
// 005bb4dc: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb4e1: ADD ESP,0xc
// 005bb4e4: PUSH 0x1
// 005bb4e6: PUSH 0x653365
//   XREF to: 00653365 (DATA)
// 005bb4eb: PUSH EBX
// 005bb4ec: MOV [0x03f6bacc],EAX
//   XREF to: 03f6bacc (WRITE)
// 005bb4f1: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb4f6: ADD ESP,0xc
// 005bb4f9: PUSH 0x1
// 005bb4fb: PUSH 0x653376
//   XREF to: 00653376 (DATA)
// 005bb500: PUSH EBX
// 005bb501: MOV [0x03f6bad0],EAX
//   XREF to: 03f6bad0 (WRITE)
// 005bb506: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb50b: ADD ESP,0xc
// 005bb50e: PUSH 0x1
// 005bb510: PUSH 0x653387
//   XREF to: 00653387 (DATA)
// 005bb515: PUSH EBX
// 005bb516: MOV [0x03f6bad4],EAX
//   XREF to: 03f6bad4 (WRITE)
// 005bb51b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb520: ADD ESP,0xc
// 005bb523: PUSH 0x1
// 005bb525: PUSH 0x653398
//   XREF to: 00653398 (DATA)
// 005bb52a: PUSH EBX
// 005bb52b: MOV [0x03f6bad8],EAX
//   XREF to: 03f6bad8 (WRITE)
// 005bb530: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb535: ADD ESP,0xc
// 005bb538: PUSH 0x1
// 005bb53a: PUSH 0x6533a9
//   XREF to: 006533a9 (DATA)
// 005bb53f: PUSH EBX
// 005bb540: MOV [0x03f6badc],EAX
//   XREF to: 03f6badc (WRITE)
// 005bb545: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb54a: ADD ESP,0xc
// 005bb54d: PUSH 0x1
// 005bb54f: PUSH 0x6533b9
//   XREF to: 006533b9 (DATA)
// 005bb554: PUSH EBX
// 005bb555: MOV [0x03f6bae0],EAX
//   XREF to: 03f6bae0 (WRITE)
// 005bb55a: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb55f: ADD ESP,0xc
// 005bb562: PUSH 0x1
// 005bb564: PUSH 0x6533c9
//   XREF to: 006533c9 (DATA)
// 005bb569: PUSH EBX
// 005bb56a: MOV [0x03f6bae4],EAX
//   XREF to: 03f6bae4 (WRITE)
// 005bb56f: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb574: ADD ESP,0xc
// 005bb577: PUSH 0x1
// 005bb579: PUSH 0x6533d6
//   XREF to: 006533d6 (DATA)
// 005bb57e: PUSH EBX
// 005bb57f: MOV [0x03f6bae8],EAX
//   XREF to: 03f6bae8 (WRITE)
// 005bb584: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb589: ADD ESP,0xc
// 005bb58c: MOV [0x03f6baec],EAX
//   XREF to: 03f6baec (WRITE)
// 005bb591: PUSH 0x1
// 005bb593: PUSH 0x6533e3
//   XREF to: 006533e3 (DATA)
// 005bb598: PUSH EBX
// 005bb599: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb59e: ADD ESP,0xc
// 005bb5a1: PUSH 0x1
// 005bb5a3: PUSH 0x6533f1
//   XREF to: 006533f1 (DATA)
// 005bb5a8: PUSH EBX
// 005bb5a9: MOV [0x03f6baf0],EAX
//   XREF to: 03f6baf0 (WRITE)
// 005bb5ae: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb5b3: ADD ESP,0xc
// 005bb5b6: PUSH 0x1
// 005bb5b8: PUSH 0x6533ff
//   XREF to: 006533ff (DATA)
// 005bb5bd: PUSH EBX
// 005bb5be: MOV [0x03f6baf4],EAX
//   XREF to: 03f6baf4 (WRITE)
// 005bb5c3: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb5c8: ADD ESP,0xc
// 005bb5cb: PUSH 0x1
// 005bb5cd: PUSH 0x65340c
//   XREF to: 0065340c (DATA)
// 005bb5d2: PUSH EBX
// 005bb5d3: MOV [0x03f6baf8],EAX
//   XREF to: 03f6baf8 (WRITE)
// 005bb5d8: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb5dd: ADD ESP,0xc
// 005bb5e0: PUSH 0x1
// 005bb5e2: PUSH 0x653419
//   XREF to: 00653419 (DATA)
// 005bb5e7: PUSH EBX
// 005bb5e8: MOV [0x03f6bafc],EAX
//   XREF to: 03f6bafc (WRITE)
// 005bb5ed: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb5f2: ADD ESP,0xc
// 005bb5f5: PUSH 0x1
// 005bb5f7: PUSH 0x653426
//   XREF to: 00653426 (DATA)
// 005bb5fc: PUSH EBX
// 005bb5fd: MOV [0x03f6bb00],EAX
//   XREF to: 03f6bb00 (WRITE)
// 005bb602: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb607: ADD ESP,0xc
// 005bb60a: PUSH 0x1
// 005bb60c: PUSH 0x653433
//   XREF to: 00653433 (DATA)
// 005bb611: PUSH EBX
// 005bb612: MOV [0x03f6bb04],EAX
//   XREF to: 03f6bb04 (WRITE)
// 005bb617: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb61c: ADD ESP,0xc
// 005bb61f: PUSH 0x1
// 005bb621: PUSH 0x65343e
//   XREF to: 0065343e (DATA)
// 005bb626: PUSH EBX
// 005bb627: MOV [0x03f6bb08],EAX
//   XREF to: 03f6bb08 (WRITE)
// 005bb62c: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb631: ADD ESP,0xc
// 005bb634: PUSH 0x1
// 005bb636: PUSH 0x65344b
//   XREF to: 0065344b (DATA)
// 005bb63b: PUSH EBX
// 005bb63c: MOV [0x03f6bb0c],EAX
//   XREF to: 03f6bb0c (WRITE)
// 005bb641: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb646: ADD ESP,0xc
// 005bb649: PUSH 0x1
// 005bb64b: PUSH 0x653458
//   XREF to: 00653458 (DATA)
// 005bb650: PUSH EBX
// 005bb651: MOV [0x03f6bb10],EAX
//   XREF to: 03f6bb10 (WRITE)
// 005bb656: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb65b: ADD ESP,0xc
// 005bb65e: MOV [0x03f6bb14],EAX
//   XREF to: 03f6bb14 (WRITE)
// 005bb663: PUSH 0x1
// 005bb665: PUSH 0x653464
//   XREF to: 00653464 (DATA)
// 005bb66a: PUSH EBX
// 005bb66b: CALL core_skeleton.cpp_CSkeleton_findBone_FUN_00599fc0
//   XREF to: 00599fc0 (UNCONDITIONAL_CALL)
// 005bb670: ADD ESP,0xc
// 005bb673: PUSH 0x1
// 005bb675: MOV [0x03f6bb18],EAX
//   XREF to: 03f6bb18 (WRITE)
// 005bb67a: MOV EAX,[0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005bb67f: PUSH 0x653471
//   XREF to: 00653471 (DATA)
// 005bb684: MOV dword ptr [ESI + 0x24ac],EAX
// 005bb68a: MOV EAX,[0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005bb68f: PUSH EDI
// 005bb690: MOV dword ptr [ESI + 0x24f0],EAX
// 005bb696: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005bb69b: ADD ESP,0x4
// 005bb69e: PUSH EAX
// 005bb69f: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005bb6a4: ADD ESP,0xc
// 005bb6a7: PUSH 0x1
// 005bb6a9: PUSH 0x65347c
//   XREF to: 0065347c (DATA)
// 005bb6ae: PUSH EDI
// 005bb6af: MOV [0x03f6bb1c],EAX
//   XREF to: 03f6bb1c (WRITE)
// 005bb6b4: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005bb6b9: ADD ESP,0x4
// 005bb6bc: PUSH EAX
// 005bb6bd: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005bb6c2: ADD ESP,0xc
// 005bb6c5: PUSH 0x1
// 005bb6c7: PUSH 0x653487
//   XREF to: 00653487 (DATA)
// 005bb6cc: PUSH EDI
// 005bb6cd: MOV [0x03f6bb20],EAX
//   XREF to: 03f6bb20 (WRITE)
// 005bb6d2: CALL core_motion.cpp_CMotionController_getMotionList_FUN_0052dce0
//   XREF to: 0052dce0 (UNCONDITIONAL_CALL)
// 005bb6d7: ADD ESP,0x4
// 005bb6da: PUSH EAX
// 005bb6db: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005bb6e0: ADD ESP,0xc
// 005bb6e3: PUSH 0x41b00000
// 005bb6e8: PUSH EAX
// 005bb6e9: PUSH EDI
// 005bb6ea: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059e070
//   XREF to: 0059e070 (UNCONDITIONAL_CALL)
// 005bb6ef: ADD ESP,0xc
// 005bb6f2: MOV EDX,dword ptr [0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005bb6f8: PUSH EDX
// 005bb6f9: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x18] (DATA)
// 005bb6fd: PUSH EAX
// 005bb6fe: PUSH EDI
// 005bb6ff: LEA EBX,[ESI + 0x1fcbc]
// 005bb705: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bb70a: ADD ESP,0xc
// 005bb70d: CMP EBX,EAX
// 005bb70f: JZ 0x005bb721
//   XREF to: 005bb721 (CONDITIONAL_JUMP)
// 005bb711: MOV EDX,dword ptr [EAX]
// 005bb713: MOV dword ptr [EBX],EDX
// 005bb715: MOV EDX,dword ptr [EAX + 0x4]
// 005bb718: MOV dword ptr [EBX + 0x4],EDX
// 005bb71b: MOV EDX,dword ptr [EAX + 0x8]
// 005bb71e: MOV dword ptr [EBX + 0x8],EDX
// 005bb721: MOV ECX,dword ptr [0x03f6badc]
//   Label: LAB_005bb721
//   XREF to: 03f6badc (READ)
// 005bb727: PUSH ECX
// 005bb728: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x24] (DATA)
// 005bb72c: PUSH EAX
// 005bb72d: LEA EAX,[ESI + 0x158]
// 005bb733: PUSH EAX
// 005bb734: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005bb739: LEA EBX,[ESI + 0x1fcc8]
// 005bb73f: ADD ESP,0xc
// 005bb742: CMP EBX,EAX
// 005bb744: JZ 0x005bb756
//   XREF to: 005bb756 (CONDITIONAL_JUMP)
// 005bb746: MOV EDX,dword ptr [EAX]
// 005bb748: MOV dword ptr [EBX],EDX
// 005bb74a: MOV EDX,dword ptr [EAX + 0x4]
// 005bb74d: MOV dword ptr [EBX + 0x4],EDX
// 005bb750: MOV EDX,dword ptr [EAX + 0x8]
// 005bb753: MOV dword ptr [EBX + 0x8],EDX
// 005bb756: PUSH ESI
//   Label: LAB_005bb756
// 005bb757: CALL core_stranger.cpp_CStranger_FUN_005be520
//   XREF to: 005be520 (UNCONDITIONAL_CALL)
// 005bb75c: ADD ESP,0x4
// 005bb75f: PUSH 0x65348e
//   XREF to: 0065348e (DATA)
// 005bb764: LEA EBX,[ESI + 0x1fcd8]
// 005bb76a: MOV dword ptr [ESI + 0x1fcd4],0x0
// 005bb774: PUSH EBX
// 005bb775: MOV dword ptr [ESI + 0x1fe64],0x0
// 005bb77f: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 005bb784: ADD ESP,0x8
// 005bb787: PUSH EBX
// 005bb788: ADD ESI,0x158
// 005bb78e: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 005bb793: MOV dword ptr [ESI + 0x1fd14],0x0
// 005bb79d: ADD ESP,0x4
// 005bb7a0: MOV dword ptr [ESI + 0x1faf0],0x0
// 005bb7aa: PUSH ESI
// 005bb7ab: MOV dword ptr [ESI + 0x1faf4],0x0
// 005bb7b5: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 005bb7ba: ADD ESP,0x4
// 005bb7bd: PUSH 0x1
// 005bb7bf: PUSH 0x65349f
//   XREF to: 0065349f (DATA)
// 005bb7c4: PUSH EAX
// 005bb7c5: CALL core_skeleton.cpp_CDeformableModel_FindPartInModel_FUN_0059c240
//   XREF to: 0059c240 (UNCONDITIONAL_CALL)
// 005bb7ca: ADD ESP,0xc
// 005bb7cd: MOV [0x03f6bb24],EAX
//   XREF to: 03f6bb24 (WRITE)
// 005bb7d2: ADD ESP,0x18
// 005bb7d5: POP EDI
// 005bb7d6: POP ESI
// 005bb7d7: POP EBX
// 005bb7d8: RET
