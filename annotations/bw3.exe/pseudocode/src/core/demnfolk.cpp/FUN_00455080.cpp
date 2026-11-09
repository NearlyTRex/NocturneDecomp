// Name: core_demnfolk.cpp_FUN_00455080
// Address: 00455080
// Address Range: [[00455080, 004572f5]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00455080(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_demnfolk_cpp_FUN_00455080(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  CEnemy *pCVar5;
  int iVar6;
  SMotion *pSVar7;
  CPathMap *pCVar8;
  uint uVar9;
  uint *puVar10;
  char *pcVar11;
  float *pfVar12;
  char *pcVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float afStackY_14ac [912];
  CGore *this_ptr;
  CVector3f *pCVar18;
  CVector3f *direction;
  CMotionController *this_ptr_00;
  EBloodType EVar19;
  float fVar20;
  float fVar21;
  SDamageInfo aSStack_64c [4];
  uint uStack_648;
  CEnemy *pCStack_618;
  CEnemy *pCStack_614;
  SDamageInfo aSStack_610 [4];
  float fStack_60c;
  CEnemy *pCStack_5dc;
  CEnemy *pCStack_5d8;
  char acStack_5d4 [32];
  float afStack_5b4 [6];
  float fStack_59c;
  float fStack_598;
  float fStack_594;
  float fStack_590;
  float fStack_58c;
  float fStack_588;
  float afStack_584 [6];
  float afStack_56c [6];
  float afStack_554 [6];
  float afStack_53c [6];
  float fStack_524;
  float fStack_520;
  float fStack_51c;
  float afStack_518 [3];
  float fStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float afStack_4e8 [3];
  float fStack_4dc;
  float fStack_4d8;
  float fStack_4d4;
  float fStack_4d0;
  float fStack_4cc;
  float fStack_4c8;
  float fStack_4c4;
  float afStack_4c0 [4];
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  CVector3f CStack_494;
  float fStack_488;
  float afStack_484 [4];
  float fStack_474;
  float fStack_470;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  uint uStack_434;
  float fStack_430;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  uint uStack_41c;
  uint uStack_410;
  CVector3f CStack_404;
  float fStack_3f8;
  float afStack_3f4 [4];
  float fStack_3e4;
  uint uStack_3e0;
  float fStack_3dc;
  float fStack_3d4;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  uint uStack_3bc;
  float afStack_3b8 [2];
  byte auStack_3b0 [12];
  float fStack_3a4;
  float afStack_3a0 [5];
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  float fStack_368;
  float fStack_364;
  float fStack_360;
  float fStack_35c;
  float afStack_358 [4];
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float afStack_334 [4];
  float fStack_324;
  float afStack_320 [3];
  uint uStack_314;
  uint uStack_310;
  uint uStack_30c;
  float fStack_308;
  float afStack_304 [5];
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  uint uStack_2e4;
  float afStack_2e0 [2];
  byte auStack_2d8 [8];
  float afStack_2d0 [4];
  float fStack_2c0;
  uint uStack_2b4;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float afStack_28c [5];
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float afStack_260 [3];
  CVector3f CStack_254;
  float fStack_248;
  float afStack_244 [2];
  CVector3f CStack_23c;
  uint uStack_230;
  float afStack_22c [4];
  float fStack_21c;
  float afStack_218 [4];
  float afStack_208 [4];
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  uint uStack_1e4;
  float fStack_1e0;
  float afStack_1dc [3];
  uint uStack_1d0;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float afStack_1b8 [3];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_198;
  float fStack_194;
  float afStack_188 [3];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  float fStack_134;
  float afStack_130 [2];
  byte auStack_128 [12];
  uint uStack_11c;
  float afStack_118 [5];
  float afStack_104 [3];
  uint uStack_f8;
  CVector3f CStack_ec;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  double dStack_c8;
  double dStack_c0;
  int iStack_b0;
  float fStack_a8;
  float fStack_a4;
  float *pfStack_a0;
  int iStack_9c;
  float *pfStack_98;
  int iStack_94;
  float *pfStack_90;
  int iStack_8c;
  uint uStack_80;
  float fStack_7c;
  int iStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  byte *puStack_48;
  CMotionController *pCStack_44;
  uint *puStack_40;
  CMotionController *pCStack_3c;
  int iStack_38;
  int iStack_34;
  float fStack_30;
  float fStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar15 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0xe8);
    return;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) == 0) &&
     (iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar3 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,0x17,1);
  }
  iStack_8c = *(int *)&param_1->field_0x26fc;
  if (iStack_8c != 0) {
    fStack_14 = *(float *)(iStack_8c + 0x154);
    core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,0);
    pfVar12 = afStack_208 + 0x20;
    afStack_188[0] = (float)uStack_2b4;
    afStack_208[(uint)bVar15 * -2 + 0x21] = afStack_2d0[(uint)bVar15 * -2 + 8];
    afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x22] =
         afStack_2d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9];
    iVar3 = (**(code **)((int)fStack_14 + 0x110))(iStack_8c,param_1,pfVar12);
    if (iVar3 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x26fc = 0;
    return;
  }
  if (0.0 < *(float *)&param_1[1].field_0xdc) {
    *(float *)&param_1[1].field_0xdc = *(float *)&param_1[1].field_0xdc - param_2;
  }
  pfStack_a0 = afStack_518;
  fStack_a4 = param_2 * *(float *)&param_1->field_0xcdcc * *(float *)&param_1[1].field_0xf4;
  pfStack_98 = afStack_4e8;
  pCStack_3c = (CMotionController *)&param_1->field_0x158;
LAB_0045511e:
  if (0.0 < fStack_a4) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_3c,&fStack_a4);
    if (uVar4 < 0xb) {
      if (uVar4 < 5) {
        if (uVar4 == 2) {
          iVar3 = *(int *)&param_1[1].field_0x10;
          if (iVar3 != 0) {
            *(uint *)&param_1[1].field_0x10 = 0;
            iVar6 = unkafter_demnfolk_cpp_FUN_004580a0
                              (param_1,*(uint *)&param_1[1].field_0x14);
            if (-1 < iVar6) {
              core_charactr_cpp_FUN_004319d0(param_1,iVar6,iVar3,0x3e4ccccd,0);
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar3,iVar6);
            }
          }
        }
        else {
LAB_0045515b:
          core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar4);
        }
        goto LAB_0045511e;
      }
      if (uVar4 < 6) {
        iStack_28 = 1;
        if (*(int *)&param_1->field_0xcde4 != 0) {
          afStack_304[4] = 0x3FA66666;
          afStack_304[2] = 0.0;
          afStack_304[3] = 0.0;
          core_actor_cpp_FUN_00408b80(param_1,afStack_304 + 2);
          fStack_380 = fStack_290;
          afStack_3a0[(uint)bVar15 * -2 + 9] = afStack_28c[(uint)bVar15 * -2];
          afStack_3a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_28c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          iVar3 = *(int *)&param_1->field_0xcde4;
          fStack_1c4 = fStack_380 - *(float *)(iVar3 + 0x20);
          fStack_1c0 = fStack_37c - *(float *)(iVar3 + 0x24);
          fStack_1bc = fStack_378 - *(float *)(iVar3 + 0x28);
          fStack_1e8 = fStack_1c4;
          afStack_208[(uint)bVar15 * -2 + 9] = afStack_208[(uint)bVar15 * -2 + 0x12];
          afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
          uStack_1e4 = 0;
          if (SQRT(fStack_1e0 * fStack_1e0 + fStack_1e8 * fStack_1e8) <= 1.0) {
            if (iStack_28 != 0) {
              uStack_314 = 0;
              uStack_30c = 0;
              uStack_310 = 0x40800000;
              core_actor_cpp_FUN_00408b80(param_1,&uStack_314);
              CStack_404._0_4_ = CStack_ec._0_4_;
              *(uint *)((int)&CStack_404 + (uint)bVar15 * -8 + 4) =
                   *(uint *)((int)&CStack_ec + (uint)bVar15 * -8 + 4);
              *(uint *)((int)&CStack_404 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)((int)&CStack_ec + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              puVar10 = (uint *)(*(int *)&param_1->field_0xcde4 + 0x24 + (uint)bVar15 * -8);
              CStack_14c._0_4_ = *(uint *)(*(int *)&param_1->field_0xcde4 + 0x20);
              *(uint *)((int)&CStack_14c + (uint)bVar15 * -8 + 4) = *puVar10;
              *(uint *)((int)&CStack_14c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   puVar10[(uint)bVar15 * -2 + 1];
              CStack_14c._4_4_ = CStack_404._4_4_;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
              iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                (g_CDemonSetPtr,&CStack_404,&CStack_14c);
              if (iVar3 != 0) {
                iStack_28 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            }
            if ((iStack_28 == 0) ||
               (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xec))
                                  (*(int *)&param_1->field_0xcde4,param_1,0), iVar3 != 0)) {
              if (iStack_28 == 0) {
                unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
              }
              goto LAB_0045511e;
            }
          }
        }
        unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
        goto LAB_0045511e;
      }
      if (uVar4 != 10) {
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar4);
        goto LAB_0045511e;
      }
      if (*(int *)&param_1->field_0xcde4 != 0) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_3c,*(uint *)&param_1[1].field_0x94);
        pfVar12 = afStack_208 + 0x14;
        afStack_1b8[0] = (float)uStack_164;
        afStack_208[(uint)bVar15 * -2 + 0x15] = afStack_208[(uint)bVar15 * -2 + 0x2a];
        afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
             afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2b];
        core_actor_cpp_FUN_00408b80(param_1,pfVar12);
        fStack_338 = fStack_170;
        afStack_334[(uint)bVar15 * -2] = afStack_208[(uint)bVar15 * -2 + 0x27];
        afStack_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x28];
        if (*(int *)&param_1[1].field_0xd0 < 0) {
          fVar20 = fStack_338 - *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
          fVar21 = afStack_334[1] - *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
          if ((float)_DAT_005ba722 < SQRT(fVar21 * fVar21 + fVar20 * fVar20)) {
            unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
            goto LAB_0045511e;
          }
        }
        else {
          pCVar5 = (CEnemy *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xcde4);
          if (pCVar5 != param_1) {
            unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
            goto LAB_0045511e;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_610);
        fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0x41200000,0x41a00000);
        fStack_60c = fStack_14 * *(float *)&param_1[1].field_0xf4;
        pCStack_5dc = param_1;
        pCStack_5d8 = param_1;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xcde4,aSStack_610);
        dStack_c0 = (double)fStack_60c;
        if (0.0 < dStack_c0) {
          fVar16 = (float10)fStack_60c * (float10)_DAT_005ba6f2 * (float10)_DAT_005ba6fa;
          EVar19 = BLOOD_TYPE_RED;
          round();
          iStack_54 = (int)ROUND(fVar16);
          core_gore_cpp_FUN_004ce9c0
                    (g_CGorePtr,(CVector3f *)&fStack_338,(CVector3f *)0x0,iStack_54,EVar19);
        }
        iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                          (*(int *)&param_1->field_0xcde4);
        if (0 < iVar3) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))
                    (*(int *)&param_1->field_0xcde4);
          unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
        goto LAB_0045511e;
      }
      unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
    }
    else if (uVar4 < 0xc) {
      iVar3 = unkafter_demnfolk_cpp_FUN_004580a0(param_1,2);
      if (iVar3 < 0) {
        _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
        _DAT_01d71de4 = 0x21f;
        core_main_c_FUN_004e4330(&DAT_005ba4ee);
      }
      if (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78));
        afStack_218[0] = 0.0;
        afStack_218[1] = 6.0;
        afStack_218[2] = 17.0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iVar3,afStack_22c + 5);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar4 < 0xd) {
      iStack_b0 = unkafter_demnfolk_cpp_FUN_004580a0(param_1,3);
      if (iStack_b0 < 0) {
        _DAT_01d71de0 = "..\\core\\demnfolk.cpp";
        _DAT_01d71de4 = 0x236;
        core_main_c_FUN_004e4330(&DAT_005ba52b);
      }
      puStack_48 = &param_1->field_0x0 + iStack_b0 * 0x78;
      if (*(int *)(puStack_48 + 0x25b0) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s tossing %s\n",param_1,*(int *)(puStack_48 + 0x25b0));
        fStack_3c8 = 0.0;
        fStack_3c4 = 0.0;
        fStack_3c0 = 1.0;
        if (*(int *)&param_1->field_0xcde4 != 0) {
          (**(code **)(*(int *)(*(int *)(puStack_48 + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(puStack_48 + 0x25b0));
          pfVar12 = afStack_584;
          pfVar14 = &fStack_524;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_368 = fStack_524 + *pfStack_a0;
          fStack_364 = fStack_520 + pfStack_a0[1];
          fStack_360 = fStack_51c + pfStack_a0[2];
          afStack_22c[2] = fStack_524 + *pfStack_a0;
          afStack_22c[(uint)bVar15 * -2 + 3] = afStack_3a0[(uint)bVar15 * -2 + 0xf];
          puVar1 = puStack_48;
          afStack_22c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_3a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
          pfVar12 = afStack_118 + 5;
          fStack_428 = afStack_22c[2] * _DAT_005ba6ea;
          fStack_424 = afStack_22c[3] * _DAT_005ba6ea;
          fStack_420 = fStack_21c * _DAT_005ba6ea;
          afStack_104[0] = afStack_22c[2] * _DAT_005ba6ea;
          afStack_118[(uint)bVar15 * -2 + 6] = afStack_484[(uint)bVar15 * -2 + 0x18];
          afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
          core_actor_cpp_FUN_00408b80(*(uint *)(puVar1 + 0x25b0),pfVar12);
          fStack_2a8 = fStack_3d4;
          afStack_2d0[(uint)bVar15 * -2 + 0xb] = afStack_3f4[(uint)bVar15 * -2 + 9];
          afStack_2d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xc] =
               afStack_3f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x1c))
                    (*(int *)&param_1->field_0xcde4);
          pfVar12 = afStack_53c;
          pfVar14 = &fStack_4f4;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          afStack_218[3] = fStack_4f4 + *pfStack_98;
          afStack_208[0] = fStack_4f0 + pfStack_98[1];
          afStack_208[1] = fStack_4ec + pfStack_98[2];
          fStack_458 = fStack_4f4 + *pfStack_98;
          afStack_484[(uint)bVar15 * -2 + 0xc] = afStack_208[(uint)bVar15 * -2];
          afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          fStack_278 = fStack_458 * _DAT_005ba6ea;
          fStack_274 = fStack_454 * _DAT_005ba6ea;
          fStack_270 = fStack_450 * _DAT_005ba6ea;
          afStack_320[0] = fStack_458 * _DAT_005ba6ea;
          afStack_334[(uint)bVar15 * -2 + 6] = afStack_28c[(uint)bVar15 * -2 + 6];
          afStack_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_28c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          core_actor_cpp_FUN_00408b80(*(uint *)&param_1->field_0xcde4,afStack_320);
          afStack_2d0[1] = fStack_26c;
          afStack_2d0[(uint)bVar15 * -2 + 2] = afStack_28c[(uint)bVar15 * -2 + 9];
          afStack_2d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 3] =
               afStack_28c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          fStack_3a4 = afStack_2d0[1] - fStack_2a8;
          afStack_3a0[0] = afStack_2d0[2] - fStack_2a4;
          afStack_3a0[1] = afStack_2d0[3] - fStack_2a0;
          fStack_464 = afStack_2d0[1] - fStack_2a8;
          afStack_484[(uint)bVar15 * -2 + 9] = afStack_3a0[(uint)bVar15 * -2];
          afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_3a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          fStack_68 = SQRT(fStack_45c * fStack_45c +
                           fStack_464 * fStack_464 + fStack_460 * fStack_460);
          if (0.0 < fStack_68) {
            core_actor_cpp_FUN_00408b40(param_1,afStack_484 + 8);
            fStack_134 = fStack_e0;
            afStack_130[(uint)bVar15 * -2] = afStack_dc[(uint)bVar15 * -2];
            afStack_130[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fVar20 = 1.0 / fStack_68;
            fStack_4ac = fStack_134 * fVar20;
            fStack_4a8 = afStack_130[0] * fVar20;
            fStack_4a4 = afStack_130[1] * fVar20;
            fStack_17c = fStack_134 * fVar20;
            afStack_208[(uint)bVar15 * -2 + 0x24] = afStack_4c0[(uint)bVar15 * -2 + 6];
            afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x25] =
                 afStack_4c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            if (afStack_3f4 + 0xb != afStack_208 + 0x23) {
              fStack_3c8 = fStack_17c;
              fStack_3c4 = fStack_178;
              fStack_3c0 = fStack_174;
            }
          }
        }
        fStack_3c8 = fStack_3c8 * _DAT_005ba6ee;
        fStack_3c0 = fStack_3c0 * _DAT_005ba6ee;
        fStack_3c4 = fStack_3c4 * _DAT_005ba6ee + _DAT_005ba71a;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iStack_b0,afStack_3f4 + 0xb);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar4 < 0xe) {
      if (*(CDoor **)&param_1[1].field_0x1c != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00465060(*(CDoor **)&param_1[1].field_0x1c,0.3);
        (**(code **)(*(int *)(*(int *)&param_1[1].field_0x1c + 0x154) + 0x2c))
                  (*(int *)&param_1[1].field_0x1c,"zombie-bang-door?.wav");
        *(uint *)&param_1[1].field_0x1c = 0;
      }
    }
    else {
      if (uVar4 < 0x65) goto LAB_0045515b;
      if (uVar4 < 0x66) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-?.wav");
      }
      else if (uVar4 == 0x29a) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_3c,*(uint *)&param_1[1].field_0x94);
        puVar10 = &uStack_230;
        uStack_230 = uStack_41c;
        afStack_22c[(uint)bVar15 * -2] = afStack_484[(uint)bVar15 * -2 + 0x1b];
        afStack_22c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
        core_actor_cpp_FUN_00408b80(param_1,puVar10);
        EVar19 = BLOOD_TYPE_RED;
        iVar3 = 3;
        direction = (CVector3f *)0x0;
        pCVar18 = &CStack_140;
        CStack_140._0_4_ = CStack_494._0_4_;
        *(uint *)((int)&CStack_140 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_494 + (uint)bVar15 * -8 + 4);
        this_ptr = g_CGorePtr;
        *(uint *)((int)&CStack_140 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_494 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004ce9c0(this_ptr,pCVar18,direction,iVar3,EVar19);
        iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
        if (iVar3 == 0) {
          pcVar11 = "ghoul-dig-?.wav";
        }
        else {
          pcVar11 = "ghoul-eat-?.wav";
        }
        pcVar13 = acStack_5d4;
        do {
          cVar2 = *pcVar11;
          *pcVar13 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar11[1];
          pcVar11 = pcVar11 + 2;
          pcVar13[1] = cVar2;
          pcVar13 = pcVar13 + 2;
        } while (cVar2 != '\0');
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,acStack_5d4);
      }
      else {
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar4);
      }
    }
    goto LAB_0045511e;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xcc * 4) == 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc4 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd8 * 4) == 0)) &&
     ((0.0 <= *(float *)&param_1[1].field_0xe0 &&
      (fVar20 = *(float *)&param_1[1].field_0xe0 + param_2,
      *(float *)&param_1[1].field_0xe0 = fVar20, (float)_DAT_005ba68a <= fVar20)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_64c);
    uStack_648 = 0x461c3f9a;
    pCStack_618 = param_1;
    pCStack_614 = param_1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_64c);
    *(uint *)&param_1[1].field_0xe0 = 0xbf800000;
  }
  puVar1 = &param_1->field_0x158;
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)puVar1);
  iVar3 = *(int *)(pSVar7 + 0x24);
  iStack_9c = 0;
  iVar6 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar6 == 0) {
    fStack_30 = -1.0;
    fStack_a8 = 0.3;
    pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)puVar1);
    switch(*(uint *)(pSVar7 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = core_actor_cpp_FUN_0040cf40(param_2 * (float)_DAT_005ba6e2);
      if (iVar3 == 0) {
        iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar3 != 0) {
          unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xcde4 == 0) {
          iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
          if (iVar3 == 0) break;
          *(uint *)&g_CGamePtr->field_0x244 = 1;
          *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
        }
        if (*(int *)&param_1->field_0xcde4 != 0) {
          unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0xe8);
          if (iVar3 == 0) {
            if (*(int *)&param_1[1].field_0x90 == 0) {
              uVar9 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"demn_chase_???.wav");
              *(uint *)&param_1[1].field_0xe8 = uVar9;
            }
            else {
              uVar9 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"demn_chase_???.wav");
              *(uint *)&param_1[1].field_0xe8 = uVar9;
            }
          }
        }
      }
      else {
LAB_00456085:
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
      }
      break;
    case 4:
    case 5:
    case 6:
    case 7:
      iVar3 = *(int *)&param_1->field_0xcde4;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if ((*(int *)&param_1->field_0xcde4 == 0) &&
         (iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
         iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 != 0)) {
        *(uint *)&g_CGamePtr->field_0x244 = 1;
        *(uint *)&param_1->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      }
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar3 == 0) {
          iVar6 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
        }
      }
      else {
        if (iVar3 == 0) {
          iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0xe8);
          if (iVar3 == 0) {
            if (*(int *)&param_1[1].field_0x90 == 0) {
              pcVar11 = "demn_chase_???.wav";
            }
            else {
              pcVar11 = "demn_chase_???.wav";
            }
            uVar9 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar11);
            *(uint *)&param_1[1].field_0xe8 = uVar9;
          }
          goto LAB_004566b3;
        }
        if (*(int *)&param_1->field_0xcde4 != 0) {
          fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
          if ((float)_DAT_005ba6b2 < fStack_14) {
            iVar3 = *(int *)&param_1->field_0xcde4;
            fStack_158 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_154 = *(float *)(iVar3 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_150 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_3f4[2] = fStack_158;
            afStack_3f4[(uint)bVar15 * -2 + 3] = afStack_208[(uint)bVar15 * -2 + 0x2d];
            afStack_3f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x2e];
            if (&fStack_29c != afStack_3f4 + 2) {
              fStack_29c = afStack_3f4[2];
              fStack_298 = afStack_3f4[3];
              fStack_294 = fStack_3e4;
            }
            fStack_70 = SQRT(fStack_294 * fStack_294 +
                             fStack_29c * fStack_29c + fStack_298 * fStack_298);
            if ((fStack_70 < _DAT_005ba6ba) && (_DAT_005ba6be < fStack_70)) {
              iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
              if (iVar3 == 1) {
                *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + _DAT_005ba6c2;
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          ((CMotionController *)&param_1->field_0x158,0xb,1);
              }
              else {
                unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
              }
            }
          }
        }
        iVar3 = core_actor_cpp_FUN_0040cf40(param_2 * (float)_DAT_005ba6ca);
        if (iVar3 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,4,1);
        }
        uStack_80 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc4 * 4) !=
                          0);
        if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xcc * 4) != 0) {
          uStack_80 = uStack_80 + 1;
        }
        iVar3 = core_demnfolk_cpp_FUN_00457740(param_1,param_2);
        if (iVar3 == 0) {
          fStack_7c = 0x3FA66666;
          iStack_78 = unkafter_demnfolk_cpp_FUN_004580a0(param_1,1);
          if (((-1 < iStack_78) &&
              (iVar3 = *(int *)(&param_1->field_0x25b0 + iStack_78 * 0x78), iVar3 != 0)) &&
             (*(int *)&param_1[1].field_0x14 == 1)) {
            fStack_6c = 1.0;
            if (iVar3 != 0) {
              (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
              pfVar12 = afStack_5b4;
              pfVar14 = &fStack_59c;
              for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
                *pfVar14 = *pfVar12;
                pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
                pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_35c);
              fStack_35c = fStack_590 - fStack_59c;
              afStack_358[0] = fStack_58c - fStack_598;
              afStack_358[1] = fStack_588 - fStack_594;
              fStack_1a0 = fStack_590 - fStack_59c;
              afStack_208[(uint)bVar15 * -2 + 0x1b] = afStack_358[(uint)bVar15 * -2];
              afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
                   afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              fStack_6c = fStack_198 * (float)_DAT_005ba69a + 1.0;
            }
            fStack_7c = fStack_6c;
          }
          fVar21 = 0.34906584;
          fVar20 = 1.1;
          auStack_3b0._0_4_ = 0;
          auStack_3b0._8_4_ = fStack_7c;
          pCVar18 = (CVector3f *)auStack_3b0;
          auStack_3b0._4_4_ = 0;
          pCVar8 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar8,pCVar18,
                             fVar20,fVar21);
          pCStack_44 = (CMotionController *)&param_1->field_0x158;
          if (iVar3 < 0) {
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
            iVar6 = 1;
            iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_44,iVar3,iVar6);
          }
          else if (iVar3 < 1) {
            iStack_64 = unkafter_demnfolk_cpp_FUN_004580a0
                                  (param_1,*(uint *)&param_1[1].field_0x14);
            iVar3 = *(int *)&param_1->field_0xcde4;
            afStack_484[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
            afStack_484[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
            fStack_474 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
            fStack_4c4 = afStack_484[2];
            afStack_4c0[(uint)bVar15 * -2] = afStack_484[(uint)bVar15 * -2 + 3];
            afStack_4c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            if (SQRT(afStack_4c0[1] * afStack_4c0[1] +
                     fStack_4c4 * fStack_4c4 + afStack_4c0[0] * afStack_4c0[0]) <
                (float)_DAT_005ba6d2) {
              core_actor_cpp_FUN_00408bf0(param_1,iVar3 + 0x20);
              afStack_3a0[2] = (float)uStack_3bc;
              afStack_3a0[(uint)bVar15 * -2 + 3] = afStack_3b8[(uint)bVar15 * -2];
              afStack_3a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                   afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              core_vecdir_cpp_FUN_00576250(afStack_3a0 + 2);
              uStack_434 = uStack_410;
              afStack_484[(uint)bVar15 * -2 + 0x15] = afStack_484[(uint)bVar15 * -2 + 0x1e];
              afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
                   afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
              if (((ABS(fStack_430) < (float)_DAT_005ba6da) && (-1 < iStack_64)) &&
                 (uVar4 = *(uint *)&param_1[1].field_0x14, 1 < uVar4)) {
                if (uVar4 < 3) {
                  if (*(int *)(&param_1->field_0x25b0 + iStack_64 * 0x78) != 0) {
                    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s lugging\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                              (pCStack_44,0x22,1);
                  }
                }
                else if ((uVar4 == 3) && (*(int *)(&param_1->field_0x25b0 + iStack_64 * 0x78) != 0))
                {
                  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s tossing\n",param_1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_44,0x20,1);
                }
              }
            }
          }
          else if (((0 < (int)uStack_80) && (*(float *)&param_1->field_0xcde0 <= 0.0)) &&
                  (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                                     (*(int *)&param_1->field_0xcde4), iVar3 == 0)) {
            if ((iStack_78 < 0) || (*(int *)(&param_1->field_0x25b0 + iStack_78 * 0x78) == 0)) {
              this_ptr_00 = (CMotionController *)&param_1->field_0x158;
              iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                                (*(int *)&param_1->field_0xcde4);
              if (iVar3 == 0) {
                iVar3 = 0xd;
              }
              else {
                iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
                if (iVar3 == 0) {
                  iVar3 = 0x2b;
                }
                else {
                  iVar3 = 0x2a;
                }
              }
            }
            else {
              iVar3 = 0xc;
              this_ptr_00 = pCStack_44;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr_00,iVar3,1);
            *(uint *)&param_1->field_0xcde0 = 0x3f4ccccd;
          }
        }
      }
      break;
    case 8:
    case 9:
      fStack_14 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      if ((float)_DAT_005ba6b2 < fStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,4,1);
      }
      break;
    case 0xc:
      if (*(int *)&param_1->field_0xcde4 == 0) {
LAB_00456ca5:
        unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
      }
      else {
        iVar3 = unkafter_demnfolk_cpp_FUN_004580a0(param_1,1);
        if ((((iVar3 < 0) ||
             (iVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                                (*(int *)&param_1->field_0xcde4), 0 < iVar6)) ||
            (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) == 0)) ||
           (iVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                              (*(int *)&param_1->field_0xcde4), iVar6 != 0)) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n",param_1);
          unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
        }
        else {
          iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78);
          fStack_5c = 1.0;
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
            pfVar12 = afStack_554;
            pfVar14 = &fStack_4dc;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_488);
            fStack_488 = fStack_4d0 - fStack_4dc;
            afStack_484[0] = fStack_4cc - fStack_4d8;
            afStack_484[1] = fStack_4c8 - fStack_4d4;
            fStack_308 = fStack_4d0 - fStack_4dc;
            afStack_304[(uint)bVar15 * -2] = afStack_484[(uint)bVar15 * -2];
            afStack_304[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            afStack_118[2] = fStack_308;
            afStack_118[(uint)bVar15 * -2 + 3] = afStack_304[(uint)bVar15 * -2];
            afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_304[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_2c0 = afStack_118[2];
            afStack_2d0[(uint)bVar15 * -2 + 5] = afStack_118[(uint)bVar15 * -2 + 3];
            afStack_2d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 6] =
                 afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            fStack_44c = fStack_2c0;
            afStack_484[(uint)bVar15 * -2 + 0xf] = afStack_2d0[(uint)bVar15 * -2 + 5];
            afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10] =
                 afStack_2d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 6];
            fStack_470 = fStack_44c;
            afStack_484[(uint)bVar15 * -2 + 6] = afStack_484[(uint)bVar15 * -2 + 0xf];
            afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            fStack_5c = fStack_468 * (float)_DAT_005ba69a + fStack_5c;
          }
          fStack_30 = fStack_5c;
          fStack_60 = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
          dStack_c8 = (double)fStack_60;
          fStack_14 = fStack_60;
          if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005ba6aa)) {
            iStack_9c = 1;
          }
        }
      }
      break;
    case 0xd:
      iVar3 = *(int *)&param_1->field_0xcde4;
      if ((iVar3 == 0) || (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), 0 < iVar3)
         ) {
LAB_004566b3:
        unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
      }
      else {
        pCVar5 = (CEnemy *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                           (*(int *)&param_1->field_0xcde4);
        if (pCVar5 == (CEnemy *)0x0) {
          fStack_30 = 0x3FA66666;
          fStack_a8 = 3.0;
        }
        else if (pCVar5 != param_1) goto LAB_00456ca5;
      }
      break;
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
        pfVar12 = afStack_28c + 0xb;
        afStack_260[0] = (float)uStack_f8;
        afStack_28c[(uint)bVar15 * -2 + 0xc] = afStack_118[(uint)bVar15 * -2 + 9];
        afStack_28c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
        core_actor_cpp_FUN_00408b80(param_1,pfVar12);
        EVar19 = BLOOD_TYPE_RED;
        CStack_254._0_4_ = CStack_23c._0_4_;
        *(uint *)((int)&CStack_254 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_23c + (uint)bVar15 * -8 + 4);
        *(uint *)((int)&CStack_254 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_23c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_254,EVar19);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 0x23:
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                        (0x01C6E360,&param_1[1].field_0x20);
      if ((iVar3 != 0) &&
         (fVar20 = *(float *)&param_1[1].field_0xec - param_2,
         *(float *)&param_1[1].field_0xec = fVar20, fVar20 < 0.0)) {
        pfStack_90 = (float *)&param_1->field_0x20;
        iStack_94 = 0;
        iStack_38 = 0;
        *(float *)&param_1[1].field_0xec = *(float *)&param_1[1].field_0xec + 1.0;
        for (; iStack_94 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_94 = iStack_94 + 1) {
          iVar3 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_38);
          iVar6 = (**(code **)(*(int *)(iVar3 + 0x154) + 0xe4))(iVar3,param_1);
          if (iVar6 != 0) {
            fStack_248 = *(float *)(iVar3 + 0x20) - *pfStack_90;
            afStack_244[0] = *(float *)(iVar3 + 0x24) - pfStack_90[1];
            afStack_244[1] = *(float *)(iVar3 + 0x28) - pfStack_90[2];
            fStack_374 = fStack_248;
            afStack_3a0[(uint)bVar15 * -2 + 0xc] = afStack_244[(uint)bVar15 * -2];
            afStack_3a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                 afStack_244[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            if ((ABS(fStack_370) <= (float)_DAT_005ba72a) &&
               (fStack_370 = 0.0,
               SQRT(fStack_36c * fStack_36c + fStack_374 * fStack_374) <=
               *(float *)&param_1->field_0xcddc)) {
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s rising from the grave\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0x24,1);
              if (*(CGrave **)&param_1[1].field_0x18 != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004cf580
                          (*(CGrave **)&param_1[1].field_0x18);
                *(uint *)&param_1[1].field_0x18 = 0;
              }
              *(uint *)&param_1->field_0xcddc = 0x42c80000;
              break;
            }
          }
          iStack_38 = iStack_38 + 4;
        }
      }
      break;
    case 0x29:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar3 = *(int *)&param_1->field_0xcde4;
      if ((iVar3 != 0) &&
         ((fVar20 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20),
          fVar21 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28),
          SQRT(fVar21 * fVar21 + fVar20 * fVar20) <= (float)_DAT_005ba6a2 &&
          (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24)) <= (float)_DAT_005ba6aa)))
         ) {
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)puVar1,iVar3,iVar6);
      }
      break;
    case 0x2a:
    case 0x2b:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if ((iVar3 == 0) &&
         ((**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2),
         *(int *)&param_1->field_0xcde4 != 0)) goto LAB_00456085;
      break;
    case 0x2c:
      core_set_cpp_FUN_00534820(g_CDemonSetPtr,(CDemonActor *)param_1);
      break;
    case 0x2e:
      fVar20 = *(float *)&param_1[1].field_0xf0 - param_2;
      *(float *)&param_1[1].field_0xf0 = fVar20;
      if (fVar20 <= 0.0) {
        iVar3 = *(int *)&param_1->field_0x154;
        *(uint *)&param_1[1].field_0xf0 = 0;
        (**(code **)(iVar3 + 0x144))(param_1,param_2);
        iVar3 = *(int *)&param_1->field_0xcde4;
        if (iVar3 != 0) {
          fStack_344 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_340 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_33c = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
          fStack_440 = fStack_344;
          afStack_484[(uint)bVar15 * -2 + 0x12] = afStack_358[(uint)bVar15 * -2 + 6];
          afStack_484[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
               afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          if (&fStack_2f0 != afStack_484 + 0x11) {
            fStack_2f0 = fStack_440;
            fStack_2ec = fStack_43c;
            fStack_2e8 = fStack_438;
          }
          fStack_74 = fStack_2e8 * fStack_2e8 + fStack_2f0 * fStack_2f0 + fStack_2ec * fStack_2ec;
          fStack_24 = (float)(((int)fStack_74 >> 1) + _DAT_01d1a0a4);
          if (fStack_24 <= (float)_DAT_005ba692) {
            fStack_2c = *(float *)&param_1->field_0x3280;
            if (fStack_2c < *(float *)&param_1->field_0x327c) {
              fStack_2c = *(float *)&param_1->field_0x2490;
            }
            if (fStack_2c < *(float *)&param_1->field_0x327c) {
              fStack_2c = *(float *)&param_1->field_0x327c + (float)_DAT_005ba69a;
            }
            iVar3 = 0;
            do {
              fStack_1c = (float)iVar3 * _DAT_005ba702 * _DAT_005ba706;
              fStack_14 = (float)iVar3;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              fVar16 = (float10)fcos((float10)fStack_1c);
              fVar17 = (float10)fsin((float10)fStack_1c);
              fStack_18 = (float)core_setcolid_cpp_FUN_0053de10
                                           (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                            *(uint *)&param_1->field_0x28,
                                            (float)(fVar17 * (float10)_DAT_005ba70a),
                                            (float)(fVar16 * (float10)_DAT_005ba70a),
                                            *(uint *)&param_1->field_0x3270,
                                            *(float *)&param_1->field_0x24 +
                                            *(float *)&param_1->field_0x327c,
                                            *(float *)&param_1->field_0x24 + fStack_2c);
              fStack_14 = fStack_18;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              if (fStack_18 < 1.0) break;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 4);
            if (3 < iVar3) goto LAB_00456085;
            *(uint *)&param_1[1].field_0xf0 = 0x40400000;
            *(uint *)&param_1->field_0xcde4 = 0;
          }
        }
      }
    }
    if ((0.0 <= fStack_30) && (*(int *)&param_1->field_0xcde4 != 0)) {
      *(float *)&param_1->field_0x2524 = fStack_a8 * *(float *)&param_1->field_0xcdcc * param_2;
      core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
      fVar21 = 0.7853982;
      fVar20 = 3.0;
      auStack_128._0_4_ = 0;
      auStack_128._8_4_ = fStack_30;
      pCVar18 = (CVector3f *)auStack_128;
      auStack_128._4_4_ = 0;
      pCVar8 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xcde4);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),
                         pCVar8,pCVar18,fVar20,fVar21);
      if (iVar3 != 1) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n",param_1);
        unkafter_demnfolk_cpp_FUN_00458fb0(param_1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
    goto LAB_00455cd6;
  }
  uVar4 = *(uint *)&param_1->field_0x273c;
  if (uVar4 < 2) {
    if (uVar4 == 1) goto LAB_00455cbe;
LAB_00455f5f:
    iVar3 = 0;
  }
  else {
    if (2 < uVar4) {
      if (uVar4 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,2,1);
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
        goto LAB_00455cd6;
      }
      goto LAB_00455f5f;
    }
LAB_00455cbe:
    if (iVar3 == 4) goto LAB_00455cd6;
    iVar3 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)&param_1->field_0x158,iVar3,1);
LAB_00455cd6:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  pSVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&param_1->field_0x158);
  iStack_34 = *(int *)(pSVar7 + 0x24);
  puStack_40 = (uint *)&param_1->field_0x249c;
  if (iStack_34 == 0x23) {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *puStack_40 = *(uint *)&param_1->field_0x24a0;
  }
  else if (iStack_34 == 0x24) {
    core_actor_cpp_FUN_00408b00(param_1,puStack_40);
    afStack_334[2] = fStack_194;
    afStack_334[(uint)bVar15 * -2 + 3] = afStack_208[(uint)bVar15 * -2 + 0x1e];
    afStack_334[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + afStack_334[2];
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_334[3];
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_324;
    puStack_40[2] = 0;
    puStack_40[1] = puStack_40[2];
    *puStack_40 = puStack_40[1];
  }
  else {
    iVar3 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
    if (iVar3 != 0) {
      iVar3 = *(int *)&param_1->field_0xcde4;
      if ((iVar3 != 0) &&
         (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar5 == param_1
         )) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
      }
      core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
      afStack_208[2] = *(float *)&param_1->field_0x2518 * param_2;
      afStack_208[3] = *(float *)&param_1->field_0x251c * param_2;
      fStack_1f8 = *(float *)&param_1->field_0x2520 * param_2;
      afStack_dc[2] = afStack_208[2];
      afStack_dc[(uint)bVar15 * -2 + 3] = afStack_208[(uint)bVar15 * -2 + 3];
      afStack_dc[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      fStack_4a0 = afStack_dc[2] + *(float *)&param_1->field_0x250c;
      fStack_49c = afStack_dc[3] + *(float *)&param_1->field_0x2510;
      fStack_498 = fStack_cc + *(float *)&param_1->field_0x2514;
      afStack_4c0[2] = fStack_4a0;
      afStack_4c0[(uint)bVar15 * -2 + 3] = afStack_4c0[(uint)bVar15 * -2 + 9];
      afStack_4c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
           afStack_4c0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
      fStack_1ac = afStack_4c0[2] + *(float *)&param_1->field_0x249c;
      fStack_1a8 = afStack_4c0[3] + *(float *)&param_1->field_0x24a0;
      fStack_1a4 = fStack_4b0 + *(float *)&param_1->field_0x24a4;
      auStack_2d8._0_4_ = fStack_1ac;
      *(float *)(auStack_2d8 + (uint)bVar15 * -8 + 4) = afStack_208[(uint)bVar15 * -2 + 0x18];
      *(float *)(auStack_2d8 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
      *(uint *)&param_1->field_0x2514 = 0;
      *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
      core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)auStack_2d8);
      if ((iStack_34 == 4) &&
         (iStack_50 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (DAT_007e2cf0,g_CDoorClassInfo.name_hash), iStack_4c = iStack_50,
         iStack_50 != 0)) {
        (**(code **)(*(int *)(iStack_50 + 0x154) + 0x1c))(iStack_50);
        pfVar12 = afStack_56c;
        pfVar14 = &fStack_50c;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar14 = *pfVar12;
          pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
          pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
        }
        afStack_358[2] = fStack_50c + fStack_500;
        afStack_358[3] = fStack_508 + fStack_4fc;
        fStack_348 = fStack_504 + fStack_4f8;
        fStack_38c = fStack_50c + fStack_500;
        afStack_3a0[(uint)bVar15 * -2 + 6] = afStack_358[(uint)bVar15 * -2 + 3];
        iVar3 = iStack_4c;
        afStack_3a0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        pfVar12 = &fStack_3f8;
        fStack_1f4 = fStack_38c * _DAT_005ba6ea;
        fStack_1f0 = fStack_388 * _DAT_005ba6ea;
        fStack_1ec = fStack_384 * _DAT_005ba6ea;
        fStack_3f8 = fStack_38c * _DAT_005ba6ea;
        afStack_3f4[(uint)bVar15 * -2] = afStack_208[(uint)bVar15 * -2 + 6];
        afStack_3f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_actor_cpp_FUN_00408b80(iVar3,pfVar12);
        puVar10 = &uStack_2e4;
        uStack_2e4 = afStack_28c[2];
        afStack_2e0[(uint)bVar15 * -2] = afStack_28c[(uint)bVar15 * -2 + 3];
        afStack_2e0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_28c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_actor_cpp_FUN_00408bf0(param_1,puVar10);
        afStack_1dc[0] = (float)uStack_1d0;
        afStack_208[(uint)bVar15 * -2 + 0xc] = afStack_208[(uint)bVar15 * -2 + 0xf];
        afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             afStack_208[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
        core_vecdir_cpp_FUN_00576250(afStack_208 + 0xb);
        uStack_3e0 = uStack_11c;
        afStack_3f4[(uint)bVar15 * -2 + 6] = afStack_118[(uint)bVar15 * -2];
        afStack_3f4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_118[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        if (ABS(fStack_3dc) < (float)_DAT_005ba712) {
          iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
          iVar6 = 0x27;
          if (iVar3 != 0) {
            iVar6 = 0x28;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,iVar6,1);
          *(int *)&param_1[1].field_0x1c = iStack_50;
        }
      }
    }
  }
  iVar3 = iStack_34;
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  if (iVar3 != 0x23) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  }
  if (*(int *)&param_1->field_0xcdd0 == 0) {
    iVar3 = *(int *)&param_1[1].field_0xd4;
    if (*(int *)(&param_1->field_0x2298 + iVar3 * 4) == 0) {
      iVar6 = *(int *)&param_1[1].field_0xbc;
      fVar20 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1[1].field_0xc0,*(uint *)&param_1[1].field_0xa8
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc0 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)&param_1[1].field_0xc4,
                   *(uint *)&param_1[1].field_0xa0,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1[1].field_0xc8,*(uint *)&param_1[1].field_0xac
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc8 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)&param_1[1].field_0xcc,
                   *(uint *)&param_1[1].field_0xa4,0x3e4ccccd);
      }
      iVar6 = *(int *)&param_1[1].field_0x94;
      fVar20 = 0.7;
      iVar3 = *(int *)&param_1[1].field_0xd8;
    }
    core_charactr_cpp_FUN_0042fe90((CCharacter *)param_1,iVar3,iVar6,fVar20);
    if ((*(int *)&param_1[1].field_0xd0 < 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) != 0)) {
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) = 0;
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1[1].field_0xd4,*(uint *)&param_1[1].field_0xbc
                 ,0x3e4ccccd);
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) = 1;
    }
    core_charactr_cpp_FUN_0042fc90(param_1);
  }
  iVar3 = unkafter_demnfolk_cpp_FUN_004580a0(param_1,1);
  if (((iStack_9c != 0) && (-1 < iVar3)) &&
     (iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78), iVar3 != 0)) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x78))(iVar3,2);
    return;
  }
  return;
}
