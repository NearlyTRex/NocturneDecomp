// Name: core_zombie.cpp_FUN_00588ee0
// Address: 00588ee0
// Address Range: [[00588ee0, 0058af84]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00588ee0(CZombie *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_00588ee0(CZombie *param_1,float param_2)

{
  char cVar1;
  byte *puVar2;
  int iVar3;
  CMotionList *pCVar4;
  uint uVar5;
  CZombie *pCVar6;
  int iVar7;
  SMotion *pSVar8;
  CPathMap *pCVar9;
  uint uVar10;
  uint *puVar11;
  float *pfVar12;
  char *pcVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float afStackY_1454 [924];
  CGore *this_ptr;
  CVector3f *pCVar18;
  CVector3f *direction;
  CMotionController *pCVar19;
  char *pcVar20;
  EBloodType EVar21;
  float fVar22;
  float fVar23;
  SDamageInfo aSStack_5c4 [4];
  uint uStack_5c0;
  CZombie *pCStack_590;
  CZombie *pCStack_58c;
  SDamageInfo aSStack_588 [4];
  float fStack_584;
  CZombie *pCStack_554;
  CZombie *pCStack_550;
  char acStack_54c [32];
  float fStack_52c;
  float fStack_528;
  float fStack_524;
  float afStack_520 [3];
  float fStack_514;
  float fStack_510;
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float afStack_4fc [6];
  float fStack_4e4;
  float fStack_4e0;
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float afStack_4c0 [3];
  float afStack_4b4 [6];
  float afStack_49c [6];
  float afStack_484 [6];
  CVector3f CStack_46c;
  float fStack_460;
  float afStack_45c [4];
  float fStack_44c;
  float fStack_448;
  float fStack_444;
  float fStack_440;
  CVector3f CStack_43c;
  uint uStack_430;
  float afStack_42c [4];
  float fStack_41c;
  float fStack_418;
  float fStack_40c;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  uint uStack_3f4;
  uint uStack_3e8;
  float fStack_3e4;
  float fStack_3dc;
  float fStack_3d8;
  float fStack_3d4;
  CVector3f CStack_3d0;
  float fStack_3c4;
  float afStack_3c0 [4];
  float fStack_3b0;
  float afStack_3ac [3];
  byte auStack_3a0 [4];
  float afStack_39c [5];
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  CVector3f CStack_370;
  float fStack_364;
  float afStack_360 [5];
  float afStack_34c [3];
  CVector3f CStack_340;
  float fStack_334;
  float afStack_330 [4];
  float fStack_320;
  uint uStack_31c;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float afStack_2c8 [3];
  byte auStack_2bc [12];
  uint uStack_2b0;
  float afStack_2ac [5];
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float afStack_28c [3];
  CVector3f CStack_280;
  uint uStack_274;
  float afStack_270 [5];
  uint uStack_25c;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float afStack_240 [2];
  CVector3f CStack_238;
  float fStack_22c;
  float afStack_228 [4];
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float afStack_1f8 [4];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1d8;
  float afStack_1d4 [4];
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  uint uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  uint uStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  float fStack_130;
  float afStack_12c [5];
  byte auStack_118 [12];
  float fStack_10c;
  float afStack_108 [4];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  double dStack_dc;
  double dStack_d4;
  int iStack_c4;
  CMotionController *pCStack_c0;
  byte *puStack_bc;
  float fStack_b0;
  float fStack_a8;
  int iStack_a4;
  int iStack_a0;
  float *pfStack_9c;
  float fStack_98;
  float fStack_94;
  float *pfStack_90;
  float fStack_8c;
  float fStack_88;
  int iStack_84;
  float *pfStack_80;
  int iStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  float fStack_64;
  int iStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  CMotionController *pCStack_3c;
  uint *puStack_38;
  int iStack_34;
  int iStack_30;
  CMotionController *pCStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar15 = 0;
  if ((0.0 < *(float *)&param_1->field_0x3254) && (*(int *)&param_1->field_0x3258 == 0)) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0xf8))(param_1);
  }
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  iVar3 = 0;
  pcVar20 = "CHASE_2";
  iStack_78 = 0;
  pCVar4 = core_motion_cpp_FUN_004fc310((CMotionController *)&param_1->field_0x158);
  iVar3 = core_motion_cpp_FUN_004fba50(pCVar4,pcVar20,iVar3);
  if (iVar3 == 2) {
    iStack_78 = 1;
  }
  iVar3 = *(int *)&param_1->field_0x26fc;
  if (iVar3 != 0) {
    fStack_14 = *(float *)(iVar3 + 0x154);
    core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,0);
    fVar22 = fStack_14;
    pfVar12 = afStack_2ac + 8;
    iStack_50 = iVar3;
    afStack_28c[0] = (float)uStack_25c;
    afStack_2ac[(uint)bVar15 * -2 + 9] = afStack_270[(uint)bVar15 * -2 + 6];
    pCVar6 = param_1;
    afStack_2ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
         afStack_270[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
    iVar3 = (**(code **)((int)fVar22 + 0x110))(iVar3,pCVar6,pfVar12);
    if (iVar3 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x26fc = 0;
    return;
  }
  if (0.0 < *(float *)&param_1->field_0xd130) {
    *(float *)&param_1->field_0xd130 = *(float *)&param_1->field_0xd130 - param_2;
  }
  pCStack_c0 = (CMotionController *)&param_1->field_0x158;
  fStack_54 = param_2 * *(float *)&param_1->field_0xcdcc;
  pfStack_9c = afStack_4c0;
  pfStack_90 = afStack_520;
LAB_00588fbb:
  if (0.0 < fStack_54) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_c0,&fStack_54);
    if (uVar5 < 0xb) {
      if (uVar5 < 5) {
        if (uVar5 == 2) {
          iVar3 = *(int *)&param_1->field_0xd064;
          if (iVar3 != 0) {
            *(uint *)&param_1->field_0xd064 = 0;
            iVar7 = core_zombie_cpp_FUN_0058bd50(param_1,*(int *)&param_1->field_0xd068);
            if (-1 < iVar7) {
              core_charactr_cpp_FUN_004319d0(param_1,iVar7,iVar3,0x3e4ccccd,0);
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar3,iVar7);
            }
          }
        }
        else {
          core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar5);
        }
        goto LAB_00588fbb;
      }
      if (uVar5 < 6) {
        iStack_a0 = 1;
        if (*(int *)&param_1->field_0xcde4 != 0) {
          fStack_98 = 0x3FA66666;
          afStack_2c8[0] = 0.0;
          afStack_2c8[1] = 0.0;
          afStack_2c8[2] = 0x3FA66666;
          core_actor_cpp_FUN_00408b80(param_1,afStack_330 + 0x1a);
          afStack_1f8[2] = fStack_2e0;
          afStack_1f8[(uint)bVar15 * -2 + 3] = afStack_330[(uint)bVar15 * -2 + 0x15];
          afStack_1f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
          iVar3 = *(int *)&param_1->field_0xcde4;
          fStack_148 = afStack_1f8[2] - *(float *)(iVar3 + 0x20);
          fStack_144 = afStack_1f8[3] - *(float *)(iVar3 + 0x24);
          fStack_140 = fStack_1e8 - *(float *)(iVar3 + 0x28);
          fStack_1a8 = fStack_148;
          afStack_1d4[(uint)bVar15 * -2 + 0xc] = afStack_174[(uint)bVar15 * -2 + 0xc];
          afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_174[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
          uStack_1a4 = 0;
          if (SQRT(fStack_1a0 * fStack_1a0 + fStack_1a8 * fStack_1a8) <= 1.0) {
            uStack_13c = 0;
            uStack_134 = 0;
            uStack_138 = 0x40800000;
            core_actor_cpp_FUN_00408b80(param_1,&uStack_13c);
            CStack_238._0_4_ = CStack_3d0._0_4_;
            *(uint *)((int)&CStack_238 + (uint)bVar15 * -8 + 4) =
                 *(uint *)((int)&CStack_3d0 + (uint)bVar15 * -8 + 4);
            *(uint *)((int)&CStack_238 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                 *(uint *)((int)&CStack_3d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
            uVar10 = CStack_238._4_4_;
            puVar11 = (uint *)(*(int *)&param_1->field_0xcde4 + 0x24 + (uint)bVar15 * -8);
            CStack_340._0_4_ = *(uint *)(*(int *)&param_1->field_0xcde4 + 0x20);
            *(uint *)((int)&CStack_340 + (uint)bVar15 * -8 + 4) = *puVar11;
            *(uint *)((int)&CStack_340 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                 puVar11[(uint)bVar15 * -2 + 1];
            CStack_340._4_4_ = uVar10;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1);
            core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                      (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
            iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                              (g_CDemonSetPtr,&CStack_238,&CStack_340);
            if (iVar3 != 0) {
              iStack_a0 = 0;
            }
            iVar3 = iStack_a0;
            core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            if (((iVar3 == 0) ||
                (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xec))
                                   (*(int *)&param_1->field_0xcde4,param_1,0), iVar3 != 0)) &&
               (iStack_a0 != 0)) goto LAB_00588fbb;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_c0,0,1);
        goto LAB_00588fbb;
      }
      if (uVar5 != 10) {
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar5);
        goto LAB_00588fbb;
      }
      if (*(int *)&param_1->field_0xcde4 != 0) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_c0,*(uint *)&param_1->field_0xd0e8);
        puVar11 = &uStack_2b0;
        uStack_2b0 = uStack_e8;
        afStack_2ac[(uint)bVar15 * -2] = afStack_108[(uint)bVar15 * -2 + 9];
        afStack_2ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_108[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
        core_actor_cpp_FUN_00408b80(param_1,puVar11);
        fStack_178 = afStack_39c[2];
        afStack_174[(uint)bVar15 * -2] = afStack_39c[(uint)bVar15 * -2 + 3];
        afStack_174[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_39c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        if (*(int *)&param_1->field_0xd124 < 0) {
          fVar22 = fStack_178 - *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
          fVar23 = afStack_174[1] - *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
          if ((float)_DAT_005d8737 < SQRT(fVar23 * fVar23 + fVar22 * fVar22)) {
            core_zombie_cpp_FUN_0058cc20(param_1);
            goto LAB_00588fbb;
          }
        }
        else {
          pCVar6 = (CZombie *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xcde4);
          if (pCVar6 != param_1) {
            core_zombie_cpp_FUN_0058cc20(param_1);
            goto LAB_00588fbb;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_588);
        fStack_584 = *(float *)&param_1->field_0xce5c;
        pCStack_554 = param_1;
        pCStack_550 = param_1;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xcde4,aSStack_588);
        dStack_dc = (double)fStack_584;
        if (0.0 < dStack_dc) {
          fVar16 = (float10)fStack_584 * (float10)_DAT_005d8707 * (float10)_DAT_005d870f;
          EVar21 = BLOOD_TYPE_RED;
          round();
          iStack_c4 = (int)ROUND(fVar16);
          core_gore_cpp_FUN_004ce9c0
                    (g_CGorePtr,(CVector3f *)&fStack_178,(CVector3f *)0x0,iStack_c4,EVar21);
        }
        iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                          (*(int *)&param_1->field_0xcde4);
        if (0 < iVar3) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))
                    (*(int *)&param_1->field_0xcde4);
          core_zombie_cpp_FUN_0058cc20(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
        goto LAB_00588fbb;
      }
      core_zombie_cpp_FUN_0058cc20(param_1);
    }
    else if (uVar5 < 0xc) {
      iVar3 = core_zombie_cpp_FUN_0058bd50(param_1,2);
      if (iVar3 < 0) {
        _DAT_01d71de0 = "..\\core\\zombie.cpp";
        _DAT_01d71de4 = 0x21b;
        core_main_c_FUN_004e4330(&DAT_005d8549);
      }
      if (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78));
        afStack_3ac[1] = 6.0;
        afStack_3ac[0] = 0.0;
        afStack_3ac[2] = 17.0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iVar3,afStack_3c0 + 5);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar5 < 0x65) {
      if (uVar5 == 0xc) {
        iStack_7c = core_zombie_cpp_FUN_0058bd50(param_1,3);
        if (iStack_7c < 0) {
          _DAT_01d71de0 = "..\\core\\zombie.cpp";
          _DAT_01d71de4 = 0x232;
          core_main_c_FUN_004e4330(&DAT_005d857c);
        }
        puStack_bc = &param_1->field_0x0 + iStack_7c * 0x78;
        if (*(int *)(puStack_bc + 0x25b0) != 0) {
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s tossing %s\n",param_1,
                     *(uint *)(puStack_bc + 0x25b0));
          fStack_208 = 0.0;
          fStack_204 = 0.0;
          fStack_200 = 1.0;
          if (*(int *)&param_1->field_0xcde4 != 0) {
            (**(code **)(*(int *)(*(int *)(puStack_bc + 0x25b0) + 0x154) + 0x1c))
                      (*(int *)(puStack_bc + 0x25b0));
            pfVar12 = afStack_4b4;
            pfVar14 = &fStack_4cc;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            fStack_19c = fStack_4cc + *pfStack_9c;
            fStack_198 = fStack_4c8 + pfStack_9c[1];
            fStack_194 = fStack_4c4 + pfStack_9c[2];
            fStack_448 = fStack_4cc + *pfStack_9c;
            afStack_45c[(uint)bVar15 * -2 + 6] = afStack_1d4[(uint)bVar15 * -2 + 0xf];
            puVar2 = puStack_bc;
            afStack_45c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            pfVar12 = afStack_12c + 2;
            afStack_228[2] = fStack_448 * _DAT_005d86ff;
            afStack_228[3] = fStack_444 * _DAT_005d86ff;
            fStack_218 = fStack_440 * _DAT_005d86ff;
            afStack_12c[2] = fStack_448 * _DAT_005d86ff;
            afStack_12c[(uint)bVar15 * -2 + 3] = afStack_228[(uint)bVar15 * -2 + 3];
            afStack_12c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_228[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            core_actor_cpp_FUN_00408b80(*(uint *)(puVar2 + 0x25b0),pfVar12);
            fStack_244 = fStack_184;
            afStack_240[(uint)bVar15 * -2] = afStack_1d4[(uint)bVar15 * -2 + 0x15];
            afStack_240[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
            (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x1c))
                      (*(int *)&param_1->field_0xcde4);
            pfVar12 = afStack_4fc;
            pfVar14 = &fStack_52c;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            fStack_2d4 = fStack_52c + *pfStack_90;
            fStack_2d0 = fStack_528 + pfStack_90[1];
            fStack_2cc = fStack_524 + pfStack_90[2];
            fStack_1b4 = fStack_52c + *pfStack_90;
            afStack_1d4[(uint)bVar15 * -2 + 9] = afStack_330[(uint)bVar15 * -2 + 0x18];
            afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                 afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
            afStack_174[2] = fStack_1b4 * _DAT_005d86ff;
            afStack_174[3] = fStack_1b0 * _DAT_005d86ff;
            fStack_164 = fStack_1ac * _DAT_005d86ff;
            afStack_2ac[2] = fStack_1b4 * _DAT_005d86ff;
            afStack_2ac[(uint)bVar15 * -2 + 3] = afStack_174[(uint)bVar15 * -2 + 3];
            afStack_2ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_174[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            core_actor_cpp_FUN_00408b80(*(uint *)&param_1->field_0xcde4,afStack_2ac + 2);
            fStack_2ec = fStack_1e4;
            afStack_330[(uint)bVar15 * -2 + 0x12] = afStack_1f8[(uint)bVar15 * -2 + 6];
            afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
                 afStack_1f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            fStack_310 = fStack_2ec - fStack_244;
            fStack_30c = fStack_2e8 - afStack_240[0];
            fStack_308 = fStack_2e4 - afStack_240[1];
            fStack_304 = fStack_2ec - fStack_244;
            afStack_330[(uint)bVar15 * -2 + 0xc] = afStack_330[(uint)bVar15 * -2 + 9];
            afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                 afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
            fStack_b0 = SQRT(fStack_2fc * fStack_2fc +
                             fStack_304 * fStack_304 + fStack_300 * fStack_300);
            if (0.0 < fStack_b0) {
              core_actor_cpp_FUN_00408b40(param_1,afStack_330 + 0xb);
              afStack_1d4[2] = fStack_418;
              afStack_1d4[(uint)bVar15 * -2 + 3] = afStack_42c[(uint)bVar15 * -2 + 6];
              afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
              fVar22 = 1.0 / fStack_b0;
              afStack_45c[2] = afStack_1d4[2] * fVar22;
              afStack_45c[3] = afStack_1d4[3] * fVar22;
              fStack_44c = fStack_1c4 * fVar22;
              afStack_42c[2] = afStack_1d4[2] * fVar22;
              afStack_42c[(uint)bVar15 * -2 + 3] = afStack_45c[(uint)bVar15 * -2 + 3];
              afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_45c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
              if (afStack_228 + 8 != afStack_42c + 2) {
                fStack_208 = afStack_42c[2];
                fStack_204 = afStack_42c[3];
                fStack_200 = fStack_41c;
              }
            }
          }
          fStack_208 = fStack_208 * _DAT_005d8703;
          fStack_200 = fStack_200 * _DAT_005d8703;
          fStack_204 = fStack_204 * _DAT_005d8703 + _DAT_005d8727;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iStack_7c,afStack_228 + 8);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"zom-h0?.wav");
        }
      }
      else {
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar5);
      }
    }
    else if (uVar5 < 0x66) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-?.wav");
    }
    else if (uVar5 == 0x29a) {
      core_skeleton_cpp_FUN_0054dbd0(pCStack_c0,*(uint *)&param_1->field_0xd0e8);
      puVar11 = &uStack_430;
      uStack_430 = uStack_3f4;
      afStack_42c[(uint)bVar15 * -2] = afStack_42c[(uint)bVar15 * -2 + 0xf];
      afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
      core_actor_cpp_FUN_00408b80(param_1,puVar11);
      EVar21 = BLOOD_TYPE_RED;
      iVar3 = 3;
      direction = (CVector3f *)0x0;
      pCVar18 = &CStack_46c;
      CStack_46c._0_4_ = CStack_43c._0_4_;
      *(uint *)((int)&CStack_46c + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_43c + (uint)bVar15 * -8 + 4);
      this_ptr = g_CGorePtr;
      *(uint *)((int)&CStack_46c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_43c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_gore_cpp_FUN_004ce9c0(this_ptr,pCVar18,direction,iVar3,EVar21);
      iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
      if (iVar3 == 0) {
        pcVar20 = "ghoul-dig-?.wav";
      }
      else {
        pcVar20 = "ghoul-eat-?.wav";
      }
      pcVar13 = acStack_54c;
      do {
        cVar1 = *pcVar20;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar20[1];
        pcVar20 = pcVar20 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,acStack_54c);
    }
    else {
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar5);
    }
    goto LAB_00588fbb;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd120 * 4) == 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd118 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd12c * 4) == 0)) &&
     ((0.0 <= *(float *)&param_1->field_0xd134 &&
      (fVar22 = *(float *)&param_1->field_0xd134 + param_2,
      *(float *)&param_1->field_0xd134 = fVar22, (float)_DAT_005d86bf <= fVar22)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_5c4);
    uStack_5c0 = 0x461c3f9a;
    pCStack_590 = param_1;
    pCStack_58c = param_1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_5c4);
    *(uint *)&param_1->field_0xd134 = 0xbf800000;
  }
  pCStack_2c = (CMotionController *)&param_1->field_0x158;
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_2c);
  iVar3 = *(int *)(pSVar8 + 0x24);
  iStack_a4 = 0;
  iVar7 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  pCVar19 = pCStack_2c;
  if (iVar7 == 0) {
    fStack_28 = -1.0;
    fStack_a8 = 0.3;
    pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_2c);
    switch(*(uint *)(pSVar8 + 0x24)) {
    case 0:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if ((*(int *)&param_1->field_0xcde4 == 0) && (iStack_78 != 0)) {
        iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
        if (iVar3 == 0) break;
        *(uint *)&g_CGamePtr->field_0x244 = 1;
        *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      }
      iVar3 = *(int *)&param_1->field_0xcde4;
      if (iVar3 != 0) {
        fStack_190 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
        fStack_18c = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_188 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
        afStack_330[2] = fStack_190;
        afStack_330[(uint)bVar15 * -2 + 3] = afStack_1d4[(uint)bVar15 * -2 + 0x12];
        afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
        fStack_70 = fStack_320 * fStack_320 +
                    afStack_330[2] * afStack_330[2] + afStack_330[3] * afStack_330[3];
        fStack_74 = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
        fStack_6c = fStack_74;
        if (fStack_74 <= *(float *)&param_1->field_0xd0e4) {
          fVar22 = (float)_DAT_005d86f7;
          *(uint *)&param_1->field_0xd0e4 = *(uint *)&param_1->field_0xcddc;
          iVar3 = core_actor_cpp_FUN_0040cf40(param_2 * fVar22);
          if (iVar3 != 0) {
            iVar3 = 0;
            pcVar20 = "pickass";
            pCVar4 = core_motion_cpp_FUN_004fc310((CMotionController *)&param_1->field_0x158);
            iVar3 = core_motion_cpp_FUN_004fb9c0(pCVar4,pcVar20,iVar3);
            if (-1 < iVar3) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0x11,1);
              break;
            }
          }
          iVar3 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
          if (iVar3 != 0) {
            core_zombie_cpp_FUN_0058cc20(param_1);
          }
          if (0x3FA66666 + (float)_DAT_005d86df < fStack_74) {
            core_zombie_cpp_FUN_0058cc20(param_1);
            iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd13c);
            if (iVar3 == 0) {
              if (*(int *)&param_1->field_0xd0e0 == 0) {
                uVar10 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                   (param_1,"zom-a0?.wav");
                *(uint *)&param_1->field_0xd13c = uVar10;
              }
              else {
                uVar10 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                   (param_1,"f-zombie-alert?.wav");
                *(uint *)&param_1->field_0xd13c = uVar10;
              }
            }
          }
        }
      }
      break;
    case 1:
    case 2:
    case 3:
      iVar3 = *(int *)&param_1->field_0xcde4;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if (((*(int *)&param_1->field_0xcde4 == 0) && (iStack_78 != 0)) &&
         (iVar7 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
         iVar7 = (**(code **)(*(int *)(iVar7 + 0x154) + 0x10c))(iVar7), iVar7 != 0)) {
        *(uint *)&g_CGamePtr->field_0x244 = 1;
        *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      }
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar3 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else {
        if (iVar3 == 0) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd13c);
          if (iVar3 == 0) {
            if (*(int *)&param_1->field_0xd0e0 == 0) {
              pcVar20 = "zom-a0?.wav";
            }
            else {
              pcVar20 = "f-zombie-alert?.wav";
            }
            uVar10 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar20);
            *(uint *)&param_1->field_0xd13c = uVar10;
          }
          goto LAB_0058a628;
        }
        uStack_68 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd118 * 4) !=
                          0);
        if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd120 * 4) != 0) {
          uStack_68 = uStack_68 + 1;
        }
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        iVar3 = core_zombie_cpp_FUN_0058b3f0(param_1,param_2);
        if (iVar3 == 0) {
          fStack_64 = 0x3FA66666;
          iStack_60 = core_zombie_cpp_FUN_0058bd50(param_1,1);
          if (((-1 < iStack_60) &&
              (iVar3 = *(int *)(&param_1->field_0x25b0 + iStack_60 * 0x78), iVar3 != 0)) &&
             (*(int *)&param_1->field_0xd068 == 1)) {
            fStack_5c = 1.0;
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
              pfVar12 = afStack_49c;
              pfVar14 = &fStack_514;
              for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                *pfVar14 = *pfVar12;
                pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
                pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_1d8);
              fStack_1d8 = fStack_508 - fStack_514;
              afStack_1d4[0] = fStack_504 - fStack_510;
              afStack_1d4[1] = fStack_500 - fStack_50c;
              fStack_460 = fStack_508 - fStack_514;
              afStack_45c[(uint)bVar15 * -2] = afStack_1d4[(uint)bVar15 * -2];
              afStack_45c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                   afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              fStack_5c = afStack_45c[1] * (float)_DAT_005d86cf + 1.0;
            }
            fStack_64 = fStack_5c;
          }
          fVar23 = 0.34906584;
          fVar22 = 1.1;
          auStack_118._0_4_ = 0;
          auStack_118._8_4_ = fStack_64;
          pCVar18 = (CVector3f *)auStack_118;
          auStack_118._4_4_ = 0;
          pCVar9 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar9,pCVar18,
                             fVar22,fVar23);
          pCStack_3c = (CMotionController *)&param_1->field_0x158;
          if (iVar3 < 0) {
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0,1);
          }
          else if (iVar3 < 1) {
            iStack_58 = core_zombie_cpp_FUN_0058bd50(param_1,*(int *)&param_1->field_0xd068);
            iVar3 = *(int *)&param_1->field_0xcde4;
            fStack_2f8 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
            fStack_2f4 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            fStack_2f0 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_388 = fStack_2f8;
            afStack_39c[(uint)bVar15 * -2 + 6] = afStack_330[(uint)bVar15 * -2 + 0xf];
            afStack_39c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            if (SQRT(fStack_380 * fStack_380 + fStack_388 * fStack_388 + fStack_384 * fStack_384) <
                (float)_DAT_005d86e7) {
              core_actor_cpp_FUN_00408bf0(param_1,iVar3 + 0x20);
              afStack_360[2] = (float)uStack_274;
              afStack_360[(uint)bVar15 * -2 + 3] = afStack_270[(uint)bVar15 * -2];
              afStack_360[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_270[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              core_vecdir_cpp_FUN_00576250(afStack_360 + 2);
              uStack_3e8 = uStack_31c;
              afStack_42c[(uint)bVar15 * -2 + 0x12] = afStack_330[(uint)bVar15 * -2 + 6];
              afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
                   afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
              if (((ABS(fStack_3e4) < (float)_DAT_005d86ef) && (-1 < iStack_58)) &&
                 (uVar5 = *(uint *)&param_1->field_0xd068, 1 < uVar5)) {
                if (uVar5 < 3) {
                  if (*(int *)(&param_1->field_0x25b0 + iStack_58 * 0x78) != 0) {
                    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s lugging\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0xe,1)
                    ;
                  }
                }
                else if ((uVar5 == 3) && (*(int *)(&param_1->field_0x25b0 + iStack_58 * 0x78) != 0))
                {
                  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s tossing\n",param_1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0xc,1);
                }
              }
            }
          }
          else if (((0 < (int)uStack_68) && (*(float *)&param_1->field_0xcde0 <= 0.0)) &&
                  (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                                     (*(int *)&param_1->field_0xcde4), iVar3 == 0)) {
            if ((iStack_60 < 0) || (*(int *)(&param_1->field_0x25b0 + iStack_60 * 0x78) == 0)) {
              if ((iStack_78 == 0) ||
                 (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                                    (*(int *)&param_1->field_0xcde4), iVar3 == 0)) {
                iVar3 = 5;
                pCVar19 = (CMotionController *)&param_1->field_0x158;
              }
              else {
                iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
                pCVar19 = (CMotionController *)&param_1->field_0x158;
                if (iVar3 == 0) {
                  iVar3 = 0x14;
                }
                else {
                  iVar3 = 0x13;
                }
              }
            }
            else {
              iVar3 = 4;
              pCVar19 = pCStack_3c;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCVar19,iVar3,1);
            *(uint *)&param_1->field_0xcde0 = 0x3f4ccccd;
          }
        }
      }
      break;
    case 4:
      if (*(int *)&param_1->field_0xcde4 == 0) {
LAB_0058aaf1:
        core_zombie_cpp_FUN_0058cc20(param_1);
      }
      else {
        iVar3 = core_zombie_cpp_FUN_0058bd50(param_1,1);
        if ((((iVar3 < 0) ||
             (iVar7 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                                (*(int *)&param_1->field_0xcde4), 0 < iVar7)) ||
            (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) == 0)) ||
           (iVar7 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                              (*(int *)&param_1->field_0xcde4), iVar7 != 0)) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n",param_1);
          core_zombie_cpp_FUN_0058cc20(param_1);
        }
        else {
          iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78);
          fStack_48 = 1.0;
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
            pfVar12 = afStack_484;
            pfVar14 = &fStack_4e4;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)auStack_3a0);
            auStack_3a0 = (byte  [4])(fStack_4d8 - fStack_4e4);
            afStack_39c[0] = fStack_4d4 - fStack_4e0;
            afStack_39c[1] = fStack_4d0 - fStack_4dc;
            fStack_1fc = fStack_4d8 - fStack_4e4;
            afStack_1f8[(uint)bVar15 * -2] = afStack_39c[(uint)bVar15 * -2];
            afStack_1f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_39c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_1c0 = fStack_1fc;
            afStack_1d4[(uint)bVar15 * -2 + 6] = afStack_1f8[(uint)bVar15 * -2];
            afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_1f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_130 = fStack_1c0;
            afStack_12c[(uint)bVar15 * -2] = afStack_1d4[(uint)bVar15 * -2 + 6];
            afStack_12c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_1d4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            fStack_364 = fStack_130;
            afStack_360[(uint)bVar15 * -2] = afStack_12c[(uint)bVar15 * -2];
            afStack_360[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_12c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_40c = fStack_364;
            afStack_42c[(uint)bVar15 * -2 + 9] = afStack_360[(uint)bVar15 * -2];
            afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                 afStack_360[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_48 = fStack_404 * (float)_DAT_005d86cf + fStack_48;
          }
          fStack_28 = fStack_48;
          fStack_4c = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
          dStack_d4 = (double)fStack_4c;
          fStack_14 = fStack_4c;
          if ((1.0 <= dStack_d4) && (dStack_d4 <= _DAT_005d86df)) {
            iStack_a4 = 1;
          }
        }
      }
      break;
    case 5:
      iVar3 = *(int *)&param_1->field_0xcde4;
      if ((iVar3 == 0) || (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), 0 < iVar3)
         ) {
LAB_0058a628:
        core_zombie_cpp_FUN_0058cc20(param_1);
      }
      else {
        pCVar6 = (CZombie *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                           (*(int *)&param_1->field_0xcde4);
        if (pCVar6 == (CZombie *)0x0) {
          fStack_28 = 0x3FA66666;
          fStack_a8 = 3.0;
        }
        else if (pCVar6 != param_1) goto LAB_0058aaf1;
      }
      break;
    case 9:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCVar19,0);
        pfVar12 = afStack_360 + 5;
        afStack_34c[0] = (float)uStack_160;
        afStack_360[(uint)bVar15 * -2 + 6] = afStack_174[(uint)bVar15 * -2 + 6];
        afStack_360[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_174[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_actor_cpp_FUN_00408b80(param_1,pfVar12);
        EVar21 = BLOOD_TYPE_RED;
        CStack_370._0_4_ = CStack_280._0_4_;
        *(uint *)((int)&CStack_370 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_280 + (uint)bVar15 * -8 + 4);
        *(uint *)((int)&CStack_370 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_280 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_370,EVar21);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 0xf:
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,&param_1->field_0xd074);
      if ((iVar3 != 0) &&
         (fVar22 = *(float *)&param_1->field_0xd144 - param_2,
         *(float *)&param_1->field_0xd144 = fVar22, fVar22 < 0.0)) {
        pfStack_80 = (float *)&param_1->field_0x20;
        iStack_84 = 0;
        iStack_34 = 0;
        *(float *)&param_1->field_0xd144 = *(float *)&param_1->field_0xd144 + 1.0;
        for (; iStack_84 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_84 = iStack_84 + 1) {
          iVar3 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_34);
          iVar7 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3,param_1);
          if (iVar7 != 0) {
            fStack_298 = *(float *)(iVar3 + 0x20) - *pfStack_80;
            fStack_294 = *(float *)(iVar3 + 0x24) - pfStack_80[1];
            fStack_290 = *(float *)(iVar3 + 0x28) - pfStack_80[2];
            afStack_270[2] = fStack_298;
            afStack_270[(uint)bVar15 * -2 + 3] = afStack_2ac[(uint)bVar15 * -2 + 6];
            afStack_270[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_2ac[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            if ((ABS(afStack_270[3]) <= (float)_DAT_005d872f) &&
               (afStack_270[3] = 0.0,
               SQRT(afStack_270[4] * afStack_270[4] + afStack_270[2] * afStack_270[2]) <=
               *(float *)&param_1->field_0xcddc)) {
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s rising from the grave\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0x10,1);
              if (*(CGrave **)&param_1->field_0xd06c != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004cf580
                          (*(CGrave **)&param_1->field_0xd06c);
                *(uint *)&param_1->field_0xd06c = 0;
              }
              *(uint *)&param_1->field_0xcddc = 0x42c80000;
              break;
            }
          }
          iStack_34 = iStack_34 + 4;
        }
      }
      break;
    case 0x12:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar3 = *(int *)&param_1->field_0xcde4;
      if (((iVar3 != 0) &&
          (fVar22 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20),
          fVar23 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28),
          SQRT(fVar23 * fVar23 + fVar22 * fVar22) <= (float)_DAT_005d86d7)) &&
         (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24)) <= (float)_DAT_005d86df)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCVar19,0,1);
      }
      break;
    case 0x13:
    case 0x14:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if ((iVar3 == 0) &&
         ((**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2),
         *(int *)&param_1->field_0xcde4 != 0)) {
LAB_00589ecd:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
      break;
    case 0x15:
      fVar22 = *(float *)&param_1->field_0xd148 - param_2;
      *(float *)&param_1->field_0xd148 = fVar22;
      if (fVar22 <= 0.0) {
        *(uint *)&param_1->field_0xd148 = 0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar3 = *(int *)&param_1->field_0xcde4;
        if (iVar3 != 0) {
          fStack_f4 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_f0 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_ec = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
          fStack_22c = fStack_f4;
          afStack_228[(uint)bVar15 * -2] = afStack_108[(uint)bVar15 * -2 + 6];
          afStack_228[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_108[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          if (afStack_270 + 8 != &fStack_22c) {
            fStack_250 = fStack_22c;
            fStack_24c = afStack_228[0];
            fStack_248 = afStack_228[1];
          }
          fStack_20 = fStack_248 * fStack_248 + fStack_250 * fStack_250 + fStack_24c * fStack_24c;
          fStack_1c = (float)(((int)fStack_20 >> 1) + _DAT_01d1a0a4);
          if (fStack_1c <= (float)_DAT_005d86c7) {
            fStack_24 = *(float *)&param_1->field_0x3280;
            if (fStack_24 < *(float *)&param_1->field_0x327c) {
              fStack_24 = *(float *)&param_1->field_0x2490;
            }
            if (fStack_24 < *(float *)&param_1->field_0x327c) {
              fStack_24 = *(float *)&param_1->field_0x327c + (float)_DAT_005d86cf;
            }
            iVar3 = 0;
            do {
              fStack_18 = (float)iVar3 * _DAT_005d8717 * _DAT_005d871b;
              fStack_14 = (float)iVar3;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              fVar16 = (float10)fcos((float10)fStack_18);
              fVar17 = (float10)fsin((float10)fStack_18);
              fStack_94 = (float)core_setcolid_cpp_FUN_0053de10
                                           (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                            *(uint *)&param_1->field_0x28,
                                            (float)(fVar17 * (float10)_DAT_005d871f),
                                            (float)(fVar16 * (float10)_DAT_005d871f),
                                            *(uint *)&param_1->field_0x3270,
                                            *(float *)&param_1->field_0x24 +
                                            *(float *)&param_1->field_0x327c,
                                            *(float *)&param_1->field_0x24 + fStack_24);
              fStack_14 = fStack_94;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              if (fStack_94 < 1.0) break;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 4);
            if (3 < iVar3) goto LAB_00589ecd;
            *(uint *)&param_1->field_0xd148 = 0x40400000;
            *(uint *)&param_1->field_0xcde4 = 0;
          }
        }
      }
      break;
    case 0x16:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_154 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
      fStack_150 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
      fStack_14c = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
      afStack_108[2] = fStack_154;
      afStack_108[(uint)bVar15 * -2 + 3] = afStack_174[(uint)bVar15 * -2 + 9];
      afStack_108[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_174[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
      fStack_8c = fStack_f8 * fStack_f8 +
                  afStack_108[2] * afStack_108[2] + afStack_108[3] * afStack_108[3];
      fStack_88 = (float)(((int)fStack_8c >> 1) + _DAT_01d1a0a4);
      if (fStack_88 < *(float *)&param_1->field_0xd0e4) {
        *(uint *)&param_1->field_0xd0e4 = *(uint *)&param_1->field_0xcddc;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_2c,0x17,1);
      }
    }
    if ((0.0 <= fStack_28) && (*(int *)&param_1->field_0xcde4 != 0)) {
      *(float *)&param_1->field_0x2524 = fStack_a8 * *(float *)&param_1->field_0xcdcc * param_2;
      core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
      fVar23 = 0.7853982;
      fVar22 = 3.0;
      auStack_2bc._0_4_ = 0;
      auStack_2bc._8_4_ = fStack_28;
      pCVar18 = (CVector3f *)auStack_2bc;
      auStack_2bc._4_4_ = 0;
      pCVar9 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xcde4);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),
                         pCVar9,pCVar18,fVar22,fVar23);
      if (iVar3 != 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n",param_1);
        core_zombie_cpp_FUN_0058cc20(param_1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
  }
  else {
    uVar5 = *(uint *)&param_1->field_0x273c;
    if (uVar5 < 2) {
      if (uVar5 == 1) {
LAB_00589ad4:
        if (iVar3 != 2) {
          core_zombie_cpp_FUN_0058cc20(param_1);
        }
      }
      else {
LAB_00589d98:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
    }
    else {
      if (uVar5 < 3) goto LAB_00589ad4;
      if (uVar5 != 3) goto LAB_00589d98;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)&param_1->field_0x158,0,1);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  }
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iVar3 = *(int *)(pSVar8 + 0x24);
  iStack_30 = iVar3;
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",iVar3);
  puStack_38 = (uint *)&param_1->field_0x249c;
  if (iVar3 == 0xf) {
    *(uint *)&param_1->field_0x24a4 = 0;
  }
  else {
    if (iVar3 != 0x10) {
      iVar3 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
      if (iVar3 != 0) {
        iVar3 = *(int *)&param_1->field_0xcde4;
        if ((iVar3 != 0) &&
           (pCVar6 = (CZombie *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3),
           pCVar6 == param_1)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                    (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
        }
        core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
        fStack_10c = *(float *)&param_1->field_0x2518 * param_2;
        afStack_108[0] = *(float *)&param_1->field_0x251c * param_2;
        afStack_108[1] = *(float *)&param_1->field_0x2520 * param_2;
        afStack_3c0[2] = fStack_10c;
        afStack_3c0[(uint)bVar15 * -2 + 3] = afStack_108[(uint)bVar15 * -2];
        afStack_3c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             afStack_108[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fStack_37c = afStack_3c0[2] + *(float *)&param_1->field_0x250c;
        fStack_378 = afStack_3c0[3] + *(float *)&param_1->field_0x2510;
        fStack_374 = fStack_3b0 + *(float *)&param_1->field_0x2514;
        fStack_3dc = fStack_37c;
        afStack_42c[(uint)bVar15 * -2 + 0x15] = afStack_39c[(uint)bVar15 * -2 + 9];
        afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
             afStack_39c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
        fStack_214 = fStack_3dc + *(float *)&param_1->field_0x249c;
        fStack_210 = fStack_3d8 + *(float *)&param_1->field_0x24a0;
        fStack_20c = fStack_3d4 + *(float *)&param_1->field_0x24a4;
        fStack_3c4 = fStack_214;
        afStack_3c0[(uint)bVar15 * -2] = afStack_228[(uint)bVar15 * -2 + 6];
        afStack_3c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_228[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        *(uint *)&param_1->field_0x2514 = 0;
        *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
        *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_3c4);
      }
      goto LAB_00589b68;
    }
    core_actor_cpp_FUN_00408b00(param_1,puStack_38);
    fStack_400 = fStack_334;
    afStack_42c[(uint)bVar15 * -2 + 0xc] = afStack_330[(uint)bVar15 * -2];
    afStack_42c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
         afStack_330[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_400;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_3fc;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_3f8;
    puStack_38[2] = 0;
  }
  puStack_38[1] = puStack_38[2];
  *puStack_38 = puStack_38[1];
LAB_00589b68:
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  if (iStack_30 != 0xf) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  }
  if (*(int *)&param_1->field_0xcdd0 == 0) {
    iVar3 = *(int *)&param_1->field_0xd128;
    if (*(int *)(&param_1->field_0x2298 + iVar3 * 4) == 0) {
      iVar7 = *(int *)&param_1->field_0xd110;
      fVar22 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1->field_0xd114,*(uint *)&param_1->field_0xd0fc
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd114 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)&param_1->field_0xd118,
                   *(uint *)&param_1->field_0xd0f4,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1->field_0xd11c,*(uint *)&param_1->field_0xd100
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd11c * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)&param_1->field_0xd120,
                   *(uint *)&param_1->field_0xd0f8,0x3e4ccccd);
      }
      iVar7 = *(int *)&param_1->field_0xd0e8;
      fVar22 = 0.7;
      iVar3 = *(int *)&param_1->field_0xd12c;
    }
    core_charactr_cpp_FUN_0042fe90((CCharacter *)param_1,iVar3,iVar7,fVar22);
    if ((*(int *)&param_1->field_0xd124 < 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd128 * 4) != 0)) {
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd128 * 4) = 0;
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1->field_0xd128,*(uint *)&param_1->field_0xd110
                 ,0x3e4ccccd);
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xd128 * 4) = 1;
    }
    core_charactr_cpp_FUN_0042fc90(param_1);
  }
  iVar3 = core_zombie_cpp_FUN_0058bd50(param_1,1);
  if (((iStack_a4 != 0) && (-1 < iVar3)) &&
     (iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78), iVar3 != 0)) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x78))(iVar3,2);
    return;
  }
  return;
}
