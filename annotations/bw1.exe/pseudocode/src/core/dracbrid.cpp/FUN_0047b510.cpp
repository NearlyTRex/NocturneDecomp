// Name: core_dracbrid.cpp_FUN_0047b510
// Address: 0047b510
// Address Range: [[0047b510, 0047cc13]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_FUN_0047b510(CDraculaBride *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_FUN_0047b510(CDraculaBride *param_1,float param_2)

{
  uint uVar1;
  uint uVar2;
  byte *puVar3;
  int iVar4;
  SMotion *pSVar5;
  int iVar6;
  CDraculaBride *pCVar7;
  int iVar8;
  CPathMap *pCVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  float afStackY_1324 [837];
  CFireEffect *this_ptr;
  CVector3f *position;
  uint *puVar16;
  CGore *this_ptr_00;
  CVector3f *pCVar17;
  float fVar18;
  SDamageInfo *pSVar19;
  EBloodType blood_type;
  float fVar20;
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
  
  bVar11 = 0;
  if (*(int *)&param_1->field_0xc408 != 0) {
    fVar18 = *(float *)&param_1->field_0xc40c - param_2;
    *(float *)&param_1->field_0xc40c = fVar18;
    if (0.0 <= fVar18) {
      if (0 < *(int *)&param_1->field_0xc314) {
        fVar12 = (float10)_DAT_005ff1a0;
        fVar13 = (float10)_DAT_005dae85;
        pCVar7 = param_1;
        do {
          iVar4 = *(int *)&pCVar7->field_0xc318;
          *(uint *)(iVar4 + 0xfc) = 1;
          *(uint *)(iVar4 + 0xcb4) = 1;
          fVar14 = ((float10)*(float *)&param_1->field_0xc40c * fVar13) / fVar12;
          uVar15 = round();
          *(int *)((int)uVar15 + 0xcc0) = (int)ROUND(fVar14);
          pCVar7 = (CDraculaBride *)&pCVar7->field_0x4;
        } while ((int)((ulonglong)uVar15 >> 0x20) < *(int *)&param_1->field_0xc314);
      }
    }
    else {
      *(uint *)&param_1->field_0xc408 = 0;
      *(uint *)&param_1->field_0x70 = 2;
      *(uint *)&param_1->field_0xc40c = 0;
      iVar4 = 0;
      pCVar7 = param_1;
      if (0 < *(int *)&param_1->field_0xc314) {
        do {
          *(uint *)(*(int *)&pCVar7->field_0xc318 + 0x70) = 2;
          iVar4 = iVar4 + 1;
          pCVar7 = (CDraculaBride *)&pCVar7->field_0x4;
        } while (iVar4 < *(int *)&param_1->field_0xc314);
      }
    }
  }
  core_dracbrid_cpp_FUN_0047de00(param_1,param_2);
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (0.0 <= *(float *)&param_1->field_0xc300) {
    *(float *)&param_1->field_0xc300 = *(float *)&param_1->field_0xc300 - param_2;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_4c[0] = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_30 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < afStack_4c[0]) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_30,afStack_8c + 0x10);
    if (iVar4 == 0x29a) {
      *(uint *)&param_1->field_0x3004 = 0;
      afStack_2d8[2] = 0.0;
      afStack_2d8[3] = 20.0;
      afStack_2d8[4] = 20.0;
      core_actor_cpp_FUN_00408ac0(param_1,afStack_2d8 + 2);
      iVar4 = 1;
      pCVar17 = &CStack_210;
      fVar18 = -1.0;
      CStack_210._0_4_ = CStack_1d4._0_4_;
      *(uint *)((int)&CStack_210 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_1d4 + (uint)bVar11 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_210 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_1d4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      core_dracbrid_cpp_FUN_0047cc20(pCVar7,pCVar17,fVar18,iVar4);
      *(uint *)&param_1->field_0xc408 = 1;
      *(float *)&param_1->field_0xc40c = _DAT_005ff1a0;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x30))(param_1,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar4);
    }
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_30);
  iVar4 = *(int *)(pSVar5 + 0x24);
  if (iVar4 == 9) {
    fVar18 = _DAT_005ff194 * param_2;
    *(float *)&param_1->field_0x2528 = _DAT_005ff198 * param_2 * *(float *)&param_1->field_0xc1d0;
    *(float *)&param_1->field_0x2524 = *(float *)&param_1->field_0xc1d0 * fVar18;
  }
  else {
    fVar18 = _DAT_005ff190 * param_2;
    *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
    *(float *)&param_1->field_0x2528 = fVar18 * *(float *)&param_1->field_0xc1d0;
  }
  iVar6 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar6 != 0) {
    uVar1 = *(uint *)&param_1->field_0x273c;
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_0047b7c3:
        iVar4 = 0xe;
      }
      else {
LAB_0047ba2f:
        iVar4 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar4,1);
    }
    else {
      if (uVar1 < 3) goto LAB_0047b7c3;
      if (uVar1 != 3) goto LAB_0047ba2f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    goto switchD_0047ba56_default;
  }
  switch(iVar4) {
  case 0:
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    if (*(int *)&param_1->field_0xc1e8 == 0) {
      iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0xe,1);
      }
      break;
    }
    iVar4 = core_actor_cpp_FUN_0040cd00(0.25);
    if ((iVar4 != 0) &&
       (iVar4 = core_actor_cpp_FUN_0040c550
                          (*(CDemonActor **)&param_1->field_0xc1e8,"CHero"), iVar4 != 0)) {
      iVar6 = 0;
      iVar4 = 0;
      while ((iVar6 < *(int *)&g_CDemonSetPtr->field_0x150fec &&
             ((iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600
                                 (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar4),
                                  g_CDraculaBrideClassInfo.name_hash), iVar8 == 0 ||
              (*(int *)(iVar8 + 0xc2f4) == 0))))) {
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 4;
      }
      if (iVar6 == *(int *)&g_CDemonSetPtr->field_0x150fec) {
        FUN_005bfb40
                  (acStack_530,"bride-%d?.wav",*(uint *)&param_1->field_0xc2f0);
        core_dracbrid_cpp_FUN_0047d920(param_1,acStack_530,1.0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0x17,1);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                  (param_1,"hotbride-disappear.wav");
        iVar4 = *(int *)&param_1->field_0xc1e8;
        *(uint *)&param_1->field_0xc2f4 = 1;
        if ((uint *)&param_1->field_0xc304 != (uint *)(iVar4 + 0x20)) {
          *(uint *)&param_1->field_0xc304 = *(uint *)(iVar4 + 0x20);
          *(uint *)&param_1->field_0xc308 = *(uint *)(iVar4 + 0x24);
          *(uint *)&param_1->field_0xc30c = *(uint *)(iVar4 + 0x28);
        }
        *(uint *)&param_1->field_0xc2f8 = 0;
        break;
      }
    }
    if (*(float *)&param_1->field_0xc300 < 0.0) {
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40000000,0x41a00000);
      *(float *)&param_1->field_0xc300 = fStack_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0xd,1);
      break;
    }
    goto LAB_0047c5d3;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_3f0);
    fStack_3ec = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
    pSVar19 = aSStack_3f0;
    pCStack_3bc = param_1;
    pCStack_3b8 = param_1;
    fVar18 = 0.4;
    fStack_14 = fStack_3ec;
    core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01bc0d34 * 0x30);
    pfVar10 = afStack_284 + 2;
    afStack_284[2] = (float)uStack_30c;
    afStack_284[(uint)bVar11 * -2 + 3] = afStack_31c[(uint)bVar11 * -2 + 5];
    afStack_284[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_31c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 6];
    core_actor_cpp_FUN_00408b40(param_1,pfVar10);
    pCVar17 = &CStack_c0;
    CStack_c0._0_4_ = CStack_2f4._0_4_;
    *(uint *)((int)&CStack_c0 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_2f4 + (uint)bVar11 * -8 + 4);
    pCVar7 = param_1;
    *(uint *)((int)&CStack_c0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_2f4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar17,fVar18,pSVar19);
    *(uint *)&param_1->field_0xc310 = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_42c);
    fStack_428 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
    pSVar19 = aSStack_42c;
    pCStack_3f8 = param_1;
    pCStack_3f4 = param_1;
    fVar18 = 0.4;
    fStack_14 = fStack_428;
    core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01bc0d34 * 0x30);
    pfVar10 = afStack_8c + 2;
    afStack_8c[2] = (float)uStack_78;
    afStack_8c[(uint)bVar11 * -2 + 3] = afStack_8c[(uint)bVar11 * -2 + 6];
    afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    core_actor_cpp_FUN_00408b40(param_1,pfVar10);
    pCVar17 = &CStack_d8;
    CStack_d8._0_4_ = CStack_1f8._0_4_;
    *(uint *)((int)&CStack_d8 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_1f8 + (uint)bVar11 * -8 + 4);
    pCVar7 = param_1;
    *(uint *)((int)&CStack_d8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_1f8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar17,fVar18,pSVar19);
    break;
  case 7:
    if (*(int *)&param_1->field_0xc408 == 0) {
      core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,_DAT_01bc0d50);
      pfVar10 = afStack_1b8 + 0x11;
      afStack_174[0] = (float)uStack_21c;
      afStack_1b8[(uint)bVar11 * -2 + 0x12] = afStack_230[(uint)bVar11 * -2 + 6];
      afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
           afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      core_actor_cpp_FUN_00408b40(param_1,pfVar10);
      pCVar17 = (CVector3f *)&param_1->field_0x30;
      iVar6 = 0;
      CStack_24c._0_4_ = CStack_204._0_4_;
      *(uint *)((int)&CStack_24c + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_204 + (uint)bVar11 * -8 + 4);
      *(uint *)((int)&CStack_24c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_204 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      iVar4 = 1;
      CStack_264._0_4_ = CStack_24c._0_4_;
      *(uint *)((int)&CStack_264 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_24c + (uint)bVar11 * -8 + 4);
      *(uint *)((int)&CStack_264 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_24c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
                (0x01C57074,&CStack_264,pCVar17,iVar4,iVar6);
      iVar6 = 0;
      iVar4 = 1;
      pfVar10 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x34);
      fStack_234 = *(float *)&param_1->field_0x30;
      afStack_230[(uint)bVar11 * -2] = *pfVar10;
      afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = pfVar10[(uint)bVar11 * -2 + 1];
      fStack_234 = fStack_234 + _DAT_005dae9d;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_004b6f80
                (0x01C57074,&CStack_264,(CVector3f *)&fStack_234,iVar4,iVar6);
    }
    break;
  case 8:
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    if (*(int *)&param_1->field_0xc1e8 == 0) {
      iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0xe,1);
      }
    }
    else {
      if ((*(float *)&param_1->field_0x2538 < _DAT_005ff18c) ||
         (*(float *)&param_1->field_0xc300 < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40000000,0x41a00000);
        *(float *)&param_1->field_0xc300 = fStack_14;
      }
      if (*(int *)&param_1->field_0xc310 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0x19,1);
        *(uint *)&param_1->field_0xc310 = 0;
      }
    }
    break;
  case 9:
    if (*(float *)&param_1->field_0xc2fc <= 0.0) {
      FUN_005bfb40
                (acStack_5f8,"bride-%d?.wav",*(uint *)&param_1->field_0xc2f0);
      core_dracbrid_cpp_FUN_0047d920(param_1,acStack_5f8,1.0);
      iVar4 = core_actor_cpp_FUN_0040cd00(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_0047d920(param_1,acStack_5f8,1.0);
      }
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    puVar3 = &param_1->field_0x158;
    if (*(int *)&param_1->field_0xc1e8 != 0) {
      if (0.0 <= *(float *)&param_1->field_0xc300) {
        fVar20 = 0.08726646;
        fVar18 = 0.5;
        CStack_144._0_4_ = 0;
        CStack_144._8_4_ = 0x40000000;
        pCVar17 = &CStack_144;
        CStack_144._4_4_ = 0;
        pCVar9 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc1e8);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar9,pCVar17,
                           fVar18,fVar20);
        if (iVar4 < 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar3,8,1);
        }
        else if (iVar4 < 1) {
          iVar4 = *(int *)&param_1->field_0xc1e8;
          fStack_1a4 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_1a0 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_19c = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_cc = fStack_1a4;
          afStack_c8[(uint)bVar11 * -2] = afStack_1b8[(uint)bVar11 * -2 + 6];
          afStack_c8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          if (&fStack_138 != &fStack_cc) {
            fStack_138 = fStack_cc;
            fStack_134 = afStack_c8[0];
            fStack_130 = afStack_c8[1];
          }
          if ((float)_DAT_005dae8d <
              SQRT(fStack_130 * fStack_130 + fStack_138 * fStack_138 + fStack_134 * fStack_134)) {
            core_vecdir_cpp_FUN_005a7520(&fStack_138);
            uStack_15c = uStack_90;
            afStack_1b8[(uint)bVar11 * -2 + 0x18] = afStack_8c[(uint)bVar11 * -2];
            afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                 afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            fStack_14 = (float)core_actor_cpp_FUN_0040cd60
                                         (fStack_158 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005dae95) {
              fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0xbf490fdb,0x3f490fdb);
              *(float *)&param_1->field_0x34 = fStack_14 + *(float *)&param_1->field_0x34;
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,3,1);
            }
          }
        }
        else if (*(float *)&param_1->field_0xc1e4 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar3,2,1);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"hotbride-bite?.wav");
          *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
        }
      }
      else {
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40000000,0x41a00000);
        *(float *)&param_1->field_0xc300 = fStack_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar3,0,1);
      }
      break;
    }
    iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
    if (iVar4 == 0) break;
LAB_0047c5d3:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0xe,1);
    break;
  case 0xc:
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,&param_1->field_0xc28c), iVar4 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)&param_1->field_0xc2fc <= 0.0) {
      FUN_005bfb40
                (acStack_4cc,"bride-%d?.wav",*(uint *)&param_1->field_0xc2f0);
      core_dracbrid_cpp_FUN_0047d920(param_1,acStack_4cc,1.0);
      iVar4 = core_actor_cpp_FUN_0040cd00(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_0047d920(param_1,acStack_4cc,1.0);
      }
    }
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    uVar2 = 0x3FC00000;
    puVar3 = &param_1->field_0x158;
    if (*(int *)&param_1->field_0xc1e8 == 0) {
      iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar3,0,1);
      }
    }
    else {
      afStack_4c[1] = (float)0x3FC00000;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
      CStack_1c8._0_4_ = 0;
      CStack_1c8._4_4_ = 0;
      fVar20 = 0.08726646;
      CStack_1c8._8_4_ = uVar2;
      pCVar17 = &CStack_1c8;
      fVar18 = 0.5;
      pCVar9 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xc1e8);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         pCVar9,pCVar17,fVar18,fVar20);
      if (iVar4 < 0) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar3,0,1);
      }
      else if ((0 < iVar4) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
        iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)puVar3,0x13,1);
        }
        if (iVar4 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0x14,1);
        }
        if (iVar4 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0x15,1);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"hotbride-swipe?.wav")
          ;
        }
        *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
      }
    }
    break;
  case 0xf:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0xc28c);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_0047cbfb_caseD_10;
  case 0x11:
    if ((*(int *)&param_1->field_0xc1d4 != 0) || (*(int *)&param_1->field_0xdc != 0)) break;
    core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,0);
    puVar16 = &uStack_1ec;
    uStack_1ec = afStack_2c0[2];
    afStack_1e8[(uint)bVar11 * -2] = afStack_2c0[(uint)bVar11 * -2 + 3];
    afStack_1e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_2c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    core_actor_cpp_FUN_00408b40(param_1,puVar16);
    blood_type = BLOOD_TYPE_RED;
    pCVar17 = &CStack_120;
    CStack_120._0_4_ = CStack_240._0_4_;
    *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_240 + (uint)bVar11 * -8 + 4);
    this_ptr_00 = g_CGorePtr;
    *(uint *)((int)&CStack_120 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_240 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar17,blood_type);
    goto switchD_0047cbfb_caseD_10;
  case 0x12:
    iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                          (0x01C51D80,&param_1->field_0xc28c), iVar4 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_468);
    fStack_464 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
    pSVar19 = aSStack_468;
    pCStack_434 = param_1;
    pCStack_430 = param_1;
    fVar18 = 0.4;
    fStack_14 = fStack_464;
    core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01bc0d34 * 0x30);
    pfVar10 = afStack_104 + 2;
    afStack_104[2] = afStack_1b8[2];
    afStack_104[(uint)bVar11 * -2 + 3] = afStack_1b8[(uint)bVar11 * -2 + 3];
    afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    core_actor_cpp_FUN_00408b40(param_1,pfVar10);
    pCVar17 = &CStack_114;
    CStack_114._0_4_ = CStack_a8._0_4_;
    *(uint *)((int)&CStack_114 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_a8 + (uint)bVar11 * -8 + 4);
    pCVar7 = param_1;
    *(uint *)((int)&CStack_114 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_a8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar17,fVar18,pSVar19);
    *(uint *)&param_1->field_0xc310 = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_3b4);
    fStack_3b0 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
    pSVar19 = aSStack_3b4;
    pCStack_380 = param_1;
    pCStack_37c = param_1;
    fVar18 = 0.4;
    fStack_14 = fStack_3b0;
    core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01bc0d34 * 0x30);
    pfVar10 = afStack_8c + 8;
    afStack_6c[0] = afStack_31c[1];
    afStack_8c[(uint)bVar11 * -2 + 9] = afStack_31c[(uint)bVar11 * -2 + 2];
    afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_31c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 3];
    core_actor_cpp_FUN_00408b40(param_1,pfVar10);
    pCVar17 = &CStack_f0;
    CStack_f0._0_4_ = CStack_33c._0_4_;
    *(uint *)((int)&CStack_f0 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_33c + (uint)bVar11 * -8 + 4);
    pCVar7 = param_1;
    *(uint *)((int)&CStack_f0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_33c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar17,fVar18,pSVar19);
    *(uint *)&param_1->field_0xc310 = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_378);
    fStack_374 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
    pSVar19 = aSStack_378;
    pCStack_344 = param_1;
    pCStack_340 = param_1;
    fVar18 = 0.4;
    fStack_14 = fStack_374;
    core_xform_cpp_FUN_005b5080(&DAT_02c8af28,&param_1->field_0xfd8 + _DAT_01bc0d3c * 0x30);
    puVar16 = &uStack_330;
    uStack_330 = uStack_300;
    afStack_32c[(uint)bVar11 * -2] = afStack_31c[(uint)bVar11 * -2 + 8];
    afStack_32c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_31c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 9];
    core_actor_cpp_FUN_00408b40(param_1,puVar16);
    pCVar17 = &CStack_258;
    CStack_258._0_4_ = CStack_12c._0_4_;
    *(uint *)((int)&CStack_258 + (uint)bVar11 * -8 + 4) =
         *(uint *)((int)&CStack_12c + (uint)bVar11 * -8 + 4);
    pCVar7 = param_1;
    *(uint *)((int)&CStack_258 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         *(uint *)((int)&CStack_12c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
    core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar17,fVar18,pSVar19);
    break;
  case 0x17:
    if (*(float *)&param_1->field_0xc2fc <= 0.0) {
      FUN_005bfb40
                (acStack_594,"bride-%d?.wav",*(uint *)&param_1->field_0xc2f0);
      core_dracbrid_cpp_FUN_0047d920(param_1,acStack_594,1.0);
      iVar4 = core_actor_cpp_FUN_0040cd00(0.2);
      if (iVar4 != 0) {
        core_dracbrid_cpp_FUN_0047d920(param_1,acStack_594,1.0);
      }
    }
    switch(*(uint *)&param_1->field_0xc2f4) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
      break;
    case 1:
      fVar18 = *(float *)&param_1->field_0xc2f8 + param_2;
      *(float *)&param_1->field_0xc2f8 = fVar18;
      if (0x3F800000 < fVar18) {
        *(uint *)&param_1->field_0xc2f4 = 2;
        *(float *)&param_1->field_0xc2f8 = 0x3F800000;
      }
      CStack_9c._0_4_ = 0;
      CStack_9c._4_4_ = 0x40400000;
      CStack_9c._8_4_ = 0;
      pCStack_38 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                             ((CDeformableModelInstance *)&param_1->field_0x158);
      iStack_18 = 0;
      puVar3 = &param_1->field_0x158;
      if (0 < *(int *)&pCStack_38->field_0x1de78) {
        do {
          puStack_3c = puVar3;
          core_skeleton_cpp_FUN_00569130(puStack_3c,iStack_18);
          puVar16 = &uStack_288;
          uStack_288 = uStack_198;
          afStack_284[(uint)bVar11 * -2] = afStack_1b8[(uint)bVar11 * -2 + 9];
          afStack_284[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
          core_actor_cpp_FUN_00408b40(param_1,puVar16);
          iVar6 = 0xffff;
          pCVar17 = &CStack_9c;
          fVar18 = 0.5;
          CStack_294._0_4_ = CStack_b4._0_4_;
          *(uint *)((int)&CStack_294 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + 4);
          *(uint *)((int)&CStack_294 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)&CStack_b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          iVar4 = iStack_18 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                    (0x01C57074,&CStack_294,fVar18,pCVar17,iVar6);
          puVar3 = puStack_3c;
          iStack_18 = iVar4;
        } while (iVar4 < *(int *)&pCStack_38->field_0x1de78);
      }
      break;
    case 2:
      iStack_28 = 0;
      iStack_44 = 1;
      pfStack_20 = (float *)&param_1->field_0xc304;
      for (iStack_24 = 0; fVar18 = 0x3F800000, iStack_24 < *(int *)&g_CDemonSetPtr->field_0x14f0a8
          ; iStack_24 = iStack_24 + 1) {
        pCVar7 = *(CDraculaBride **)(&g_CDemonSetPtr->field_0x14f0ac + iStack_28);
        if (((pCVar7 != (CDraculaBride *)0x0) && (pCVar7 != param_1)) &&
           (iVar4 = (**(code **)(*(int *)&pCVar7->field_0x154 + 0x10c))(pCVar7), iVar4 < 1)) {
          fStack_270 = *(float *)&pCVar7->field_0x20 - *pfStack_20;
          fStack_26c = *(float *)&pCVar7->field_0x24 - pfStack_20[1];
          fStack_268 = *(float *)&pCVar7->field_0x28 - pfStack_20[2];
          afStack_230[2] = fStack_270;
          afStack_230[(uint)bVar11 * -2 + 3] = afStack_284[(uint)bVar11 * -2 + 6];
          afStack_230[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_284[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          if (SQRT(fStack_220 * fStack_220 +
                   afStack_230[2] * afStack_230[2] + afStack_230[3] * afStack_230[3]) <
              (float)_DAT_005daead) goto switchD_0047ba56_default;
        }
        iStack_28 = iStack_28 + 4;
      }
      if (iStack_44 != 0) {
        *(uint *)&param_1->field_0xc2f4 = 3;
        *(float *)&param_1->field_0xc2f8 = fVar18;
        *(float *)&param_1->field_0x20 = *pfStack_20;
        *(float *)&param_1->field_0x24 = pfStack_20[1];
        *(float *)&param_1->field_0x28 = pfStack_20[2];
        iVar4 = *(int *)&param_1->field_0xc1e8;
        if (iVar4 != 0) {
          fStack_1bc = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          afStack_1b8[0] = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          afStack_1b8[1] = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          afStack_168[0] = fStack_1bc;
          afStack_1b8[(uint)bVar11 * -2 + 0x15] = afStack_1b8[(uint)bVar11 * -2];
          afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
               afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
          core_vecdir_cpp_FUN_005a7520(afStack_1b8 + 0x14);
          fStack_18c = (float)uStack_2ac;
          afStack_1b8[(uint)bVar11 * -2 + 0xc] = afStack_2c0[(uint)bVar11 * -2 + 6];
          afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
               afStack_2c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
          if ((float *)&param_1->field_0x30 != afStack_1b8 + 0xb) {
            *(float *)&param_1->field_0x30 = fStack_18c;
            *(uint *)&param_1->field_0x34 = uStack_188;
            *(uint *)&param_1->field_0x38 = uStack_184;
          }
          *(uint *)&param_1->field_0x38 = 0;
          *(uint *)&param_1->field_0x30 = 0;
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                  (param_1,"hotbride-disappear.wav");
      }
      break;
    case 3:
      puVar3 = &param_1->field_0x158;
      CStack_150._0_4_ = 0;
      CStack_150._4_4_ = 0x40400000;
      CStack_150._8_4_ = 0;
      pCStack_34 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                             ((CDeformableModelInstance *)puVar3);
      iStack_1c = 0;
      pCStack_2c = (CMotionController *)puVar3;
      if (0 < *(int *)&pCStack_34->field_0x1de78) {
        do {
          core_skeleton_cpp_FUN_00569130(pCStack_2c,iStack_1c);
          puVar16 = &uStack_108;
          uStack_108 = afStack_1e8[2];
          afStack_104[(uint)bVar11 * -2] = afStack_1e8[(uint)bVar11 * -2 + 3];
          afStack_104[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_1e8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
          core_actor_cpp_FUN_00408b40(param_1,puVar16);
          iVar4 = 0xffff;
          pCVar17 = &CStack_150;
          fVar18 = 0.5;
          position = &CStack_2e8;
          CStack_2e8._0_4_ = CStack_2a0._0_4_;
          *(uint *)((int)&CStack_2e8 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)&CStack_2a0 + (uint)bVar11 * -8 + 4);
          this_ptr = 0x01C57074;
          *(uint *)((int)&CStack_2e8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
               *(uint *)((int)&CStack_2a0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                    (this_ptr,position,fVar18,pCVar17,iVar4);
          iStack_1c = iStack_1c + 1;
        } while (iStack_1c < *(int *)&pCStack_34->field_0x1de78);
      }
      fVar18 = *(float *)&param_1->field_0xc2f8 - param_2;
      *(float *)&param_1->field_0xc2f8 = fVar18;
      if (fVar18 < 0.0) {
        *(uint *)&param_1->field_0xc2f8 = 0;
        *(uint *)&param_1->field_0xc2f4 = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_2c,0xe,1);
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40000000,0x41a00000);
        *(float *)&param_1->field_0xc300 = fStack_14;
      }
    }
    break;
  case 0x1a:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1->field_0xc28c);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
  }
switchD_0047ba56_default:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  iStack_40 = *(int *)(pSVar5 + 0x24);
  if ((((iStack_40 != 0x11) && (iStack_40 != 0x10)) && (iStack_40 != 0xf)) ||
     (*(int *)&param_1->field_0xdc != 0)) {
    if (iStack_40 == 3) {
      *(float *)&param_1->field_0x24a4 = *(float *)&param_1->field_0x24a4 * (float)_DAT_005daea5;
    }
    iVar4 = *(int *)&param_1->field_0xc1e8;
    if ((iVar4 != 0) &&
       (pCVar7 = (CDraculaBride *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4),
       pCVar7 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_2dc = *(float *)&param_1->field_0x2518 * param_2;
    afStack_2d8[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_2d8[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_e4 = fStack_2dc;
    afStack_e0[(uint)bVar11 * -2] = afStack_2d8[(uint)bVar11 * -2];
    afStack_e0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_2d8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    fStack_180 = fStack_e4 + *(float *)&param_1->field_0x250c;
    fStack_17c = afStack_e0[0] + *(float *)&param_1->field_0x2510;
    fStack_178 = afStack_e0[1] + *(float *)&param_1->field_0x2514;
    fStack_60 = fStack_180;
    afStack_8c[(uint)bVar11 * -2 + 0xc] = afStack_1b8[(uint)bVar11 * -2 + 0xf];
    afStack_8c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_1b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    afStack_2d8[5] = fStack_60 + *(float *)&param_1->field_0x249c;
    afStack_2c0[0] = fStack_5c + *(float *)&param_1->field_0x24a0;
    afStack_2c0[1] = fStack_58 + *(float *)&param_1->field_0x24a4;
    auStack_324._0_4_ = afStack_2d8[5];
    *(float *)(auStack_324 + (uint)bVar11 * -8 + 4) = afStack_2c0[(uint)bVar11 * -2];
    *(float *)(auStack_324 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
         afStack_2c0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)auStack_324);
  }
  if (iStack_40 != 0x17) {
    *(uint *)&param_1->field_0xc2f4 = 0;
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
switchD_0047cbfb_caseD_10:
  *(uint *)&param_1->field_0xc1d4 = 1;
  goto switchD_0047ba56_default;
}
