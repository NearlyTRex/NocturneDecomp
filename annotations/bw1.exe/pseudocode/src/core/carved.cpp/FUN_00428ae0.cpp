// Name: core_carved.cpp_FUN_00428ae0
// Address: 00428ae0
// Address Range: [[00428ae0, 0042a4ed]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00428ae0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00428ae0(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  char cVar2;
  CEventList *this_ptr;
  int iVar3;
  uint uVar4;
  CEnemy *pCVar5;
  int iVar6;
  CPathMap *pCVar7;
  uint uVar8;
  SMotion *pSVar9;
  uint *puVar10;
  char *pcVar11;
  float *pfVar12;
  char *pcVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  float afStackY_1354 [923];
  CVector3f *pCVar17;
  CGore *this_ptr_00;
  CMotionController *this_ptr_01;
  EBloodType EVar18;
  float fVar19;
  float fVar20;
  SDamageInfo aSStack_4d0 [4];
  float fStack_4cc;
  CEnemy *pCStack_49c;
  CEnemy *pCStack_498;
  SDamageInfo aSStack_494 [4];
  uint uStack_490;
  CEnemy *pCStack_460;
  CEnemy *pCStack_45c;
  char acStack_458 [32];
  float fStack_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float afStack_3fc [3];
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float afStack_3a8 [6];
  float afStack_390 [6];
  byte auStack_378 [12];
  float fStack_36c;
  float afStack_368 [2];
  byte auStack_360 [4];
  float afStack_35c [5];
  float afStack_348 [3];
  uint uStack_33c;
  uint auStack_338 [5];
  CVector3f CStack_324;
  float fStack_318;
  float afStack_314 [5];
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  CVector3f CStack_2f4;
  float fStack_2e8;
  float afStack_2e4 [2];
  byte auStack_2dc [8];
  float fStack_2d4;
  byte auStack_2d0 [8];
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float afStack_2a0 [3];
  float fStack_294;
  uint uStack_288;
  uint uStack_284;
  uint uStack_280;
  uint uStack_27c;
  float afStack_278 [5];
  float fStack_264;
  CVector3f CStack_258;
  uint uStack_24c;
  float afStack_248 [5];
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  uint uStack_1e0;
  uint uStack_1d4;
  float afStack_1c8 [3];
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  uint uStack_198;
  byte auStack_18c [12];
  float fStack_180;
  float afStack_17c [6];
  float afStack_164 [2];
  CVector3f CStack_15c;
  float fStack_150;
  float afStack_14c [2];
  CVector3f CStack_144;
  CVector3f CStack_138;
  float fStack_12c;
  float afStack_128 [4];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f0 [3];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [5];
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  int iStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  CMotionController *pCStack_3c;
  float fStack_38;
  uint uStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  CMotionController *pCStack_24;
  float *pfStack_20;
  byte *puStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar15 = 0;
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0x78);
    return;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x64 * 4) == 0) &&
     (iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar3 == 0)) {
    iVar6 = 1;
    iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,iVar3 + 0x13,iVar6);
  }
  iStack_68 = *(int *)&param_1->field_0x26fc;
  if (iStack_68 != 0) {
    fStack_14 = *(float *)(iStack_68 + 0x154);
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    pfVar12 = afStack_248 + 0x20;
    afStack_1c8[0] = (float)uStack_198;
    afStack_248[(uint)bVar15 * -2 + 0x21] = afStack_1ac[(uint)bVar15 * -2 + 6];
    afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x22] =
         afStack_1ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    iVar3 = (**(code **)((int)fStack_14 + 0x110))(iStack_68,param_1,pfVar12);
    if (iVar3 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x26fc = 0;
    return;
  }
  if (0.0 < *(float *)&param_1[1].field_0x6c) {
    *(float *)&param_1[1].field_0x6c = *(float *)&param_1[1].field_0x6c - param_2;
  }
  pfStack_28 = afStack_3e4;
  fStack_60 = param_2 * *(float *)&param_1->field_0xc1d0 * *(float *)&param_1[1].field_0x88;
  pfStack_20 = afStack_3fc;
  pCStack_24 = (CMotionController *)&param_1->field_0x158;
LAB_00428b77:
  if (0.0 < fStack_60) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_24,&fStack_60);
    if (uVar4 < 0xb) {
      if (uVar4 < 5) {
        if (uVar4 == 2) {
          iVar3 = *(int *)&param_1[1].field_0x10;
          if (iVar3 != 0) {
            *(uint *)&param_1[1].field_0x10 = 0;
            iVar6 = core_carved_cpp_FUN_0042b290(param_1,*(uint *)&param_1[1].field_0x14);
            if (-1 < iVar6) {
              core_charactr_cpp_FUN_004325b0(param_1,iVar6,iVar3,0x3e4ccccd,0);
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar3,iVar6);
            }
          }
        }
        else {
LAB_00428bb4:
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar4);
        }
        goto LAB_00428b77;
      }
      if (uVar4 < 6) {
        iStack_18 = 1;
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          afStack_348[2] = 0x3FB9999A;
          afStack_348[0] = 0.0;
          afStack_348[1] = 0.0;
          core_actor_cpp_FUN_00408b40(param_1,afStack_35c + 5);
          fStack_2ac = fStack_294;
          *(uint *)(auStack_2d0 + ((uint)bVar15 * -2 + 9) * 4 + 4) =
               *(uint *)(auStack_2d0 + ((uint)bVar15 * -2 + 0xf) * 4 + 4);
          *(uint *)(auStack_2d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 10) * 4 + 4) =
               *(uint *)(auStack_2d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10) * 4 + 4)
          ;
          iVar3 = *(int *)&param_1->field_0xc1e8;
          fStack_1ec = fStack_2ac - *(float *)(iVar3 + 0x20);
          fStack_1e8 = fStack_2a8 - *(float *)(iVar3 + 0x24);
          fStack_1e4 = fStack_2a4 - *(float *)(iVar3 + 0x28);
          afStack_98[2] = fStack_1ec;
          afStack_98[(uint)bVar15 * -2 + 3] = afStack_248[(uint)bVar15 * -2 + 0x18];
          afStack_98[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
          afStack_98[3] = 0.0;
          if (SQRT(afStack_98[4] * afStack_98[4] + afStack_98[2] * afStack_98[2]) <= 1.0) {
            if (iStack_18 != 0) {
              afStack_17c[2] = 0.0;
              afStack_17c[3] = 4.0;
              afStack_17c[4] = 0.0;
              core_actor_cpp_FUN_00408b40(param_1,afStack_17c + 2);
              CStack_a8._0_4_ = CStack_144._0_4_;
              *(uint *)((int)&CStack_a8 + (uint)bVar15 * -8 + 4) =
                   *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + 4);
              *(uint *)((int)&CStack_a8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              uVar8 = CStack_a8._4_4_;
              puVar10 = (uint *)(*(int *)&param_1->field_0xc1e8 + 0x24 + (uint)bVar15 * -8);
              CStack_15c._0_4_ = *(uint *)(*(int *)&param_1->field_0xc1e8 + 0x20);
              *(uint *)((int)&CStack_15c + (uint)bVar15 * -8 + 4) = *puVar10;
              *(uint *)((int)&CStack_15c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   puVar10[(uint)bVar15 * -2 + 1];
              CStack_15c._4_4_ = uVar8;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                        (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
              iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                (g_CDemonSetPtr,&CStack_a8,&CStack_15c);
              if (iVar3 != 0) {
                iStack_18 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            }
            if ((iStack_18 == 0) ||
               (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xec))
                                  (*(int *)&param_1->field_0xc1e8,param_1,0), iVar3 != 0)) {
              if (iStack_18 == 0) {
                core_carved_cpp_FUN_0042be20(param_1);
              }
              goto LAB_00428b77;
            }
          }
        }
        core_carved_cpp_FUN_0042be20(param_1);
        goto LAB_00428b77;
      }
      if (uVar4 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar4);
        goto LAB_00428b77;
      }
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        core_skeleton_cpp_FUN_00569040(pCStack_24,*(uint *)&param_1[1].field_0x24);
        puVar10 = &uStack_33c;
        uStack_33c = auStack_338[2];
        auStack_338[(uint)bVar15 * -2] = auStack_338[(uint)bVar15 * -2 + 3];
        auStack_338[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             auStack_338[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,puVar10);
        auStack_2d0._0_4_ = fStack_264;
        *(float *)(auStack_2d0 + (uint)bVar15 * -8 + 4) = afStack_278[(uint)bVar15 * -2 + 6];
        *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 1) * 4 + 4) =
             afStack_278[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        if (*(int *)&param_1[1].field_0x60 < 0) {
          fVar19 = (float)auStack_2d0._0_4_ - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
          fVar20 = fStack_2c8 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
          if ((float)_DAT_005d548d < SQRT(fVar20 * fVar20 + fVar19 * fVar19)) {
            core_carved_cpp_FUN_0042be20(param_1);
            goto LAB_00428b77;
          }
        }
        else {
          pCVar5 = (CEnemy *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xc1e8);
          if (pCVar5 != param_1) {
            core_carved_cpp_FUN_0042be20(param_1);
            goto LAB_00428b77;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_4d0);
        fStack_4cc = (float)core_actor_cpp_FUN_0040cc00(0x41700000,0x41c80000);
        pCStack_49c = param_1;
        pCStack_498 = param_1;
        fStack_14 = fStack_4cc;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xc1e8,aSStack_4d0);
        dStack_84 = (double)fStack_4cc;
        if (0.0 < dStack_84) {
          fVar16 = (float10)fStack_4cc * (float10)_DAT_005d54c5 * (float10)_DAT_005d54cd;
          EVar18 = BLOOD_TYPE_RED;
          round();
          iStack_6c = (int)ROUND(fVar16);
          core_gore_cpp_FUN_004e6060
                    (g_CGorePtr,(CVector3f *)auStack_2d0,(CVector3f *)0x0,iStack_6c,EVar18);
        }
        iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                          (*(int *)&param_1->field_0xc1e8);
        if (0 < iVar3) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
                    (*(int *)&param_1->field_0xc1e8);
          core_carved_cpp_FUN_0042be20(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
        goto LAB_00428b77;
      }
      core_carved_cpp_FUN_0042be20(param_1);
    }
    else if (uVar4 < 0xc) {
      iVar3 = core_carved_cpp_FUN_0042b290(param_1,2);
      if (iVar3 < 0) {
        _DAT_01d1d400 = "..\\core\\carved.cpp";
        _DAT_01d1d404 = 0x1de;
        core_main_c_FUN_005030e0(&DAT_005d531f);
      }
      if (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78));
        uStack_280 = 0x41880000;
        uStack_288 = 0;
        uStack_284 = 0x40c00000;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iVar3,&uStack_288);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"carved-groan?.wav");
      }
    }
    else if (uVar4 < 0xd) {
      iStack_30 = core_carved_cpp_FUN_0042b290(param_1,3);
      if (iStack_30 < 0) {
        _DAT_01d1d400 = "..\\core\\carved.cpp";
        _DAT_01d1d404 = 0x1f5;
        core_main_c_FUN_005030e0(&DAT_005d5358);
      }
      puStack_1c = &param_1->field_0x0 + iStack_30 * 0x78;
      if (*(int *)(puStack_1c + 0x25b0) != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s tossing %s\n",param_1,*(int *)(puStack_1c + 0x25b0));
        fStack_1bc = 0.0;
        fStack_1b8 = 0.0;
        fStack_1b4 = 1.0;
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          (**(code **)(*(int *)(*(int *)(puStack_1c + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(puStack_1c + 0x25b0));
          pfVar12 = afStack_3a8;
          pfVar14 = &fStack_3f0;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_e4 = fStack_3f0 + *pfStack_28;
          fStack_e0 = fStack_3ec + pfStack_28[1];
          fStack_dc = fStack_3e8 + pfStack_28[2];
          fStack_c0 = fStack_3f0 + *pfStack_28;
          afStack_128[(uint)bVar15 * -2 + 0x1b] = afStack_128[(uint)bVar15 * -2 + 0x12];
          puVar1 = puStack_1c;
          afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
               afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
          pfVar12 = afStack_128 + 0xe;
          fStack_150 = fStack_c0 * _DAT_005d54bd;
          afStack_14c[0] = fStack_bc * _DAT_005d54bd;
          afStack_14c[1] = fStack_b8 * _DAT_005d54bd;
          afStack_f0[0] = fStack_c0 * _DAT_005d54bd;
          afStack_128[(uint)bVar15 * -2 + 0xf] = afStack_14c[(uint)bVar15 * -2];
          afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
               afStack_14c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          core_actor_cpp_FUN_00408b40(*(uint *)(puVar1 + 0x25b0),pfVar12);
          fStack_300 = fStack_fc;
          afStack_314[(uint)bVar15 * -2 + 6] = afStack_128[(uint)bVar15 * -2 + 0xc];
          afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x1c))
                    (*(int *)&param_1->field_0xc1e8);
          pfVar12 = afStack_3c0;
          pfVar14 = &fStack_408;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_9c = fStack_408 + *pfStack_20;
          afStack_98[0] = fStack_404 + pfStack_20[1];
          afStack_98[1] = fStack_400 + pfStack_20[2];
          fStack_2e8 = fStack_408 + *pfStack_20;
          afStack_2e4[(uint)bVar15 * -2] = afStack_98[(uint)bVar15 * -2];
          afStack_2e4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_98[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          fStack_228 = fStack_2e8 * _DAT_005d54bd;
          fStack_224 = afStack_2e4[0] * _DAT_005d54bd;
          fStack_220 = afStack_2e4[1] * _DAT_005d54bd;
          afStack_2a0[0] = fStack_2e8 * _DAT_005d54bd;
          *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + 0xc) * 4 + 4) =
               afStack_248[(uint)bVar15 * -2 + 9];
          *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd) * 4 + 4) =
               afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0xc1e8,afStack_2a0);
          fStack_108 = afStack_314[2];
          afStack_128[(uint)bVar15 * -2 + 9] = afStack_314[(uint)bVar15 * -2 + 3];
          afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_2c4 = fStack_108 - fStack_300;
          fStack_2c0 = fStack_104 - fStack_2fc;
          fStack_2bc = fStack_100 - fStack_2f8;
          afStack_17c[5] = fStack_108 - fStack_300;
          afStack_164[(uint)bVar15 * -2] = *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + 3) * 4 + 4)
          ;
          afStack_164[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 4) * 4 + 4);
          fStack_2c = SQRT(afStack_164[1] * afStack_164[1] +
                           afStack_17c[5] * afStack_17c[5] + afStack_164[0] * afStack_164[0]);
          if (0.0 < fStack_2c) {
            core_actor_cpp_FUN_00408b00(param_1,afStack_17c + 5);
            fStack_21c = afStack_35c[2];
            afStack_248[(uint)bVar15 * -2 + 0xc] = afStack_35c[(uint)bVar15 * -2 + 3];
            afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                 afStack_35c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            fVar19 = 1.0 / fStack_2c;
            fStack_1f8 = fStack_21c * fVar19;
            fStack_1f4 = fStack_218 * fVar19;
            fStack_1f0 = fStack_214 * fVar19;
            fStack_12c = fStack_21c * fVar19;
            afStack_128[(uint)bVar15 * -2] = afStack_248[(uint)bVar15 * -2 + 0x15];
            afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
            if (afStack_248 + 0x23 != &fStack_12c) {
              fStack_1bc = fStack_12c;
              fStack_1b8 = afStack_128[0];
              fStack_1b4 = afStack_128[1];
            }
          }
        }
        fStack_1bc = fStack_1bc * _DAT_005d54c1;
        fStack_1b4 = fStack_1b4 * _DAT_005d54c1;
        fStack_1b8 = fStack_1b8 * _DAT_005d54c1 + _DAT_005d54d5;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iStack_30,afStack_248 + 0x23);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"carved-groan?.wav");
      }
    }
    else if (uVar4 < 0xe) {
      if (*(CDoor **)&param_1[1].field_0x18 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00478820(*(CDoor **)&param_1[1].field_0x18,0.3);
        (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0x2c))
                  (*(int *)&param_1[1].field_0x18,"zombie-bang-door?.wav");
        *(uint *)&param_1[1].field_0x18 = 0;
      }
    }
    else {
      if (uVar4 < 0x65) goto LAB_00428bb4;
      if (uVar4 < 0x66) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-?.wav");
      }
      else if (uVar4 == 0x29a) {
        core_skeleton_cpp_FUN_00569040(pCStack_24,*(uint *)&param_1[1].field_0x24);
        pfVar12 = afStack_248 + 0x26;
        fStack_1b0 = (float)uStack_210;
        afStack_1ac[(uint)bVar15 * -2] = afStack_248[(uint)bVar15 * -2 + 0xf];
        afStack_1ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(param_1,pfVar12);
        EVar18 = BLOOD_TYPE_RED;
        iVar3 = 3;
        pCVar17 = (CVector3f *)0x0;
        CStack_324._0_4_ = CStack_2f4._0_4_;
        *(uint *)((int)&CStack_324 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_2f4 + (uint)bVar15 * -8 + 4);
        *(uint *)((int)&CStack_324 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_2f4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_324,pCVar17,iVar3,EVar18);
        iVar3 = core_actor_cpp_FUN_0040cd00(0.5);
        if (iVar3 == 0) {
          pcVar11 = "ghoul-dig-?.wav";
        }
        else {
          pcVar11 = "ghoul-eat-?.wav";
        }
        pcVar13 = acStack_458;
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,acStack_458);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar4);
      }
    }
    goto LAB_00428b77;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x5c * 4) == 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x54 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x68 * 4) == 0)) &&
     ((0.0 <= *(float *)&param_1[1].field_0x70 &&
      (fVar19 = *(float *)&param_1[1].field_0x70 + param_2,
      *(float *)&param_1[1].field_0x70 = fVar19, (float)_DAT_005d5485 <= fVar19)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_494);
    uStack_490 = 0x461c3f9a;
    pCStack_460 = param_1;
    pCStack_45c = param_1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_494);
    *(uint *)&param_1[1].field_0x70 = 0xbf800000;
  }
  puVar1 = &param_1->field_0x158;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770((CMotionController *)puVar1);
  iStack_54 = 0;
  iVar3 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    uVar4 = *(uint *)&param_1->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 != 1) {
LAB_00429a81:
        iVar6 = 1;
        iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
        goto LAB_004296f2;
      }
    }
    else if (2 < uVar4) {
      if (uVar4 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
        goto LAB_004296f2;
      }
      goto LAB_00429a81;
    }
    core_carved_cpp_FUN_0042be20(param_1);
    goto LAB_004296f2;
  }
  fStack_38 = -1.0;
  fStack_58 = 0.3;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)puVar1);
  switch(*(uint *)(pSVar9 + 0x24)) {
  case 0:
  case 1:
  case 2:
    iVar3 = core_actor_cpp_FUN_0040cd00(param_2 * (float)_DAT_005d54b5);
    if (iVar3 == 0) {
      iVar3 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
      if (iVar3 != 0) {
        core_carved_cpp_FUN_0042be20(param_1);
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
        if (iVar3 == 0) break;
        *(uint *)&g_CGamePtr->field_0x23c = 1;
        *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      }
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        core_carved_cpp_FUN_0042be20(param_1);
        iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x78);
        if (iVar3 == 0) {
          uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                            (param_1,"carved-groan?.wav");
          *(uint *)&param_1[1].field_0x78 = uVar8;
        }
      }
    }
    else {
      iVar6 = 1;
      iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
    }
    break;
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    *(float *)&param_1[1].field_0x84 = *(float *)&param_1[1].field_0x84 - param_2;
    if ((*(float *)&param_1[1].field_0x84 <= 0.0) &&
       (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x78), iVar3 == 0)) {
      fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x40400000,0x40c00000);
      iVar3 = *(int *)&param_1->field_0x154;
      *(float *)&param_1[1].field_0x84 = fStack_14;
      uVar8 = (**(code **)(iVar3 + 0x2c))(param_1,"carved-groan?.wav");
      *(uint *)&param_1[1].field_0x78 = uVar8;
    }
    iVar3 = *(int *)&param_1->field_0xc1e8;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
    if ((*(int *)&param_1->field_0xc1e8 == 0) &&
       (iVar6 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
       iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 != 0)) {
      *(uint *)&g_CGamePtr->field_0x23c = 1;
      *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    }
    if (*(int *)&param_1->field_0xc1e8 == 0) {
      iVar3 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
      if (iVar3 == 0) {
        iVar6 = 1;
        iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
      }
    }
    else if (iVar3 == 0) {
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0x78);
      if (iVar3 == 0) {
        uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                          (param_1,"carved-groan?.wav");
        *(uint *)&param_1[1].field_0x78 = uVar8;
      }
      core_carved_cpp_FUN_0042be20(param_1);
    }
    else {
      iVar3 = core_actor_cpp_FUN_0040cc60(0,0x32);
      if (iVar3 == 1) {
        core_carved_cpp_FUN_0042be20(param_1);
      }
      uStack_34 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x54 * 4) != 0)
      ;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x5c * 4) != 0) {
        uStack_34 = uStack_34 + 1;
      }
      iVar3 = core_carved_cpp_FUN_0042a930(param_1,param_2);
      if (iVar3 == 0) {
        fStack_40 = 0x3FB9999A;
        iStack_4c = core_carved_cpp_FUN_0042b290(param_1,1);
        if (((-1 < iStack_4c) &&
            (iVar3 = *(int *)(&param_1->field_0x25b0 + iStack_4c * 0x78), iVar3 != 0)) &&
           (*(int *)&param_1[1].field_0x14 == 1)) {
          fStack_50 = 1.0;
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
            pfVar12 = afStack_3d8;
            pfVar14 = &fStack_420;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)&fStack_318);
            fStack_318 = fStack_414 - fStack_420;
            afStack_314[0] = fStack_410 - fStack_41c;
            afStack_314[1] = fStack_40c - fStack_418;
            fStack_2b8 = fStack_414 - fStack_420;
            *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + 6) * 4 + 4) =
                 afStack_314[(uint)bVar15 * -2];
            *(float *)(auStack_2d0 + ((uint)bVar15 * -2 + (uint)bVar15 * -2 + 7) * 4 + 4) =
                 afStack_314[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_50 = fStack_2b0 * (float)_DAT_005d5495 + 1.0;
          }
          fStack_40 = fStack_50;
        }
        fVar20 = 0.6981317;
        fVar19 = 0.9;
        auStack_18c._0_4_ = 0;
        auStack_18c._8_4_ = fStack_40;
        pCVar17 = (CVector3f *)auStack_18c;
        auStack_18c._4_4_ = 0;
        pCVar7 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xc1e8);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar7,pCVar17,
                           fVar19,fVar20);
        pCStack_3c = (CMotionController *)&param_1->field_0x158;
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          iVar6 = 1;
          iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_3c,iVar3,iVar6);
        }
        else if (iVar3 < 1) {
          iStack_48 = core_carved_cpp_FUN_0042b290(param_1,*(uint *)&param_1[1].field_0x14);
          iVar3 = *(int *)&param_1->field_0xc1e8;
          fStack_d8 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_d4 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_d0 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
          afStack_128[2] = fStack_d8;
          afStack_128[(uint)bVar15 * -2 + 3] = afStack_128[(uint)bVar15 * -2 + 0x15];
          afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
          if (SQRT(fStack_118 * fStack_118 +
                   afStack_128[2] * afStack_128[2] + afStack_128[3] * afStack_128[3]) <
              (float)_DAT_005d54a5) {
            core_actor_cpp_FUN_00408bb0(param_1,iVar3 + 0x20);
            uStack_27c = uStack_1e0;
            afStack_278[(uint)bVar15 * -2] = afStack_248[(uint)bVar15 * -2 + 0x1b];
            afStack_278[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
            core_vecdir_cpp_FUN_005a7520(&uStack_27c);
            afStack_278[2] = (float)uStack_1d4;
            afStack_278[(uint)bVar15 * -2 + 3] = afStack_248[(uint)bVar15 * -2 + 0x1e];
            afStack_278[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
            if ((((ABS(afStack_278[3]) < (float)_DAT_005d54ad) && (-1 < iStack_48)) &&
                ((uVar4 = *(uint *)&param_1[1].field_0x14, 1 < uVar4 &&
                 ((2 < uVar4 && (uVar4 == 3)))))) &&
               (*(int *)(&param_1->field_0x25b0 + iStack_48 * 0x78) != 0)) {
              engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s tossing\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_34) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) &&
                (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                   (*(int *)&param_1->field_0xc1e8), iVar3 == 0)) {
          iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                            (*(int *)&param_1->field_0xc1e8);
          if (iVar3 == 0) {
            if ((iStack_4c < 0) || (*(int *)(&param_1->field_0x25b0 + iStack_4c * 0x78) == 0)) {
              iVar3 = 0xc;
              this_ptr_01 = (CMotionController *)&param_1->field_0x158;
            }
            else {
              iVar3 = 0xb;
              this_ptr_01 = pCStack_3c;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_01,iVar3,1);
          }
          *(uint *)&param_1->field_0xc1e4 = 0x3f4ccccd;
        }
      }
    }
    break;
  case 0xb:
    if (*(int *)&param_1->field_0xc1e8 == 0) goto LAB_0042a30b;
    iVar3 = core_carved_cpp_FUN_0042b290(param_1,1);
    if ((((iVar3 < 0) ||
         (iVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                            (*(int *)&param_1->field_0xc1e8), 0 < iVar6)) ||
        (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) == 0)) ||
       (iVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                          (*(int *)&param_1->field_0xc1e8), iVar6 != 0)) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up swing\n",param_1);
      core_carved_cpp_FUN_0042be20(param_1);
    }
    else {
      iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78);
      fStack_44 = 1.0;
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
        pfVar12 = afStack_390;
        pfVar14 = &fStack_438;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar14 = *pfVar12;
          pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
          pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
        }
        core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)auStack_360);
        auStack_360 = (byte  [4])(fStack_42c - fStack_438);
        afStack_35c[0] = fStack_428 - fStack_434;
        afStack_35c[1] = fStack_424 - fStack_430;
        fStack_cc = fStack_42c - fStack_438;
        afStack_128[(uint)bVar15 * -2 + 0x18] = afStack_35c[(uint)bVar15 * -2];
        afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
             afStack_35c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fStack_44 = fStack_c4 * (float)_DAT_005d5495 + 1.0;
      }
      fStack_38 = fStack_44;
      fStack_5c = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
      dStack_7c = (double)fStack_5c;
      fStack_14 = fStack_5c;
      if ((1.0 <= dStack_7c) && (dStack_7c <= _DAT_005d549d)) {
        iStack_54 = 1;
      }
    }
    break;
  case 0xc:
    iVar3 = *(int *)&param_1->field_0xc1e8;
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 < 1))
    {
      pCVar5 = (CEnemy *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                         (*(int *)&param_1->field_0xc1e8);
      if (pCVar5 == (CEnemy *)0x0) {
        fStack_58 = 3.0;
        fStack_38 = 0x3FB9999A;
      }
      else if (pCVar5 != param_1) {
        core_carved_cpp_FUN_0042be20(param_1);
      }
      iVar3 = *(int *)&param_1->field_0xc1e8;
      fStack_234 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
      fStack_230 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
      fStack_22c = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_36c = fStack_234;
      afStack_368[(uint)bVar15 * -2] = afStack_248[(uint)bVar15 * -2 + 6];
      afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
      if (SQRT(afStack_368[1] * afStack_368[1] +
               fStack_36c * fStack_36c + afStack_368[0] * afStack_368[0]) <= (float)_DAT_005d548d)
      break;
    }
LAB_0042a30b:
    core_carved_cpp_FUN_0042be20(param_1);
    break;
  case 0x16:
    if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_00569040(puVar1,0);
      puVar10 = &uStack_24c;
      uStack_24c = afStack_248[2];
      afStack_248[(uint)bVar15 * -2] = afStack_248[(uint)bVar15 * -2 + 3];
      afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408b40(param_1,puVar10);
      EVar18 = BLOOD_TYPE_RED;
      pCVar17 = &CStack_258;
      CStack_258._0_4_ = CStack_138._0_4_;
      *(uint *)((int)&CStack_258 + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_138 + (uint)bVar15 * -8 + 4);
      this_ptr_00 = g_CGorePtr;
      *(uint *)((int)&CStack_258 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_138 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(this_ptr_00,pCVar17,EVar18);
      this_ptr = 0x01C51D80;
      *(uint *)&param_1->field_0xc1d4 = 1;
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(this_ptr,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_38) && (*(int *)&param_1->field_0xc1e8 != 0)) {
    *(float *)&param_1->field_0x2524 = fStack_58 * *(float *)&param_1->field_0xc1d0 * param_2;
    core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
    auStack_378._0_4_ = 0;
    auStack_378._4_4_ = 0;
    fVar20 = 0.7853982;
    auStack_378._8_4_ = fStack_38;
    pCVar17 = (CVector3f *)auStack_378;
    fVar19 = 3.0;
    pCVar7 = (CPathMap *)
             (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                       (*(int *)&param_1->field_0xc1e8);
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                       pCVar7,pCVar17,fVar19,fVar20);
    if (iVar3 != 1) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s giving up attack\n",param_1);
      core_carved_cpp_FUN_0042be20(param_1);
      *(uint *)&param_1->field_0x2508 = 0;
    }
  }
LAB_004296f2:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)&param_1->field_0xc1e8;
    if ((iVar3 != 0) &&
       (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar5 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
    }
    core_charactr_cpp_FUN_0042d700(param_1,param_2);
    fStack_b4 = *(float *)&param_1->field_0x2518 * param_2;
    fStack_b0 = *(float *)&param_1->field_0x251c * param_2;
    fStack_ac = *(float *)&param_1->field_0x2520 * param_2;
    fStack_180 = fStack_b4;
    afStack_17c[(uint)bVar15 * -2] = afStack_128[(uint)bVar15 * -2 + 0x1e];
    afStack_17c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
    fStack_114 = fStack_180 + *(float *)&param_1->field_0x250c;
    fStack_110 = afStack_17c[0] + *(float *)&param_1->field_0x2510;
    fStack_10c = afStack_17c[1] + *(float *)&param_1->field_0x2514;
    fStack_204 = fStack_114;
    afStack_248[(uint)bVar15 * -2 + 0x12] = afStack_128[(uint)bVar15 * -2 + 6];
    afStack_248[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
         afStack_128[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    afStack_1ac[2] = fStack_204 + *(float *)&param_1->field_0x249c;
    afStack_1ac[3] = fStack_200 + *(float *)&param_1->field_0x24a0;
    fStack_19c = fStack_1fc + *(float *)&param_1->field_0x24a4;
    auStack_2dc._0_4_ = afStack_1ac[2];
    *(float *)(auStack_2dc + (uint)bVar15 * -8 + 4) = afStack_1ac[(uint)bVar15 * -2 + 3];
    *(float *)(auStack_2dc + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_1ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)auStack_2dc);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  if (*(int *)&param_1->field_0xc1d4 == 0) {
    iVar3 = *(int *)&param_1[1].field_0x64;
    if (*(int *)(&param_1->field_0x2298 + iVar3 * 4) == 0) {
      iVar6 = *(int *)&param_1[1].field_0x4c;
      fVar19 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1[1].field_0x50,*(uint *)&param_1[1].field_0x38
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x50 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1[1].field_0x54,
                   *(uint *)&param_1[1].field_0x30,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1[1].field_0x58,*(uint *)&param_1[1].field_0x3c
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x58 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1[1].field_0x5c,
                   *(uint *)&param_1[1].field_0x34,0x3e4ccccd);
      }
      iVar6 = *(int *)&param_1[1].field_0x24;
      fVar19 = 0.7;
      iVar3 = *(int *)&param_1[1].field_0x68;
    }
    core_charactr_cpp_FUN_00430b60((CCharacter *)param_1,iVar3,iVar6,fVar19);
    core_charactr_cpp_FUN_00430960(param_1);
  }
  iVar3 = iStack_54;
  iVar6 = core_carved_cpp_FUN_0042b290(param_1,1);
  if (((iVar3 != 0) && (-1 < iVar6)) &&
     (iVar3 = *(int *)(&param_1->field_0x25b0 + iVar6 * 0x78), iVar3 != 0)) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x78))(iVar3,2);
    return;
  }
  return;
}
