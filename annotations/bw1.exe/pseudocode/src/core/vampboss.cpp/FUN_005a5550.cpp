// Name: core_vampboss.cpp_FUN_005a5550
// Address: 005a5550
// Address Range: [[005a5550, 005a68ca]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_005a5550(CVampireBoss *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_005a5550(CVampireBoss *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  CEventList *pCVar3;
  CGame *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  uint uVar7;
  int iVar8;
  CVampireBoss *pCVar9;
  uint *puVar10;
  uint *puVar11;
  CVector3f *pCVar12;
  byte bVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float10 fVar19;
  float afStackY_116c [907];
  float fVar20;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  SDamageInfo aSStack_31c [4];
  uint uStack_318;
  SDamageInfo aSStack_2e0 [4];
  uint uStack_2dc;
  CVampireBoss *pCStack_2ac;
  CVampireBoss *pCStack_2a8;
  uint uStack_2a4;
  uint uStack_2a0;
  uint uStack_29c;
  uint uStack_298;
  uint uStack_294;
  uint uStack_290;
  uint auStack_28c [6];
  uint uStack_274;
  uint uStack_270;
  uint uStack_26c;
  uint uStack_268;
  uint uStack_264;
  uint uStack_260;
  uint auStack_25c [6];
  uint uStack_244;
  uint uStack_240;
  uint uStack_23c;
  uint uStack_238;
  uint uStack_234;
  uint uStack_230;
  CVector3f CStack_22c;
  CVector3f CStack_220;
  uint auStack_214 [6];
  CVector3f CStack_1fc;
  CVector3f CStack_1f0;
  uint auStack_1e4 [6];
  uint uStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  uint uStack_1b8;
  uint auStack_1b4 [6];
  uint auStack_19c [6];
  float fStack_184;
  float afStack_180 [2];
  CVector3f CStack_178;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  float fStack_160;
  float afStack_15c [5];
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [4];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  float fStack_108;
  uint uStack_100;
  float fStack_f4;
  float afStack_f0 [4];
  float fStack_e0;
  float afStack_dc [3];
  uint uStack_d0;
  float fStack_cc;
  float afStack_c4 [3];
  CVector3f aCStack_b8 [6];
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f *pCStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  int iStack_1c;
  float fStack_18;
  CVector3f *pCStack_14;
  
  bVar13 = 0;
  pCVar9 = param_1;
  do {
    if (*(int *)&pCVar9->field_0xbf3e8 == 0) {
      _DAT_01d1d400 = "..\\core\\vampboss.cpp";
      _DAT_01d1d404 = 0xcf;
      core_main_c_FUN_005030e0("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar9 = (CVampireBoss *)&pCVar9->field_0x4;
  } while (pCVar9 != (CVampireBoss *)&param_1->field_0x10);
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = *(int *)&param_1->field_0xbe79c;
  if (iVar5 == 2) {
    core_vampboss_cpp_FUN_005a6a00(param_1,param_2);
    core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)&param_1->field_0xc268);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0xe60c,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
               (CDeformableModelInstance *)&param_1->field_0xc268);
    if (*(float *)&param_1->field_0x2538 < (float)_DAT_005f8da8) {
      *(uint *)&param_1->field_0x2538 = 0x41c7fdf4;
      if ((*(int *)&param_1->field_0xbf3e0 != 2) && (*(int *)&param_1->field_0xbf3e0 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(param_1);
        *(uint *)&param_1->field_0xbf3e0 = 2;
        *(uint *)&param_1->field_0xbf3d4 = 0x40a00000;
      }
    }
    if ((*(int *)&param_1->field_0xbf3e0 != 2) && (*(int *)&param_1->field_0xbf3e0 != 3)) {
      iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_124 = *(float *)&param_1->field_0x20 - *(float *)(iVar5 + 0x20);
      fStack_120 = *(float *)&param_1->field_0x24 - *(float *)(iVar5 + 0x24);
      fStack_11c = *(float *)&param_1->field_0x28 - *(float *)(iVar5 + 0x28);
      afStack_f0[2] = fStack_124;
      afStack_f0[(uint)bVar13 * -2 + 3] = afStack_138[(uint)bVar13 * -2 + 6];
      afStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_138[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      fStack_324 = SQRT(afStack_f0[2] * afStack_f0[2] + fStack_e0 * fStack_e0);
      if (fStack_324 < (float)_DAT_005f8db0) {
        *(uint *)&param_1->field_0xbf3e0 = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_f0[3] < (float)_DAT_005f8db8);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2e0);
          uStack_2dc = 0x41200000;
          pCStack_2ac = param_1;
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          pCStack_2a8 = param_1;
          (**(code **)(*(int *)(iVar5 + 0x154) + 0x108))(iVar5,aSStack_2e0);
        }
      }
      if ((float)_DAT_005f8dc0 < fStack_324) {
        *(uint *)&param_1->field_0xbf3d0 = 0x40a00000;
        *(uint *)&param_1->field_0xbf3d8 = 0;
        *(uint *)&param_1->field_0xbf3e0 = 0;
      }
      if ((*(int *)&param_1->field_0xbf3e0 == 0) &&
         (fVar20 = *(float *)&param_1->field_0xbf3d0 - param_2,
         *(float *)&param_1->field_0xbf3d0 = fVar20, fVar20 < 0.0)) {
        *(uint *)&param_1->field_0xbf3e0 = 1;
        *(uint *)&param_1->field_0xbf3d0 = 0;
      }
      pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&param_1->field_0xc268);
      if ((((*(int *)(pSVar6 + 0x24) == 0) && (*(int *)&param_1->field_0xbf3e0 == 0)) &&
          (fStack_324 < (float)_DAT_005f8dc8)) && (*(int *)&param_1->field_0xbf3d8 == 0)) {
        *(uint *)&param_1->field_0xbf3d8 = 1;
        iVar5 = core_actor_cpp_FUN_0040cd00(0.5);
        if (iVar5 == 0) {
          iVar5 = 2;
        }
        else {
          iVar5 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0xc268,iVar5,1);
      }
    }
    iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
      fStack_148 = *(float *)(iVar5 + 0x20);
      fStack_144 = *(float *)(iVar5 + 0x24);
      fStack_140 = *(float *)(iVar5 + 0x28);
    }
    if (*(int *)&param_1->field_0xbf3e0 == 2) {
      *(float *)&param_1->field_0xbf3d4 = *(float *)&param_1->field_0xbf3d4 - param_2;
      iVar5 = *(int *)((int)param_1 + (4 - *(int *)&param_1->field_0xbf3e4) * 4 + 0xbf3e4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      if ((*(float *)&param_1->field_0xbf3d4 <= 0.0) ||
         (fVar20 = fStack_148 - *(float *)&param_1->field_0x20,
         fVar2 = fStack_140 - *(float *)&param_1->field_0x28,
         SQRT(fVar2 * fVar2 + fVar20 * fVar20) < (float)_DAT_005f8dd8)) {
        *(uint *)&param_1->field_0xbf3d4 = 0x40a00000;
        *(uint *)&param_1->field_0xbf3e0 = 3;
      }
    }
    else if (*(int *)&param_1->field_0xbf3e0 == 3) {
      iVar5 = *(int *)(&param_1->field_0xbf3e8 + *(int *)&param_1->field_0xbf3e4 * 4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      fVar20 = *(float *)&param_1->field_0xbf3d4 - param_2;
      *(float *)&param_1->field_0xbf3d4 = fVar20;
      if ((fVar20 <= 0.0) ||
         (fVar20 = fStack_148 - *(float *)&param_1->field_0x20,
         fVar2 = fStack_140 - *(float *)&param_1->field_0x28,
         SQRT(fVar2 * fVar2 + fVar20 * fVar20) < (float)_DAT_005f8dd0)) {
        core_vampboss_cpp_FUN_005a7290(param_1);
      }
    }
    fStack_58 = 1.2;
    fStack_144 = fStack_144 + _DAT_005f8de0;
    fStack_48 = 20.0;
    afStack_138[2] = fStack_148 - *(float *)&param_1->field_0x20;
    fStack_128 = fStack_140 - *(float *)&param_1->field_0x28;
    afStack_138[3] = fStack_144 - *(float *)&param_1->field_0x24;
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar13 * -2] = afStack_138[(uint)bVar13 * -2 + 3];
    afStack_180[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_138[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    atan2();
    fVar14 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                  (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar15 = (float10)afStack_180[0];
    atan2();
    fStack_30 = (float)fVar14;
    pCStack_28 = (CVector3f *)(float)-fVar15;
    if (*(int *)&param_1->field_0xbf3e0 == 1) {
      fStack_30 = -fStack_30;
      pCStack_28 = (CVector3f *)-(float)pCStack_28;
    }
    fStack_320 = (float)core_actor_cpp_FUN_0040cd60(fStack_30 - *(float *)&param_1->field_0x34);
    fStack_328 = fStack_320 * param_2 * fStack_58;
    if (ABS(fStack_328) <= ABS(fStack_320)) {
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_328;
    }
    else {
      *(float *)&param_1->field_0x34 = fStack_30;
    }
    pCStack_14 = (CVector3f *)fStack_320;
    pCStack_28 = (CVector3f *)
                 core_actor_cpp_FUN_0040cd60((float)pCStack_28 - *(float *)&param_1->field_0x30);
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    *(float *)&param_1->field_0x30 =
         (float)pCStack_28 * param_2 * fStack_58 + *(float *)&param_1->field_0x30;
    if ((*(float *)&param_1->field_0x2538 < (float)_DAT_005f8da8) &&
       (*(int *)&param_1->field_0xbf3e0 == 0)) {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if (*(float *)&param_1->field_0x30 < fStack_3c) {
      *(float *)&param_1->field_0x30 = fStack_3c;
    }
    if (fStack_34 < *(float *)&param_1->field_0x30) {
      *(float *)&param_1->field_0x30 = fStack_34;
    }
    fVar14 = (float10)fsin((float10)*(float *)&param_1->field_0x30);
    fVar15 = (float10)fsin((float10)*(float *)&param_1->field_0x34);
    fVar16 = (float10)fcos((float10)*(float *)&param_1->field_0x30);
    fVar17 = (float10)fcos((float10)*(float *)&param_1->field_0x34);
    fVar18 = (float10)fStack_48;
    fVar19 = (float10)param_2;
    fVar14 = -fVar14 * fVar18 * fVar19 + (float10)*(float *)&param_1->field_0x24;
    *(float *)&param_1->field_0x24 = (float)fVar14;
    *(float *)&param_1->field_0x20 =
         (float)(fVar15 * fVar16 * fVar18 * fVar19 + (float10)*(float *)&param_1->field_0x20);
    *(float *)&param_1->field_0x28 =
         (float)(fVar17 * fVar16 * fVar18 * fVar19 + (float10)*(float *)&param_1->field_0x28);
    if (fVar14 < (float10)fStack_144) {
      *(float *)&param_1->field_0x24 = fStack_144;
    }
    pCStack_14 = pCStack_28;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)param_1);
    core_skeleton_cpp_FUN_0056ae70(&param_1->field_0xc268);
    puVar10 = auStack_1e4;
    puVar11 = &uStack_244;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    if ((uint *)&param_1->field_0x2788 != &uStack_244) {
      *(uint *)&param_1->field_0x2788 = uStack_244;
      *(uint *)&param_1->field_0x278c = uStack_240;
      *(uint *)&param_1->field_0x2790 = uStack_23c;
    }
    if ((uint *)&param_1->field_0x2794 != &uStack_238) {
      *(uint *)&param_1->field_0x2794 = uStack_238;
      *(uint *)&param_1->field_0x2798 = uStack_234;
      *(uint *)&param_1->field_0x279c = uStack_230;
    }
    goto LAB_005a5b9f;
  }
  if (iVar5 == 1) {
    fVar20 = param_2 / _DAT_006077ac + *(float *)&param_1->field_0xbf3cc;
    *(float *)&param_1->field_0xbf3cc = fVar20;
    pCVar3 = 0x01C51D80;
    if (1.0 <= fVar20) {
      *(uint *)&param_1->field_0xbe79c = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar3,"morphCompleted");
    }
    core_vampboss_cpp_FUN_005a6a00(param_1,param_2);
    core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)&param_1->field_0xc268);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0xe60c,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
               (CDeformableModelInstance *)&param_1->field_0xc268);
    puVar1 = &param_1->field_0x158;
    fStack_68 = param_2;
    while (0.0 < fStack_68) {
      core_motion_cpp_CMotionController_advance_FUN_00524270((CMotionController *)puVar1,&fStack_68)
      ;
    }
    core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)puVar1);
    pCStack_14 = (CVector3f *)&param_1->field_0x20;
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0x4913c,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2504,(CDeformableModelInstance *)puVar1);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0x83c6c,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2504,(CDeformableModelInstance *)puVar1);
    core_skeleton_cpp_FUN_0056ae70(puVar1);
    puVar10 = auStack_1b4;
    puVar11 = &uStack_1cc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    if ((uint *)&param_1->field_0x2788 != &uStack_1cc) {
      *(uint *)&param_1->field_0x2788 = uStack_1cc;
      *(uint *)&param_1->field_0x278c = uStack_1c8;
      *(uint *)&param_1->field_0x2790 = uStack_1c4;
    }
    if ((uint *)&param_1->field_0x2794 != &uStack_1c0) {
      *(uint *)&param_1->field_0x2794 = uStack_1c0;
      *(uint *)&param_1->field_0x2798 = uStack_1bc;
      *(uint *)&param_1->field_0x279c = uStack_1b8;
    }
    core_skeleton_cpp_FUN_0056ae70(&param_1->field_0xc268);
    puVar10 = auStack_28c;
    pCVar12 = &CStack_22c;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pCVar12 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      pCVar12 = (CVector3f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500
              ((CBoundingBox3D *)&param_1->field_0x2788,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500
              ((CBoundingBox3D *)&param_1->field_0x2788,&CStack_220);
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + param_2;
    goto LAB_005a5b9f;
  }
  if (iVar5 == 3) {
    fStack_5c = param_2 / _DAT_006077ac;
    fStack_60 = *(float *)&param_1->field_0xbf3cc;
    *(float *)&param_1->field_0xbf3cc = fStack_60 - fStack_5c;
    pCVar3 = 0x01C51D80;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar20 = (fStack_5c / fStack_60) *
               (*(float *)&param_1->field_0x2504 - *(float *)&param_1->field_0x24) +
               *(float *)&param_1->field_0x24;
    }
    else {
      *(uint *)&param_1->field_0xbe79c = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(pCVar3,"backToHuman");
      fVar20 = *(float *)&param_1->field_0x2504;
      *(uint *)&param_1->field_0xbf3cc = 0;
    }
    *(float *)&param_1->field_0x24 = fVar20;
    core_vampboss_cpp_FUN_005a6a00(param_1,param_2);
    core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)&param_1->field_0xc268);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0xe60c,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2504,
               (CDeformableModelInstance *)&param_1->field_0xc268);
    puVar1 = &param_1->field_0x158;
    fStack_18 = param_2;
    while (0.0 < fStack_18) {
      core_motion_cpp_CMotionController_advance_FUN_00524270((CMotionController *)puVar1,&fStack_18)
      ;
    }
    core_skeleton_cpp_FUN_00567580((CDeformableModelInstance *)puVar1);
    pCStack_14 = (CVector3f *)&param_1->field_0x20;
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0x4913c,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2504,(CDeformableModelInstance *)puVar1);
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&param_1->field_0x83c6c,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2504,(CDeformableModelInstance *)puVar1);
    core_skeleton_cpp_FUN_0056ae70(puVar1);
    puVar10 = auStack_19c;
    puVar11 = &uStack_274;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar11 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    if ((uint *)&param_1->field_0x2788 != &uStack_274) {
      *(uint *)&param_1->field_0x2788 = uStack_274;
      *(uint *)&param_1->field_0x278c = uStack_270;
      *(uint *)&param_1->field_0x2790 = uStack_26c;
    }
    if ((uint *)&param_1->field_0x2794 != &uStack_268) {
      *(uint *)&param_1->field_0x2794 = uStack_268;
      *(uint *)&param_1->field_0x2798 = uStack_264;
      *(uint *)&param_1->field_0x279c = uStack_260;
    }
    core_skeleton_cpp_FUN_0056ae70(&param_1->field_0xc268);
    puVar10 = auStack_214;
    pCVar12 = &CStack_1fc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pCVar12 = *puVar10;
      puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
      pCVar12 = (CVector3f *)((int)pCVar12 + ((uint)bVar13 * -2 + 1) * 4);
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500
              ((CBoundingBox3D *)&param_1->field_0x2788,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_00420500
              ((CBoundingBox3D *)&param_1->field_0x2788,&CStack_1f0);
    goto LAB_005a5b9f;
  }
  pCStack_20 = (CMotionController *)&param_1->field_0x158;
  fStack_6c = param_2;
  while (0.0 < fStack_6c) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_20,&fStack_6c);
    if (uVar7 < 2) {
      if (uVar7 == 1) {
        core_vampboss_cpp_FUN_005a7160(param_1);
LAB_005a6148:
        *(uint *)&param_1->field_0xbf3d0 = 0x3f800000;
      }
    }
    else {
      if (uVar7 < 3) {
        core_vampboss_cpp_FUN_005a71e0(param_1);
        goto LAB_005a6148;
      }
      if (uVar7 < 4) {
        core_vampboss_cpp_FUN_005a70f0(param_1);
        goto LAB_005a6148;
      }
      if (uVar7 == 0x29a) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,0,0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        uStack_16c = 0;
        core_actor_cpp_FUN_00408ac0(param_1,&uStack_16c);
        iVar5 = 0;
        pCVar12 = aCStack_b8;
        fVar20 = -1.0;
        aCStack_b8[0]._0_4_ = CStack_178._0_4_;
        *(uint *)((int)aCStack_b8 + (uint)bVar13 * -8 + 4) =
             *(uint *)((int)&CStack_178 + (uint)bVar13 * -8 + 4);
        pCVar9 = param_1;
        *(uint *)((int)aCStack_b8 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
             *(uint *)((int)&CStack_178 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8);
        core_charactr_cpp_CCharacter_dismember_FUN_00430d90
                  ((CCharacter *)pCVar9,pCVar12,fVar20,iVar5);
        iStack_1c = 0;
        iVar5 = 0;
        while (iStack_1c < *(int *)&g_CDemonSetPtr->field_0x150fec) {
          iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                            (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar5),
                             g_CTVBatClassInfo.name_hash);
          if ((iVar8 == 0) || (*(int *)(iVar8 + 0xc410) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_31c);
            uStack_318 = 0x4479c000;
            (**(code **)(*(int *)(iVar8 + 0x154) + 0x108))(iVar8,aSStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_FUN_0056ae70(pCStack_20);
  puVar10 = auStack_25c;
  puVar11 = &uStack_2a4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
  }
  if ((uint *)&param_1->field_0x2788 != &uStack_2a4) {
    *(uint *)&param_1->field_0x2788 = uStack_2a4;
    *(uint *)&param_1->field_0x278c = uStack_2a0;
    *(uint *)&param_1->field_0x2790 = uStack_29c;
  }
  if ((uint *)&param_1->field_0x2794 != &uStack_298) {
    *(uint *)&param_1->field_0x2794 = uStack_298;
    *(uint *)&param_1->field_0x2798 = uStack_294;
    *(uint *)&param_1->field_0x279c = uStack_290;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  pCVar4 = g_CGamePtr;
  iStack_64 = *(int *)(pSVar6 + 0x24);
  switch(*(int *)(pSVar6 + 0x24)) {
  case 0:
    *(float *)&param_1->field_0x2528 = _DAT_006077b4 * param_2;
    pCVar3 = 0x01C51D80;
    if (*(int *)&pCVar4->field_0x244 == 0) {
      *(float *)&param_1->field_0x2524 = _DAT_006077b0 * param_2;
      core_charactr_cpp_FUN_00431cc0
                (param_1,*(uint *)
                          (&param_1->field_0xbf3e8 + *(int *)&param_1->field_0xbf3e4 * 4),0x3e4ccccd
                 ,0x497423f0,&param_1->field_0xbf3f8);
      switch(*(uint *)&param_1->field_0xbf3f8) {
      default:
        fVar20 = (*(float *)&param_1->field_0x253c * param_2) / _DAT_006077b8 +
                 *(float *)&param_1->field_0x2538;
        *(float *)&param_1->field_0x2538 = fVar20;
        if ((float)_DAT_005f8de8 < fVar20) goto LAB_005a6245;
        iVar5 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ea6f0(&param_1->field_0x20,0x41400000);
        if (iVar5 == 0) {
          iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          fStack_160 = *(float *)(iVar5 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_15c[0] = *(float *)(iVar5 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_15c[1] = *(float *)(iVar5 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_dc[0] = fStack_160;
          afStack_f0[(uint)bVar13 * -2 + 6] = afStack_15c[(uint)bVar13 * -2];
          afStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
               afStack_15c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
          core_vecdir_cpp_FUN_005a7520(afStack_f0 + 5);
          uStack_d0 = afStack_15c[2];
          afStack_f0[(uint)bVar13 * -2 + 9] = afStack_15c[(uint)bVar13 * -2 + 3];
          afStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
               afStack_15c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_FUN_0040cd60(fStack_cc - *(float *)&param_1->field_0x34);
          *(CVector3f **)&param_1->field_0x2508 = pCStack_14;
          fStack_2c = *(float *)&param_1->field_0x2508;
          fStack_4c = *(float *)&param_1->field_0x2528;
          pCStack_14 = (CVector3f *)core_actor_cpp_FUN_0040cd60(fStack_2c);
          fStack_2c = (float)pCStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= (float)pCStack_14) &&
             (fStack_38 = (float)pCStack_14, fStack_4c < (float)pCStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar20 = *(float *)&param_1->field_0xbf3d0 - param_2;
          *(float *)&param_1->field_0x2508 = fStack_38;
          *(float *)&param_1->field_0xbf3d0 = fVar20;
          if (fVar20 <= 0.0) {
            *(uint *)&param_1->field_0xbf3d0 = 0;
            iVar5 = core_actor_cpp_FUN_0040cc60(0,2);
            puVar1 = &param_1->field_0x158;
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar1,4,1);
            }
            else if (iVar5 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar1,5,1);
            }
            else if (iVar5 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar1,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005a72e0(param_1);
        }
        break;
      case 1:
      case 2:
        *(uint *)&param_1->field_0xbf3d0 = 0x40400000;
      }
    }
    else {
      *(uint *)&param_1->field_0xbf3d0 = 0x40400000;
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(pCVar3,"morphToBat")
      ;
      if (iVar5 == 0) {
        iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        fStack_13c = *(float *)(iVar5 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_138[0] = *(float *)(iVar5 + 0x24) - *(float *)&param_1->field_0x24;
        afStack_138[1] = *(float *)(iVar5 + 0x28) - *(float *)&param_1->field_0x28;
        afStack_c4[0] = fStack_13c;
        afStack_f0[(uint)bVar13 * -2 + 0xc] = afStack_138[(uint)bVar13 * -2];
        afStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             afStack_138[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
        core_vecdir_cpp_FUN_005a7520(afStack_f0 + 0xb);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar13 * -2 + 0xc] = afStack_138[(uint)bVar13 * -2 + 0xf];
        afStack_138[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
             afStack_138[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        pCStack_14 = (CVector3f *)
                     core_actor_cpp_FUN_0040cd60(fStack_108 - *(float *)&param_1->field_0x34);
        *(CVector3f **)&param_1->field_0x2508 = pCStack_14;
        fStack_24 = *(float *)&param_1->field_0x2508;
        fStack_44 = *(float *)&param_1->field_0x2528;
        pCStack_14 = (CVector3f *)core_actor_cpp_FUN_0040cd60(fStack_24);
        fStack_24 = (float)pCStack_14;
        fStack_40 = -fStack_44;
        fStack_54 = fStack_40;
        if ((fStack_40 <= (float)pCStack_14) &&
           (fStack_40 = (float)pCStack_14, fStack_44 < (float)pCStack_14)) {
          fStack_40 = fStack_44;
        }
        *(float *)&param_1->field_0x2508 = fStack_40;
      }
      else {
LAB_005a6245:
        core_vampboss_cpp_FUN_005a7250(param_1);
      }
    }
    break;
  case 2:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30(0x01C51D80,"flyout")
    ;
    if (iVar5 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
  }
  if ((*(int *)&g_CGamePtr->field_0x244 == 0) && (iStack_64 != 2)) {
    fStack_118 = *(float *)&param_1->field_0x250c + *(float *)&param_1->field_0x249c;
    fStack_114 = *(float *)&param_1->field_0x2510 + *(float *)&param_1->field_0x24a0;
    fStack_110 = *(float *)&param_1->field_0x2514 + *(float *)&param_1->field_0x24a4;
    fStack_f4 = fStack_118;
    afStack_f0[(uint)bVar13 * -2] = afStack_138[(uint)bVar13 * -2 + 9];
    afStack_f0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_138[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    afStack_f0[0] = afStack_f0[0] - param_2 * (float)_DAT_005f8df0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_f4);
  }
  *(uint *)&param_1->field_0x2514 = 0;
  *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  puVar1 = &param_1->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)puVar1);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  pCStack_14 = (CVector3f *)&param_1->field_0x20;
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&param_1->field_0x4913c,pCStack_14,(CVector3f *)&param_1->field_0x30,param_2,
             *(float *)&param_1->field_0x2504,(CDeformableModelInstance *)puVar1);
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&param_1->field_0x83c6c,pCStack_14,(CVector3f *)&param_1->field_0x30,param_2,
             *(float *)&param_1->field_0x2504,(CDeformableModelInstance *)puVar1);
LAB_005a5b9f:
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  if ((*(int *)(pSVar6 + 0x24) != 2) && (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    core_game_cpp_FUN_004d6340
              (g_CGamePtr,&param_1->field_0x2544,
               *(float *)&param_1->field_0x2538 / *(float *)&param_1->field_0x253c,0.5);
    return;
  }
  return;
}
