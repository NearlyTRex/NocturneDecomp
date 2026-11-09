// Name: core_werewolf.cpp_FUN_0058b950
// Address: 0058b950
// Address Range: [[0058b950, 0058d01b]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0058b950(CWerewolf *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_FUN_0058b950(CWerewolf *param_1,float param_2)

{
  uint uVar1;
  double dVar2;
  CMotionController *pCVar3;
  int iVar4;
  uint uVar5;
  CWerewolf *pCVar6;
  CPathMap *path_map;
  int iVar7;
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
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b20);
    return;
  }
  if ((*(int *)&param_1->field_0x10af8 == 2) && (0.0 <= *(float *)&param_1->field_0x10b38)) {
    *(float *)&param_1->field_0x10b38 = *(float *)&param_1->field_0x10b38 - param_2;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  afStack_50[0] = param_2 * *(float *)&param_1->field_0x10a60;
  pCStack_18 = (CMotionController *)&param_1->field_0x2b4;
  while (pCVar3 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_18,afStack_50);
    if (uVar5 < 10) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar5);
    }
    else if (uVar5 < 0xb) {
      core_skeleton_cpp_FUN_005469a0(pCVar3);
      uStack_30c = uStack_2f4;
      afStack_308[(uint)bVar10 * -2] = afStack_308[(uint)bVar10 * -2 + 6];
      afStack_308[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_308[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408d70(param_1);
      uVar16 = 0x4140000041000000;
      CStack_318._0_4_ = CStack_2e8._0_4_;
      *(uint *)((int)&CStack_318 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_318 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_2e8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar16);
      fVar11 = (float10)fStack_14 * (float10)_DAT_005ee722;
      EVar17 = BLOOD_TYPE_RED;
      round();
      iStack_58 = (int)ROUND(fVar11);
      core_gore_cpp_FUN_004c9850(g_CGorePtr,&CStack_318,(CVector3f *)0x0,iStack_58,EVar17);
    }
    else if (uVar5 == 0x29a) {
      core_mission_cpp_FUN_004fc7b0(0x01D182F0,param_1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar5);
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1);
  if (*(int *)&param_1->field_0x10af8 == 2) {
    *(float *)&param_1->field_0x2598 = *(float *)&param_1->field_0x2598 * (float)_DAT_005ee6fa;
  }
  iVar4 = core_motion_cpp_FUN_005035c0();
  uVar5 = *(uint *)(iVar4 + 0x24);
  uStack_1c = uVar5;
  iVar4 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x114))();
    if ((iVar4 == 0) && (*(int *)&param_1->field_0x10a78 == *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4))
       ) {
      core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_4d4);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      pSVar18 = aSStack_4d4;
      fVar15 = *(float *)&param_1->field_0x2824;
      puStack_30 = &param_1->field_0x1134;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_30 + *(int *)&param_1->field_0x10b08 * 0x30)
      ;
      puVar12 = &uStack_3a8;
      uStack_3a8 = afStack_350[2];
      afStack_3a4[(uint)bVar10 * -2] = afStack_350[(uint)bVar10 * -2 + 3];
      afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_actor_cpp_FUN_00408d70(param_1,puVar12);
      pCVar14 = &CStack_1d4;
      CStack_1d4._0_4_ = CStack_1e0._0_4_;
      *(uint *)((int)&CStack_1d4 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar10 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_1d4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_1e0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      pSVar18 = aSStack_4d4;
      fVar15 = *(float *)&param_1->field_0x2824;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_30 + *(int *)&param_1->field_0x10b04 * 0x30)
      ;
      puVar12 = &uStack_354;
      uStack_354 = afStack_308[2];
      afStack_350[(uint)bVar10 * -2] = afStack_308[(uint)bVar10 * -2 + 3];
      afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_308[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
      core_actor_cpp_FUN_00408d70(param_1,puVar12);
      pCVar14 = &CStack_1bc;
      CStack_1bc._0_4_ = CStack_204._0_4_;
      *(uint *)((int)&CStack_1bc + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_204 + (uint)bVar10 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_1bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_204 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
      pSVar18 = aSStack_4d4;
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      fVar15 = *(float *)&param_1->field_0x2824;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_00591530(&DAT_0265370c,puStack_30 + *(int *)&param_1->field_0x10b00 * 0x30)
      ;
      puVar12 = &uStack_378;
      uStack_378 = uStack_2b8;
      afStack_374[(uint)bVar10 * -2] = afStack_2d8[(uint)bVar10 * -2 + 9];
      afStack_374[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408d70(param_1,puVar12);
      pCVar14 = &CStack_1a4;
      CStack_1a4._0_4_ = CStack_d8._0_4_;
      *(uint *)((int)&CStack_1a4 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + 4);
      pCVar6 = param_1;
      *(uint *)((int)&CStack_1a4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_d8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
    }
    puStack_24 = &param_1->field_0x1134;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_0058c0f5;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != *(int *)&param_1->field_0x10a78) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_498);
            fStack_494 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
            pCStack_464 = param_1;
            pCStack_460 = param_1;
            pSVar18 = aSStack_498;
            fVar15 = 0.4;
            fStack_14 = fStack_494;
            core_xform_cpp_FUN_00591530
                      (&DAT_0265370c,puStack_24 + *(int *)&param_1->field_0x10b00 * 0x30);
            puVar12 = &uStack_1ec;
            uStack_1ec = afStack_170[2];
            auStack_1e8[(uint)bVar10 * -2] = afStack_170[(uint)bVar10 * -2 + 3];
            auStack_1e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            core_actor_cpp_FUN_00408d70(param_1,puVar12);
            pCVar14 = &CStack_114;
            CStack_114._0_4_ = CStack_90._0_4_;
            *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)&CStack_90 + (uint)bVar10 * -8 + 4);
            pCVar6 = param_1;
            *(uint *)((int)&CStack_114 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)&CStack_90 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
          }
          if ((*(int *)&param_1->field_0x10a78 != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))(),
             iVar4 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,7,1);
          }
          goto LAB_0058bbb2;
        }
        goto LAB_0058c173;
      }
LAB_0058c6d9:
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
      iVar4 = *(int *)&param_1->field_0x10a78;
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
        goto LAB_0058bbb2;
      }
      if (*(int *)&param_1->field_0x10b24 != 0) {
        fStack_21c = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_218 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_214 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_b4 = fStack_21c;
        afStack_c8[(uint)bVar10 * -2 + 6] = afStack_230[(uint)bVar10 * -2 + 6];
        afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        fStack_40 = SQRT(fStack_ac * fStack_ac + fStack_b4 * fStack_b4 + fStack_b0 * fStack_b0);
        if ((*(float *)&param_1->field_0x10a70 < fStack_40) || ((float)_DAT_005ee702 < fStack_40)) {
          *(uint *)&param_1->field_0x10a78 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
          goto LAB_0058bbb2;
        }
      }
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)&param_1->field_0x10b24);
      if ((iVar4 == 0) || (uStack_1c != 0xf)) {
        iStack_20 = *(int *)&param_1->field_0x10a78;
        if (*(int *)&param_1->field_0x10af8 == 2) {
          if ((*(int *)&param_1->field_0x10b2c == 0) || (*(int *)&param_1->field_0x10b30 == 0)) {
            _DAT_01d046a0 = "..\\core\\werewolf.cpp";
            _DAT_01d046a4 = 0x1ad;
            core_main_c_FUN_004e4500();
          }
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"Phase: %d, Timer: %f\n",*(uint *)&param_1->field_0x10b34
                     ,(double)*(float *)&param_1->field_0x10b38);
          if ((*(int *)&param_1->field_0x10b34 == 1) || (*(int *)&param_1->field_0x10b34 == 3)) {
            core_actor_cpp_FUN_00408de0(*(uint *)&param_1->field_0x10a78);
            afStack_260[2] = afStack_230[2];
            afStack_260[(uint)bVar10 * -2 + 3] = afStack_230[(uint)bVar10 * -2 + 3];
            afStack_260[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            if (0.0 <= fStack_250) {
              core_actor_cpp_FUN_00408de0(*(uint *)&param_1->field_0x10a78);
              afStack_c8[2] = (float)uStack_cc;
              afStack_c8[(uint)bVar10 * -2 + 3] = afStack_c8[(uint)bVar10 * -2];
              afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                   afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              if (0.0 <= fStack_b8) {
                iVar4 = *(int *)&param_1->field_0x10a78;
                iVar7 = *(int *)&param_1->field_0x10b2c;
                fStack_1c8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar7 + 0x20);
                afStack_1c4[0] = *(float *)(iVar4 + 0x24) - *(float *)(iVar7 + 0x24);
                afStack_1c4[1] = *(float *)(iVar4 + 0x28) - *(float *)(iVar7 + 0x28);
                fStack_9c = fStack_1c8;
                afStack_c8[(uint)bVar10 * -2 + 0xc] = afStack_1c4[(uint)bVar10 * -2];
                afStack_c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
                     afStack_1c4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
                fVar15 = fStack_9c * fStack_9c;
                iStack_44 = iVar7;
                iVar7 = *(int *)&param_1->field_0x10b30;
                fStack_2c4 = *(float *)(iVar4 + 0x20) - *(float *)(iVar7 + 0x20);
                fStack_2c0 = *(float *)(iVar4 + 0x24) - *(float *)(iVar7 + 0x24);
                fStack_2bc = *(float *)(iVar4 + 0x28) - *(float *)(iVar7 + 0x28);
                fStack_390 = fStack_2c4;
                afStack_3a4[(uint)bVar10 * -2 + 6] = afStack_2d8[(uint)bVar10 * -2 + 6];
                afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                     afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
                iStack_20 = iStack_44;
                if (SQRT(fStack_94 * fStack_94 + fVar15 + fStack_98 * fStack_98) <=
                    SQRT(fStack_388 * fStack_388 + fStack_390 * fStack_390 + fStack_38c * fStack_38c
                        )) {
                  iStack_20 = iVar7;
                  goto LAB_0058c8b4;
                }
              }
              else {
                iStack_20 = *(int *)&param_1->field_0x10b30;
              }
            }
            else {
              iStack_20 = *(int *)&param_1->field_0x10b2c;
            }
          }
LAB_0058c8b4:
          if ((*(int *)&param_1->field_0x10b34 == 1) || (*(int *)&param_1->field_0x10b34 == 3)) {
            fStack_264 = *(float *)(iStack_20 + 0x20) - *(float *)&param_1->field_0x20;
            afStack_260[0] = *(float *)(iStack_20 + 0x24) - *(float *)&param_1->field_0x24;
            afStack_260[1] = *(float *)(iStack_20 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_234 = fStack_264;
            afStack_230[(uint)bVar10 * -2] = afStack_260[(uint)bVar10 * -2];
            afStack_230[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_260[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
            if (SQRT(afStack_230[1] * afStack_230[1] +
                     fStack_234 * fStack_234 + afStack_230[0] * afStack_230[0]) <
                (float)_DAT_005ee70a) {
              iVar4 = *(int *)&param_1->field_0x10b34 + 1;
              *(int *)&param_1->field_0x10b34 = iVar4;
              if (3 < iVar4) {
                *(uint *)&param_1->field_0x10b34 = 0;
              }
              *(uint *)&param_1->field_0x10b38 = 0x41200000;
            }
          }
          else if ((*(float *)&param_1->field_0x10b38 <= 0.0) &&
                  (iVar4 = *(int *)&param_1->field_0x10b34 + 1,
                  *(int *)&param_1->field_0x10b34 = iVar4, 3 < iVar4)) {
            *(uint *)&param_1->field_0x10b34 = 0;
          }
        }
        iVar4 = iStack_20;
        auStack_270._8_4_ = 0x40400000;
        fStack_54 = 0x40400000;
        max_distance = 0.17453292;
        fVar15 = 0.5;
        *(uint *)&param_1->field_0x2510 = 0;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
        pCVar14 = (CVector3f *)auStack_270;
        auStack_270._0_4_ = 0;
        auStack_270._4_4_ = 0;
        path_map = (CPathMap *)(**(code **)(*(int *)(iStack_20 + 0x2b0) + 0xcc))(iStack_20);
        iVar7 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                          ((CCharacter *)param_1,(CVector3f *)(iVar4 + 0x20),path_map,pCVar14,fVar15
                           ,max_distance);
        if (iVar7 < 0) {
          engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
        else if (iVar7 < 1) {
          iVar7 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                            (*(uint *)&param_1->field_0x10b24);
          if (iVar7 == 0) {
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
            if (*(int *)&param_1->field_0x10af8 == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)&param_1->field_0x10af8 == 2) {
              fStack_2c = 10.0;
            }
            pCStack_48 = (CMotionController *)&param_1->field_0x2b4;
            if (fStack_2c < fStack_38) {
              core_vecdir_cpp_FUN_005838f0();
              uStack_294 = uStack_1b0;
              afStack_290[(uint)bVar10 * -2] = afStack_1ac[(uint)bVar10 * -2];
              afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              fStack_14 = (float)core_actor_cpp_FUN_0040d0c0();
              if (ABS(fStack_14) < (float)_DAT_005ee71a) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_48,8,1);
                iVar4 = core_actor_cpp_FUN_0040d060(0.85);
                if (iVar4 != 0) {
                  core_werewolf_cpp_FUN_0058d060(param_1);
                }
                iVar7 = 0;
                for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar4 = iVar4 + 1)
                {
                  pCVar6 = (CWerewolf *)
                           core_actor_cpp_castToClassHash_FUN_0040c8f0
                                     (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar7));
                  if (((pCVar6 != (CWerewolf *)0x0) && (pCVar6 != param_1)) &&
                     (iVar8 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar8 + 0x24) == 8)) {
                    iVar4 = core_actor_cpp_FUN_0040cfc0(0,2);
                    if (iVar4 == 1) {
                      *(float *)&param_1->field_0x34 =
                           *(float *)&param_1->field_0x34 + _DAT_005ee72a;
                    }
                    if (iVar4 == 2) {
                      *(float *)&param_1->field_0x34 =
                           *(float *)&param_1->field_0x34 + _DAT_005ee72e;
                    }
                    break;
                  }
                  iVar7 = iVar7 + 4;
                }
              }
            }
            else if ((fStack_38 < 0x40400000 * _DAT_005ee712) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_48,0,1);
            }
          }
        }
        else {
          if ((*(int *)&param_1->field_0x10af8 == 2) &&
             ((*(int *)&param_1->field_0x10b34 == 1 || (*(int *)&param_1->field_0x10b34 == 3))))
          goto LAB_0058bbb2;
          if (*(float *)&param_1->field_0x10a74 <= 0.0) {
            iVar4 = core_actor_cpp_FUN_0040cfc0(0,2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,2,1);
            }
            if (iVar4 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,3,1);
            }
            if (iVar4 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,4,1);
            }
            *(uint *)&param_1->field_0x10a74 = 0x3f800000;
            iVar4 = core_actor_cpp_FUN_0040d060(0.6);
            if (iVar4 != 0) {
              core_werewolf_cpp_FUN_0058d060(param_1);
            }
          }
        }
        fVar15 = *(float *)&param_1->field_0x10b18 - param_2;
        *(float *)&param_1->field_0x10b18 = fVar15;
        if (fVar15 < 0.0) {
          core_werewolf_cpp_FUN_0058d060(param_1);
        }
        goto LAB_0058bbb2;
      }
LAB_0058c6b6:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
    }
    else {
      pCStack_3c = (CMotionController *)&param_1->field_0x2b4;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_420);
        fStack_41c = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
        pCStack_3ec = param_1;
        pCStack_3e8 = param_1;
        pSVar18 = aSStack_420;
        fVar15 = 0.4;
        fStack_14 = fStack_41c;
        core_xform_cpp_FUN_00591530
                  (&DAT_0265370c,puStack_24 + *(int *)&param_1->field_0x10b04 * 0x30);
        pfVar13 = afStack_14c + 2;
        afStack_14c[2] = afStack_2d8[2];
        afStack_14c[(uint)bVar10 * -2 + 3] = afStack_2d8[(uint)bVar10 * -2 + 3];
        afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,pfVar13);
        pCVar14 = &CStack_e4;
        CStack_e4._0_4_ = CStack_108._0_4_;
        *(uint *)((int)&CStack_e4 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&CStack_108 + (uint)bVar10 * -8 + 4);
        pCVar6 = param_1;
        *(uint *)((int)&CStack_e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&CStack_108 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
        if ((*(int *)&param_1->field_0x10a78 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_3c,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_0058bbb2;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (*(int *)&param_1->field_0x10a64 == 0)) &&
             (*(int *)&param_1->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_005469a0(pCStack_3c);
            uStack_198 = uStack_6c;
            afStack_194[(uint)bVar10 * -2] = afStack_80[(uint)bVar10 * -2 + 6];
            afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
            core_actor_cpp_FUN_00408d70(param_1);
            pCVar14 = &CStack_fc;
            EVar17 = BLOOD_TYPE_RED;
            CStack_fc._0_4_ = CStack_180._0_4_;
            *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)&CStack_180 + (uint)bVar10 * -8 + 4);
            this_ptr = g_CGorePtr;
            *(uint *)((int)&CStack_fc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)&CStack_180 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(this_ptr,pCVar14,EVar17);
            *(uint *)&param_1->field_0x10a64 = 1;
          }
          goto LAB_0058bbb2;
        }
        if (*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) != *(int *)&param_1->field_0x10a78) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_45c);
          fStack_458 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
          pCStack_428 = param_1;
          pCStack_424 = param_1;
          pSVar18 = aSStack_45c;
          fVar15 = 1.0;
          fStack_14 = fStack_458;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,puStack_24 + *(int *)&param_1->field_0x10b08 * 0x30);
          pfVar13 = afStack_260 + 5;
          afStack_24c[0] = afStack_80[2];
          afStack_260[(uint)bVar10 * -2 + 6] = afStack_80[(uint)bVar10 * -2 + 3];
          afStack_260[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408d70(param_1,pfVar13);
          pCVar14 = &CStack_240;
          CStack_240._0_4_ = CStack_384._0_4_;
          *(uint *)((int)&CStack_240 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_384 + (uint)bVar10 * -8 + 4);
          pCVar6 = param_1;
          *(uint *)((int)&CStack_240 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_384 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
          pSVar18 = aSStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,puStack_24 + *(int *)&param_1->field_0x10b04 * 0x30);
          pfVar13 = afStack_3a4 + 2;
          afStack_3a4[2] = afStack_374[2];
          afStack_3a4[(uint)bVar10 * -2 + 3] = afStack_374[(uint)bVar10 * -2 + 3];
          afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_374[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408d70(param_1,pfVar13);
          pCVar14 = &CStack_210;
          CStack_210._0_4_ = CStack_f0._0_4_;
          *(uint *)((int)&CStack_210 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + 4);
          pCVar6 = param_1;
          *(uint *)((int)&CStack_210 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
          pSVar18 = aSStack_45c;
          fVar15 = 1.0;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,puStack_24 + *(int *)&param_1->field_0x10b00 * 0x30);
          puVar12 = &uStack_2dc;
          uStack_2dc = uStack_33c;
          afStack_2d8[(uint)bVar10 * -2] = afStack_350[(uint)bVar10 * -2 + 6];
          afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          core_actor_cpp_FUN_00408d70(param_1,puVar12);
          pCVar14 = &CStack_1f8;
          CStack_1f8._0_4_ = CStack_15c._0_4_;
          *(uint *)((int)&CStack_1f8 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_15c + (uint)bVar10 * -8 + 4);
          pCVar6 = param_1;
          *(uint *)((int)&CStack_1f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_15c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
        }
        if ((*(int *)&param_1->field_0x10a78 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,7,1);
        }
LAB_0058c173:
        if (*(int *)&param_1->field_0x10a78 != *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_3e4);
          fStack_3e0 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000);
          pCStack_3b0 = param_1;
          pCStack_3ac = param_1;
          pSVar18 = aSStack_3e4;
          fVar15 = 0.4;
          fStack_14 = fStack_3e0;
          core_xform_cpp_FUN_00591530
                    (&DAT_0265370c,&param_1->field_0x1134 + *(int *)&param_1->field_0x10b08 * 0x30);
          pfVar13 = afStack_2d8 + 0xb;
          afStack_2ac[0] = afStack_194[2];
          afStack_2d8[(uint)bVar10 * -2 + 0xc] = afStack_194[(uint)bVar10 * -2 + 3];
          afStack_2d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_194[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408d70(param_1,pfVar13);
          pCVar14 = &CStack_2a0;
          CStack_2a0._0_4_ = CStack_120._0_4_;
          *(uint *)((int)&CStack_2a0 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + 4);
          pCVar6 = param_1;
          *(uint *)((int)&CStack_2a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&CStack_120 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          core_enemy_cpp_FUN_00488110((CEnemy *)pCVar6,pCVar14,fVar15,pSVar18);
        }
        if ((*(int *)&param_1->field_0x10a78 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,7,1);
        }
        goto LAB_0058bbb2;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_0058bbb2;
          goto LAB_0058bb9a;
        }
        goto LAB_0058c6d9;
      }
LAB_0058c0f5:
      iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1);
        iVar4 = *(int *)&param_1->field_0x10a78;
        if (iVar4 == 0) goto LAB_0058bbb2;
        if (*(int *)&param_1->field_0x10b24 != 0) {
          fStack_27c = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_278 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_274 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_324 = fStack_27c;
          afStack_350[(uint)bVar10 * -2 + 0xc] = afStack_290[(uint)bVar10 * -2 + 6];
          afStack_350[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          fStack_34 = SQRT(fStack_31c * fStack_31c +
                           fStack_324 * fStack_324 + fStack_320 * fStack_320);
          if ((*(float *)&param_1->field_0x10a70 < fStack_34) || ((float)_DAT_005ee702 < fStack_34))
          {
            *(uint *)&param_1->field_0x10a78 = 0;
            goto LAB_0058bbb2;
          }
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c8f0(*(uint *)&param_1->field_0x10b24);
        if ((iVar4 != 0) && (uStack_1c == 0xe)) goto LAB_0058c6b6;
        if (*(int *)&param_1->field_0x10a78 == 0) goto LAB_0058bbb2;
        iVar4 = core_actor_cpp_FUN_0040d060(0.4);
        if (iVar4 != 0) {
          core_werewolf_cpp_FUN_0058d060(param_1);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0xf,1);
          goto LAB_0058bbb2;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0xf,1);
        goto LAB_0058bbb2;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,1,1);
    }
    goto LAB_0058bbb2;
  }
  uVar1 = *(uint *)&param_1->field_0x27ac;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_0058bb87:
        iVar4 = 0xf;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
LAB_0058be7b:
      iVar4 = 0;
    }
LAB_0058bb92:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar4,1);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_0058bb87;
      if (*(float *)&param_1->field_0x2598 <= ABS(*(float *)&param_1->field_0x2578)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 8;
      }
      goto LAB_0058bb92;
    }
    if (uVar1 != 3) goto LAB_0058be7b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_0058bb9a:
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
LAB_0058bbb2:
  if ((uStack_1c == 0x13) && (*(int *)&param_1->field_0x2828 != 0)) {
    iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10b20);
    if (iVar4 == 0) {
      uVar9 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1);
      *(uint *)&param_1->field_0x10b20 = uVar9;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1->field_0x10b20);
  }
  fStack_28 = 1.0;
  if (*(int *)&param_1->field_0x10af8 == 0) {
    fStack_28 = 0.75;
  }
  dVar2 = _DAT_005ee73a;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar2 = _DAT_005ee732;
  }
  *(float *)&param_1->field_0x3434 = fStack_28 * (float)dVar2;
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar4 = core_motion_cpp_FUN_005035c0();
  iVar4 = *(int *)(iVar4 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)&param_1->field_0xdc != 0)) {
    if ((*(int *)&param_1->field_0x10a78 != 0) &&
       (pCVar6 = (CWerewolf *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))(),
       pCVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
    }
    core_charactr_cpp_FUN_00423a10(param_1);
    fStack_12c = *(float *)&param_1->field_0x2588 * param_2;
    fStack_128 = *(float *)&param_1->field_0x258c * param_2;
    fStack_124 = *(float *)&param_1->field_0x2590 * param_2;
    fStack_84 = fStack_12c;
    afStack_80[(uint)bVar10 * -2] = afStack_14c[(uint)bVar10 * -2 + 9];
    afStack_80[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    fStack_150 = fStack_84 + *(float *)&param_1->field_0x2508;
    afStack_14c[0] = afStack_80[0] + *(float *)&param_1->field_0x250c;
    afStack_14c[1] = afStack_80[1] + *(float *)&param_1->field_0x2510;
    afStack_290[2] = fStack_150;
    afStack_290[(uint)bVar10 * -2 + 3] = afStack_14c[(uint)bVar10 * -2];
    afStack_290[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    fStack_138 = afStack_290[2] + *(float *)&param_1->field_0x257c;
    fStack_134 = afStack_290[3] + *(float *)&param_1->field_0x2580;
    fStack_130 = fStack_280 + *(float *)&param_1->field_0x2584;
    fStack_174 = fStack_138;
    afStack_170[(uint)bVar10 * -2] = afStack_14c[(uint)bVar10 * -2 + 6];
    afStack_170[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_14c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)&fStack_174);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  core_werewolf_cpp_FUN_0058dd00();
  *(float *)&param_1->field_0x10b3c =
       param_2 * (float)_DAT_005ee742 + *(float *)&param_1->field_0x10b3c;
  return;
}
