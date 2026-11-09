// Name: core_shadowsc.cpp_FUN_00560630
// Address: 00560630
// Address Range: [[00560630, 00560fdf]]
// Convention: unknown
// Signature: void core_shadowsc_cpp_FUN_00560630(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_shadowsc_cpp_FUN_00560630(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  CPathMap *path_map;
  byte bVar4;
  float10 fVar5;
  float afStackY_1100 [982];
  CEnemy *this_ptr_00;
  float *pfVar6;
  CMotionController *pCVar7;
  CVector3f *pCVar8;
  float fVar9;
  int iVar10;
  SDamageInfo *damage_info;
  float max_distance;
  SDamageInfo aSStack_190 [4];
  float fStack_18c;
  CEnemy *pCStack_15c;
  CEnemy *pCStack_158;
  SDamageInfo aSStack_154 [4];
  float fStack_150;
  CEnemy *pCStack_120;
  CEnemy *pCStack_11c;
  float fStack_118;
  float afStack_114 [4];
  float fStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [5];
  float afStack_b8 [3];
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [5];
  uint uStack_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  uint uStack_40;
  float afStack_3c [2];
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  CMotionController *pCStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar4 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  fStack_18 = *(float *)&param_1->field_0x160;
  iStack_24 = *(int *)(pSVar3 + 0x24);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  fStack_34 = (float)*(int *)(pSVar3 + 100);
  core_charactr_cpp_FUN_00434790(param_1,param_2);
  core_charactr_cpp_FUN_00432f10(param_1,param_2,*(int *)&param_1->field_0xc1d4 == 1);
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_3c[0] = param_2 * *(float *)&param_1->field_0xc1d0 * *(float *)&param_1[1].field_0x20;
  while (0.0 < afStack_3c[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)&param_1->field_0x158,afStack_3c);
    core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  iVar2 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    switch(iStack_24) {
    case 0:
      fVar5 = ((float10)fStack_18 * (float10)_DAT_005f18bd) / (float10)fStack_34;
      *(uint *)&param_1[1].field_0x30 = 0;
      *(uint *)&param_1[1].field_0x24 = 3;
      round(param_1);
      *(int *)&param_1[1].field_0x2c = (int)ROUND(fVar5);
      core_shadowsc_cpp_FUN_005610e0();
      break;
    case 1:
      iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
      this_ptr = &param_1->field_0x158;
      if (iVar2 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          iVar10 = 1;
          iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,iVar2 + 2,iVar10);
          core_shadowsc_cpp_FUN_00560fe0(param_1);
        }
      }
      else {
        fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)this_ptr);
        if ((float)_DAT_005f18ad < fStack_14) {
          iVar10 = 1;
          iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)this_ptr,iVar2 + 2,iVar10);
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_154);
      fStack_150 = (float)core_actor_cpp_FUN_0040cc00(0x41700000,0x420c0000);
      pCStack_120 = param_1;
      pCStack_11c = param_1;
      fStack_14 = fStack_150;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xc1e8;
      pCStack_20 = (CMotionController *)&param_1->field_0x158;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        pCVar7 = pCStack_20;
        if (iVar2 == 0) {
          iVar10 = 1;
          iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    (pCStack_20,iVar2 + 1,iVar10);
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020(pCStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar10 = 1;
            iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar7,iVar2 + 2,iVar10);
          }
        }
        break;
      }
      fStack_64 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
      fStack_60 = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
      fStack_5c = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
      fStack_e8 = fStack_64;
      afStack_fc[(uint)bVar4 * -2 + 6] = afStack_90[(uint)bVar4 * -2 + 0xc];
      pCVar7 = pCStack_20;
      afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
      fStack_2c = SQRT(fStack_e0 * fStack_e0 + fStack_e8 * fStack_e8 + fStack_e4 * fStack_e4);
      fStack_1c = fStack_2c;
      if ((_DAT_00605348 < fStack_2c) && (iStack_24 == 2)) {
        if (*(float *)&param_1->field_0xc1e4 <= (float)_DAT_005f18a5) {
          fStack_14 = core_motion_cpp_FUN_00525020(pCStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar10 = 1;
            iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
            pCVar7 = pCStack_20;
            goto LAB_00560d8f;
          }
        }
        else {
          fStack_14 = core_motion_cpp_FUN_00525020(pCStack_20);
          if ((float)_DAT_005f18ad < fStack_14) {
            iVar10 = 1;
            iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
LAB_00560d8f:
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar7,iVar2 + 2,iVar10);
          }
        }
      }
      if (((_DAT_005f18b5 < fStack_2c) && (fStack_2c < _DAT_005f18b9)) &&
         (iVar2 = core_actor_cpp_FUN_0040cc60(0,10), iVar2 == 5)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,3,1);
        *(uint *)&param_1->field_0xc1e4 = 0x40200000;
      }
      CStack_dc._8_4_ = 0x41000000;
      uStack_40 = 0x41000000;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
      CStack_dc._0_4_ = 0;
      CStack_dc._4_4_ = 0;
      max_distance = 0.17453292;
      pCVar8 = &CStack_dc;
      fVar9 = 0.5;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc1e8);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         path_map,pCVar8,fVar9,max_distance);
      if (iVar2 < 0) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,1,1);
      }
      else if ((0 < iVar2) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,3,1);
        *(uint *)&param_1->field_0xc1e4 = 0x40200000;
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_190);
      fStack_18c = (float)core_actor_cpp_FUN_0040cc00(0x41700000,0x420c0000);
      pCStack_15c = param_1;
      pCStack_158 = param_1;
      damage_info = aSStack_190;
      fVar9 = 4.0;
      fStack_14 = fStack_18c;
      core_xform_cpp_FUN_005b5080
                (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1[1].field_0x10 * 0x30);
      pfVar6 = afStack_cc + 5;
      afStack_b8[0] = (float)uStack_7c;
      afStack_cc[(uint)bVar4 * -2 + 6] = afStack_90[(uint)bVar4 * -2 + 6];
      afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
           afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
      core_actor_cpp_FUN_00408b40(param_1,pfVar6);
      pCVar8 = &CStack_ac;
      CStack_ac._0_4_ = CStack_a0._0_4_;
      *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_a0 + (uint)bVar4 * -8 + 4);
      this_ptr_00 = param_1;
      *(uint *)((int)&CStack_ac + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_a0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      core_enemy_cpp_FUN_004a0770(this_ptr_00,pCVar8,fVar9,damage_info);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ScorpTailAttack");
      iVar2 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1[1].field_0x14);
      if (iVar2 == 0) {
        core_shadowsc_cpp_FUN_00561020(param_1);
      }
      break;
    case 6:
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ScorpDying");
      fVar5 = ((float10)1 - (float10)fStack_18 / (float10)fStack_34) * (float10)_DAT_005f189d;
      *(uint *)&param_1[1].field_0x24 = 3;
      round();
      *(int *)&param_1[1].field_0x2c = (int)ROUND(fVar5);
      break;
    case 7:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,0);
        pfVar6 = afStack_cc + 2;
        afStack_cc[2] = afStack_90[2];
        afStack_cc[(uint)bVar4 * -2 + 3] = afStack_90[(uint)bVar4 * -2 + 3];
        afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
             afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,pfVar6);
        *(uint *)&param_1->field_0xc1d4 = 1;
        *(uint *)&param_1[1].field_0x2c = 0;
        *(uint *)&param_1[1].field_0x24 = 3;
      }
    }
    goto switchD_00560f6e_caseD_5;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00560768:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
      if (fStack_14 <= (float)_DAT_005f18ad) goto LAB_005607a9;
      iVar10 = 1;
      iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
      iVar2 = iVar2 + 2;
    }
    else {
LAB_005609e5:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
      if (fStack_14 <= (float)_DAT_005f18ad) goto LAB_005607a9;
      iVar10 = 1;
      iVar2 = core_actor_cpp_FUN_0040cc60(0,0);
      iVar2 = iVar2 + 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar2,iVar10);
  }
  else {
    if (uVar1 < 3) goto LAB_00560768;
    if (uVar1 != 3) goto LAB_005609e5;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,1,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
LAB_005607a9:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_00560f6e_caseD_5:
  if (((iStack_24 != 6) && (iStack_24 != 7)) && (iStack_24 != 0)) {
    iVar2 = *(int *)&param_1->field_0xc1e8;
    if (iVar2 == 0) {
      *(uint *)&param_1[1].field_0x24 = 3;
      *(uint *)&param_1[1].field_0x2c = 0;
    }
    else {
      fStack_94 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
      afStack_90[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
      afStack_90[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
      fStack_118 = fStack_94;
      afStack_114[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2];
      afStack_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      fStack_30 = SQRT(afStack_114[1] * afStack_114[1] +
                       fStack_118 * fStack_118 + afStack_114[0] * afStack_114[0]);
      fStack_28 = *(float *)&param_1->field_0xc1e0 * _DAT_005f18c5;
      if (fStack_30 <= fStack_28) {
        fVar5 = ((float10)fStack_28 - (float10)fStack_30) / (float10)fStack_28;
        fVar5 = (fVar5 * (float10)_DAT_005f18c9 - fVar5 * fVar5) * (float10)_DAT_005f18cd;
        round();
        *(int *)&param_1[1].field_0x2c = (int)ROUND(fVar5);
        *(uint *)&param_1[1].field_0x24 = 0;
        if (0xffdc < *(int *)&param_1[1].field_0x2c) {
          *(uint *)&param_1[1].field_0x2c = 0xffdc;
        }
      }
      else {
        *(uint *)&param_1[1].field_0x2c = 0;
        *(uint *)&param_1[1].field_0x24 = 3;
      }
    }
  }
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    afStack_fc[2] = *(float *)&param_1->field_0x2518 * param_2;
    afStack_fc[3] = *(float *)&param_1->field_0x251c * param_2;
    fStack_ec = *(float *)&param_1->field_0x2520 * param_2;
    fStack_58 = afStack_fc[2];
    afStack_90[(uint)bVar4 * -2 + 0xf] = afStack_fc[(uint)bVar4 * -2 + 3];
    afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
         afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    fStack_70 = fStack_58 + *(float *)&param_1->field_0x250c;
    fStack_6c = fStack_54 + *(float *)&param_1->field_0x2510;
    fStack_68 = fStack_50 + *(float *)&param_1->field_0x2514;
    fStack_d0 = fStack_70;
    afStack_cc[(uint)bVar4 * -2] = afStack_90[(uint)bVar4 * -2 + 9];
    afStack_cc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_90[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
    afStack_114[2] = fStack_d0 + *(float *)&param_1->field_0x249c;
    afStack_114[3] = afStack_cc[0] + *(float *)&param_1->field_0x24a0;
    fStack_104 = afStack_cc[1] + *(float *)&param_1->field_0x24a4;
    fStack_100 = afStack_114[2];
    afStack_fc[(uint)bVar4 * -2] = afStack_114[(uint)bVar4 * -2 + 3];
    afStack_fc[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_114[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_100);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  return;
}
