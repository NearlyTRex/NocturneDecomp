// Name: core_carved.cpp_FUN_00425da0
// Address: 00425da0
// Address Range: [[00425da0, 0042777d]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_00425da0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_carved_cpp_FUN_00425da0(CEnemy *param_1,float param_2)

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
  CGore *pCVar17;
  CVector3f *pCVar18;
  CVector3f *direction;
  CMotionController *this_ptr_00;
  EBloodType EVar19;
  float fVar20;
  float fVar21;
  SDamageInfo aSStack_4d0 [4];
  uint uStack_4cc;
  CEnemy *pCStack_49c;
  CEnemy *pCStack_498;
  SDamageInfo aSStack_494 [4];
  float fStack_490;
  CEnemy *pCStack_460;
  CEnemy *pCStack_45c;
  char acStack_458 [32];
  float afStack_438 [6];
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float fStack_3f4;
  float fStack_3f0;
  float fStack_3ec;
  float fStack_3e8;
  float afStack_3e4 [3];
  float afStack_3d8 [6];
  float afStack_3c0 [6];
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float afStack_39c [3];
  float afStack_390 [6];
  byte auStack_378 [12];
  uint uStack_36c;
  float afStack_368 [4];
  float fStack_358;
  float fStack_354;
  float fStack_348;
  float afStack_344 [5];
  float fStack_330;
  float afStack_32c [5];
  CVector3f CStack_318;
  float fStack_30c;
  float afStack_308 [5];
  float fStack_2f4;
  float afStack_2e8 [4];
  float afStack_2d8 [2];
  byte auStack_2d0 [8];
  float afStack_2c8 [4];
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float afStack_294 [3];
  float fStack_288;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  CVector3f CStack_270;
  uint uStack_264;
  float afStack_260 [5];
  CVector3f CStack_24c;
  uint uStack_240;
  uint auStack_23c [5];
  byte auStack_228 [12];
  float fStack_21c;
  float afStack_218 [4];
  float fStack_208;
  float fStack_204;
  float afStack_200 [4];
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float afStack_1e0 [3];
  float fStack_1d4;
  float fStack_1cc;
  uint uStack_1c8;
  float afStack_1bc [3];
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float afStack_194 [5];
  float afStack_180 [3];
  CVector3f CStack_174;
  float fStack_168;
  float afStack_164 [4];
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  CVector3f CStack_144;
  float fStack_138;
  float afStack_134 [2];
  CVector3f CStack_12c;
  float fStack_120;
  float afStack_11c [4];
  float fStack_10c;
  float afStack_108 [4];
  float afStack_f8 [5];
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [5];
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  double dStack_84;
  double dStack_7c;
  int iStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  float fStack_44;
  float fStack_40;
  CMotionController *pCStack_3c;
  uint uStack_38;
  float fStack_34;
  int iStack_30;
  float fStack_2c;
  float *pfStack_28;
  CMotionController *pCStack_24;
  float *pfStack_20;
  byte *puStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar15 = 0;
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1[1].field_0x78);
    return;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x64 * 4) == 0) &&
     (iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar3 == 0)) {
    iVar6 = 1;
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar3 + 0x13,iVar6);
  }
  iStack_64 = *(int *)&param_1->field_0x26fc;
  if (iStack_64 != 0) {
    fStack_14 = *(float *)(iStack_64 + 0x154);
    core_skeleton_cpp_FUN_0054dcc0(&param_1->field_0x158,0);
    pfVar12 = afStack_200 + 0x11;
    afStack_1bc[0] = afStack_194[2];
    afStack_200[(uint)bVar15 * -2 + 0x12] = afStack_194[(uint)bVar15 * -2 + 3];
    afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
         afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    iVar3 = (**(code **)((int)fStack_14 + 0x110))(iStack_64,param_1,pfVar12);
    if (iVar3 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x26fc = 0;
    return;
  }
  if (0.0 < *(float *)&param_1[1].field_0x6c) {
    *(float *)&param_1[1].field_0x6c = *(float *)&param_1[1].field_0x6c - param_2;
  }
  pfStack_28 = afStack_39c;
  fStack_68 = param_2 * *(float *)&param_1->field_0xcdcc * *(float *)&param_1[1].field_0x84;
  pfStack_20 = afStack_3e4;
  pCStack_24 = (CMotionController *)&param_1->field_0x158;
LAB_00425e3e:
  if (0.0 < fStack_68) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(pCStack_24,&fStack_68);
    if (uVar4 < 0xb) {
      if (uVar4 < 5) {
        if (uVar4 == 2) {
          iVar3 = *(int *)&param_1[1].field_0x10;
          if (iVar3 != 0) {
            *(uint *)&param_1[1].field_0x10 = 0;
            iVar6 = core_carved_cpp_FUN_00428520(param_1,*(uint *)&param_1[1].field_0x14);
            if (-1 < iVar6) {
              core_charactr_cpp_FUN_004319d0(param_1,iVar6,iVar3,0x3e4ccccd,0);
              engine_console_cpp_FUN_00441ff0
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar3,iVar6);
            }
          }
        }
        else {
LAB_00425e7b:
          core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar4);
        }
        goto LAB_00425e3e;
      }
      if (uVar4 < 6) {
        iStack_18 = 1;
        if (*(int *)&param_1->field_0xcde4 != 0) {
          afStack_344[4] = 0x3FA66666;
          afStack_344[2] = 0.0;
          afStack_344[3] = 0.0;
          core_actor_cpp_FUN_00408b80(param_1,afStack_344 + 2);
          fStack_2a0 = fStack_288;
          afStack_2c8[(uint)bVar15 * -2 + 0xb] = afStack_2c8[(uint)bVar15 * -2 + 0x11];
          afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xc] =
               afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x12];
          iVar3 = *(int *)&param_1->field_0xcde4;
          afStack_368[2] = fStack_2a0 - *(float *)(iVar3 + 0x20);
          afStack_368[3] = fStack_29c - *(float *)(iVar3 + 0x24);
          fStack_358 = fStack_298 - *(float *)(iVar3 + 0x28);
          fStack_d8 = afStack_368[2];
          afStack_f8[(uint)bVar15 * -2 + 9] = afStack_368[(uint)bVar15 * -2 + 3];
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          uStack_d4 = 0;
          if (SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8) <= 1.0) {
            if (iStack_18 != 0) {
              afStack_108[0] = 0.0;
              afStack_108[2] = 0.0;
              afStack_108[1] = 4.0;
              core_actor_cpp_FUN_00408b80(param_1,afStack_11c + 5);
              CStack_c0._0_4_ = CStack_174._0_4_;
              *(uint *)((int)&CStack_c0 + (uint)bVar15 * -8 + 4) =
                   *(uint *)((int)&CStack_174 + (uint)bVar15 * -8 + 4);
              *(uint *)((int)&CStack_c0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)((int)&CStack_174 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              puVar10 = (uint *)(*(int *)&param_1->field_0xcde4 + 0x24 + (uint)bVar15 * -8);
              CStack_144._0_4_ = *(uint *)(*(int *)&param_1->field_0xcde4 + 0x20);
              *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + 4) = *puVar10;
              *(uint *)((int)&CStack_144 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   puVar10[(uint)bVar15 * -2 + 1];
              CStack_144._4_4_ = CStack_c0._4_4_;
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                        (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
              iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0053cbf0
                                (g_CDemonSetPtr,&CStack_c0,&CStack_144);
              if (iVar3 != 0) {
                iStack_18 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
            }
            if ((iStack_18 == 0) ||
               (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xec))
                                  (*(int *)&param_1->field_0xcde4,param_1,0), iVar3 != 0)) {
              if (iStack_18 == 0) {
                core_carved_cpp_FUN_00429090(param_1);
              }
              goto LAB_00425e3e;
            }
          }
        }
        core_carved_cpp_FUN_00429090(param_1);
        goto LAB_00425e3e;
      }
      if (uVar4 != 10) {
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar4);
        goto LAB_00425e3e;
      }
      if (*(int *)&param_1->field_0xcde4 != 0) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_24,*(uint *)&param_1[1].field_0x24);
        puVar10 = &uStack_36c;
        uStack_36c = afStack_32c[2];
        afStack_368[(uint)bVar15 * -2] = afStack_32c[(uint)bVar15 * -2 + 3];
        afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_32c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_actor_cpp_FUN_00408b80(param_1,puVar10);
        fStack_30c = fStack_354;
        afStack_308[(uint)bVar15 * -2] = afStack_368[(uint)bVar15 * -2 + 6];
        afStack_308[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_368[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        if (*(int *)&param_1[1].field_0x60 < 0) {
          fVar20 = fStack_30c - *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
          fVar21 = afStack_308[1] - *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
          if ((float)_DAT_005b7c87 < SQRT(fVar21 * fVar21 + fVar20 * fVar20)) {
            core_carved_cpp_FUN_00429090(param_1);
            goto LAB_00425e3e;
          }
        }
        else {
          pCVar5 = (CEnemy *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xcde4);
          if (pCVar5 != param_1) {
            core_carved_cpp_FUN_00429090(param_1);
            goto LAB_00425e3e;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_494);
        fStack_490 = (float)core_actor_cpp_FUN_0040ce40(0x41700000,0x41c80000);
        pCStack_460 = param_1;
        pCStack_45c = param_1;
        fStack_14 = fStack_490;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xcde4,aSStack_494);
        dStack_7c = (double)fStack_490;
        if (0.0 < dStack_7c) {
          fVar16 = (float10)fStack_490 * (float10)_DAT_005b7cbf * (float10)_DAT_005b7cc7;
          EVar19 = BLOOD_TYPE_RED;
          round();
          iStack_6c = (int)ROUND(fVar16);
          core_gore_cpp_FUN_004ce9c0
                    (g_CGorePtr,(CVector3f *)&fStack_30c,(CVector3f *)0x0,iStack_6c,EVar19);
        }
        iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                          (*(int *)&param_1->field_0xcde4);
        if (0 < iVar3) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf0))
                    (*(int *)&param_1->field_0xcde4);
          core_carved_cpp_FUN_00429090(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
        goto LAB_00425e3e;
      }
      core_carved_cpp_FUN_00429090(param_1);
    }
    else if (uVar4 < 0xc) {
      iVar3 = core_carved_cpp_FUN_00428520(param_1,2);
      if (iVar3 < 0) {
        _DAT_01d71de0 = "..\\core\\carved.cpp";
        _DAT_01d71de4 = 0x1e6;
        core_main_c_FUN_004e4330(&DAT_005b7b01);
      }
      if (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78));
        afStack_2e8[0] = 0.0;
        afStack_2e8[1] = 6.0;
        afStack_2e8[2] = 17.0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iVar3,afStack_308 + 8);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar4 < 0xd) {
      iStack_30 = core_carved_cpp_FUN_00428520(param_1,3);
      if (iStack_30 < 0) {
        _DAT_01d71de0 = "..\\core\\carved.cpp";
        _DAT_01d71de4 = 0x1fd;
        core_main_c_FUN_004e4330(&DAT_005b7b3c);
      }
      puStack_1c = &param_1->field_0x0 + iStack_30 * 0x78;
      if (*(int *)(puStack_1c + 0x25b0) != 0) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"%s tossing %s\n",param_1,*(int *)(puStack_1c + 0x25b0));
        fStack_1a4 = 0.0;
        fStack_1a0 = 0.0;
        fStack_19c = 1.0;
        if (*(int *)&param_1->field_0xcde4 != 0) {
          (**(code **)(*(int *)(*(int *)(puStack_1c + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(puStack_1c + 0x25b0));
          pfVar12 = afStack_3d8;
          pfVar14 = &fStack_3a8;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          afStack_164[2] = fStack_3a8 + *pfStack_28;
          afStack_164[3] = fStack_3a4 + pfStack_28[1];
          fStack_154 = fStack_3a0 + pfStack_28[2];
          fStack_cc = fStack_3a8 + *pfStack_28;
          afStack_f8[(uint)bVar15 * -2 + 0xc] = afStack_164[(uint)bVar15 * -2 + 3];
          puVar1 = puStack_1c;
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
               afStack_164[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          pfVar12 = afStack_200 + 8;
          fStack_150 = fStack_cc * _DAT_005b7cb7;
          fStack_14c = fStack_c8 * _DAT_005b7cb7;
          fStack_148 = fStack_c4 * _DAT_005b7cb7;
          afStack_1e0[0] = fStack_cc * _DAT_005b7cb7;
          afStack_200[(uint)bVar15 * -2 + 9] = afStack_164[(uint)bVar15 * -2 + 6];
          afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_164[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          core_actor_cpp_FUN_00408b80(*(uint *)(puVar1 + 0x25b0),pfVar12);
          afStack_108[3] = afStack_f8[2];
          afStack_f8[(uint)bVar15 * -2] = afStack_f8[(uint)bVar15 * -2 + 3];
          afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x1c))
                    (*(int *)&param_1->field_0xcde4);
          pfVar12 = afStack_390;
          pfVar14 = &fStack_3f0;
          for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_90 = fStack_3f0 + *pfStack_20;
          fStack_8c = fStack_3ec + pfStack_20[1];
          fStack_88 = fStack_3e8 + pfStack_20[2];
          afStack_2e8[3] = fStack_3f0 + *pfStack_20;
          afStack_2d8[(uint)bVar15 * -2] = afStack_b0[(uint)bVar15 * -2 + 9];
          afStack_2d8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          fStack_21c = afStack_2e8[3] * _DAT_005b7cb7;
          afStack_218[0] = afStack_2d8[0] * _DAT_005b7cb7;
          afStack_218[1] = afStack_2d8[1] * _DAT_005b7cb7;
          afStack_294[0] = afStack_2e8[3] * _DAT_005b7cb7;
          afStack_2c8[(uint)bVar15 * -2 + 0xe] = afStack_218[(uint)bVar15 * -2];
          afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xf] =
               afStack_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          core_actor_cpp_FUN_00408b80(*(uint *)&param_1->field_0xcde4,afStack_294);
          fStack_138 = afStack_308[2];
          afStack_134[(uint)bVar15 * -2] = afStack_308[(uint)bVar15 * -2 + 3];
          afStack_134[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_308[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_2b8 = fStack_138 - afStack_108[3];
          fStack_2b4 = afStack_134[0] - afStack_f8[0];
          fStack_2b0 = afStack_134[1] - afStack_f8[1];
          fStack_27c = fStack_138 - afStack_108[3];
          afStack_2c8[(uint)bVar15 * -2 + 0x14] = afStack_2c8[(uint)bVar15 * -2 + 5];
          afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x15] =
               afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 6];
          fStack_2c = SQRT(fStack_274 * fStack_274 +
                           fStack_27c * fStack_27c + fStack_278 * fStack_278);
          if (0.0 < fStack_2c) {
            core_actor_cpp_FUN_00408b40(param_1,&fStack_27c);
            afStack_218[2] = fStack_2f4;
            afStack_218[(uint)bVar15 * -2 + 3] = afStack_308[(uint)bVar15 * -2 + 6];
            afStack_218[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                 afStack_308[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            fVar20 = 1.0 / fStack_2c;
            fStack_1ec = afStack_218[2] * fVar20;
            fStack_1e8 = afStack_218[3] * fVar20;
            fStack_1e4 = fStack_208 * fVar20;
            fStack_120 = afStack_218[2] * fVar20;
            afStack_11c[(uint)bVar15 * -2] = afStack_200[(uint)bVar15 * -2 + 6];
            afStack_11c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            if (afStack_200 + 0x17 != &fStack_120) {
              fStack_1a4 = fStack_120;
              fStack_1a0 = afStack_11c[0];
              fStack_19c = afStack_11c[1];
            }
          }
        }
        fStack_1a4 = fStack_1a4 * _DAT_005b7cbb;
        fStack_19c = fStack_19c * _DAT_005b7cbb;
        fStack_1a0 = fStack_1a0 * _DAT_005b7cbb + _DAT_005b7ccf;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iStack_30,afStack_200 + 0x17);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"demn_taunt__???.wav");
      }
    }
    else if (uVar4 < 0xe) {
      if (*(CDoor **)&param_1[1].field_0x18 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00465060(*(CDoor **)&param_1[1].field_0x18,0.3);
        (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x154) + 0x2c))
                  (*(int *)&param_1[1].field_0x18,"zombie-bang-door?.wav");
        *(uint *)&param_1[1].field_0x18 = 0;
      }
    }
    else {
      if (uVar4 < 0x65) goto LAB_00425e7b;
      if (uVar4 < 0x66) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-?.wav");
      }
      else if (uVar4 == 0x29a) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_24,*(uint *)&param_1[1].field_0x24);
        pfVar12 = afStack_b0 + 2;
        afStack_b0[2] = (float)uStack_9c;
        afStack_b0[(uint)bVar15 * -2 + 3] = afStack_b0[(uint)bVar15 * -2 + 6];
        afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_actor_cpp_FUN_00408b80(param_1,pfVar12);
        EVar19 = BLOOD_TYPE_RED;
        iVar3 = 3;
        direction = (CVector3f *)0x0;
        pCVar18 = &CStack_318;
        CStack_318._0_4_ = CStack_270._0_4_;
        *(uint *)((int)&CStack_318 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_270 + (uint)bVar15 * -8 + 4);
        pCVar17 = g_CGorePtr;
        *(uint *)((int)&CStack_318 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_270 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004ce9c0(pCVar17,pCVar18,direction,iVar3,EVar19);
        iVar3 = core_actor_cpp_FUN_0040cf40(0.5);
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
        core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,uVar4);
      }
    }
    goto LAB_00425e3e;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x5c * 4) == 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x54 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x68 * 4) == 0)) &&
     ((0.0 <= *(float *)&param_1[1].field_0x70 &&
      (fVar20 = *(float *)&param_1[1].field_0x70 + param_2,
      *(float *)&param_1[1].field_0x70 = fVar20, (float)_DAT_005b7c7f <= fVar20)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_4d0);
    uStack_4cc = 0x461c3f9a;
    pCStack_49c = param_1;
    pCStack_498 = param_1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_4d0);
    *(uint *)&param_1[1].field_0x70 = 0xbf800000;
  }
  puVar1 = &param_1->field_0x158;
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070((CMotionController *)puVar1);
  iStack_48 = 0;
  iVar3 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar3 != 0) {
    uVar4 = *(uint *)&param_1->field_0x273c;
    if (uVar4 < 2) {
      if (uVar4 != 1) {
LAB_00426d3d:
        iVar6 = 1;
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
        goto LAB_004269b6;
      }
    }
    else if (2 < uVar4) {
      if (uVar4 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,0,1);
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
        goto LAB_004269b6;
      }
      goto LAB_00426d3d;
    }
    core_carved_cpp_FUN_00429090(param_1);
    goto LAB_004269b6;
  }
  fStack_34 = -1.0;
  fStack_40 = 0.3;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)puVar1);
  switch(*(uint *)(pSVar9 + 0x24)) {
  case 0:
  case 1:
  case 2:
    iVar3 = core_actor_cpp_FUN_0040cf40(param_2 * (float)_DAT_005b7caf);
    if (iVar3 == 0) {
      iVar3 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
      if (iVar3 != 0) {
        core_carved_cpp_FUN_00429090(param_1);
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
        core_carved_cpp_FUN_00429090(param_1);
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x78);
        if (iVar3 == 0) {
          if (*(int *)&param_1[1].field_0x20 == 0) {
            uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"demn_chase_???.wav");
            *(uint *)&param_1[1].field_0x78 = uVar8;
          }
          else {
            uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                              (param_1,"demn_chase_???.wav");
            *(uint *)&param_1[1].field_0x78 = uVar8;
          }
        }
      }
    }
    else {
      iVar6 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
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
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&param_1->field_0x158,iVar3,iVar6);
      }
    }
    else if (iVar3 == 0) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1[1].field_0x78);
      if (iVar3 == 0) {
        if (*(int *)&param_1[1].field_0x20 == 0) {
          pcVar11 = "demn_chase_???.wav";
        }
        else {
          pcVar11 = "demn_chase_???.wav";
        }
        uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar11);
        *(uint *)&param_1[1].field_0x78 = uVar8;
      }
      core_carved_cpp_FUN_00429090(param_1);
    }
    else {
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0x32);
      if (iVar3 == 1) {
        core_carved_cpp_FUN_00429090(param_1);
      }
      uStack_38 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x54 * 4) != 0)
      ;
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x5c * 4) != 0) {
        uStack_38 = uStack_38 + 1;
      }
      iVar3 = core_carved_cpp_FUN_00427bc0(param_1,param_2);
      if (iVar3 == 0) {
        fStack_58 = 0x3FA66666;
        iStack_50 = core_carved_cpp_FUN_00428520(param_1,1);
        if (((-1 < iStack_50) &&
            (iVar3 = *(int *)(&param_1->field_0x25b0 + iStack_50 * 0x78), iVar3 != 0)) &&
           (*(int *)&param_1[1].field_0x14 == 1)) {
          fStack_54 = 1.0;
          if (iVar3 != 0) {
            (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
            pfVar12 = afStack_438;
            pfVar14 = &fStack_408;
            for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
              *pfVar14 = *pfVar12;
              pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
              pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
            }
            core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_204);
            fStack_204 = fStack_3fc - fStack_408;
            afStack_200[0] = fStack_3f8 - fStack_404;
            afStack_200[1] = fStack_3f4 - fStack_400;
            fStack_2ac = fStack_3fc - fStack_408;
            afStack_2c8[(uint)bVar15 * -2 + 8] = afStack_200[(uint)bVar15 * -2];
            afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 9] =
                 afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            fStack_54 = fStack_2a4 * (float)_DAT_005b7c8f + 1.0;
          }
          fStack_58 = fStack_54;
        }
        fVar21 = 0.6981317;
        fVar20 = 0.9;
        auStack_228._0_4_ = 0;
        auStack_228._8_4_ = fStack_58;
        pCVar18 = (CVector3f *)auStack_228;
        auStack_228._4_4_ = 0;
        pCVar7 = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&param_1->field_0xcde4);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),pCVar7,pCVar18,
                           fVar20,fVar21);
        pCStack_3c = (CMotionController *)&param_1->field_0x158;
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1)
          ;
          iVar6 = 1;
          iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,iVar3,iVar6);
        }
        else if (iVar3 < 1) {
          iStack_4c = core_carved_cpp_FUN_00428520(param_1,*(uint *)&param_1[1].field_0x14);
          iVar3 = *(int *)&param_1->field_0xcde4;
          fStack_1b0 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_1ac = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_1a8 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
          afStack_11c[2] = fStack_1b0;
          afStack_11c[(uint)bVar15 * -2 + 3] = afStack_200[(uint)bVar15 * -2 + 0x15];
          afStack_11c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
          if (SQRT(fStack_10c * fStack_10c +
                   afStack_11c[2] * afStack_11c[2] + afStack_11c[3] * afStack_11c[3]) <
              (float)_DAT_005b7c9f) {
            core_actor_cpp_FUN_00408bf0(param_1,iVar3 + 0x20);
            afStack_180[0] = afStack_260[2];
            afStack_194[(uint)bVar15 * -2 + 6] = afStack_260[(uint)bVar15 * -2 + 3];
            afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                 afStack_260[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
            core_vecdir_cpp_FUN_00576250(afStack_194 + 5);
            uStack_264 = uStack_1c8;
            afStack_260[(uint)bVar15 * -2] = afStack_200[(uint)bVar15 * -2 + 0xf];
            afStack_260[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
            if ((((ABS(afStack_260[0]) < (float)_DAT_005b7ca7) && (-1 < iStack_4c)) &&
                ((uVar4 = *(uint *)&param_1[1].field_0x14, 1 < uVar4 &&
                 ((2 < uVar4 && (uVar4 == 3)))))) &&
               (*(int *)(&param_1->field_0x25b0 + iStack_4c * 0x78) != 0)) {
              engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s tossing\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_3c,0x1a,1);
            }
          }
        }
        else if (((0 < (int)uStack_38) && (*(float *)&param_1->field_0xcde0 <= 0.0)) &&
                (iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                                   (*(int *)&param_1->field_0xcde4), iVar3 == 0)) {
          iVar3 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                            (*(int *)&param_1->field_0xcde4);
          if (iVar3 == 0) {
            if ((iStack_50 < 0) || (*(int *)(&param_1->field_0x25b0 + iStack_50 * 0x78) == 0)) {
              iVar3 = 0xc;
              this_ptr_00 = (CMotionController *)&param_1->field_0x158;
            }
            else {
              iVar3 = 0xb;
              this_ptr_00 = pCStack_3c;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr_00,iVar3,1);
          }
          *(uint *)&param_1->field_0xcde0 = 0x3f4ccccd;
        }
      }
    }
    break;
  case 0xb:
    if (*(int *)&param_1->field_0xcde4 == 0) goto LAB_00427596;
    iVar3 = core_carved_cpp_FUN_00428520(param_1,1);
    if ((((iVar3 < 0) ||
         (iVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0x10c))
                            (*(int *)&param_1->field_0xcde4), 0 < iVar6)) ||
        (*(int *)(&param_1->field_0x25b0 + iVar3 * 0x78) == 0)) ||
       (iVar6 = (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                          (*(int *)&param_1->field_0xcde4), iVar6 != 0)) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up swing\n",param_1);
      core_carved_cpp_FUN_00429090(param_1);
    }
    else {
      iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78);
      fStack_44 = 1.0;
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
        pfVar12 = afStack_3c0;
        pfVar14 = &fStack_420;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar14 = *pfVar12;
          pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
          pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
        }
        core_actor_cpp_CVector3f_ctor_FUN_0040d220((CVector3f *)&fStack_348);
        fStack_348 = fStack_414 - fStack_420;
        afStack_344[0] = fStack_410 - fStack_41c;
        afStack_344[1] = fStack_40c - fStack_418;
        fStack_1d4 = fStack_414 - fStack_420;
        afStack_200[(uint)bVar15 * -2 + 0xc] = afStack_344[(uint)bVar15 * -2];
        afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
             afStack_344[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
        fStack_44 = fStack_1cc * (float)_DAT_005b7c8f + 1.0;
      }
      fStack_34 = fStack_44;
      fStack_5c = core_motion_cpp_FUN_004fc930((CMotionController *)&param_1->field_0x158);
      dStack_84 = (double)fStack_5c;
      fStack_14 = fStack_5c;
      if ((1.0 <= dStack_84) && (dStack_84 <= _DAT_005b7c97)) {
        iStack_48 = 1;
      }
    }
    break;
  case 0xc:
    iVar3 = *(int *)&param_1->field_0xcde4;
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3), iVar3 < 1))
    {
      pCVar5 = (CEnemy *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xf4))
                         (*(int *)&param_1->field_0xcde4);
      if (pCVar5 == (CEnemy *)0x0) {
        fStack_40 = 3.0;
        fStack_34 = 0x3FA66666;
      }
      else if (pCVar5 != param_1) {
        core_carved_cpp_FUN_00429090(param_1);
      }
      iVar3 = *(int *)&param_1->field_0xcde4;
      fStack_330 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
      afStack_32c[0] = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
      afStack_32c[1] = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
      afStack_2c8[1] = fStack_330;
      afStack_2c8[(uint)bVar15 * -2 + 2] = afStack_32c[(uint)bVar15 * -2];
      afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 3] =
           afStack_32c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
      if (SQRT(afStack_2c8[3] * afStack_2c8[3] +
               afStack_2c8[1] * afStack_2c8[1] + afStack_2c8[2] * afStack_2c8[2]) <=
          (float)_DAT_005b7c87) break;
    }
LAB_00427596:
    core_carved_cpp_FUN_00429090(param_1);
    break;
  case 0x16:
    if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
      core_skeleton_cpp_FUN_0054dbd0(puVar1,0);
      puVar10 = &uStack_240;
      uStack_240 = auStack_23c[2];
      auStack_23c[(uint)bVar15 * -2] = auStack_23c[(uint)bVar15 * -2 + 3];
      auStack_23c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           auStack_23c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      core_actor_cpp_FUN_00408b80(param_1,puVar10);
      EVar19 = BLOOD_TYPE_RED;
      pCVar18 = &CStack_24c;
      CStack_24c._0_4_ = CStack_12c._0_4_;
      *(uint *)((int)&CStack_24c + (uint)bVar15 * -8 + 4) =
           *(uint *)((int)&CStack_12c + (uint)bVar15 * -8 + 4);
      pCVar17 = g_CGorePtr;
      *(uint *)((int)&CStack_24c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           *(uint *)((int)&CStack_12c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
      core_gore_cpp_FUN_004cec40(pCVar17,pCVar18,EVar19);
      this_ptr = 0x01C6E360;
      *(uint *)&param_1->field_0xcdd0 = 1;
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(this_ptr,"CarvedDead");
    }
  }
  if ((0.0 <= fStack_34) && (*(int *)&param_1->field_0xcde4 != 0)) {
    *(float *)&param_1->field_0x2524 = fStack_40 * *(float *)&param_1->field_0xcdcc * param_2;
    core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
    fVar21 = 0.7853982;
    fVar20 = 3.0;
    auStack_378._0_4_ = 0;
    auStack_378._8_4_ = fStack_34;
    pCVar18 = (CVector3f *)auStack_378;
    auStack_378._4_4_ = 0;
    pCVar7 = (CPathMap *)
             (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                       (*(int *)&param_1->field_0xcde4);
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                      ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),
                       pCVar7,pCVar18,fVar20,fVar21);
    if (iVar3 != 1) {
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s giving up attack\n",param_1);
      core_carved_cpp_FUN_00429090(param_1);
      *(uint *)&param_1->field_0x2508 = 0;
    }
  }
LAB_004269b6:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)&param_1->field_0xcde4;
    if ((iVar3 != 0) &&
       (pCVar5 = (CEnemy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar5 == param_1))
    {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_168 = *(float *)&param_1->field_0x2518 * param_2;
    afStack_164[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_164[1] = *(float *)&param_1->field_0x2520 * param_2;
    afStack_200[2] = fStack_168;
    afStack_200[(uint)bVar15 * -2 + 3] = afStack_164[(uint)bVar15 * -2];
    afStack_200[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
         afStack_164[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_b4 = afStack_200[2] + *(float *)&param_1->field_0x250c;
    afStack_b0[0] = afStack_200[3] + *(float *)&param_1->field_0x2510;
    afStack_b0[1] = fStack_1f0 + *(float *)&param_1->field_0x2514;
    fStack_e4 = fStack_b4;
    afStack_f8[(uint)bVar15 * -2 + 6] = afStack_b0[(uint)bVar15 * -2];
    afStack_f8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
         afStack_b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    fStack_198 = fStack_e4 + *(float *)&param_1->field_0x249c;
    afStack_194[0] = fStack_e0 + *(float *)&param_1->field_0x24a0;
    afStack_194[1] = fStack_dc + *(float *)&param_1->field_0x24a4;
    auStack_2d0._0_4_ = fStack_198;
    *(float *)(auStack_2d0 + (uint)bVar15 * -8 + 4) = afStack_194[(uint)bVar15 * -2];
    *(float *)(auStack_2d0 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
         afStack_194[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)auStack_2d0);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  if (*(int *)&param_1->field_0xcdd0 == 0) {
    iVar3 = *(int *)&param_1[1].field_0x64;
    if (*(int *)(&param_1->field_0x2298 + iVar3 * 4) == 0) {
      iVar6 = *(int *)&param_1[1].field_0x4c;
      fVar20 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1[1].field_0x50,*(uint *)&param_1[1].field_0x38
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x50 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)&param_1[1].field_0x54,
                   *(uint *)&param_1[1].field_0x30,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_0042fdc0
                (param_1,*(uint *)&param_1[1].field_0x58,*(uint *)&param_1[1].field_0x3c
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0x58 * 4) != 0) {
        core_charactr_cpp_FUN_0042fdc0
                  (param_1,*(uint *)&param_1[1].field_0x5c,
                   *(uint *)&param_1[1].field_0x34,0x3e4ccccd);
      }
      iVar6 = *(int *)&param_1[1].field_0x24;
      fVar20 = 0.7;
      iVar3 = *(int *)&param_1[1].field_0x68;
    }
    core_charactr_cpp_FUN_0042fe90((CCharacter *)param_1,iVar3,iVar6,fVar20);
    core_charactr_cpp_FUN_0042fc90(param_1);
  }
  iVar3 = core_carved_cpp_FUN_00428520(param_1,1);
  if (((iStack_48 != 0) && (-1 < iVar3)) &&
     (iVar3 = *(int *)(&param_1->field_0x25b0 + iVar3 * 0x78), iVar3 != 0)) {
    (**(code **)(*(int *)(iVar3 + 0x154) + 0x78))(iVar3,2);
    return;
  }
  return;
}
