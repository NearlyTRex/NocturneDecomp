// Name: core_vampboss.cpp_FUN_00581910
// Address: 00581910
// Address Range: [[00581910, 00582c8a]]
// Convention: unknown
// Signature: void core_vampboss_cpp_FUN_00581910(CVampireBoss *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_vampboss_cpp_FUN_00581910(CVampireBoss *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  CEventList *pCVar3;
  CGame *pCVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  CVampireBoss *pCVar8;
  uint *puVar9;
  uint *puVar10;
  CVector3f *pCVar11;
  byte bVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float afStackY_116c [907];
  float fVar19;
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
  
  bVar12 = 0;
  pCVar8 = param_1;
  do {
    if (*(int *)&pCVar8->field_0xc3b88 == 0) {
      _DAT_01d046a0 = "..\\core\\vampboss.cpp";
      _DAT_01d046a4 = 0xcf;
      core_main_c_FUN_004e4500("CVampireBoss::process - Need 4 waypoints");
    }
    pCVar8 = (CVampireBoss *)&pCVar8->field_0x4;
  } while (pCVar8 != (CVampireBoss *)&param_1->field_0x10);
  iVar5 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  iVar5 = *(int *)&param_1->field_0xc2f3c;
  if (iVar5 == 2) {
    core_vampboss_cpp_FUN_00582dc0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              ((CDeformableModelInstance *)&param_1->field_0x10af8);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x12dac,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
               (CDeformableModelInstance *)&param_1->field_0x10af8);
    if (*(float *)&param_1->field_0x25a8 < (float)_DAT_005eda4c) {
      *(uint *)&param_1->field_0x25a8 = 0x41c7fdf4;
      if ((*(int *)&param_1->field_0xc3b80 != 2) && (*(int *)&param_1->field_0xc3b80 != 3)) {
        core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(param_1);
        *(uint *)&param_1->field_0xc3b80 = 2;
        *(uint *)&param_1->field_0xc3b74 = 0x40a00000;
      }
    }
    if ((*(int *)&param_1->field_0xc3b80 != 2) && (*(int *)&param_1->field_0xc3b80 != 3)) {
      iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      fStack_124 = *(float *)&param_1->field_0x20 - *(float *)(iVar5 + 0x20);
      fStack_120 = *(float *)&param_1->field_0x24 - *(float *)(iVar5 + 0x24);
      fStack_11c = *(float *)&param_1->field_0x28 - *(float *)(iVar5 + 0x28);
      afStack_f0[2] = fStack_124;
      afStack_f0[(uint)bVar12 * -2 + 3] = afStack_138[(uint)bVar12 * -2 + 6];
      afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
           afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7];
      fStack_324 = SQRT(afStack_f0[2] * afStack_f0[2] + fStack_e0 * fStack_e0);
      if (fStack_324 < (float)_DAT_005eda54) {
        *(uint *)&param_1->field_0xc3b80 = 1;
        pCStack_14 = (CVector3f *)(uint)(afStack_f0[3] < (float)_DAT_005eda5c);
        if ((float10)0 != ABS((float10)(int)pCStack_14)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_2e0);
          uStack_2dc = 0x41200000;
          pCStack_2ac = param_1;
          iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          pCStack_2a8 = param_1;
          (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,aSStack_2e0);
        }
      }
      if ((float)_DAT_005eda64 < fStack_324) {
        *(uint *)&param_1->field_0xc3b70 = 0x40a00000;
        *(uint *)&param_1->field_0xc3b78 = 0;
        *(uint *)&param_1->field_0xc3b80 = 0;
      }
      if ((*(int *)&param_1->field_0xc3b80 == 0) &&
         (fVar19 = *(float *)&param_1->field_0xc3b70 - param_2,
         *(float *)&param_1->field_0xc3b70 = fVar19, fVar19 < 0.0)) {
        *(uint *)&param_1->field_0xc3b80 = 1;
        *(uint *)&param_1->field_0xc3b70 = 0;
      }
      iVar5 = core_motion_cpp_FUN_005035c0(&param_1->field_0x10af8);
      if ((((*(int *)(iVar5 + 0x24) == 0) && (*(int *)&param_1->field_0xc3b80 == 0)) &&
          (fStack_324 < (float)_DAT_005eda6c)) && (*(int *)&param_1->field_0xc3b78 == 0)) {
        *(uint *)&param_1->field_0xc3b78 = 1;
        iVar5 = core_actor_cpp_FUN_0040d060(0.5);
        if (iVar5 == 0) {
          iVar5 = 2;
        }
        else {
          iVar5 = 1;
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x10af8,iVar5,1);
      }
    }
    iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
      fStack_148 = *(float *)(iVar5 + 0x20);
      fStack_144 = *(float *)(iVar5 + 0x24);
      fStack_140 = *(float *)(iVar5 + 0x28);
    }
    if (*(int *)&param_1->field_0xc3b80 == 2) {
      *(float *)&param_1->field_0xc3b74 = *(float *)&param_1->field_0xc3b74 - param_2;
      iVar5 = *(int *)((int)param_1 + (4 - *(int *)&param_1->field_0xc3b84) * 4 + 0xc3b84);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      if ((*(float *)&param_1->field_0xc3b74 <= 0.0) ||
         (fVar19 = fStack_148 - *(float *)&param_1->field_0x20,
         fVar2 = fStack_140 - *(float *)&param_1->field_0x28,
         SQRT(fVar2 * fVar2 + fVar19 * fVar19) < (float)_DAT_005eda7c)) {
        *(uint *)&param_1->field_0xc3b74 = 0x40a00000;
        *(uint *)&param_1->field_0xc3b80 = 3;
      }
    }
    else if (*(int *)&param_1->field_0xc3b80 == 3) {
      iVar5 = *(int *)(&param_1->field_0xc3b88 + *(int *)&param_1->field_0xc3b84 * 4);
      if (afStack_15c + 5 != (float *)(iVar5 + 0x20)) {
        fStack_148 = *(float *)(iVar5 + 0x20);
        fStack_144 = *(float *)(iVar5 + 0x24);
        fStack_140 = *(float *)(iVar5 + 0x28);
      }
      fVar19 = *(float *)&param_1->field_0xc3b74 - param_2;
      *(float *)&param_1->field_0xc3b74 = fVar19;
      if ((fVar19 <= 0.0) ||
         (fVar19 = fStack_148 - *(float *)&param_1->field_0x20,
         fVar2 = fStack_140 - *(float *)&param_1->field_0x28,
         SQRT(fVar2 * fVar2 + fVar19 * fVar19) < (float)_DAT_005eda74)) {
        core_vampboss_cpp_FUN_00583650(param_1);
      }
    }
    fStack_58 = 1.2;
    fStack_144 = fStack_144 + _DAT_005eda84;
    fStack_48 = 20.0;
    afStack_138[2] = fStack_148 - *(float *)&param_1->field_0x20;
    fStack_128 = fStack_140 - *(float *)&param_1->field_0x28;
    afStack_138[3] = fStack_144 - *(float *)&param_1->field_0x24;
    fStack_184 = afStack_138[2];
    afStack_180[(uint)bVar12 * -2] = afStack_138[(uint)bVar12 * -2 + 3];
    afStack_180[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
    atan2();
    fVar13 = SQRT((float10)fStack_184 * (float10)fStack_184 +
                  (float10)afStack_180[1] * (float10)afStack_180[1]);
    fVar14 = (float10)afStack_180[0];
    atan2();
    fStack_30 = (float)fVar13;
    pCStack_28 = (CVector3f *)(float)-fVar14;
    if (*(int *)&param_1->field_0xc3b80 == 1) {
      fStack_30 = -fStack_30;
      pCStack_28 = (CVector3f *)-(float)pCStack_28;
    }
    fStack_320 = (float)core_actor_cpp_FUN_0040d0c0(fStack_30 - *(float *)&param_1->field_0x34);
    fStack_328 = fStack_320 * param_2 * fStack_58;
    if (ABS(fStack_328) <= ABS(fStack_320)) {
      *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_328;
    }
    else {
      *(float *)&param_1->field_0x34 = fStack_30;
    }
    pCStack_14 = (CVector3f *)fStack_320;
    pCStack_28 = (CVector3f *)
                 core_actor_cpp_FUN_0040d0c0((float)pCStack_28 - *(float *)&param_1->field_0x30);
    fStack_3c = -0.3926991;
    fStack_34 = 0.3926991;
    *(float *)&param_1->field_0x30 =
         (float)pCStack_28 * param_2 * fStack_58 + *(float *)&param_1->field_0x30;
    if ((*(float *)&param_1->field_0x25a8 < (float)_DAT_005eda4c) &&
       (*(int *)&param_1->field_0xc3b80 == 0)) {
      fStack_34 = 1.5707964;
      fStack_3c = -1.5707964;
    }
    if (*(float *)&param_1->field_0x30 < fStack_3c) {
      *(float *)&param_1->field_0x30 = fStack_3c;
    }
    if (fStack_34 < *(float *)&param_1->field_0x30) {
      *(float *)&param_1->field_0x30 = fStack_34;
    }
    fVar13 = (float10)fsin((float10)*(float *)&param_1->field_0x30);
    fVar14 = (float10)fsin((float10)*(float *)&param_1->field_0x34);
    fVar15 = (float10)fcos((float10)*(float *)&param_1->field_0x30);
    fVar16 = (float10)fcos((float10)*(float *)&param_1->field_0x34);
    fVar17 = (float10)fStack_48;
    fVar18 = (float10)param_2;
    fVar13 = -fVar13 * fVar17 * fVar18 + (float10)*(float *)&param_1->field_0x24;
    *(float *)&param_1->field_0x24 = (float)fVar13;
    *(float *)&param_1->field_0x20 =
         (float)(fVar14 * fVar15 * fVar17 * fVar18 + (float10)*(float *)&param_1->field_0x20);
    *(float *)&param_1->field_0x28 =
         (float)(fVar16 * fVar15 * fVar17 * fVar18 + (float10)*(float *)&param_1->field_0x28);
    if (fVar13 < (float10)fStack_144) {
      *(float *)&param_1->field_0x24 = fStack_144;
    }
    pCStack_14 = pCStack_28;
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0((CDemonActor *)param_1);
    core_skeleton_cpp_FUN_005487d0(&param_1->field_0x10af8);
    puVar9 = auStack_1e4;
    puVar10 = &uStack_244;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    if ((uint *)&param_1->field_0x27f4 != &uStack_244) {
      *(uint *)&param_1->field_0x27f4 = uStack_244;
      *(uint *)&param_1->field_0x27f8 = uStack_240;
      *(uint *)&param_1->field_0x27fc = uStack_23c;
    }
    if ((uint *)&param_1->field_0x2800 != &uStack_238) {
      *(uint *)&param_1->field_0x2800 = uStack_238;
      *(uint *)&param_1->field_0x2804 = uStack_234;
      *(uint *)&param_1->field_0x2808 = uStack_230;
    }
    goto LAB_00581f5f;
  }
  if (iVar5 == 1) {
    fVar19 = param_2 / _DAT_005fd82c + *(float *)&param_1->field_0xc3b6c;
    *(float *)&param_1->field_0xc3b6c = fVar19;
    pCVar3 = 0x01C38BC0;
    if (1.0 <= fVar19) {
      *(uint *)&param_1->field_0xc2f3c = 2;
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(pCVar3,"morphCompleted");
    }
    core_vampboss_cpp_FUN_00582dc0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              ((CDeformableModelInstance *)&param_1->field_0x10af8);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x12dac,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
               (CDeformableModelInstance *)&param_1->field_0x10af8);
    puVar1 = &param_1->field_0x2b4;
    fStack_68 = param_2;
    while (0.0 < fStack_68) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0((CMotionController *)puVar1,&fStack_68)
      ;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              ((CDeformableModelInstance *)puVar1);
    pCStack_14 = (CVector3f *)&param_1->field_0x20;
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x4d8dc,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2574,(CDeformableModelInstance *)puVar1);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x8840c,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2574,(CDeformableModelInstance *)puVar1);
    core_skeleton_cpp_FUN_005487d0(puVar1);
    puVar9 = auStack_1b4;
    puVar10 = &uStack_1cc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    if ((uint *)&param_1->field_0x27f4 != &uStack_1cc) {
      *(uint *)&param_1->field_0x27f4 = uStack_1cc;
      *(uint *)&param_1->field_0x27f8 = uStack_1c8;
      *(uint *)&param_1->field_0x27fc = uStack_1c4;
    }
    if ((uint *)&param_1->field_0x2800 != &uStack_1c0) {
      *(uint *)&param_1->field_0x2800 = uStack_1c0;
      *(uint *)&param_1->field_0x2804 = uStack_1bc;
      *(uint *)&param_1->field_0x2808 = uStack_1b8;
    }
    core_skeleton_cpp_FUN_005487d0(&param_1->field_0x10af8);
    puVar9 = auStack_28c;
    pCVar11 = &CStack_22c;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pCVar11 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      pCVar11 = (CVector3f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590
              ((CBoundingBox3D *)&param_1->field_0x27f4,&CStack_22c);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590
              ((CBoundingBox3D *)&param_1->field_0x27f4,&CStack_220);
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + param_2;
    goto LAB_00581f5f;
  }
  if (iVar5 == 3) {
    fStack_5c = param_2 / _DAT_005fd82c;
    fStack_60 = *(float *)&param_1->field_0xc3b6c;
    *(float *)&param_1->field_0xc3b6c = fStack_60 - fStack_5c;
    pCVar3 = 0x01C38BC0;
    if (0.0 < fStack_60 - fStack_5c) {
      fVar19 = (fStack_5c / fStack_60) *
               (*(float *)&param_1->field_0x2574 - *(float *)&param_1->field_0x24) +
               *(float *)&param_1->field_0x24;
    }
    else {
      *(uint *)&param_1->field_0xc2f3c = 0;
      core_event_cpp_CEventList_executeCommands_FUN_004894f0(pCVar3,"backToHuman");
      fVar19 = *(float *)&param_1->field_0x2574;
      *(uint *)&param_1->field_0xc3b6c = 0;
    }
    *(float *)&param_1->field_0x24 = fVar19;
    core_vampboss_cpp_FUN_00582dc0(param_1,param_2);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              ((CDeformableModelInstance *)&param_1->field_0x10af8);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x12dac,(CVector3f *)&param_1->field_0x20,
               (CVector3f *)&param_1->field_0x30,param_2,*(float *)&param_1->field_0x2574,
               (CDeformableModelInstance *)&param_1->field_0x10af8);
    puVar1 = &param_1->field_0x2b4;
    fStack_18 = param_2;
    while (0.0 < fStack_18) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0((CMotionController *)puVar1,&fStack_18)
      ;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_00544ee0
              ((CDeformableModelInstance *)puVar1);
    pCStack_14 = (CVector3f *)&param_1->field_0x20;
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x4d8dc,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2574,(CDeformableModelInstance *)puVar1);
    core_cloth_cpp_CCloth_process_FUN_005afdf0
              ((CCloth *)&param_1->field_0x8840c,pCStack_14,(CVector3f *)&param_1->field_0x30,
               param_2,*(float *)&param_1->field_0x2574,(CDeformableModelInstance *)puVar1);
    core_skeleton_cpp_FUN_005487d0(puVar1);
    puVar9 = auStack_19c;
    puVar10 = &uStack_274;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
    }
    if ((uint *)&param_1->field_0x27f4 != &uStack_274) {
      *(uint *)&param_1->field_0x27f4 = uStack_274;
      *(uint *)&param_1->field_0x27f8 = uStack_270;
      *(uint *)&param_1->field_0x27fc = uStack_26c;
    }
    if ((uint *)&param_1->field_0x2800 != &uStack_268) {
      *(uint *)&param_1->field_0x2800 = uStack_268;
      *(uint *)&param_1->field_0x2804 = uStack_264;
      *(uint *)&param_1->field_0x2808 = uStack_260;
    }
    core_skeleton_cpp_FUN_005487d0(&param_1->field_0x10af8);
    puVar9 = auStack_214;
    pCVar11 = &CStack_1fc;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pCVar11 = *puVar9;
      puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
      pCVar11 = (CVector3f *)((int)pCVar11 + ((uint)bVar12 * -2 + 1) * 4);
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590
              ((CBoundingBox3D *)&param_1->field_0x27f4,&CStack_1fc);
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590
              ((CBoundingBox3D *)&param_1->field_0x27f4,&CStack_1f0);
    goto LAB_00581f5f;
  }
  pCStack_20 = (CMotionController *)&param_1->field_0x2b4;
  fStack_6c = param_2;
  while (0.0 < fStack_6c) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_20,&fStack_6c);
    if (uVar6 < 2) {
      if (uVar6 == 1) {
        core_vampboss_cpp_FUN_00583520(param_1);
LAB_00582508:
        *(uint *)&param_1->field_0xc3b70 = 0x3f800000;
      }
    }
    else {
      if (uVar6 < 3) {
        core_vampboss_cpp_FUN_005835a0(param_1);
        goto LAB_00582508;
      }
      if (uVar6 < 4) {
        core_vampboss_cpp_FUN_005834b0(param_1);
        goto LAB_00582508;
      }
      if (uVar6 == 0x29a) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,0,0);
        uStack_168 = 0x41a00000;
        uStack_164 = 0x41a00000;
        uStack_16c = 0;
        core_actor_cpp_FUN_00408cf0(param_1,&uStack_16c);
        iVar5 = 0;
        pCVar11 = aCStack_b8;
        fVar19 = -1.0;
        aCStack_b8[0]._0_4_ = CStack_178._0_4_;
        *(uint *)((int)aCStack_b8 + (uint)bVar12 * -8 + 4) =
             *(uint *)((int)&CStack_178 + (uint)bVar12 * -8 + 4);
        pCVar8 = param_1;
        *(uint *)((int)aCStack_b8 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8) =
             *(uint *)((int)&CStack_178 + (uint)bVar12 * -8 + (uint)bVar12 * -8 + 8);
        core_charactr_cpp_CCharacter_dismember_FUN_00427360
                  ((CCharacter *)pCVar8,pCVar11,fVar19,iVar5);
        iStack_1c = 0;
        iVar5 = 0;
        while (iStack_1c < *(int *)&g_CDemonSetPtr->field_0x150fec) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar5),
                             g_CTVBatClassInfo.name_hash);
          if ((iVar7 == 0) || (*(int *)(iVar7 + 0x10ca0) == 0)) {
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
          else {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_31c);
            uStack_318 = 0x4479c000;
            (**(code **)(*(int *)(iVar7 + 0x2b0) + 0x110))(iVar7,aSStack_31c);
            iStack_1c = iStack_1c + 1;
            iVar5 = iVar5 + 4;
          }
        }
      }
    }
  }
  core_skeleton_cpp_FUN_005487d0(pCStack_20);
  puVar9 = auStack_25c;
  puVar10 = &uStack_2a4;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar10 = *puVar9;
    puVar9 = puVar9 + (uint)bVar12 * -2 + 1;
    puVar10 = puVar10 + (uint)bVar12 * -2 + 1;
  }
  if ((uint *)&param_1->field_0x27f4 != &uStack_2a4) {
    *(uint *)&param_1->field_0x27f4 = uStack_2a4;
    *(uint *)&param_1->field_0x27f8 = uStack_2a0;
    *(uint *)&param_1->field_0x27fc = uStack_29c;
  }
  if ((uint *)&param_1->field_0x2800 != &uStack_298) {
    *(uint *)&param_1->field_0x2800 = uStack_298;
    *(uint *)&param_1->field_0x2804 = uStack_294;
    *(uint *)&param_1->field_0x2808 = uStack_290;
  }
  iVar5 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  pCVar4 = g_CGamePtr;
  iStack_64 = *(int *)(iVar5 + 0x24);
  switch(*(int *)(iVar5 + 0x24)) {
  case 0:
    *(float *)&param_1->field_0x2598 = _DAT_005fd834 * param_2;
    pCVar3 = 0x01C38BC0;
    if (*(int *)&pCVar4->field_0x244 == 0) {
      *(float *)&param_1->field_0x2594 = _DAT_005fd830 * param_2;
      core_charactr_cpp_FUN_00428260
                (param_1,*(uint *)
                          (&param_1->field_0xc3b88 + *(int *)&param_1->field_0xc3b84 * 4),0x3e4ccccd
                 ,0x497423f0,&param_1->field_0xc3b98);
      switch(*(uint *)&param_1->field_0xc3b98) {
      default:
        fVar19 = (*(float *)&param_1->field_0x25ac * param_2) / _DAT_005fd838 +
                 *(float *)&param_1->field_0x25a8;
        *(float *)&param_1->field_0x25a8 = fVar19;
        if ((float)_DAT_005eda8c < fVar19) goto LAB_00582605;
        iVar5 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(&param_1->field_0x20,0x41400000);
        if (iVar5 == 0) {
          iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          fStack_160 = *(float *)(iVar5 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_15c[0] = *(float *)(iVar5 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_15c[1] = *(float *)(iVar5 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_dc[0] = fStack_160;
          afStack_f0[(uint)bVar12 * -2 + 6] = afStack_15c[(uint)bVar12 * -2];
          afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
               afStack_15c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
          core_vecdir_cpp_FUN_005838f0(afStack_f0 + 5);
          uStack_d0 = afStack_15c[2];
          afStack_f0[(uint)bVar12 * -2 + 9] = afStack_15c[(uint)bVar12 * -2 + 3];
          afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10] =
               afStack_15c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
          pCStack_14 = (CVector3f *)
                       core_actor_cpp_FUN_0040d0c0(fStack_cc - *(float *)&param_1->field_0x34);
          *(CVector3f **)&param_1->field_0x2578 = pCStack_14;
          fStack_2c = *(float *)&param_1->field_0x2578;
          fStack_4c = *(float *)&param_1->field_0x2598;
          pCStack_14 = (CVector3f *)core_actor_cpp_FUN_0040d0c0(fStack_2c);
          fStack_2c = (float)pCStack_14;
          fStack_38 = -fStack_4c;
          fStack_50 = fStack_38;
          if ((fStack_38 <= (float)pCStack_14) &&
             (fStack_38 = (float)pCStack_14, fStack_4c < (float)pCStack_14)) {
            fStack_38 = fStack_4c;
          }
          fVar19 = *(float *)&param_1->field_0xc3b70 - param_2;
          *(float *)&param_1->field_0x2578 = fStack_38;
          *(float *)&param_1->field_0xc3b70 = fVar19;
          if (fVar19 <= 0.0) {
            *(uint *)&param_1->field_0xc3b70 = 0;
            iVar5 = core_actor_cpp_FUN_0040cfc0(0,2);
            puVar1 = &param_1->field_0x2b4;
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar1,4,1);
            }
            else if (iVar5 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar1,5,1);
            }
            else if (iVar5 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar1,6,1);
            }
          }
        }
        else {
          core_vampboss_cpp_CVampireBoss_chooseDestWayPoint_FUN_005836a0(param_1);
        }
        break;
      case 1:
      case 2:
        *(uint *)&param_1->field_0xc3b70 = 0x40400000;
      }
    }
    else {
      *(uint *)&param_1->field_0xc3b70 = 0x40400000;
      iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(pCVar3,"morphToBat")
      ;
      if (iVar5 == 0) {
        iVar5 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        fStack_13c = *(float *)(iVar5 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_138[0] = *(float *)(iVar5 + 0x24) - *(float *)&param_1->field_0x24;
        afStack_138[1] = *(float *)(iVar5 + 0x28) - *(float *)&param_1->field_0x28;
        afStack_c4[0] = fStack_13c;
        afStack_f0[(uint)bVar12 * -2 + 0xc] = afStack_138[(uint)bVar12 * -2];
        afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
             afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        core_vecdir_cpp_FUN_005838f0(afStack_f0 + 0xb);
        uStack_10c = uStack_100;
        afStack_138[(uint)bVar12 * -2 + 0xc] = afStack_138[(uint)bVar12 * -2 + 0xf];
        afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0xd] =
             afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 0x10];
        pCStack_14 = (CVector3f *)
                     core_actor_cpp_FUN_0040d0c0(fStack_108 - *(float *)&param_1->field_0x34);
        *(CVector3f **)&param_1->field_0x2578 = pCStack_14;
        fStack_24 = *(float *)&param_1->field_0x2578;
        fStack_44 = *(float *)&param_1->field_0x2598;
        pCStack_14 = (CVector3f *)core_actor_cpp_FUN_0040d0c0(fStack_24);
        fStack_24 = (float)pCStack_14;
        fStack_40 = -fStack_44;
        fStack_54 = fStack_40;
        if ((fStack_40 <= (float)pCStack_14) &&
           (fStack_40 = (float)pCStack_14, fStack_44 < (float)pCStack_14)) {
          fStack_40 = fStack_44;
        }
        *(float *)&param_1->field_0x2578 = fStack_40;
      }
      else {
LAB_00582605:
        core_vampboss_cpp_FUN_00583610(param_1);
      }
    }
    break;
  case 2:
    iVar5 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340(0x01C38BC0,"flyout")
    ;
    if (iVar5 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
    }
  }
  if ((*(int *)&g_CGamePtr->field_0x244 == 0) && (iStack_64 != 2)) {
    fStack_118 = *(float *)&param_1->field_0x257c + *(float *)&param_1->field_0x2508;
    fStack_114 = *(float *)&param_1->field_0x2580 + *(float *)&param_1->field_0x250c;
    fStack_110 = *(float *)&param_1->field_0x2584 + *(float *)&param_1->field_0x2510;
    fStack_f4 = fStack_118;
    afStack_f0[(uint)bVar12 * -2] = afStack_138[(uint)bVar12 * -2 + 9];
    afStack_f0[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
         afStack_138[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 10];
    afStack_f0[0] = afStack_f0[0] - param_2 * (float)_DAT_005eda94;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_f4);
  }
  *(uint *)&param_1->field_0x2584 = 0;
  *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
  *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  puVar1 = &param_1->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)puVar1);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  pCStack_14 = (CVector3f *)&param_1->field_0x20;
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&param_1->field_0x4d8dc,pCStack_14,(CVector3f *)&param_1->field_0x30,param_2,
             *(float *)&param_1->field_0x2574,(CDeformableModelInstance *)puVar1);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&param_1->field_0x8840c,pCStack_14,(CVector3f *)&param_1->field_0x30,param_2,
             *(float *)&param_1->field_0x2574,(CDeformableModelInstance *)puVar1);
LAB_00581f5f:
  iVar5 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  if ((*(int *)(iVar5 + 0x24) != 2) && (*(int *)&g_CGamePtr->field_0x244 == 0)) {
    core_game_cpp_CGame_setStatusDisplay_FUN_004bb8d0
              (g_CGamePtr,&param_1->field_0x25b4,
               *(float *)&param_1->field_0x25a8 / *(float *)&param_1->field_0x25ac,0.5);
    return;
  }
  return;
}
