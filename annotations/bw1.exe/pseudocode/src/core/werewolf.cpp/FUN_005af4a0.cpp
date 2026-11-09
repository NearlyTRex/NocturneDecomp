// Name: core_werewolf.cpp_FUN_005af4a0
// Address: 005af4a0
// Address Range: [[005af4a0, 005b0b6b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_005af4a0(CWerewolf *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_FUN_005af4a0(CWerewolf *param_1,float param_2)

{
  uint uVar1;
  double dVar2;
  CMotionController *pCVar3;
  int iVar4;
  uint uVar5;
  SMotion *pSVar6;
  CWerewolf *pCVar7;
  CPathMap *path_map;
  int iVar8;
  uint uVar9;
  byte bVar10;
  float10 fVar11;
  float afStackY_1390 [937];
  uint *puVar12;
  float *pfVar13;
  CGore *this_ptr;
  CVector3f *pCVar14;
  float fVar15;
  ulonglong uVar16;
  EBloodType EVar17;
  SDamageInfo *pSVar18;
  float max_distance;
  SDamageInfo aSStack_4d4 [4];
  float fStack_4d0;
  CWerewolf *pCStack_4a0;
  CWerewolf *pCStack_49c;
  SDamageInfo aSStack_498 [4];
  float fStack_494;
  CWerewolf *pCStack_464;
  CWerewolf *pCStack_460;
  SDamageInfo aSStack_45c [4];
  float fStack_458;
  CWerewolf *pCStack_428;
  CWerewolf *pCStack_424;
  SDamageInfo aSStack_420 [4];
  float fStack_41c;
  CWerewolf *pCStack_3ec;
  CWerewolf *pCStack_3e8;
  SDamageInfo aSStack_3e4 [4];
  float fStack_3e0;
  CWerewolf *pCStack_3b0;
  CWerewolf *pCStack_3ac;
  uint uStack_3a8;
  float afStack_3a4 [5];
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  CVector3f CStack_384;
  uint uStack_378;
  float afStack_374 [5];
  float fStack_360;
  float fStack_35c;
  float fStack_358;
  uint uStack_354;
  float afStack_350 [5];
  uint uStack_33c;
  float fStack_330;
  float fStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  CVector3f CStack_318;
  uint uStack_30c;
  float afStack_308 [5];
  uint uStack_2f4;
  CVector3f CStack_2e8;
  uint uStack_2dc;
  float afStack_2d8 [5];
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  uint uStack_2b8;
  float afStack_2ac [3];
  CVector3f CStack_2a0;
  uint uStack_294;
  float afStack_290 [4];
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  byte auStack_270 [12];
  float fStack_264;
  float afStack_260 [4];
  float fStack_250;
  float afStack_24c [3];
  CVector3f CStack_240;
  float fStack_234;
  float afStack_230 [5];
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  CVector3f CStack_210;
  CVector3f CStack_204;
  CVector3f CStack_1f8;
  uint uStack_1ec;
  uint auStack_1e8 [2];
  CVector3f CStack_1e0;
  CVector3f CStack_1d4;
  float fStack_1c8;
  float afStack_1c4 [2];
  CVector3f CStack_1bc;
  uint uStack_1b0;
  float afStack_1ac [2];
  CVector3f CStack_1a4;
  uint uStack_198;
  float afStack_194 [5];
  CVector3f CStack_180;
  float fStack_174;
  float afStack_170 [5];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [5];
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  CVector3f CStack_120;
  CVector3f CStack_114;
  CVector3f CStack_108;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_e4;
  CVector3f CStack_d8;
  uint uStack_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [5];
  uint uStack_6c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [2];
  CMotionController *pCStack_48;
  int iStack_44;
  float fStack_40;
  CMotionController *pCStack_3c;
  float fStack_38;
  float fStack_34;
  byte *puStack_30;
  float fStack_2c;
  float fStack_28;
  byte *puStack_24;
  int iStack_20;
  uint uStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc290);
    return;
  }
  if ((*(int *)&param_1->field_0xc268 == 2) && (0.0 <= *(float *)&param_1->field_0xc2a8)) {
    *(float *)&param_1->field_0xc2a8 = *(float *)&param_1->field_0xc2a8 - param_2;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_50[0] = param_2 * *(float *)&param_1->field_0xc1d0;
  pCStack_18 = (CMotionController *)&param_1->field_0x158;
  while (pCVar3 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_18,afStack_50);
    if (uVar5 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar5);
    }
    else if (uVar5 < 0xb) {
      core_skeleton_cpp_FUN_00569040(pCVar3);
      uStack_30c = uStack_2f4;
      afStack_308[(uint)bVar10 * -2] = afStack_308[(uint)bVar10 * -2 + 6];
      afStack_308[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_308[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408b40(param_1);
      uVar16 = 0x4140000041000000;
      CStack_318._0_4_ = CStack_2e8._0_4_;
      *(uint *)((int)&CStack_318 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_318 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(uVar16);
      fVar11 = (float10)fStack_14 * (float10)_DAT_005f9afa;
      EVar17 = BLOOD_TYPE_RED;
      round();
      iStack_58 = (int)ROUND(fVar11);
      core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_318,(CVector3f *)0x0,iStack_58,EVar17);
    }
    else if (uVar5 == 0x29a) {
      core_mission_cpp_FUN_0051b740(0x01D2C900,param_1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar5);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1);
  if (*(int *)&param_1->field_0xc268 == 2) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005f9ad2;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  uVar5 = *(uint *)(pSVar6 + 0x24);
  uStack_1c = uVar5;
  iVar4 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))();
    if ((iVar4 == 0) && (*(int *)&param_1->field_0xc1e8 == *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)))
    {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_4d4);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      pSVar18 = aSStack_4d4;
      fVar15 = *(float *)&param_1->field_0x27b8;
      puStack_30 = &param_1->field_0xfd8;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,puStack_30 + *(int *)&param_1->field_0xc278 * 0x30);
      puVar12 = &uStack_3a8;
      uStack_3a8 = afStack_350[2];
      afStack_3a4[(uint)bVar10 * -2] = afStack_350[(uint)bVar10 * -2 + 3];
      afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_actor_cpp_FUN_00408b40(param_1,puVar12);
      pCVar14 = &CStack_1d4;
      CStack_1d4._0_4_ = CStack_1e0._0_4_;
      *(uint *)((int)&CStack_1d4 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar10 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_1d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      pSVar18 = aSStack_4d4;
      fVar15 = *(float *)&param_1->field_0x27b8;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,puStack_30 + *(int *)&param_1->field_0xc274 * 0x30);
      puVar12 = &uStack_354;
      uStack_354 = afStack_308[2];
      afStack_350[(uint)bVar10 * -2] = afStack_308[(uint)bVar10 * -2 + 3];
      afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_308[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_actor_cpp_FUN_00408b40(param_1,puVar12);
      pCVar14 = &CStack_1bc;
      CStack_1bc._0_4_ = CStack_204._0_4_;
      *(uint *)((int)&CStack_1bc + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_204 + (uint)bVar10 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_1bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_204 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
      pSVar18 = aSStack_4d4;
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      fVar15 = *(float *)&param_1->field_0x27b8;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_005b5080(&DAT_02c8af28,puStack_30 + *(int *)&param_1->field_0xc270 * 0x30);
      puVar12 = &uStack_378;
      uStack_378 = uStack_2b8;
      afStack_374[(uint)bVar10 * -2] = afStack_2d8[(uint)bVar10 * -2 + 9];
      afStack_374[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1,puVar12);
      pCVar14 = &CStack_1a4;
      CStack_1a4._0_4_ = CStack_d8._0_4_;
      *(uint *)((int)&CStack_1a4 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4);
      pCVar7 = param_1;
      *(uint *)((int)&CStack_1a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
    }
    puStack_24 = &param_1->field_0xfd8;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_005afc45;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != *(int *)&param_1->field_0xc1e8) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_498);
            fStack_494 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
            pCStack_464 = param_1;
            pCStack_460 = param_1;
            pSVar18 = aSStack_498;
            fVar15 = 0.4;
            fStack_14 = fStack_494;
            core_xform_cpp_FUN_005b5080
                      (&DAT_02c8af28,puStack_24 + *(int *)&param_1->field_0xc270 * 0x30);
            puVar12 = &uStack_1ec;
            uStack_1ec = afStack_170[2];
            auStack_1e8[(uint)bVar10 * -2] = afStack_170[(uint)bVar10 * -2 + 3];
            auStack_1e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            core_actor_cpp_FUN_00408b40(param_1,puVar12);
            pCVar14 = &CStack_114;
            CStack_114._0_4_ = CStack_90._0_4_;
            *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)&CStack_90 + (uint)bVar10 * -8 + 4);
            pCVar7 = param_1;
            *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)&CStack_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
          }
          if ((*(int *)&param_1->field_0xc1e8 != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))(),
             iVar4 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,7,1);
          }
          goto LAB_005af702;
        }
        goto LAB_005afcc3;
      }
LAB_005b0229:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
      iVar4 = *(int *)&param_1->field_0xc1e8;
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
        goto LAB_005af702;
      }
      if (*(int *)&param_1->field_0xc294 != 0) {
        fStack_21c = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_218 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_214 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_b4 = fStack_21c;
        afStack_c8[(uint)bVar10 * -2 + 6] = afStack_230[(uint)bVar10 * -2 + 6];
        afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        fStack_40 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if ((*(float *)&param_1->field_0xc1e0 < fStack_40) || ((float)_DAT_005f9ada < fStack_40)) {
          *(uint *)&param_1->field_0xc1e8 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
          goto LAB_005af702;
        }
      }
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)&param_1->field_0xc294);
      if ((iVar4 == 0) || (uStack_1c != 0xf)) {
        iStack_20 = *(int *)&param_1->field_0xc1e8;
        if (*(int *)&param_1->field_0xc268 == 2) {
          if ((*(int *)&param_1->field_0xc29c == 0) || (*(int *)&param_1->field_0xc2a0 == 0)) {
            _DAT_01d1d400 = "..\\core\\werewolf.cpp";
            _DAT_01d1d404 = 0x1ad;
            core_main_c_FUN_005030e0();
          }
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"Phase: %d, Timer: %f\n",*(uint *)&param_1->field_0xc2a4,
                     (double)*(float *)&param_1->field_0xc2a8);
          if ((*(int *)&param_1->field_0xc2a4 == 1) || (*(int *)&param_1->field_0xc2a4 == 3)) {
            core_actor_cpp_FUN_00408bb0(*(uint *)&param_1->field_0xc1e8);
            afStack_260[2] = afStack_230[2];
            afStack_260[(uint)bVar10 * -2 + 3] = afStack_230[(uint)bVar10 * -2 + 3];
            afStack_260[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            if (0.0 <= fStack_250) {
              core_actor_cpp_FUN_00408bb0(*(uint *)&param_1->field_0xc1e8);
              afStack_c8[2] = (float)uStack_cc;
              afStack_c8[(uint)bVar10 * -2 + 3] = afStack_c8[(uint)bVar10 * -2];
              afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                   afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              if (0.0 <= fStack_b8) {
                iVar4 = *(int *)&param_1->field_0xc1e8;
                iVar8 = *(int *)&param_1->field_0xc29c;
                fStack_1c8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar8 + 0x20);
                afStack_1c4[0] = *(float *)(iVar4 + 0x24) - *(float *)(iVar8 + 0x24);
                afStack_1c4[1] = *(float *)(iVar4 + 0x28) - *(float *)(iVar8 + 0x28);
                fStack_9c = fStack_1c8;
                afStack_c8[(uint)bVar10 * -2 + 0xc] = afStack_1c4[(uint)bVar10 * -2];
                afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
                     afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                fVar15 = fStack_9c * fStack_9c;
                iStack_44 = iVar8;
                iVar8 = *(int *)&param_1->field_0xc2a0;
                fStack_2c4 = *(float *)(iVar4 + 0x20) - *(float *)(iVar8 + 0x20);
                fStack_2c0 = *(float *)(iVar4 + 0x24) - *(float *)(iVar8 + 0x24);
                fStack_2bc = *(float *)(iVar4 + 0x28) - *(float *)(iVar8 + 0x28);
                fStack_390 = fStack_2c4;
                afStack_3a4[(uint)bVar10 * -2 + 6] = afStack_2d8[(uint)bVar10 * -2 + 6];
                afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                     afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
                iStack_20 = iStack_44;
                if (SQRT(fStack_94 * fStack_94 + fVar15 + fStack_98 * fStack_98) <=
                    SQRT(fStack_388 * fStack_388 + fStack_390 * fStack_390 + fStack_38c * fStack_38c
                        )) {
                  iStack_20 = iVar8;
                  goto LAB_005b0404;
                }
              }
              else {
                iStack_20 = *(int *)&param_1->field_0xc2a0;
              }
            }
            else {
              iStack_20 = *(int *)&param_1->field_0xc29c;
            }
          }
LAB_005b0404:
          if ((*(int *)&param_1->field_0xc2a4 == 1) || (*(int *)&param_1->field_0xc2a4 == 3)) {
            fStack_264 = *(float *)(iStack_20 + 0x20) - *(float *)&param_1->field_0x20;
            afStack_260[0] = *(float *)(iStack_20 + 0x24) - *(float *)&param_1->field_0x24;
            afStack_260[1] = *(float *)(iStack_20 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_234 = fStack_264;
            afStack_230[(uint)bVar10 * -2] = afStack_260[(uint)bVar10 * -2];
            afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_260[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (SQRT(afStack_230[1] * afStack_230[1] +
                     fStack_234 * fStack_234 + afStack_230[0] * afStack_230[0]) <
                (float)_DAT_005f9ae2) {
              iVar4 = *(int *)&param_1->field_0xc2a4 + 1;
              *(int *)&param_1->field_0xc2a4 = iVar4;
              if (3 < iVar4) {
                *(uint *)&param_1->field_0xc2a4 = 0;
              }
              *(uint *)&param_1->field_0xc2a8 = 0x41200000;
            }
          }
          else if ((*(float *)&param_1->field_0xc2a8 <= 0.0) &&
                  (iVar4 = *(int *)&param_1->field_0xc2a4 + 1,
                  *(int *)&param_1->field_0xc2a4 = iVar4, 3 < iVar4)) {
            *(uint *)&param_1->field_0xc2a4 = 0;
          }
        }
        iVar4 = iStack_20;
        auStack_270._8_4_ = 0x40400000;
        fStack_54 = 0x40400000;
        max_distance = 0.17453292;
        fVar15 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        pCVar14 = (CVector3f *)auStack_270;
        auStack_270._0_4_ = 0;
        auStack_270._4_4_ = 0;
        path_map = (CPathMap *)(**(code **)(*(int *)(iStack_20 + 0x154) + 0xc4))(iStack_20);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,(CVector3f *)(iVar4 + 0x20),path_map,pCVar14,fVar15
                           ,max_distance);
        if (iVar8 < 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
        else if (iVar8 < 1) {
          iVar8 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)&param_1->field_0xc294)
          ;
          if (iVar8 == 0) {
            fStack_a8 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_a4 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_a0 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_330 = fStack_a8;
            afStack_350[(uint)bVar10 * -2 + 9] = afStack_c8[(uint)bVar10 * -2 + 9];
            afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
                 afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
            if (afStack_374 + 5 != afStack_350 + 8) {
              fStack_360 = fStack_330;
              fStack_35c = fStack_32c;
              fStack_358 = fStack_328;
            }
            fStack_38 = SQRT(fStack_358 * fStack_358 +
                             fStack_360 * fStack_360 + fStack_35c * fStack_35c);
            fStack_2c = 20.0;
            if (*(int *)&param_1->field_0xc268 == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)&param_1->field_0xc268 == 2) {
              fStack_2c = 10.0;
            }
            pCStack_48 = (CMotionController *)&param_1->field_0x158;
            if (fStack_2c < fStack_38) {
              core_vecdir_cpp_FUN_005a7520();
              uStack_294 = uStack_1b0;
              afStack_290[(uint)bVar10 * -2] = afStack_1ac[(uint)bVar10 * -2];
              afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              fStack_14 = (float)core_actor_cpp_FUN_0040cd60();
              if (ABS(fStack_14) < (float)_DAT_005f9af2) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,8,1);
                iVar4 = core_actor_cpp_FUN_0040cd00(0.85);
                if (iVar4 != 0) {
                  core_werewolf_cpp_FUN_005b0bb0(param_1);
                }
                iVar8 = 0;
                for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar4 = iVar4 + 1)
                {
                  pCVar7 = (CWerewolf *)
                           core_actor_cpp_castToClassHash_FUN_0040c600
                                     (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar8));
                  if (((pCVar7 != (CWerewolf *)0x0) && (pCVar7 != param_1)) &&
                     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                         ((CMotionController *)&pCVar7->field_0x158),
                     *(int *)(pSVar6 + 0x24) == 8)) {
                    iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
                    if (iVar4 == 1) {
                      *(float *)&param_1->field_0x34 =
                           *(float *)&param_1->field_0x34 + _DAT_005f9b02;
                    }
                    if (iVar4 == 2) {
                      *(float *)&param_1->field_0x34 =
                           *(float *)&param_1->field_0x34 + _DAT_005f9b06;
                    }
                    break;
                  }
                  iVar8 = iVar8 + 4;
                }
              }
            }
            else if ((fStack_38 < 0x40400000 * _DAT_005f9aea) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,0,1);
            }
          }
        }
        else {
          if ((*(int *)&param_1->field_0xc268 == 2) &&
             ((*(int *)&param_1->field_0xc2a4 == 1 || (*(int *)&param_1->field_0xc2a4 == 3))))
          goto LAB_005af702;
          if (*(float *)&param_1->field_0xc1e4 <= 0.0) {
            iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,2,1);
            }
            if (iVar4 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,3,1);
            }
            if (iVar4 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,4,1);
            }
            *(uint *)&param_1->field_0xc1e4 = 0x3f800000;
            iVar4 = core_actor_cpp_FUN_0040cd00(0.6);
            if (iVar4 != 0) {
              core_werewolf_cpp_FUN_005b0bb0(param_1);
            }
          }
        }
        fVar15 = *(float *)&param_1->field_0xc288 - param_2;
        *(float *)&param_1->field_0xc288 = fVar15;
        if (fVar15 < 0.0) {
          core_werewolf_cpp_FUN_005b0bb0(param_1);
        }
        goto LAB_005af702;
      }
LAB_005b0206:
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
    else {
      pCStack_3c = (CMotionController *)&param_1->field_0x158;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_420);
        fStack_41c = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
        pCStack_3ec = param_1;
        pCStack_3e8 = param_1;
        pSVar18 = aSStack_420;
        fVar15 = 0.4;
        fStack_14 = fStack_41c;
        core_xform_cpp_FUN_005b5080
                  (&DAT_02c8af28,puStack_24 + *(int *)&param_1->field_0xc274 * 0x30);
        pfVar13 = afStack_14c + 2;
        afStack_14c[2] = afStack_2d8[2];
        afStack_14c[(uint)bVar10 * -2 + 3] = afStack_2d8[(uint)bVar10 * -2 + 3];
        afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,pfVar13);
        pCVar14 = &CStack_e4;
        CStack_e4._0_4_ = CStack_108._0_4_;
        *(uint *)((int)&CStack_e4 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_108 + (uint)bVar10 * -8 + 4);
        pCVar7 = param_1;
        *(uint *)((int)&CStack_e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_108 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
        if ((*(int *)&param_1->field_0xc1e8 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_3c,7,1);
        }
        goto LAB_005af702;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_005af702;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (*(int *)&param_1->field_0xc1d4 == 0)) &&
             (*(int *)&param_1->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_00569040(pCStack_3c);
            uStack_198 = uStack_6c;
            afStack_194[(uint)bVar10 * -2] = afStack_80[(uint)bVar10 * -2 + 6];
            afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
            core_actor_cpp_FUN_00408b40(param_1);
            pCVar14 = &CStack_fc;
            EVar17 = BLOOD_TYPE_RED;
            CStack_fc._0_4_ = CStack_180._0_4_;
            *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)&CStack_180 + (uint)bVar10 * -8 + 4);
            this_ptr = g_CGorePtr;
            *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)&CStack_180 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr,pCVar14,EVar17);
            *(uint *)&param_1->field_0xc1d4 = 1;
          }
          goto LAB_005af702;
        }
        if (*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) != *(int *)&param_1->field_0xc1e8) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_45c);
          fStack_458 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
          pCStack_428 = param_1;
          pCStack_424 = param_1;
          pSVar18 = aSStack_45c;
          fVar15 = 1.0;
          fStack_14 = fStack_458;
          core_xform_cpp_FUN_005b5080
                    (&DAT_02c8af28,puStack_24 + *(int *)&param_1->field_0xc278 * 0x30);
          pfVar13 = afStack_260 + 5;
          afStack_24c[0] = afStack_80[2];
          afStack_260[(uint)bVar10 * -2 + 6] = afStack_80[(uint)bVar10 * -2 + 3];
          afStack_260[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408b40(param_1,pfVar13);
          pCVar14 = &CStack_240;
          CStack_240._0_4_ = CStack_384._0_4_;
          *(uint *)((int)&CStack_240 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_384 + (uint)bVar10 * -8 + 4);
          pCVar7 = param_1;
          *(uint *)((int)&CStack_240 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_384 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
          pSVar18 = aSStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_FUN_005b5080
                    (&DAT_02c8af28,puStack_24 + *(int *)&param_1->field_0xc274 * 0x30);
          pfVar13 = afStack_3a4 + 2;
          afStack_3a4[2] = afStack_374[2];
          afStack_3a4[(uint)bVar10 * -2 + 3] = afStack_374[(uint)bVar10 * -2 + 3];
          afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_374[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408b40(param_1,pfVar13);
          pCVar14 = &CStack_210;
          CStack_210._0_4_ = CStack_f0._0_4_;
          *(uint *)((int)&CStack_210 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4);
          pCVar7 = param_1;
          *(uint *)((int)&CStack_210 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
          pSVar18 = aSStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_FUN_005b5080
                    (&DAT_02c8af28,puStack_24 + *(int *)&param_1->field_0xc270 * 0x30);
          puVar12 = &uStack_2dc;
          uStack_2dc = uStack_33c;
          afStack_2d8[(uint)bVar10 * -2] = afStack_350[(uint)bVar10 * -2 + 6];
          afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          core_actor_cpp_FUN_00408b40(param_1,puVar12);
          pCVar14 = &CStack_1f8;
          CStack_1f8._0_4_ = CStack_15c._0_4_;
          *(uint *)((int)&CStack_1f8 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_15c + (uint)bVar10 * -8 + 4);
          pCVar7 = param_1;
          *(uint *)((int)&CStack_1f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_15c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
        }
        if ((*(int *)&param_1->field_0xc1e8 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,7,1);
        }
LAB_005afcc3:
        if (*(int *)&param_1->field_0xc1e8 != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_3e4);
          fStack_3e0 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000);
          pCStack_3b0 = param_1;
          pCStack_3ac = param_1;
          pSVar18 = aSStack_3e4;
          fVar15 = 0.4;
          fStack_14 = fStack_3e0;
          core_xform_cpp_FUN_005b5080
                    (&DAT_02c8af28,&param_1->field_0xfd8 + *(int *)&param_1->field_0xc278 * 0x30);
          pfVar13 = afStack_2d8 + 0xb;
          afStack_2ac[0] = afStack_194[2];
          afStack_2d8[(uint)bVar10 * -2 + 0xc] = afStack_194[(uint)bVar10 * -2 + 3];
          afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408b40(param_1,pfVar13);
          pCVar14 = &CStack_2a0;
          CStack_2a0._0_4_ = CStack_120._0_4_;
          *(uint *)((int)&CStack_2a0 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + 4);
          pCVar7 = param_1;
          *(uint *)((int)&CStack_2a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_004a0770((CEnemy *)pCVar7,pCVar14,fVar15,pSVar18);
        }
        if ((*(int *)&param_1->field_0xc1e8 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,7,1);
        }
        goto LAB_005af702;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_005af702;
          goto LAB_005af6ea;
        }
        goto LAB_005b0229;
      }
LAB_005afc45:
      iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
        iVar4 = *(int *)&param_1->field_0xc1e8;
        if (iVar4 == 0) goto LAB_005af702;
        if (*(int *)&param_1->field_0xc294 != 0) {
          fStack_27c = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_278 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_274 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_324 = fStack_27c;
          afStack_350[(uint)bVar10 * -2 + 0xc] = afStack_290[(uint)bVar10 * -2 + 6];
          afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if ((*(float *)&param_1->field_0xc1e0 < fStack_34) || ((float)_DAT_005f9ada < fStack_34))
          {
            *(uint *)&param_1->field_0xc1e8 = 0;
            goto LAB_005af702;
          }
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)&param_1->field_0xc294);
        if ((iVar4 != 0) && (uStack_1c == 0xe)) goto LAB_005b0206;
        if (*(int *)&param_1->field_0xc1e8 == 0) goto LAB_005af702;
        iVar4 = core_actor_cpp_FUN_0040cd00(0.4);
        if (iVar4 != 0) {
          core_werewolf_cpp_FUN_005b0bb0(param_1);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0xf,1);
          goto LAB_005af702;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0xf,1);
        goto LAB_005af702;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,1,1);
    }
    goto LAB_005af702;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_005af6d7:
        iVar4 = 0xf;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
LAB_005af9cb:
      iVar4 = 0;
    }
LAB_005af6e2:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar4,1);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_005af6d7;
      if (*(float *)&param_1->field_0x2528 <= ABS(*(float *)&param_1->field_0x2508)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 8;
      }
      goto LAB_005af6e2;
    }
    if (uVar1 != 3) goto LAB_005af9cb;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_005af6ea:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_005af702:
  if ((uStack_1c == 0x13) && (*(int *)&param_1->field_0x27bc != 0)) {
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc290);
    if (iVar4 == 0) {
      uVar9 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      *(uint *)&param_1->field_0xc290 = uVar9;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1->field_0xc290);
  }
  fStack_28 = 1.0;
  if (*(int *)&param_1->field_0xc268 == 0) {
    fStack_28 = 0.75;
  }
  dVar2 = _DAT_005f9b12;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar2 = _DAT_005f9b0a;
  }
  *(float *)&param_1->field_0x2ff0 = fStack_28 * (float)dVar2;
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  iVar4 = *(int *)(pSVar6 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)&param_1->field_0xdc != 0)) {
    if ((*(int *)&param_1->field_0xc1e8 != 0) &&
       (pCVar7 = (CWerewolf *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))(),
       pCVar7 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1);
    fStack_12c = *(float *)&param_1->field_0x2518 * param_2;
    fStack_128 = *(float *)&param_1->field_0x251c * param_2;
    fStack_124 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_84 = fStack_12c;
    afStack_80[(uint)bVar10 * -2] = afStack_14c[(uint)bVar10 * -2 + 9];
    afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    fStack_150 = fStack_84 + *(float *)&param_1->field_0x249c;
    afStack_14c[0] = afStack_80[0] + *(float *)&param_1->field_0x24a0;
    afStack_14c[1] = afStack_80[1] + *(float *)&param_1->field_0x24a4;
    afStack_290[2] = fStack_150;
    afStack_290[(uint)bVar10 * -2 + 3] = afStack_14c[(uint)bVar10 * -2];
    afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_138 = afStack_290[2] + *(float *)&param_1->field_0x250c;
    fStack_134 = afStack_290[3] + *(float *)&param_1->field_0x2510;
    fStack_130 = fStack_280 + *(float *)&param_1->field_0x2514;
    fStack_174 = fStack_138;
    afStack_170[(uint)bVar10 * -2] = afStack_14c[(uint)bVar10 * -2 + 6];
    afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_174);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  core_werewolf_cpp_FUN_005b1850();
  *(float *)&param_1->field_0xc2ac =
       param_2 * (float)_DAT_005f9b1a + *(float *)&param_1->field_0xc2ac;
  return;
}
