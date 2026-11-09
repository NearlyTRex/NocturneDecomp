// Name: core_dracbrid.cpp_FUN_00462ff0
// Address: 00462ff0
// Address Range: [[00462ff0, 004646f3]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_00462ff0(CDraculaBride *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_FUN_00462ff0(CDraculaBride *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  int iVar5;
  CDraculaBride *pCVar6;
  int iVar7;
  CPathMap *pCVar8;
  float *pfVar9;
  byte bVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  ulonglong uVar14;
  float afStackY_1324 [837];
  CFireEffect *this_ptr;
  CVector3f *position;
  uint *puVar15;
  CGore *this_ptr_00;
  CVector3f *pCVar16;
  float fVar17;
  SDamageInfo *pSVar18;
  EBloodType blood_type;
  float fVar19;
  char acStack_5f8 [100];
  char acStack_594 [100];
  char acStack_530 [100];
  char acStack_4cc [100];
  SDamageInfo aSStack_468 [4];
  float fStack_464;
  CDraculaBride *pCStack_434;
  CDraculaBride *pCStack_430;
  SDamageInfo aSStack_42c [4];
  float fStack_428;
  CDraculaBride *pCStack_3f8;
  CDraculaBride *pCStack_3f4;
  SDamageInfo aSStack_3f0 [4];
  float fStack_3ec;
  CDraculaBride *pCStack_3bc;
  CDraculaBride *pCStack_3b8;
  SDamageInfo aSStack_3b4 [4];
  float fStack_3b0;
  CDraculaBride *pCStack_380;
  CDraculaBride *pCStack_37c;
  SDamageInfo aSStack_378 [4];
  float fStack_374;
  CDraculaBride *pCStack_344;
  CDraculaBride *pCStack_340;
  CVector3f CStack_33c;
  uint uStack_330;
  float afStack_32c [2];
  byte auStack_324 [8];
  float afStack_31c [4];
  uint uStack_30c;
  uint uStack_300;
  CVector3f CStack_2f4;
  CVector3f CStack_2e8;
  float fStack_2dc;
  float afStack_2d8 [6];
  float afStack_2c0 [5];
  uint uStack_2ac;
  CVector3f CStack_2a0;
  CVector3f CStack_294;
  uint uStack_288;
  float afStack_284 [5];
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  CVector3f CStack_264;
  CVector3f CStack_258;
  CVector3f CStack_24c;
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [4];
  float fStack_220;
  uint uStack_21c;
  CVector3f CStack_210;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  uint uStack_1ec;
  float afStack_1e8 [5];
  CVector3f CStack_1d4;
  CVector3f CStack_1c8;
  float fStack_1bc;
  float afStack_1b8 [5];
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  uint uStack_198;
  float fStack_18c;
  uint uStack_188;
  uint uStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float afStack_174 [3];
  float afStack_168 [3];
  uint uStack_15c;
  float fStack_158;
  CVector3f CStack_150;
  CVector3f CStack_144;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  CVector3f CStack_12c;
  CVector3f CStack_120;
  CVector3f CStack_114;
  uint uStack_108;
  float afStack_104 [5];
  CVector3f CStack_f0;
  float fStack_e4;
  float afStack_e0 [2];
  CVector3f CStack_d8;
  float fStack_cc;
  float afStack_c8 [2];
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [5];
  uint uStack_78;
  float afStack_6c [3];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float afStack_4c [2];
  int iStack_44;
  int iStack_40;
  byte *puStack_3c;
  CSkeleton *pCStack_38;
  CSkeleton *pCStack_34;
  CMotionController *pCStack_30;
  CMotionController *pCStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar10 = 0;
  if (*(int *)&param_1->field_0x10c20 != 0) {
    fVar17 = *(float *)&param_1->field_0x10c24 - param_2;
    *(float *)&param_1->field_0x10c24 = fVar17;
    if (0.0 <= fVar17) {
      if (0 < *(int *)&param_1->field_0x10ba4) {
        fVar11 = (float10)_DAT_005f5660;
        fVar12 = (float10)_DAT_005d108c;
        pCVar6 = param_1;
        do {
          iVar4 = *(int *)&pCVar6->field_0x10ba8;
          *(uint *)(iVar4 + 0xfc) = 1;
          *(uint *)(iVar4 + 0x10c8) = 1;
          fVar13 = ((float10)*(float *)&param_1->field_0x10c24 * fVar12) / fVar11;
          uVar14 = round();
          *(int *)((int)uVar14 + 0x10d4) = (int)ROUND(fVar13);
          pCVar6 = (CDraculaBride *)&pCVar6->field_0x4;
        } while ((int)((ulonglong)uVar14 >> 0x20) < *(int *)&param_1->field_0x10ba4);
      }
    }
    else {
      *(uint *)&param_1->field_0x10c20 = 0;
      *(uint *)&param_1->field_0x70 = 2;
      *(uint *)&param_1->field_0x10c24 = 0;
      iVar4 = 0;
      pCVar6 = param_1;
      if (0 < *(int *)&param_1->field_0x10ba4) {
        do {
          *(uint *)(*(int *)&pCVar6->field_0x10ba8 + 0x70) = 2;
          iVar4 = iVar4 + 1;
          pCVar6 = (CDraculaBride *)&pCVar6->field_0x4;
        } while (iVar4 < *(int *)&param_1->field_0x10ba4);
      }
    }
  }
  core_dracbrid_cpp_FUN_004658e0(param_1,param_2);
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (0.0 <= *(float *)&param_1->field_0x10b90) {
    *(float *)&param_1->field_0x10b90 = *(float *)&param_1->field_0x10b90 - param_2;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  afStack_4c[0] = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_30 = (CMotionController *)&param_1->field_0x2b4;
  while (0.0 < afStack_4c[0]) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,afStack_8c + 0x10);
    if (iVar4 == 0x29a) {
      *(uint *)&param_1->field_0x3448 = 0;
      afStack_2d8[2] = 0.0;
      afStack_2d8[3] = 20.0;
      afStack_2d8[4] = 20.0;
      core_actor_cpp_FUN_00408cf0(param_1,afStack_2d8 + 2);
      iVar4 = 1;
      pCVar16 = &CStack_210;
      fVar17 = -1.0;
      CStack_210._0_4_ = CStack_1d4._0_4_;
      *(uint *)((int)&CStack_210 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1d4 + (uint)bVar10 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_210 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_dracbrid_cpp_FUN_00464700(pCVar6,pCVar16,fVar17,iVar4);
      *(uint *)&param_1->field_0x10c20 = 1;
      *(float *)&param_1->field_0x10c24 = _DAT_005f5660;
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x38))(param_1,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,iVar4);
    }
  }
  iVar4 = core_motion_cpp_FUN_005035c0(pCStack_30);
  iVar4 = *(int *)(iVar4 + 0x24);
  if (iVar4 == 9) {
    fVar17 = _DAT_005f5654 * param_2;
    *(float *)&param_1->field_0x2598 = _DAT_005f5658 * param_2 * *(float *)&param_1->field_0x10a60;
    *(float *)&param_1->field_0x2594 = *(float *)&param_1->field_0x10a60 * fVar17;
  }
  else {
    fVar17 = _DAT_005f5650 * param_2;
    *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
    *(float *)&param_1->field_0x2598 = fVar17 * *(float *)&param_1->field_0x10a60;
  }
  iVar5 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar5 != 0) {
    uVar1 = *(uint *)&param_1->field_0x27ac;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_004632a3:
        iVar4 = 0xe;
      }
      else {
LAB_0046350f:
        iVar4 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,iVar4,1);
    }
    else {
      if (uVar1 < 3) goto LAB_004632a3;
      if (uVar1 != 3) goto LAB_0046350f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    goto switchD_00463536_default;
  }
  switch(iVar4) {
  case 0:
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
    if (*(int *)&param_1->field_0x10a78 == 0) {
      iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0xe,1);
      }
      break;
    }
    iVar4 = core_actor_cpp_FUN_0040d060(0.25);
    if ((iVar4 != 0) &&
       (iVar4 = core_actor_cpp_FUN_0040c840
                          (*(CDemonActor **)&param_1->field_0x10a78,"CHero"), iVar4 != 0))
    {
      iVar5 = 0;
      iVar4 = 0;
      while ((iVar5 < *(int *)&g_CDemonSetPtr->field_0x150fec &&
             ((iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                 (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar4),
                                  g_CDraculaBrideClassInfo.name_hash), iVar7 == 0 ||
              (*(int *)(iVar7 + 0x10b84) == 0))))) {
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 4;
      }
      if (iVar5 == *(int *)&g_CDemonSetPtr->field_0x150fec) {
        FUN_005b7790
                  (acStack_530,"bride-%d?.wav",*(uint *)&param_1->field_0x10b80);
        core_dracbrid_cpp_FUN_00465400(param_1,acStack_530,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0x17,1);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                  (param_1,"hotbride-disappear.wav");
        iVar4 = *(int *)&param_1->field_0x10a78;
        *(uint *)&param_1->field_0x10b84 = 1;
        if ((uint *)&param_1->field_0x10b94 != (uint *)(iVar4 + 0x20)) {
          *(uint *)&param_1->field_0x10b94 = *(uint *)(iVar4 + 0x20);
          *(uint *)&param_1->field_0x10b98 = *(uint *)(iVar4 + 0x24);
          *(uint *)&param_1->field_0x10b9c = *(uint *)(iVar4 + 0x28);
        }
        *(uint *)&param_1->field_0x10b88 = 0;
        break;
      }
    }
    if (*(float *)&param_1->field_0x10b90 < 0.0) {
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40000000,0x41a00000);
      *(float *)&param_1->field_0x10b90 = fStack_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0xd,1);
      break;
    }
    goto LAB_004640b3;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_3f0);
    fStack_3ec = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
    pSVar18 = aSStack_3f0;
    pCStack_3bc = param_1;
    pCStack_3b8 = param_1;
    fVar17 = 0.4;
    fStack_14 = fStack_3ec;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01ba5778 * 0x30);
    pfVar9 = afStack_284 + 2;
    afStack_284[2] = (float)uStack_30c;
    afStack_284[(uint)bVar10 * -2 + 3] = afStack_31c[(uint)bVar10 * -2 + 5];
    afStack_284[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_31c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 6];
    core_actor_cpp_FUN_00408d70(param_1,pfVar9);
    pCVar16 = &CStack_c0;
    CStack_c0._0_4_ = CStack_2f4._0_4_;
    *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_2f4 + (uint)bVar10 * -8 + 4);
    pCVar6 = param_1;
    *(uint *)((int)&CStack_c0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_2f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar16,fVar17,pSVar18);
    *(uint *)&param_1->field_0x10ba0 = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_42c);
    fStack_428 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
    pSVar18 = aSStack_42c;
    pCStack_3f8 = param_1;
    pCStack_3f4 = param_1;
    fVar17 = 0.4;
    fStack_14 = fStack_428;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01ba5778 * 0x30);
    pfVar9 = afStack_8c + 2;
    afStack_8c[2] = (float)uStack_78;
    afStack_8c[(uint)bVar10 * -2 + 3] = afStack_8c[(uint)bVar10 * -2 + 6];
    afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    core_actor_cpp_FUN_00408d70(param_1,pfVar9);
    pCVar16 = &CStack_d8;
    CStack_d8._0_4_ = CStack_1f8._0_4_;
    *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_1f8 + (uint)bVar10 * -8 + 4);
    pCVar6 = param_1;
    *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_1f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar16,fVar17,pSVar18);
    break;
  case 7:
    if (*(int *)&param_1->field_0x10c20 == 0) {
      core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,_DAT_01ba5794);
      pfVar9 = afStack_1b8 + 0x11;
      afStack_174[0] = (float)uStack_21c;
      afStack_1b8[(uint)bVar10 * -2 + 0x12] = afStack_230[(uint)bVar10 * -2 + 6];
      afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
           afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408d70(param_1,pfVar9);
      pCVar16 = (CVector3f *)&param_1->field_0x30;
      iVar5 = 0;
      CStack_24c._0_4_ = CStack_204._0_4_;
      *(uint *)((int)&CStack_24c + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_204 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_24c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_204 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      iVar4 = 1;
      CStack_264._0_4_ = CStack_24c._0_4_;
      *(uint *)((int)&CStack_264 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_24c + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_264 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_24c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (0x01C3DEB4,&CStack_264,pCVar16,iVar4,iVar5);
      iVar5 = 0;
      iVar4 = 1;
      pfVar9 = (float *)((int)param_1 + (uint)bVar10 * -8 + 0x34);
      fStack_234 = *(float *)&param_1->field_0x30;
      afStack_230[(uint)bVar10 * -2] = *pfVar9;
      afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] = pfVar9[(uint)bVar10 * -2 + 1];
      fStack_234 = fStack_234 + _DAT_005d10a4;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0049e680
                (0x01C3DEB4,&CStack_264,(CVector3f *)&fStack_234,iVar4,iVar5);
    }
    break;
  case 8:
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
    if (*(int *)&param_1->field_0x10a78 == 0) {
      iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0xe,1);
      }
    }
    else {
      if ((*(float *)&param_1->field_0x25a8 < _DAT_005f564c) ||
         (*(float *)&param_1->field_0x10b90 < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0,1);
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40000000,0x41a00000);
        *(float *)&param_1->field_0x10b90 = fStack_14;
      }
      if (*(int *)&param_1->field_0x10ba0 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0x19,1);
        *(uint *)&param_1->field_0x10ba0 = 0;
      }
    }
    break;
  case 9:
    if (*(float *)&param_1->field_0x10b8c <= 0.0) {
      FUN_005b7790
                (acStack_5f8,"bride-%d?.wav",*(uint *)&param_1->field_0x10b80);
      core_dracbrid_cpp_FUN_00465400(param_1,acStack_5f8,1.0);
      iVar4 = core_actor_cpp_FUN_0040d060(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_00465400(param_1,acStack_5f8,1.0);
      }
    }
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
    puVar3 = &param_1->field_0x2b4;
    if (*(int *)&param_1->field_0x10a78 != 0) {
      if (0.0 <= *(float *)&param_1->field_0x10b90) {
        fVar19 = 0.08726646;
        fVar17 = 0.5;
        CStack_144._0_4_ = 0;
        CStack_144._8_4_ = 0x40000000;
        pCVar16 = &CStack_144;
        CStack_144._4_4_ = 0;
        pCVar8 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                           (*(int *)&param_1->field_0x10a78);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),pCVar8,pCVar16,
                           fVar17,fVar19);
        if (iVar4 < 0) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar3,8,1);
        }
        else if (iVar4 < 1) {
          iVar4 = *(int *)&param_1->field_0x10a78;
          fStack_1a4 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_1a0 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_19c = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_cc = fStack_1a4;
          afStack_c8[(uint)bVar10 * -2] = afStack_1b8[(uint)bVar10 * -2 + 6];
          afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          if (&fStack_138 != &fStack_cc) {
            fStack_138 = fStack_cc;
            fStack_134 = afStack_c8[0];
            fStack_130 = afStack_c8[1];
          }
          if ((float)_DAT_005d1094 <
              SQRT(fStack_130 * fStack_130 + fStack_138 * fStack_138 + fStack_134 * fStack_134)) {
            core_vecdir_cpp_FUN_005838f0(&fStack_138);
            uStack_15c = uStack_90;
            afStack_1b8[(uint)bVar10 * -2 + 0x18] = afStack_8c[(uint)bVar10 * -2];
            afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
                 afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            fStack_14 = (float)core_actor_cpp_FUN_0040d0c0
                                         (fStack_158 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005d109c) {
              fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0xbf490fdb,0x3f490fdb);
              *(float *)&param_1->field_0x34 = fStack_14 + *(float *)&param_1->field_0x34;
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,3,1);
            }
          }
        }
        else if (*(float *)&param_1->field_0x10a74 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar3,2,1);
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"hotbride-bite?.wav");
          *(uint *)&param_1->field_0x10a74 = 0x3f800000;
        }
      }
      else {
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40000000,0x41a00000);
        *(float *)&param_1->field_0x10b90 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar3,0,1);
      }
      break;
    }
    iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
    if (iVar4 == 0) break;
LAB_004640b3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0xe,1);
    break;
  case 0xc:
    iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,&param_1->field_0x10b1c), iVar4 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)&param_1->field_0x10b8c <= 0.0) {
      FUN_005b7790
                (acStack_4cc,"bride-%d?.wav",*(uint *)&param_1->field_0x10b80);
      core_dracbrid_cpp_FUN_00465400(param_1,acStack_4cc,1.0);
      iVar4 = core_actor_cpp_FUN_0040d060(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_00465400(param_1,acStack_4cc,1.0);
      }
    }
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
    uVar2 = 0x3FC00000;
    puVar3 = &param_1->field_0x2b4;
    if (*(int *)&param_1->field_0x10a78 == 0) {
      iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar3,0,1);
      }
    }
    else {
      afStack_4c[1] = (float)0x3FC00000;
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
      CStack_1c8._0_4_ = 0;
      CStack_1c8._4_4_ = 0;
      fVar19 = 0.08726646;
      CStack_1c8._8_4_ = uVar2;
      pCVar16 = &CStack_1c8;
      fVar17 = 0.5;
      pCVar8 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                         (*(int *)&param_1->field_0x10a78);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20)
                         ,pCVar8,pCVar16,fVar17,fVar19);
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)puVar3,0,1);
      }
      else if ((0 < iVar4) && (*(float *)&param_1->field_0x10a74 <= 0.0)) {
        iVar4 = core_actor_cpp_FUN_0040cfc0(0,2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)puVar3,0x13,1);
        }
        if (iVar4 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0x14,1);
        }
        if (iVar4 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0x15,1);
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"hotbride-swipe?.wav")
          ;
        }
        *(uint *)&param_1->field_0x10a74 = 0x3f800000;
      }
    }
    break;
  case 0xf:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x10b1c);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_004646db_caseD_10;
  case 0x11:
    if ((*(int *)&param_1->field_0x10a64 != 0) || (*(int *)&param_1->field_0xdc != 0)) break;
    core_skeleton_cpp_FUN_005469a0(&param_1->field_0x2b4,0);
    puVar15 = &uStack_1ec;
    uStack_1ec = afStack_2c0[2];
    afStack_1e8[(uint)bVar10 * -2] = afStack_2c0[(uint)bVar10 * -2 + 3];
    afStack_1e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_2c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_actor_cpp_FUN_00408d70(param_1,puVar15);
    blood_type = BLOOD_TYPE_RED;
    pCVar16 = &CStack_120;
    CStack_120._0_4_ = CStack_240._0_4_;
    *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_240 + (uint)bVar10 * -8 + 4);
    this_ptr_00 = g_CGorePtr;
    *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_240 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr_00,pCVar16,blood_type);
    goto switchD_004646db_caseD_10;
  case 0x12:
    iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                          (0x01C38BC0,&param_1->field_0x10b1c), iVar4 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_468);
    fStack_464 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
    pSVar18 = aSStack_468;
    pCStack_434 = param_1;
    pCStack_430 = param_1;
    fVar17 = 0.4;
    fStack_14 = fStack_464;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01ba5778 * 0x30);
    pfVar9 = afStack_104 + 2;
    afStack_104[2] = afStack_1b8[2];
    afStack_104[(uint)bVar10 * -2 + 3] = afStack_1b8[(uint)bVar10 * -2 + 3];
    afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    core_actor_cpp_FUN_00408d70(param_1,pfVar9);
    pCVar16 = &CStack_114;
    CStack_114._0_4_ = CStack_a8._0_4_;
    *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_a8 + (uint)bVar10 * -8 + 4);
    pCVar6 = param_1;
    *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_a8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar16,fVar17,pSVar18);
    *(uint *)&param_1->field_0x10ba0 = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_3b4);
    fStack_3b0 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
    pSVar18 = aSStack_3b4;
    pCStack_380 = param_1;
    pCStack_37c = param_1;
    fVar17 = 0.4;
    fStack_14 = fStack_3b0;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01ba5778 * 0x30);
    pfVar9 = afStack_8c + 8;
    afStack_6c[0] = afStack_31c[1];
    afStack_8c[(uint)bVar10 * -2 + 9] = afStack_31c[(uint)bVar10 * -2 + 2];
    afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         afStack_31c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 3];
    core_actor_cpp_FUN_00408d70(param_1,pfVar9);
    pCVar16 = &CStack_f0;
    CStack_f0._0_4_ = CStack_33c._0_4_;
    *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_33c + (uint)bVar10 * -8 + 4);
    pCVar6 = param_1;
    *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_33c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar16,fVar17,pSVar18);
    *(uint *)&param_1->field_0x10ba0 = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_378);
    fStack_374 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
    pSVar18 = aSStack_378;
    pCStack_344 = param_1;
    pCStack_340 = param_1;
    fVar17 = 0.4;
    fStack_14 = fStack_374;
    core_xform_cpp_FUN_00591530(&DAT_0265370c,&param_1->field_0x1134 + _DAT_01ba5780 * 0x30);
    puVar15 = &uStack_330;
    uStack_330 = uStack_300;
    afStack_32c[(uint)bVar10 * -2] = afStack_31c[(uint)bVar10 * -2 + 8];
    afStack_32c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_31c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
    core_actor_cpp_FUN_00408d70(param_1,puVar15);
    pCVar16 = &CStack_258;
    CStack_258._0_4_ = CStack_12c._0_4_;
    *(uint *)((int)&CStack_258 + (uint)bVar10 * -8 + 4) =
         *(uint *)((int)&CStack_12c + (uint)bVar10 * -8 + 4);
    pCVar6 = param_1;
    *(uint *)((int)&CStack_258 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         *(uint *)((int)&CStack_12c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
    core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar16,fVar17,pSVar18);
    break;
  case 0x17:
    if (*(float *)&param_1->field_0x10b8c <= 0.0) {
      FUN_005b7790
                (acStack_594,"bride-%d?.wav",*(uint *)&param_1->field_0x10b80);
      core_dracbrid_cpp_FUN_00465400(param_1,acStack_594,1.0);
      iVar4 = core_actor_cpp_FUN_0040d060(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_00465400(param_1,acStack_594,1.0);
      }
    }
    switch(*(uint *)&param_1->field_0x10b84) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
      break;
    case 1:
      fVar17 = *(float *)&param_1->field_0x10b88 + param_2;
      *(float *)&param_1->field_0x10b88 = fVar17;
      if (0x3F800000 < fVar17) {
        *(uint *)&param_1->field_0x10b84 = 2;
        *(float *)&param_1->field_0x10b88 = 0x3F800000;
      }
      CStack_9c._0_4_ = 0;
      CStack_9c._4_4_ = 0x40400000;
      CStack_9c._8_4_ = 0;
      pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                             ((CDeformableModelInstance *)&param_1->field_0x2b4);
      iStack_18 = 0;
      puVar3 = &param_1->field_0x2b4;
      if (0 < *(int *)&pCStack_38->field_0x1d1f8) {
        do {
          puStack_3c = puVar3;
          core_skeleton_cpp_FUN_00546a90(puStack_3c,iStack_18);
          puVar15 = &uStack_288;
          uStack_288 = uStack_198;
          afStack_284[(uint)bVar10 * -2] = afStack_1b8[(uint)bVar10 * -2 + 9];
          afStack_284[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
          core_actor_cpp_FUN_00408d70(param_1,puVar15);
          iVar5 = 0xffff;
          pCVar16 = &CStack_9c;
          fVar17 = 0.5;
          CStack_294._0_4_ = CStack_b4._0_4_;
          *(uint *)((int)&CStack_294 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_b4 + (uint)bVar10 * -8 + 4);
          *(uint *)((int)&CStack_294 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          iVar4 = iStack_18 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (0x01C3DEB4,&CStack_294,fVar17,pCVar16,iVar5);
          puVar3 = puStack_3c;
          iStack_18 = iVar4;
        } while (iVar4 < *(int *)&pCStack_38->field_0x1d1f8);
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pfStack_20 = (float *)&param_1->field_0x10b94;
      for (iStack_24 = 0; fVar17 = 0x3F800000, iStack_24 < *(int *)&g_CDemonSetPtr->field_0x14f0a8
          ; iStack_24 = iStack_24 + 1) {
        pCVar6 = *(CDraculaBride **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_28);
        if (((pCVar6 != (CDraculaBride *)0x0) && (pCVar6 != param_1)) &&
           (iVar4 = (**(code **)(*(int *)&pCVar6->field_0x2b0 + 0x114))(pCVar6), iVar4 < 1)) {
          fStack_270 = *(float *)&pCVar6->field_0x20 - *pfStack_20;
          fStack_26c = *(float *)&pCVar6->field_0x24 - pfStack_20[1];
          fStack_268 = *(float *)&pCVar6->field_0x28 - pfStack_20[2];
          afStack_230[2] = fStack_270;
          afStack_230[(uint)bVar10 * -2 + 3] = afStack_284[(uint)bVar10 * -2 + 6];
          afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_284[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          if (SQRT(fStack_220 * fStack_220 +
                   afStack_230[2] * afStack_230[2] + afStack_230[3] * afStack_230[3]) <
              (float)_DAT_005d10b4) goto switchD_00463536_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        *(uint *)&param_1->field_0x10b84 = 3;
        *(float *)&param_1->field_0x10b88 = fVar17;
        *(float *)&param_1->field_0x20 = *pfStack_20;
        *(float *)&param_1->field_0x24 = pfStack_20[1];
        *(float *)&param_1->field_0x28 = pfStack_20[2];
        iVar4 = *(int *)&param_1->field_0x10a78;
        if (iVar4 != 0) {
          fStack_1bc = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_1b8[0] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_1b8[1] = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_168[0] = fStack_1bc;
          afStack_1b8[(uint)bVar10 * -2 + 0x15] = afStack_1b8[(uint)bVar10 * -2];
          afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
               afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          core_vecdir_cpp_FUN_005838f0(afStack_1b8 + 0x14);
          fStack_18c = (float)uStack_2ac;
          afStack_1b8[(uint)bVar10 * -2 + 0xc] = afStack_2c0[(uint)bVar10 * -2 + 6];
          afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_2c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          if ((float *)&param_1->field_0x30 != afStack_1b8 + 0xb) {
            *(float *)&param_1->field_0x30 = fStack_18c;
            *(uint *)&param_1->field_0x34 = uStack_188;
            *(uint *)&param_1->field_0x38 = uStack_184;
          }
          *(uint *)&param_1->field_0x38 = 0;
          *(uint *)&param_1->field_0x30 = 0;
        }
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                  (param_1,"hotbride-disappear.wav");
      }
      break;
    case 3:
      puVar3 = &param_1->field_0x2b4;
      CStack_150._0_4_ = 0;
      CStack_150._4_4_ = 0x40400000;
      CStack_150._8_4_ = 0;
      pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                             ((CDeformableModelInstance *)puVar3);
      iStack_1c = 0;
      pCStack_2c = (CMotionController *)puVar3;
      if (0 < *(int *)&pCStack_34->field_0x1d1f8) {
        do {
          core_skeleton_cpp_FUN_00546a90(pCStack_2c,iStack_1c);
          puVar15 = &uStack_108;
          uStack_108 = afStack_1e8[2];
          afStack_104[(uint)bVar10 * -2] = afStack_1e8[(uint)bVar10 * -2 + 3];
          afStack_104[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_1e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408d70(param_1,puVar15);
          iVar4 = 0xffff;
          pCVar16 = &CStack_150;
          fVar17 = 0.5;
          position = &CStack_2e8;
          CStack_2e8._0_4_ = CStack_2a0._0_4_;
          *(uint *)((int)&CStack_2e8 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_2a0 + (uint)bVar10 * -8 + 4);
          this_ptr = 0x01C3DEB4;
          *(uint *)((int)&CStack_2e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_2a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0049d230
                    (this_ptr,position,fVar17,pCVar16,iVar4);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)&pCStack_34->field_0x1d1f8);
      }
      fVar17 = *(float *)&param_1->field_0x10b88 - param_2;
      *(float *)&param_1->field_0x10b88 = fVar17;
      if (fVar17 < 0.0) {
        *(uint *)&param_1->field_0x10b88 = 0;
        *(uint *)&param_1->field_0x10b84 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_2c,0xe,1);
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0x40000000,0x41a00000);
        *(float *)&param_1->field_0x10b90 = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1->field_0x10b1c);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
    }
  }
switchD_00463536_default:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iStack_40 = *(int *)(iVar4 + 0x24);
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     (*(int *)&param_1->field_0xdc != 0)) {
    if (iStack_40 == 3) {
      *(float *)&param_1->field_0x2510 = *(float *)&param_1->field_0x2510 * (float)_DAT_005d10ac;
    }
    iVar4 = *(int *)&param_1->field_0x10a78;
    if ((iVar4 != 0) &&
       (pCVar6 = (CDraculaBride *)(**(code **)(*(int *)(iVar4 + 0x2b0) + 0xfc))(iVar4),
       pCVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1,param_2);
    fStack_2dc = *(float *)&param_1->field_0x2588 * param_2;
    afStack_2d8[0] = *(float *)&param_1->field_0x258c * param_2;
    afStack_2d8[1] = *(float *)&param_1->field_0x2590 * param_2;
    fStack_e4 = fStack_2dc;
    afStack_e0[(uint)bVar10 * -2] = afStack_2d8[(uint)bVar10 * -2];
    afStack_e0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_180 = fStack_e4 + *(float *)&param_1->field_0x257c;
    fStack_17c = afStack_e0[0] + *(float *)&param_1->field_0x2580;
    fStack_178 = afStack_e0[1] + *(float *)&param_1->field_0x2584;
    fStack_60 = fStack_180;
    afStack_8c[(uint)bVar10 * -2 + 0xc] = afStack_1b8[(uint)bVar10 * -2 + 0xf];
    afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         afStack_1b8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
    afStack_2d8[5] = fStack_60 + *(float *)&param_1->field_0x2508;
    afStack_2c0[0] = fStack_5c + *(float *)&param_1->field_0x250c;
    afStack_2c0[1] = fStack_58 + *(float *)&param_1->field_0x2510;
    auStack_324._0_4_ = afStack_2d8[5];
    *(float *)(auStack_324 + (uint)bVar10 * -8 + 4) = afStack_2c0[(uint)bVar10 * -2];
    *(float *)(auStack_324 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_2c0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)auStack_324);
  }
  if (iStack_40 != 0x17) {
    *(uint *)&param_1->field_0x10b84 = 0;
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  return;
switchD_004646db_caseD_10:
  *(uint *)&param_1->field_0x10a64 = 1;
  goto switchD_00463536_default;
}
