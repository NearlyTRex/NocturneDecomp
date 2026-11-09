// Name: core_werewolf.cpp_FUN_0057d720
// Address: 0057d720
// Address Range: [[0057d720, 0057edee]]
// Convention: unknown
// Signature: void core_werewolf_cpp_FUN_0057d720(CWerewolf *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_FUN_0057d720(CWerewolf *param_1,float param_2)

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
  float *pfVar12;
  uint *puVar13;
  CGore *this_ptr;
  CVector3f *pCVar14;
  float fVar15;
  ulonglong uVar16;
  EBloodType EVar17;
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
  float fStack_3a8;
  float afStack_3a4 [4];
  float fStack_394;
  float afStack_390 [3];
  float afStack_384 [3];
  uint uStack_378;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  uint uStack_360;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float afStack_348 [3];
  uint uStack_33c;
  uint uStack_330;
  byte auStack_324 [12];
  uint uStack_318;
  float afStack_314 [5];
  uint uStack_300;
  uint uStack_2f4;
  uint uStack_2e8;
  CVector3f CStack_2dc;
  uint uStack_2d0;
  float afStack_2cc [4];
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  uint uStack_2ac;
  float afStack_2a0 [3];
  float afStack_294 [3];
  uint uStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  uint uStack_270;
  uint uStack_264;
  CVector3f CStack_258;
  uint uStack_24c;
  float afStack_248 [5];
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  uint uStack_21c;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  uint uStack_204;
  float fStack_1fc;
  float afStack_1f8 [3];
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  float afStack_1dc [5];
  uint auStack_1c8 [3];
  CVector3f CStack_1bc;
  uint uStack_1b0;
  float afStack_1ac [5];
  uint auStack_198 [3];
  uint uStack_18c;
  uint uStack_180;
  uint uStack_174;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  uint uStack_144;
  uint auStack_138 [3];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  uint auStack_120 [3];
  uint uStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  uint uStack_e4;
  uint auStack_d8 [3];
  uint auStack_cc [3];
  uint uStack_c0;
  CVector3f CStack_b4;
  uint uStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  uint uStack_90;
  float afStack_8c [5];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  uint uStack_6c;
  int iStack_58;
  float fStack_54;
  float afStack_50 [2];
  int iStack_48;
  float fStack_44;
  CMotionController *pCStack_40;
  float fStack_3c;
  CMotionController *pCStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  byte *puStack_28;
  byte *puStack_24;
  int iStack_20;
  uint uStack_1c;
  CMotionController *pCStack_18;
  float fStack_14;
  
  bVar10 = 0;
  iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
  if (iVar4 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd07c);
    return;
  }
  if ((*(int *)&param_1->field_0xd054 == 2) && (0.0 <= *(float *)&param_1->field_0xd094)) {
    *(float *)&param_1->field_0xd094 = *(float *)&param_1->field_0xd094 - param_2;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  afStack_50[0] = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_18 = (CMotionController *)&param_1->field_0x158;
  while (pCVar3 = pCStack_18, 0.0 < afStack_50[0]) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_18,afStack_50);
    if (uVar5 < 10) {
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar5);
    }
    else if (uVar5 < 0xb) {
      core_skeleton_cpp_FUN_0054dbd0(pCVar3);
      uStack_300 = uStack_2e8;
      afStack_314[(uint)bVar10 * -2 + 6] = afStack_314[(uint)bVar10 * -2 + 0xc];
      afStack_314[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_314[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      core_actor_cpp_FUN_00408b80(param_1);
      uVar16 = 0x4140000041000000;
      CStack_1bc._0_4_ = CStack_2dc._0_4_;
      *(uint *)((int)&CStack_1bc + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)&CStack_2dc + (uint)bVar10 * -8 + 4);
      *(uint *)((int)&CStack_1bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           *(uint *)((int)&CStack_2dc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
      fStack_14 = (float)core_actor_cpp_FUN_0040ce40(uVar16);
      fVar11 = (float10)fStack_14 * (float10)_DAT_005d7b1b;
      EVar17 = BLOOD_TYPE_RED;
      round();
      iStack_58 = (int)ROUND(fVar11);
      core_gore_cpp_FUN_004ce9c0(g_CGorePtr,&CStack_1bc,(CVector3f *)0x0,iStack_58,EVar17);
    }
    else if (uVar5 == 0x29a) {
      core_mission_cpp_FUN_004f6f10(0x01D81080,param_1);
    }
    else {
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar5);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1);
  if (*(int *)&param_1->field_0xd054 == 2) {
    *(float *)&param_1->field_0x2528 = *(float *)&param_1->field_0x2528 * (float)_DAT_005d7af3;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  uVar5 = *(uint *)(pSVar6 + 0x24);
  uStack_1c = uVar5;
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    iVar4 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))();
    if ((iVar4 == 0) && (*(int *)&param_1->field_0xcde4 == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)))
    {
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_4d4);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      puStack_28 = &param_1->field_0xfd8;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_28 + *(int *)&param_1->field_0xd064 * 0x30,
                 *(uint *)&param_1->field_0x27b8);
      pfVar12 = afStack_1dc + 2;
      afStack_1dc[2] = (float)uStack_33c;
      afStack_1dc[(uint)bVar10 * -2 + 3] = afStack_3a4[(uint)bVar10 * -2 + 0x1b];
      afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
      core_actor_cpp_FUN_00408b80(param_1,pfVar12);
      pfVar12 = afStack_1dc + 5;
      auStack_1c8[0] = uStack_15c;
      afStack_1dc[(uint)bVar10 * -2 + 6] = afStack_1ac[(uint)bVar10 * -2 + 0x15];
      pCVar7 = param_1;
      afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
      core_enemy_cpp_FUN_004893f0(pCVar7,pfVar12);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_28 + *(int *)&param_1->field_0xd060 * 0x30,
                 *(uint *)&param_1->field_0x27b8);
      pfVar12 = afStack_314 + 2;
      afStack_314[2] = (float)uStack_2f4;
      afStack_314[(uint)bVar10 * -2 + 3] = afStack_314[(uint)bVar10 * -2 + 9];
      afStack_314[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
           afStack_314[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_actor_cpp_FUN_00408b80(param_1,pfVar12);
      puVar13 = &uStack_1b0;
      uStack_1b0 = uStack_18c;
      afStack_1ac[(uint)bVar10 * -2] = afStack_1ac[(uint)bVar10 * -2 + 9];
      pCVar7 = param_1;
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
      core_enemy_cpp_FUN_004893f0(pCVar7,puVar13);
      fStack_4d0 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
      pCStack_4a0 = param_1;
      pCStack_49c = param_1;
      fStack_14 = fStack_4d0;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_28 + *(int *)&param_1->field_0xd05c * 0x30,
                 *(uint *)&param_1->field_0x27b8);
      pfVar12 = afStack_3a4 + 0x17;
      afStack_348[0] = (float)uStack_e4;
      afStack_3a4[(uint)bVar10 * -2 + 0x18] = afStack_1ac[(uint)bVar10 * -2 + 0x33];
      afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34];
      core_actor_cpp_FUN_00408b80(param_1,pfVar12);
      pfVar12 = afStack_1ac + 5;
      auStack_198[0] = uStack_144;
      afStack_1ac[(uint)bVar10 * -2 + 6] = afStack_1ac[(uint)bVar10 * -2 + 0x1b];
      pCVar7 = param_1;
      afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
           afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
      core_enemy_cpp_FUN_004893f0(pCVar7,pfVar12);
    }
    puStack_24 = &param_1->field_0xfd8;
    if (uStack_1c < 4) {
      if (uStack_1c == 0) goto LAB_0057dec3;
      if (1 < uStack_1c) {
        if (2 < uStack_1c) {
          if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != *(int *)&param_1->field_0xcde4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_420);
            fStack_41c = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
            pCStack_3ec = param_1;
            pCStack_3e8 = param_1;
            fStack_14 = fStack_41c;
            core_xform_cpp_FUN_00583260
                      (&DAT_02cfd900,puStack_24 + *(int *)&param_1->field_0xd05c * 0x30,0x3ecccccd);
            pfVar12 = afStack_1ac + 0x23;
            auStack_120[0] = uStack_6c;
            afStack_1ac[(uint)bVar10 * -2 + 0x24] = afStack_8c[(uint)bVar10 * -2 + 9];
            afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
                 afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
            core_actor_cpp_FUN_00408b80(param_1,pfVar12);
            puVar13 = &uStack_2d0;
            uStack_2d0 = afStack_8c[2];
            afStack_2cc[(uint)bVar10 * -2] = afStack_8c[(uint)bVar10 * -2 + 3];
            pCVar7 = param_1;
            afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            core_enemy_cpp_FUN_004893f0(pCVar7,puVar13);
          }
          if ((*(int *)&param_1->field_0xcde4 != 0) &&
             (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))(),
             iVar4 != 0)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,7,1);
          }
          goto LAB_0057d989;
        }
        goto LAB_0057df41;
      }
LAB_0057e4a9:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
      iVar4 = *(int *)&param_1->field_0xcde4;
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
        goto LAB_0057d989;
      }
      if (*(int *)&param_1->field_0xd080 != 0) {
        fStack_f0 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_ec = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_e8 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_234 = fStack_f0;
        afStack_248[(uint)bVar10 * -2 + 6] = afStack_1ac[(uint)bVar10 * -2 + 0x30];
        afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31];
        fStack_34 = SQRT(fStack_22c * fStack_22c + fStack_234 * fStack_234 + fStack_230 * fStack_230
                        );
        if ((*(float *)&param_1->field_0xcddc < fStack_34) || ((float)_DAT_005d7afb < fStack_34)) {
          *(uint *)&param_1->field_0xcde4 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
          goto LAB_0057d989;
        }
      }
      iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0xd080);
      if ((iVar4 == 0) || (uStack_1c != 0xf)) {
        iStack_20 = *(int *)&param_1->field_0xcde4;
        if (*(int *)&param_1->field_0xd054 == 2) {
          if ((*(int *)&param_1->field_0xd088 == 0) || (*(int *)&param_1->field_0xd08c == 0)) {
            _DAT_01d71de0 = "..\\core\\werewolf.cpp";
            _DAT_01d71de4 = 0x1ad;
            core_main_c_FUN_004e4330();
          }
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"Phase: %d, Timer: %f\n",*(uint *)&param_1->field_0xd090,
                     (double)*(float *)&param_1->field_0xd094);
          if ((*(int *)&param_1->field_0xd090 == 1) || (*(int *)&param_1->field_0xd090 == 3)) {
            core_actor_cpp_FUN_00408bf0(*(uint *)&param_1->field_0xcde4);
            uStack_24c = uStack_21c;
            afStack_248[(uint)bVar10 * -2] = afStack_248[(uint)bVar10 * -2 + 0xc];
            afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                 afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
            if (0.0 <= afStack_248[1]) {
              core_actor_cpp_FUN_00408bf0(*(uint *)&param_1->field_0xcde4);
              uStack_204 = uStack_1e0;
              afStack_248[(uint)bVar10 * -2 + 0x12] = afStack_1dc[(uint)bVar10 * -2];
              afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
                   afStack_1dc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
              if (0.0 <= fStack_1fc) {
                iVar4 = *(int *)&param_1->field_0xcde4;
                iVar8 = *(int *)&param_1->field_0xd088;
                fStack_354 = *(float *)(iVar4 + 0x20) - *(float *)(iVar8 + 0x20);
                fStack_350 = *(float *)(iVar4 + 0x24) - *(float *)(iVar8 + 0x24);
                fStack_34c = *(float *)(iVar4 + 0x28) - *(float *)(iVar8 + 0x28);
                afStack_3a4[2] = fStack_354;
                afStack_3a4[(uint)bVar10 * -2 + 3] = afStack_3a4[(uint)bVar10 * -2 + 0x15];
                afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                     afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
                fVar15 = afStack_3a4[2] * afStack_3a4[2];
                iStack_48 = iVar8;
                iVar8 = *(int *)&param_1->field_0xd08c;
                fStack_2b8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar8 + 0x20);
                fStack_2b4 = *(float *)(iVar4 + 0x24) - *(float *)(iVar8 + 0x24);
                fStack_2b0 = *(float *)(iVar4 + 0x28) - *(float *)(iVar8 + 0x28);
                fStack_36c = fStack_2b8;
                afStack_3a4[(uint)bVar10 * -2 + 0xf] = afStack_2cc[(uint)bVar10 * -2 + 6];
                afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
                     afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
                iStack_20 = iStack_48;
                if (SQRT(fStack_394 * fStack_394 + fVar15 + afStack_3a4[3] * afStack_3a4[3]) <=
                    SQRT(fStack_364 * fStack_364 + fStack_36c * fStack_36c + fStack_368 * fStack_368
                        )) {
                  iStack_20 = iVar8;
                  goto LAB_0057e684;
                }
              }
              else {
                iStack_20 = *(int *)&param_1->field_0xd08c;
              }
            }
            else {
              iStack_20 = *(int *)&param_1->field_0xd088;
            }
          }
LAB_0057e684:
          if ((*(int *)&param_1->field_0xd090 == 1) || (*(int *)&param_1->field_0xd090 == 3)) {
            afStack_2cc[2] = *(float *)(iStack_20 + 0x20) - *(float *)&param_1->field_0x20;
            afStack_2cc[3] = *(float *)(iStack_20 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_2bc = *(float *)(iStack_20 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_108 = afStack_2cc[2];
            afStack_1ac[(uint)bVar10 * -2 + 0x2a] = afStack_2cc[(uint)bVar10 * -2 + 3];
            afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
                 afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            if (SQRT(fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104) <
                (float)_DAT_005d7b03) {
              iVar4 = *(int *)&param_1->field_0xd090 + 1;
              *(int *)&param_1->field_0xd090 = iVar4;
              if (3 < iVar4) {
                *(uint *)&param_1->field_0xd090 = 0;
              }
              *(uint *)&param_1->field_0xd094 = 0x41200000;
            }
          }
          else if ((*(float *)&param_1->field_0xd094 <= 0.0) &&
                  (iVar4 = *(int *)&param_1->field_0xd090 + 1,
                  *(int *)&param_1->field_0xd090 = iVar4, 3 < iVar4)) {
            *(uint *)&param_1->field_0xd090 = 0;
          }
        }
        iVar4 = iStack_20;
        auStack_324._8_4_ = 0x40400000;
        fStack_54 = 0x40400000;
        max_distance = 0.17453292;
        fVar15 = 0.5;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        pCVar14 = (CVector3f *)auStack_324;
        auStack_324._0_4_ = 0;
        auStack_324._4_4_ = 0;
        path_map = (CPathMap *)(**(code **)(*(int *)(iStack_20 + 0x154) + 0xc4))(iStack_20);
        iVar8 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,(CVector3f *)(iVar4 + 0x20),path_map,pCVar14,fVar15
                           ,max_distance);
        if (iVar8 < 0) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n");
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
        else if (iVar8 < 1) {
          iVar8 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0xd080)
          ;
          if (iVar8 == 0) {
            fStack_228 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_224 = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_220 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_78 = fStack_228;
            afStack_8c[(uint)bVar10 * -2 + 6] = afStack_248[(uint)bVar10 * -2 + 9];
            afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
                 afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
            if (afStack_248 + 0x17 != afStack_8c + 5) {
              fStack_1ec = fStack_78;
              fStack_1e8 = fStack_74;
              fStack_1e4 = fStack_70;
            }
            fStack_3c = SQRT(fStack_1e4 * fStack_1e4 +
                             fStack_1ec * fStack_1ec + fStack_1e8 * fStack_1e8);
            fStack_2c = 20.0;
            if (*(int *)&param_1->field_0xd054 == 1) {
              fStack_2c = 10.0;
            }
            if (*(int *)&param_1->field_0xd054 == 2) {
              fStack_2c = 10.0;
            }
            pCStack_40 = (CMotionController *)&param_1->field_0x158;
            if (fStack_2c < fStack_3c) {
              core_vecdir_cpp_FUN_00576250();
              uStack_288 = afStack_1ac[2];
              afStack_2cc[(uint)bVar10 * -2 + 0x12] = afStack_1ac[(uint)bVar10 * -2 + 3];
              afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
                   afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              fStack_14 = (float)core_actor_cpp_FUN_0040cfa0();
              if (ABS(fStack_14) < (float)_DAT_005d7b13) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_40,8,1);
                iVar4 = core_actor_cpp_FUN_0040cf40(0.85);
                if (iVar4 != 0) {
                  core_werewolf_cpp_FUN_0057ee30(param_1);
                }
                iVar8 = 0;
                for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar4 = iVar4 + 1)
                {
                  pCVar7 = (CWerewolf *)
                           core_actor_cpp_castToClassHash_FUN_0040c840
                                     (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar8));
                  if (((pCVar7 != (CWerewolf *)0x0) && (pCVar7 != param_1)) &&
                     (pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                                         ((CMotionController *)&pCVar7->field_0x158),
                     *(int *)(pSVar6 + 0x24) == 8)) {
                    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
                    if (iVar4 == 1) {
                      *(float *)&param_1->field_0x34 =
                           *(float *)&param_1->field_0x34 + _DAT_005d7b23;
                    }
                    if (iVar4 == 2) {
                      *(float *)&param_1->field_0x34 =
                           *(float *)&param_1->field_0x34 + _DAT_005d7b27;
                    }
                    break;
                  }
                  iVar8 = iVar8 + 4;
                }
              }
            }
            else if ((fStack_3c < 0x40400000 * _DAT_005d7b0b) && (uStack_1c == 0xf)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_40,0,1);
            }
          }
        }
        else {
          if ((*(int *)&param_1->field_0xd054 == 2) &&
             ((*(int *)&param_1->field_0xd090 == 1 || (*(int *)&param_1->field_0xd090 == 3))))
          goto LAB_0057d989;
          if (*(float *)&param_1->field_0xcde0 <= 0.0) {
            iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
            if (iVar4 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,2,1);
            }
            if (iVar4 == 1) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,3,1);
            }
            if (iVar4 == 2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,4,1);
            }
            *(uint *)&param_1->field_0xcde0 = 0x3f800000;
            iVar4 = core_actor_cpp_FUN_0040cf40(0.6);
            if (iVar4 != 0) {
              core_werewolf_cpp_FUN_0057ee30(param_1);
            }
          }
        }
        fVar15 = *(float *)&param_1->field_0xd074 - param_2;
        *(float *)&param_1->field_0xd074 = fVar15;
        if (fVar15 < 0.0) {
          core_werewolf_cpp_FUN_0057ee30(param_1);
        }
        goto LAB_0057d989;
      }
LAB_0057e486:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
    else {
      pCStack_38 = (CMotionController *)&param_1->field_0x158;
      if (uStack_1c < 5) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_3e4);
        fStack_3e0 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
        pCStack_3b0 = param_1;
        pCStack_3ac = param_1;
        fStack_14 = fStack_3e0;
        core_xform_cpp_FUN_00583260
                  (&DAT_02cfd900,puStack_24 + *(int *)&param_1->field_0xd060 * 0x30,0x3ecccccd);
        pfVar12 = afStack_1ac + 0x1d;
        auStack_138[0] = uStack_174;
        afStack_1ac[(uint)bVar10 * -2 + 0x1e] = afStack_1ac[(uint)bVar10 * -2 + 0xf];
        afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
             afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
        core_actor_cpp_FUN_00408b80(param_1,pfVar12);
        puVar13 = &uStack_a8;
        uStack_a8 = uStack_90;
        afStack_a4[(uint)bVar10 * -2] = afStack_8c[(uint)bVar10 * -2];
        pCVar7 = param_1;
        afStack_a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             afStack_8c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_enemy_cpp_FUN_004893f0(pCVar7,puVar13);
        if ((*(int *)&param_1->field_0xcde4 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_38,7,1);
        }
        goto LAB_0057d989;
      }
      if (uStack_1c < 0xe) {
        if (uStack_1c < 8) goto LAB_0057d989;
        if (8 < uStack_1c) {
          if (((uStack_1c == 0xd) && (*(int *)&param_1->field_0xcdd0 == 0)) &&
             (*(int *)&param_1->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_38);
            uStack_270 = uStack_c0;
            afStack_2cc[(uint)bVar10 * -2 + 0x18] = afStack_1ac[(uint)bVar10 * -2 + 0x3c];
            afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19] =
                 afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3d];
            core_actor_cpp_FUN_00408b80(param_1);
            pCVar14 = &CStack_b4;
            EVar17 = BLOOD_TYPE_RED;
            CStack_b4._0_4_ = CStack_258._0_4_;
            *(uint *)((int)&CStack_b4 + (uint)bVar10 * -8 + 4) =
                 *(uint *)((int)&CStack_258 + (uint)bVar10 * -8 + 4);
            this_ptr = g_CGorePtr;
            *(uint *)((int)&CStack_b4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                 *(uint *)((int)&CStack_258 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
            core_gore_cpp_FUN_004cec40(this_ptr,pCVar14,EVar17);
            *(uint *)&param_1->field_0xcdd0 = 1;
          }
          goto LAB_0057d989;
        }
        if (*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) != *(int *)&param_1->field_0xcde4) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_498);
          fStack_494 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
          pCStack_464 = param_1;
          pCStack_460 = param_1;
          fStack_14 = fStack_494;
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,puStack_24 + *(int *)&param_1->field_0xd064 * 0x30,0x3f800000);
          pfVar12 = afStack_248 + 2;
          afStack_248[2] = (float)uStack_2ac;
          afStack_248[(uint)bVar10 * -2 + 3] = afStack_2cc[(uint)bVar10 * -2 + 9];
          afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
          core_actor_cpp_FUN_00408b80(param_1,pfVar12);
          pfVar12 = afStack_3a4 + 8;
          afStack_384[0] = (float)uStack_378;
          afStack_3a4[(uint)bVar10 * -2 + 9] = afStack_3a4[(uint)bVar10 * -2 + 0xc];
          pCVar7 = param_1;
          afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
               afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
          core_enemy_cpp_FUN_004893f0(pCVar7,pfVar12);
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,puStack_24 + *(int *)&param_1->field_0xd060 * 0x30,0x3f800000);
          pfVar12 = afStack_1ac + 0x35;
          auStack_d8[0] = uStack_360;
          afStack_1ac[(uint)bVar10 * -2 + 0x36] = afStack_3a4[(uint)bVar10 * -2 + 0x12];
          afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37] =
               afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
          core_actor_cpp_FUN_00408b80(param_1,pfVar12);
          pfVar12 = afStack_1ac + 0x38;
          auStack_cc[0] = uStack_264;
          afStack_1ac[(uint)bVar10 * -2 + 0x39] = afStack_2cc[(uint)bVar10 * -2 + 0x1b];
          pCVar7 = param_1;
          afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a] =
               afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
          core_enemy_cpp_FUN_004893f0(pCVar7,pfVar12);
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,puStack_24 + *(int *)&param_1->field_0xd05c * 0x30,0x3f800000);
          pfVar12 = afStack_248 + 0x14;
          afStack_1f8[0] = (float)uStack_330;
          afStack_248[(uint)bVar10 * -2 + 0x15] = afStack_3a4[(uint)bVar10 * -2 + 0x1e];
          afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
               afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
          core_actor_cpp_FUN_00408b80(param_1,pfVar12);
          pfVar12 = afStack_3a4 + 5;
          afStack_390[0] = (float)uStack_318;
          afStack_3a4[(uint)bVar10 * -2 + 6] = afStack_314[(uint)bVar10 * -2];
          pCVar7 = param_1;
          afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
               afStack_314[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          core_enemy_cpp_FUN_004893f0(pCVar7,pfVar12);
        }
        if ((*(int *)&param_1->field_0xcde4 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,7,1);
        }
LAB_0057df41:
        if (*(int *)&param_1->field_0xcde4 != *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_45c);
          fStack_458 = (float)core_actor_cpp_FUN_0040ce40(0x40e00000);
          pCStack_428 = param_1;
          pCStack_424 = param_1;
          fStack_14 = fStack_458;
          core_xform_cpp_FUN_00583260
                    (&DAT_02cfd900,&param_1->field_0xfd8 + *(int *)&param_1->field_0xd064 * 0x30,
                     0x3ecccccd);
          pfVar12 = afStack_2cc + 0xb;
          afStack_2a0[0] = (float)uStack_180;
          afStack_2cc[(uint)bVar10 * -2 + 0xc] = afStack_1ac[(uint)bVar10 * -2 + 0xc];
          afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
          core_actor_cpp_FUN_00408b80(param_1,pfVar12);
          pfVar12 = afStack_2cc + 0xe;
          afStack_294[0] = (float)uStack_114;
          afStack_2cc[(uint)bVar10 * -2 + 0xf] = afStack_1ac[(uint)bVar10 * -2 + 0x27];
          pCVar7 = param_1;
          afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
               afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
          core_enemy_cpp_FUN_004893f0(pCVar7,pfVar12);
        }
        if ((*(int *)&param_1->field_0xcde4 != 0) &&
           (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))(),
           iVar4 != 0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,7,1);
        }
        goto LAB_0057d989;
      }
      if (0xe < uStack_1c) {
        if (0xf < uStack_1c) {
          if (uStack_1c != 0x13) goto LAB_0057d989;
          goto LAB_0057d971;
        }
        goto LAB_0057e4a9;
      }
LAB_0057dec3:
      iVar4 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1);
        iVar4 = *(int *)&param_1->field_0xcde4;
        if (iVar4 == 0) goto LAB_0057d989;
        if (*(int *)&param_1->field_0xd080 != 0) {
          fStack_210 = *(float *)(iVar4 + 0x20) - *(float *)&param_1->field_0x20;
          fStack_20c = *(float *)(iVar4 + 0x24) - *(float *)&param_1->field_0x24;
          fStack_208 = *(float *)(iVar4 + 0x28) - *(float *)&param_1->field_0x28;
          fStack_3a8 = fStack_210;
          afStack_3a4[(uint)bVar10 * -2] = afStack_248[(uint)bVar10 * -2 + 0xf];
          afStack_3a4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               afStack_248[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
          fStack_44 = SQRT(afStack_3a4[1] * afStack_3a4[1] +
                           fStack_3a8 * fStack_3a8 + afStack_3a4[0] * afStack_3a4[0]);
          if ((*(float *)&param_1->field_0xcddc < fStack_44) || ((float)_DAT_005d7afb < fStack_44))
          {
            *(uint *)&param_1->field_0xcde4 = 0;
            goto LAB_0057d989;
          }
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040c840(*(uint *)&param_1->field_0xd080);
        if ((iVar4 != 0) && (uStack_1c == 0xe)) goto LAB_0057e486;
        if (*(int *)&param_1->field_0xcde4 == 0) goto LAB_0057d989;
        iVar4 = core_actor_cpp_FUN_0040cf40(0.4);
        if (iVar4 != 0) {
          core_werewolf_cpp_FUN_0057ee30(param_1);
        }
        if (uStack_1c == 0xe) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0xf,1);
          goto LAB_0057d989;
        }
      }
      else if (uStack_1c == 0xe) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0xf,1);
        goto LAB_0057d989;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,1,1);
    }
    goto LAB_0057d989;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) {
LAB_0057d95e:
        iVar4 = 0xf;
      }
      else {
        iVar4 = 1;
      }
    }
    else {
LAB_0057dc49:
      iVar4 = 0;
    }
LAB_0057d969:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar4,1);
  }
  else {
    if (uVar1 < 3) {
      if ((uVar5 == 0xe) || (uVar5 == 0xf)) goto LAB_0057d95e;
      if (*(float *)&param_1->field_0x2528 <= ABS(*(float *)&param_1->field_0x2508)) {
        iVar4 = 1;
      }
      else {
        iVar4 = 8;
      }
      goto LAB_0057d969;
    }
    if (uVar1 != 3) goto LAB_0057dc49;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
  }
LAB_0057d971:
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_0057d989:
  if ((uStack_1c == 0x13) && (*(int *)&param_1->field_0x27bc != 0)) {
    iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd07c);
    if (iVar4 == 0) {
      uVar9 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      *(uint *)&param_1->field_0xd07c = uVar9;
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd07c);
  }
  fStack_30 = 1.0;
  if (*(int *)&param_1->field_0xd054 == 0) {
    fStack_30 = 0.75;
  }
  dVar2 = _DAT_005d7b33;
  if ((uStack_1c != 0xe) && (uStack_1c != 0xf)) {
    dVar2 = _DAT_005d7b2b;
  }
  *(float *)&param_1->field_0x3270 = fStack_30 * (float)dVar2;
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar4 = *(int *)(pSVar6 + 0x24);
  if (((((iVar4 != 0xd) && (iVar4 != 0)) && (iVar4 != 0xe)) && (iVar4 != 0x14)) ||
     (*(int *)&param_1->field_0xdc != 0)) {
    if ((*(int *)&param_1->field_0xcde4 != 0) &&
       (pCVar7 = (CWerewolf *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))(),
       pCVar7 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1);
    fStack_12c = *(float *)&param_1->field_0x2518 * param_2;
    fStack_128 = *(float *)&param_1->field_0x251c * param_2;
    fStack_124 = *(float *)&param_1->field_0x2520 * param_2;
    fStack_fc = fStack_12c;
    afStack_1ac[(uint)bVar10 * -2 + 0x2d] = afStack_1ac[(uint)bVar10 * -2 + 0x21];
    afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
         afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
    fStack_150 = fStack_fc + *(float *)&param_1->field_0x249c;
    fStack_14c = fStack_f8 + *(float *)&param_1->field_0x24a0;
    fStack_148 = fStack_f4 + *(float *)&param_1->field_0x24a4;
    fStack_27c = fStack_150;
    afStack_2cc[(uint)bVar10 * -2 + 0x15] = afStack_1ac[(uint)bVar10 * -2 + 0x18];
    afStack_2cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
         afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
    fStack_168 = fStack_27c + *(float *)&param_1->field_0x250c;
    fStack_164 = fStack_278 + *(float *)&param_1->field_0x2510;
    fStack_160 = fStack_274 + *(float *)&param_1->field_0x2514;
    CStack_9c._0_4_ = fStack_168;
    *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + 4) = afStack_1ac[(uint)bVar10 * -2 + 0x12];
    *(float *)((int)&CStack_9c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_1ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2514;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,&CStack_9c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  core_werewolf_cpp_FUN_0057fad0();
  *(float *)&param_1->field_0xd098 =
       param_2 * (float)_DAT_005d7b3b + *(float *)&param_1->field_0xd098;
  return;
}
