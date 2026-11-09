// Name: core_zombie.cpp_FUN_005bafb0
// Address: 005bafb0
// Address Range: [[005bafb0, 005bd114]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_005bafb0(CZombie *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005bccf8) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_005bafb0(CZombie *param_1,float param_2)

{
  byte *puVar1;
  byte *puVar2;
  char cVar3;
  int iVar4;
  CMotionList *pCVar5;
  uint uVar6;
  CZombie *pCVar7;
  int iVar8;
  SMotion *pSVar9;
  CPathMap *pCVar10;
  uint uVar11;
  uint *puVar12;
  float *pfVar13;
  char *pcVar14;
  float *pfVar15;
  byte bVar16;
  float10 fVar17;
  float10 fVar18;
  float afStackY_1488 [912];
  CGore *pCVar19;
  CVector3f *pCVar20;
  CVector3f *direction;
  CMotionController *this_ptr;
  char *pcVar21;
  EBloodType EVar22;
  float fVar23;
  float fVar24;
  SDamageInfo aSStack_628 [4];
  float fStack_624;
  CZombie *pCStack_5f4;
  CZombie *pCStack_5f0;
  SDamageInfo aSStack_5ec [4];
  uint uStack_5e8;
  CZombie *pCStack_5b8;
  CZombie *pCStack_5b4;
  char acStack_5b0 [32];
  float afStack_590 [6];
  float fStack_578;
  float fStack_574;
  float fStack_570;
  float afStack_56c [3];
  float afStack_560 [6];
  float fStack_548;
  float fStack_544;
  float fStack_540;
  float fStack_53c;
  float fStack_538;
  float fStack_534;
  float afStack_530 [6];
  float fStack_518;
  float fStack_514;
  float fStack_510;
  float afStack_50c [3];
  float fStack_500;
  float fStack_4fc;
  float fStack_4f8;
  float fStack_4f4;
  float fStack_4f0;
  float fStack_4ec;
  float afStack_4e8 [6];
  float afStack_4d0 [6];
  float fStack_4b8;
  float fStack_4b4;
  float fStack_4b0;
  float fStack_4ac;
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float afStack_49c [4];
  float fStack_48c;
  float fStack_488;
  float fStack_484;
  float fStack_480;
  uint uStack_47c;
  float fStack_478;
  float fStack_470;
  float fStack_464;
  uint uStack_458;
  float fStack_44c;
  uint uStack_448;
  float fStack_444;
  float afStack_440 [3];
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  CVector3f CStack_41c;
  float fStack_410;
  float afStack_40c [4];
  float fStack_3fc;
  float afStack_3f8 [3];
  float fStack_3ec;
  float afStack_3e8 [5];
  uint uStack_3d4;
  float fStack_3c8;
  float fStack_3bc;
  float afStack_3b8 [5];
  CVector3f CStack_3a4;
  uint uStack_398;
  float afStack_394 [4];
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
  float fStack_33c;
  float fStack_338;
  float fStack_32c;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  uint uStack_308;
  float fStack_2fc;
  float fStack_2f0;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float afStack_2d8 [4];
  float afStack_2c8 [2];
  byte auStack_2c0 [12];
  float fStack_2b4;
  float afStack_2b0 [2];
  byte auStack_2a8 [4];
  float afStack_2a4 [5];
  float afStack_290 [3];
  float fStack_284;
  float fStack_278;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  float afStack_238 [4];
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  CVector3f CStack_20c;
  CVector3f CStack_200;
  float fStack_1f4;
  float afStack_1f0 [5];
  uint uStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  uint auStack_1a0 [3];
  uint uStack_194;
  CVector3f CStack_188;
  float fStack_17c;
  float afStack_178 [5];
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  float afStack_158 [3];
  float afStack_14c [3];
  CVector3f CStack_140;
  CVector3f CStack_134;
  float fStack_128;
  float afStack_124 [2];
  byte auStack_11c [8];
  float fStack_114;
  uint uStack_110;
  float afStack_10c [5];
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  uint auStack_ec [3];
  byte auStack_e0 [12];
  float fStack_d4;
  float afStack_d0 [2];
  double dStack_c8;
  double dStack_b8;
  int iStack_ac;
  byte *puStack_a8;
  int iStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  int iStack_88;
  float *pfStack_84;
  uint uStack_7c;
  float fStack_78;
  int iStack_74;
  int iStack_70;
  float *pfStack_6c;
  float fStack_68;
  float *pfStack_64;
  float fStack_60;
  int iStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  CMotionController *pCStack_38;
  uint *puStack_34;
  CMotionController *pCStack_30;
  int iStack_2c;
  int iStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar16 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = 0;
  pcVar21 = "CHASE_2";
  iStack_54 = 0;
  pCVar5 = core_motion_cpp_FUN_00524a00((CMotionController *)&param_1->field_0x158);
  iVar4 = core_motion_cpp_FUN_00524150(pCVar5,pcVar21,iVar4);
  if (iVar4 == 0x16) {
    iStack_54 = 1;
  }
  iStack_70 = *(int *)&param_1->field_0x26fc;
  if (iStack_70 != 0) {
    fStack_14 = *(float *)(iStack_70 + 0x154);
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    pfVar13 = afStack_358 + 0x23;
    afStack_2d8[3] = afStack_2a4[2];
    afStack_2c8[(uint)bVar16 * -2] = afStack_2a4[(uint)bVar16 * -2 + 3];
    afStack_2c8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
    iVar4 = (**(code **)((int)fStack_14 + 0x110))(iStack_70,param_1,pfVar13);
    if (iVar4 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x26fc = 0;
    return;
  }
  if (0.0 < *(float *)&param_1->field_0xc340) {
    *(float *)&param_1->field_0xc340 = *(float *)&param_1->field_0xc340 - param_2;
  }
  pfStack_6c = afStack_56c;
  fStack_9c = param_2 * *(float *)&param_1->field_0xc1d0;
  pfStack_64 = afStack_50c;
  pCStack_30 = (CMotionController *)&param_1->field_0x158;
LAB_005bb060:
  if (0.0 < fStack_9c) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_30,&fStack_9c);
    if (uVar6 < 0xb) {
      if (4 < uVar6) {
        if (5 < uVar6) {
          if (uVar6 == 10) {
            if (*(int *)&param_1->field_0xc1e8 == 0) {
              core_zombie_cpp_FUN_005bed80(param_1);
              goto LAB_005bb060;
            }
            core_skeleton_cpp_FUN_00569040(pCStack_30,*(uint *)&param_1->field_0xc2f8);
            pfVar13 = afStack_178 + 0xb;
            afStack_14c[0] = (float)uStack_3d4;
            afStack_178[(uint)bVar16 * -2 + 0xc] = afStack_3e8[(uint)bVar16 * -2 + 6];
            afStack_178[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                 afStack_3e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
            core_actor_cpp_FUN_00408b40(param_1,pfVar13);
            fStack_1b8 = fStack_3c8;
            afStack_1b4[(uint)bVar16 * -2] = afStack_3e8[(uint)bVar16 * -2 + 9];
            afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_3e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
            if (*(int *)&param_1->field_0xc334 < 0) {
              fVar23 = fStack_1b8 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
              fVar24 = afStack_1b4[1] - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
              if ((float)_DAT_005fa78c < SQRT(fVar24 * fVar24 + fVar23 * fVar23)) {
                core_zombie_cpp_FUN_005bed80(param_1);
                goto LAB_005bb060;
              }
            }
            else {
              pCVar7 = (CZombie *)
                       (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                 (*(int *)&param_1->field_0xc1e8);
              if (pCVar7 != param_1) {
                core_zombie_cpp_FUN_005bed80(param_1);
                goto LAB_005bb060;
              }
            }
            core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_628);
            fStack_624 = (float)core_actor_cpp_FUN_0040cc00(0x41700000,0x41c80000);
            pCStack_5f4 = param_1;
            pCStack_5f0 = param_1;
            fStack_14 = fStack_624;
            (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                      (*(int *)&param_1->field_0xc1e8,aSStack_628);
            dStack_b8 = (double)fStack_624;
            if (0.0 < dStack_b8) {
              fVar17 = (float10)fStack_624 * (float10)_DAT_005fa754 * (float10)_DAT_005fa75c;
              EVar22 = BLOOD_TYPE_RED;
              round();
              iStack_3c = (int)ROUND(fVar17);
              core_gore_cpp_FUN_004e6060
                        (g_CGorePtr,(CVector3f *)&fStack_1b8,(CVector3f *)0x0,iStack_3c,EVar22);
            }
            iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                              (*(int *)&param_1->field_0xc1e8);
            if (0 < iVar4) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
                        (*(int *)&param_1->field_0xc1e8);
              core_zombie_cpp_FUN_005bed80(param_1);
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"ghoul-eat-?.wav");
            goto LAB_005bb060;
          }
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar6);
          goto LAB_005bb060;
        }
        iStack_50 = 1;
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          afStack_3f8[2] = 0x3FA66666;
          afStack_3f8[0] = 0.0;
          afStack_3f8[1] = 0.0;
          core_actor_cpp_FUN_00408b40(param_1,afStack_40c + 5);
          fStack_380 = fStack_464;
          afStack_394[(uint)bVar16 * -2 + 6] = afStack_49c[(uint)bVar16 * -2 + 0xf];
          afStack_394[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
               afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
          iVar4 = *(int *)&param_1->field_0xc1e8;
          fStack_f8 = fStack_380 - *(float *)(iVar4 + 0x20);
          fStack_f4 = fStack_37c - *(float *)(iVar4 + 0x24);
          fStack_f0 = fStack_378 - *(float *)(iVar4 + 0x28);
          fStack_44c = fStack_f8;
          afStack_49c[(uint)bVar16 * -2 + 0x15] = afStack_10c[(uint)bVar16 * -2 + 6];
          afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16] =
               afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
          uStack_448 = 0;
          if (SQRT(fStack_444 * fStack_444 + fStack_44c * fStack_44c) <= 1.0) {
            if (iStack_50 != 0) {
              afStack_2d8[0] = 0.0;
              afStack_2d8[2] = 0.0;
              afStack_2d8[1] = 4.0;
              core_actor_cpp_FUN_00408b40(param_1,afStack_358 + 0x20);
              CStack_3a4._0_4_ = CStack_200._0_4_;
              *(uint *)((int)&CStack_3a4 + (uint)bVar16 * -8 + 4) =
                   *(uint *)((int)&CStack_200 + (uint)bVar16 * -8 + 4);
              *(uint *)((int)&CStack_3a4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                   *(uint *)((int)&CStack_200 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
              puVar12 = (uint *)(*(int *)&param_1->field_0xc1e8 + 0x24 + (uint)bVar16 * -8);
              CStack_20c._0_4_ = *(uint *)(*(int *)&param_1->field_0xc1e8 + 0x20);
              *(uint *)((int)&CStack_20c + (uint)bVar16 * -8 + 4) = *puVar12;
              *(uint *)((int)&CStack_20c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
                   puVar12[(uint)bVar16 * -2 + 1];
              CStack_20c._4_4_ = CStack_3a4._4_4_;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                        (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
              iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                                (g_CDemonSetPtr,&CStack_3a4,&CStack_20c);
              if (iVar4 != 0) {
                iStack_50 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            }
            if ((iStack_50 == 0) ||
               (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xec))
                                  (*(int *)&param_1->field_0xc1e8,param_1,0), iVar4 != 0)) {
              if (iStack_50 == 0) {
                core_zombie_cpp_FUN_005bed80(param_1);
              }
              goto LAB_005bb060;
            }
          }
        }
        core_zombie_cpp_FUN_005bed80(param_1);
        goto LAB_005bb060;
      }
      if (uVar6 == 2) {
        iVar4 = *(int *)&param_1->field_0xc278;
        if (iVar4 != 0) {
          *(uint *)&param_1->field_0xc278 = 0;
          iVar8 = core_zombie_cpp_FUN_005bdec0(param_1,*(int *)&param_1->field_0xc27c);
          if (-1 < iVar8) {
            core_charactr_cpp_FUN_004325b0(param_1,iVar8,iVar4,0x3e4ccccd,0);
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar4,iVar8);
          }
        }
      }
      else {
LAB_005bb09d:
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar6);
      }
    }
    else if (uVar6 < 0xc) {
      iVar4 = core_zombie_cpp_FUN_005bdec0(param_1,2);
      if (iVar4 < 0) {
        _DAT_01d1d400 = "..\\core\\zombie.cpp";
        _DAT_01d1d404 = 0x1ef;
        core_main_c_FUN_005030e0(&DAT_005fa586);
      }
      if (*(int *)(&param_1->field_0x25b0 + iVar4 * 0x78) != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x25b0 + iVar4 * 0x78));
        afStack_3b8[2] = 0.0;
        afStack_3b8[3] = 6.0;
        afStack_3b8[4] = 17.0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iVar4,afStack_3b8 + 2);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar6 < 0xd) {
      iStack_ac = core_zombie_cpp_FUN_005bdec0(param_1,3);
      if (iStack_ac < 0) {
        _DAT_01d1d400 = "..\\core\\zombie.cpp";
        _DAT_01d1d404 = 0x206;
        core_main_c_FUN_005030e0(&DAT_005fa5b9);
      }
      puStack_a8 = &param_1->field_0x0 + iStack_ac * 0x78;
      if (*(int *)(puStack_a8 + 0x25b0) != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s tossing %s\n",param_1,*(int *)(puStack_a8 + 0x25b0));
        fStack_368 = 0.0;
        fStack_364 = 0.0;
        fStack_360 = 1.0;
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          (**(code **)(*(int *)(*(int *)(puStack_a8 + 0x25b0) + 0x154) + 0x1c))
                    (*(int *)(puStack_a8 + 0x25b0));
          pfVar13 = afStack_530;
          pfVar15 = &fStack_578;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar15 = *pfVar13;
            pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
            pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
          }
          fStack_260 = fStack_578 + *pfStack_6c;
          fStack_25c = fStack_574 + pfStack_6c[1];
          fStack_258 = fStack_570 + pfStack_6c[2];
          fStack_1d0 = fStack_578 + *pfStack_6c;
          afStack_1f0[(uint)bVar16 * -2 + 9] = afStack_2a4[(uint)bVar16 * -2 + 0x12];
          puVar2 = puStack_a8;
          afStack_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
               afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
          pfVar13 = afStack_2a4 + 5;
          fStack_218 = fStack_1d0 * _DAT_005fa74c;
          fStack_214 = fStack_1cc * _DAT_005fa74c;
          fStack_210 = fStack_1c8 * _DAT_005fa74c;
          afStack_290[0] = fStack_1d0 * _DAT_005fa74c;
          afStack_2a4[(uint)bVar16 * -2 + 6] = afStack_238[(uint)bVar16 * -2 + 9];
          afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
               afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
          core_actor_cpp_FUN_00408b40(*(uint *)(puVar2 + 0x25b0),pfVar13);
          fStack_23c = fStack_3ec;
          afStack_238[(uint)bVar16 * -2] = afStack_3e8[(uint)bVar16 * -2];
          afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_3e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x1c))
                    (*(int *)&param_1->field_0xc1e8);
          pfVar13 = afStack_590;
          pfVar15 = &fStack_518;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar15 = *pfVar13;
            pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
            pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
          }
          afStack_1b4[2] = fStack_518 + *pfStack_64;
          afStack_1b4[3] = fStack_514 + pfStack_64[1];
          fStack_1a4 = fStack_510 + pfStack_64[2];
          fStack_128 = fStack_518 + *pfStack_64;
          afStack_124[(uint)bVar16 * -2] = afStack_1b4[(uint)bVar16 * -2 + 3];
          afStack_124[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
          fStack_164 = fStack_128 * _DAT_005fa74c;
          fStack_160 = afStack_124[0] * _DAT_005fa74c;
          fStack_15c = afStack_124[1] * _DAT_005fa74c;
          fStack_410 = fStack_128 * _DAT_005fa74c;
          afStack_40c[(uint)bVar16 * -2] = afStack_178[(uint)bVar16 * -2 + 6];
          afStack_40c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
               afStack_178[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
          core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0xc1e8,&fStack_410);
          afStack_394[2] = fStack_338;
          afStack_394[(uint)bVar16 * -2 + 3] = afStack_358[(uint)bVar16 * -2 + 9];
          afStack_394[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
               afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
          fStack_1c4 = afStack_394[2] - fStack_23c;
          fStack_1c0 = afStack_394[3] - afStack_238[0];
          fStack_1bc = fStack_384 - afStack_238[1];
          fStack_314 = afStack_394[2] - fStack_23c;
          afStack_358[(uint)bVar16 * -2 + 0x12] = afStack_1f0[(uint)bVar16 * -2 + 0xc];
          afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13] =
               afStack_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
          fStack_60 = SQRT(fStack_30c * fStack_30c +
                           fStack_314 * fStack_314 + fStack_310 * fStack_310);
          if (0.0 < fStack_60) {
            core_actor_cpp_FUN_00408b00(param_1,afStack_358 + 0x11);
            fStack_4a0 = fStack_470;
            afStack_49c[(uint)bVar16 * -2] = afStack_49c[(uint)bVar16 * -2 + 0xc];
            afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
                 afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
            fVar23 = 1.0 / fStack_60;
            fStack_35c = fStack_4a0 * fVar23;
            afStack_358[0] = afStack_49c[0] * fVar23;
            afStack_358[1] = afStack_49c[1] * fVar23;
            fStack_434 = fStack_4a0 * fVar23;
            afStack_49c[(uint)bVar16 * -2 + 0x1b] = afStack_358[(uint)bVar16 * -2];
            afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
                 afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            if (afStack_394 + 0xb != afStack_49c + 0x1a) {
              fStack_368 = fStack_434;
              fStack_364 = fStack_430;
              fStack_360 = fStack_42c;
            }
          }
        }
        fStack_368 = fStack_368 * _DAT_005fa750;
        fStack_360 = fStack_360 * _DAT_005fa750;
        fStack_364 = fStack_364 * _DAT_005fa750 + _DAT_005fa784;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iStack_ac,afStack_394 + 0xb);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar6 < 0xe) {
      if (*(CDoor **)&param_1->field_0xc284 != (CDoor *)0x0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00478820(*(CDoor **)&param_1->field_0xc284,0.3);
        (**(code **)(*(int *)(*(int *)&param_1->field_0xc284 + 0x154) + 0x2c))
                  (*(int *)&param_1->field_0xc284,"zombie-bang-door?.wav");
        *(uint *)&param_1->field_0xc284 = 0;
      }
    }
    else {
      if (uVar6 < 0x65) goto LAB_005bb09d;
      if (uVar6 < 0x66) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-?.wav");
      }
      else if (uVar6 == 0x29a) {
        core_skeleton_cpp_FUN_00569040(pCStack_30,*(uint *)&param_1->field_0xc2f8);
        puVar12 = auStack_1a0;
        auStack_1a0[0] = uStack_194;
        afStack_1b4[(uint)bVar16 * -2 + 6] = afStack_1b4[(uint)bVar16 * -2 + 9];
        afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
             afStack_1b4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
        core_actor_cpp_FUN_00408b40(param_1,puVar12);
        EVar22 = BLOOD_TYPE_RED;
        iVar4 = 3;
        direction = (CVector3f *)0x0;
        pCVar20 = &CStack_134;
        CStack_134._0_4_ = CStack_41c._0_4_;
        *(uint *)((int)&CStack_134 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_41c + (uint)bVar16 * -8 + 4);
        pCVar19 = g_CGorePtr;
        *(uint *)((int)&CStack_134 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_41c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_gore_cpp_FUN_004e6060(pCVar19,pCVar20,direction,iVar4,EVar22);
        iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
        if (iVar4 == 0) {
          pcVar21 = "ghoul-dig-?.wav";
        }
        else {
          pcVar21 = "ghoul-eat-?.wav";
        }
        pcVar14 = acStack_5b0;
        do {
          cVar3 = *pcVar21;
          *pcVar14 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar21[1];
          pcVar21 = pcVar21 + 2;
          pcVar14[1] = cVar3;
          pcVar14 = pcVar14 + 2;
        } while (cVar3 != '\0');
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,acStack_5b0);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar6);
      }
    }
    goto LAB_005bb060;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  if ((((*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc330 * 4) == 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc328 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc33c * 4) == 0)) &&
     ((0.0 <= *(float *)&param_1->field_0xc344 &&
      (fVar23 = *(float *)&param_1->field_0xc344 + param_2,
      *(float *)&param_1->field_0xc344 = fVar23, (float)_DAT_005fa70c <= fVar23)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_5ec);
    uStack_5e8 = 0x461c3f9a;
    pCStack_5b8 = param_1;
    pCStack_5b4 = param_1;
    (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1,aSStack_5ec);
    *(uint *)&param_1->field_0xc344 = 0xbf800000;
  }
  puVar2 = &param_1->field_0x158;
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)puVar2);
  iVar4 = *(int *)(pSVar9 + 0x24);
  iStack_a0 = 0;
  iVar8 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar8 == 0) {
    fStack_98 = -1.0;
    fStack_20 = 0.3;
    pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)puVar2);
    uVar6 = *(uint *)(pSVar9 + 0x24);
    if (uVar6 < 8) {
      if (uVar6 == 0) {
        iVar4 = core_actor_cpp_FUN_0040cd00(param_2 * (float)_DAT_005fa744);
        if (iVar4 != 0) {
          iVar4 = 0;
          pcVar21 = "pickass";
          pCVar5 = core_motion_cpp_FUN_00524a00((CMotionController *)&param_1->field_0x158);
          iVar4 = core_motion_cpp_FUN_005240c0(pCVar5,pcVar21,iVar4);
          if (-1 < iVar4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0x10,1);
            goto LAB_005bbea7;
          }
        }
        iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
        if (iVar4 != 0) {
          core_zombie_cpp_FUN_005bed80(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if ((*(int *)&param_1->field_0xc1e8 == 0) && (iStack_54 != 0)) {
          iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
          if (iVar4 == 0) goto LAB_005bbea7;
          *(uint *)&g_CGamePtr->field_0x23c = 1;
          *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        }
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          core_zombie_cpp_FUN_005bed80(param_1);
          iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc34c);
          if (iVar4 == 0) {
            if (*(int *)&param_1->field_0xc2f4 == 0) {
              uVar11 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                 (param_1,"zom-a0?.wav");
              *(uint *)&param_1->field_0xc34c = uVar11;
            }
            else {
              uVar11 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                 (param_1,"f-zombie-alert?.wav");
              *(uint *)&param_1->field_0xc34c = uVar11;
            }
          }
        }
      }
      else if (uVar6 < 2) {
        iVar4 = *(int *)&param_1->field_0xc1e8;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (((*(int *)&param_1->field_0xc1e8 == 0) && (iStack_54 != 0)) &&
           (iVar8 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
           iVar8 = (**(code **)(*(int *)(iVar8 + 0x154) + 0x10c))(iVar8), iVar8 != 0)) {
          *(uint *)&g_CGamePtr->field_0x23c = 1;
          *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        }
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          iVar4 = core_enemy_cpp_FUN_004a0fe0((CEnemy *)param_1,param_2);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0,1);
          }
        }
        else if (iVar4 == 0) {
          iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1->field_0xc34c);
          if (iVar4 == 0) {
            if (*(int *)&param_1->field_0xc2f4 == 0) {
              pcVar21 = "zom-a0?.wav";
            }
            else {
              pcVar21 = "f-zombie-alert?.wav";
            }
            uVar11 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,pcVar21);
            *(uint *)&param_1->field_0xc34c = uVar11;
          }
LAB_005bc5bb:
          core_zombie_cpp_FUN_005bed80(param_1);
        }
        else {
          uStack_7c = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc328 * 4)
                            != 0);
          if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc330 * 4) != 0) {
            uStack_7c = uStack_7c + 1;
          }
          *(uint *)&param_1->field_0x24a4 = 0;
          *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
          *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
          iVar4 = core_zombie_cpp_FUN_005bd560(param_1,param_2);
          if (iVar4 == 0) {
            fStack_78 = 0x3FA66666;
            iStack_74 = core_zombie_cpp_FUN_005bdec0(param_1,1);
            if (((-1 < iStack_74) &&
                (iVar4 = *(int *)(&param_1->field_0x25b0 + iStack_74 * 0x78), iVar4 != 0)) &&
               (*(int *)&param_1->field_0xc27c == 1)) {
              fStack_68 = 1.0;
              if (iVar4 != 0) {
                (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
                pfVar13 = afStack_4d0;
                pfVar15 = &fStack_548;
                for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *pfVar15 = *pfVar13;
                  pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
                  pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
                }
                core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)&fStack_3bc);
                fStack_3bc = fStack_53c - fStack_548;
                afStack_3b8[0] = fStack_538 - fStack_544;
                afStack_3b8[1] = fStack_534 - fStack_540;
                afStack_238[2] = fStack_53c - fStack_548;
                afStack_238[(uint)bVar16 * -2 + 3] = afStack_3b8[(uint)bVar16 * -2];
                afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                     afStack_3b8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
                fStack_68 = fStack_228 * (float)_DAT_005fa71c + 1.0;
              }
              fStack_78 = fStack_68;
            }
            fVar24 = 0.34906584;
            fVar23 = 1.1;
            auStack_2c0._0_4_ = 0;
            auStack_2c0._8_4_ = fStack_78;
            pCVar20 = (CVector3f *)auStack_2c0;
            auStack_2c0._4_4_ = 0;
            pCVar10 = (CPathMap *)
                      (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                                (*(int *)&param_1->field_0xc1e8);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                              ((CCharacter *)param_1,
                               (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar10,pCVar20,
                               fVar23,fVar24);
            pCStack_38 = (CMotionController *)&param_1->field_0x158;
            if (iVar4 < 0) {
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_38,0,1);
            }
            else if (iVar4 < 1) {
              iStack_5c = core_zombie_cpp_FUN_005bdec0(param_1,*(int *)&param_1->field_0xc27c);
              iVar4 = *(int *)&param_1->field_0xc1e8;
              afStack_49c[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
              afStack_49c[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
              fStack_48c = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
              fStack_224 = afStack_49c[2];
              afStack_238[(uint)bVar16 * -2 + 6] = afStack_49c[(uint)bVar16 * -2 + 3];
              afStack_238[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                   afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
              if (SQRT(fStack_21c * fStack_21c + fStack_224 * fStack_224 + fStack_220 * fStack_220)
                  < (float)_DAT_005fa734) {
                core_actor_cpp_FUN_00408bb0(param_1,iVar4 + 0x20);
                afStack_440[0] = (float)uStack_458;
                afStack_49c[(uint)bVar16 * -2 + 0x18] = afStack_49c[(uint)bVar16 * -2 + 0x12];
                afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19] =
                     afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x13];
                core_vecdir_cpp_FUN_005a7520(afStack_49c + 0x17);
                uStack_47c = uStack_398;
                afStack_49c[(uint)bVar16 * -2 + 9] = afStack_394[(uint)bVar16 * -2];
                afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
                     afStack_394[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
                if (((ABS(fStack_478) < (float)_DAT_005fa73c) && (-1 < iStack_5c)) &&
                   (uVar6 = *(uint *)&param_1->field_0xc27c, 1 < uVar6)) {
                  if (uVar6 < 3) {
                    if (*(int *)(&param_1->field_0x25b0 + iStack_5c * 0x78) != 0) {
                      engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s lugging\n",param_1);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                (pCStack_38,0xd,1);
                    }
                  }
                  else if ((uVar6 == 3) &&
                          (*(int *)(&param_1->field_0x25b0 + iStack_5c * 0x78) != 0)) {
                    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s tossing\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_38,0xb,1)
                    ;
                  }
                }
              }
            }
            else if (((0 < (int)uStack_7c) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) &&
                    (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                       (*(int *)&param_1->field_0xc1e8), iVar4 == 0)) {
              if ((iStack_74 < 0) || (*(int *)(&param_1->field_0x25b0 + iStack_74 * 0x78) == 0)) {
                if ((iStack_54 == 0) ||
                   (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                                      (*(int *)&param_1->field_0xc1e8), iVar4 == 0)) {
                  iVar4 = 3;
                  this_ptr = (CMotionController *)&param_1->field_0x158;
                }
                else {
                  iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
                  this_ptr = (CMotionController *)&param_1->field_0x158;
                  if (iVar4 == 0) {
                    iVar4 = 0x19;
                  }
                  else {
                    iVar4 = 0x18;
                  }
                }
              }
              else {
                iVar4 = 2;
                this_ptr = pCStack_38;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar4,1);
              *(uint *)&param_1->field_0xc1e4 = 0x3f4ccccd;
            }
          }
        }
      }
      else if (uVar6 < 3) {
        if (*(int *)&param_1->field_0xc1e8 == 0) {
LAB_005bca7d:
          core_zombie_cpp_FUN_005bed80(param_1);
        }
        else {
          iVar4 = core_zombie_cpp_FUN_005bdec0(param_1,1);
          if ((((iVar4 < 0) ||
               (iVar8 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                                  (*(int *)&param_1->field_0xc1e8), 0 < iVar8)) ||
              (*(int *)(&param_1->field_0x25b0 + iVar4 * 0x78) == 0)) ||
             (iVar8 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                (*(int *)&param_1->field_0xc1e8), iVar8 != 0)) {
            engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up swing\n",param_1);
            core_zombie_cpp_FUN_005bed80(param_1);
          }
          else {
            iVar4 = *(int *)(&param_1->field_0x25b0 + iVar4 * 0x78);
            fStack_24 = 1.0;
            if (iVar4 != 0) {
              (**(code **)(*(int *)(iVar4 + 0x154) + 0x1c))(iVar4);
              pfVar13 = afStack_4e8;
              pfVar15 = &fStack_500;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar15 = *pfVar13;
                pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
                pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)auStack_2a8);
              auStack_2a8 = (byte  [4])(fStack_4f4 - fStack_500);
              afStack_2a4[0] = fStack_4f0 - fStack_4fc;
              afStack_2a4[1] = fStack_4ec - fStack_4f8;
              fStack_284 = fStack_4f4 - fStack_500;
              afStack_2a4[(uint)bVar16 * -2 + 9] = afStack_2a4[(uint)bVar16 * -2];
              afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
                   afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
              fStack_2f0 = fStack_284;
              afStack_358[(uint)bVar16 * -2 + 0x1b] = afStack_2a4[(uint)bVar16 * -2 + 9];
              afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c] =
                   afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10];
              fStack_2fc = fStack_2f0;
              afStack_358[(uint)bVar16 * -2 + 0x18] = afStack_358[(uint)bVar16 * -2 + 0x1b];
              afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19] =
                   afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1c];
              fStack_278 = fStack_2fc;
              afStack_2a4[(uint)bVar16 * -2 + 0xc] = afStack_358[(uint)bVar16 * -2 + 0x18];
              afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd] =
                   afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x19];
              fStack_344 = fStack_278;
              afStack_358[(uint)bVar16 * -2 + 6] = afStack_2a4[(uint)bVar16 * -2 + 0xc];
              afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7] =
                   afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
              fStack_24 = fStack_33c * (float)_DAT_005fa71c + fStack_24;
            }
            fStack_98 = fStack_24;
            fStack_58 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
            dStack_c8 = (double)fStack_58;
            fStack_14 = fStack_58;
            if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005fa72c)) {
              iStack_a0 = 1;
            }
          }
        }
      }
      else if (uVar6 == 3) {
        iVar4 = *(int *)&param_1->field_0xc1e8;
        if ((iVar4 == 0) ||
           (iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4), 0 < iVar4))
        goto LAB_005bc5bb;
        pCVar7 = (CZombie *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                           (*(int *)&param_1->field_0xc1e8);
        if (pCVar7 == (CZombie *)0x0) {
          fStack_98 = 0x3FA66666;
          fStack_20 = 3.0;
        }
        else if (pCVar7 != param_1) goto LAB_005bca7d;
      }
    }
    else if (uVar6 < 9) {
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(puVar2,0);
        puVar12 = auStack_ec;
        auStack_ec[0] = afStack_10c[2];
        afStack_10c[(uint)bVar16 * -2 + 9] = afStack_10c[(uint)bVar16 * -2 + 3];
        afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
             afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_actor_cpp_FUN_00408b40(param_1,puVar12);
        EVar22 = BLOOD_TYPE_RED;
        pCVar20 = &CStack_140;
        CStack_140._0_4_ = CStack_188._0_4_;
        *(uint *)((int)&CStack_140 + (uint)bVar16 * -8 + 4) =
             *(uint *)((int)&CStack_188 + (uint)bVar16 * -8 + 4);
        pCVar19 = g_CGorePtr;
        *(uint *)((int)&CStack_140 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
             *(uint *)((int)&CStack_188 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(pCVar19,pCVar20,EVar22);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
    }
    else {
      puVar1 = &param_1->field_0x20;
      if (uVar6 < 0x18) {
        if (0xd < uVar6) {
          if (uVar6 < 0xf) {
            iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                              (0x01C51D80,&param_1->field_0xc288);
            if ((iVar4 != 0) &&
               (fVar23 = *(float *)&param_1->field_0xc350 - param_2,
               *(float *)&param_1->field_0xc350 = fVar23, fVar23 < 0.0)) {
              iStack_88 = 0;
              iStack_2c = 0;
              *(float *)&param_1->field_0xc350 = *(float *)&param_1->field_0xc350 + 1.0;
              pfStack_84 = (float *)puVar1;
              for (; iStack_88 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_88 = iStack_88 + 1)
              {
                iVar4 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_2c);
                iVar8 = (**(code **)(*(int *)(iVar4 + 0x154) + 0xe4))(iVar4,param_1);
                if (iVar8 != 0) {
                  fStack_428 = *(float *)(iVar4 + 0x20) - *pfStack_84;
                  fStack_424 = *(float *)(iVar4 + 0x24) - pfStack_84[1];
                  fStack_420 = *(float *)(iVar4 + 0x28) - pfStack_84[2];
                  afStack_178[2] = fStack_428;
                  afStack_178[(uint)bVar16 * -2 + 3] = afStack_49c[(uint)bVar16 * -2 + 0x1e];
                  afStack_178[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
                       afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f];
                  if ((ABS(afStack_178[3]) <= (float)_DAT_005fa77c) &&
                     (afStack_178[3] = 0.0,
                     SQRT(afStack_178[4] * afStack_178[4] + afStack_178[2] * afStack_178[2]) <=
                     *(float *)&param_1->field_0xc1e0)) {
                    engine_console_cpp_FUN_00445430
                              (g_CConsolePtr,"%s rising from the grave\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              ((CMotionController *)&param_1->field_0x158,0xf,1);
                    if (*(CGrave **)&param_1->field_0xc280 != (CGrave *)0x0) {
                      core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0
                                (*(CGrave **)&param_1->field_0xc280);
                      *(uint *)&param_1->field_0xc280 = 0;
                    }
                    *(uint *)&param_1->field_0xc1e0 = 0x42c80000;
                    break;
                  }
                }
                iStack_2c = iStack_2c + 4;
              }
            }
          }
          else if (uVar6 == 0x14) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
            iVar4 = *(int *)&param_1->field_0xc1e8;
            if (((iVar4 != 0) &&
                (fVar23 = *(float *)puVar1 - *(float *)(iVar4 + 0x20),
                fVar24 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28),
                SQRT(fVar24 * fVar24 + fVar23 * fVar23) <= (float)_DAT_005fa724)) &&
               (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24)) <=
                (float)_DAT_005fa72c)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)puVar2,0,1);
            }
          }
        }
      }
      else if ((uVar6 < 0x19) || (uVar6 < 0x1a)) {
        iVar4 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x154) + 0x10c))(iVar4);
        if ((iVar4 == 0) &&
           ((**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2),
           *(int *)&param_1->field_0xc1e8 != 0)) {
LAB_005bbf94:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else if ((uVar6 == 0x1c) &&
              (fVar23 = *(float *)&param_1->field_0xc354 - param_2,
              *(float *)&param_1->field_0xc354 = fVar23, fVar23 <= 0.0)) {
        *(uint *)&param_1->field_0xc354 = 0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        iVar4 = *(int *)&param_1->field_0xc1e8;
        if (iVar4 != 0) {
          fStack_26c = *(float *)puVar1 - *(float *)(iVar4 + 0x20);
          fStack_268 = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
          fStack_264 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
          fStack_374 = fStack_26c;
          afStack_394[(uint)bVar16 * -2 + 9] = afStack_2a4[(uint)bVar16 * -2 + 0xf];
          afStack_394[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
               afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
          if (afStack_2a4 + 0x17 != afStack_394 + 8) {
            fStack_248 = fStack_374;
            fStack_244 = fStack_370;
            fStack_240 = fStack_36c;
          }
          fStack_18 = fStack_240 * fStack_240 + fStack_248 * fStack_248 + fStack_244 * fStack_244;
          fStack_94 = (float)(((int)fStack_18 >> 1) + _DAT_01cc804c);
          if (fStack_94 <= (float)_DAT_005fa714) {
            fStack_1c = *(float *)&param_1->field_0x3000;
            if (fStack_1c < *(float *)&param_1->field_0x2ffc) {
              fStack_1c = *(float *)&param_1->field_0x2490;
            }
            if (fStack_1c < *(float *)&param_1->field_0x2ffc) {
              fStack_1c = *(float *)&param_1->field_0x2ffc + (float)_DAT_005fa71c;
            }
            iVar4 = 0;
            do {
              fStack_90 = (float)iVar4 * _DAT_005fa764 * _DAT_005fa768;
              fStack_14 = (float)iVar4;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              fVar17 = (float10)fcos((float10)fStack_90);
              fVar18 = (float10)fsin((float10)fStack_90);
              fStack_8c = (float)core_setcolid_cpp_FUN_00558450
                                           (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                            *(uint *)&param_1->field_0x28,
                                            (float)(fVar18 * (float10)_DAT_005fa76c),
                                            (float)(fVar17 * (float10)_DAT_005fa76c),
                                            *(uint *)&param_1->field_0x2ff0,
                                            *(float *)&param_1->field_0x24 +
                                            *(float *)&param_1->field_0x2ffc,
                                            *(float *)&param_1->field_0x24 + fStack_1c);
              fStack_14 = fStack_8c;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              if (fStack_8c < 1.0) break;
              iVar4 = iVar4 + 1;
            } while (iVar4 < 4);
            if (3 < iVar4) goto LAB_005bbf94;
            *(uint *)&param_1->field_0xc354 = 0x40400000;
            *(uint *)&param_1->field_0xc1e8 = 0;
          }
        }
      }
    }
LAB_005bbea7:
    if ((0.0 <= fStack_98) && (*(int *)&param_1->field_0xc1e8 != 0)) {
      *(float *)&param_1->field_0x2524 = fStack_20 * *(float *)&param_1->field_0xc1d0 * param_2;
      core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
      fVar24 = 0.7853982;
      fVar23 = 3.0;
      auStack_e0._0_4_ = 0;
      auStack_e0._8_4_ = fStack_98;
      pCVar20 = (CVector3f *)auStack_e0;
      auStack_e0._4_4_ = 0;
      pCVar10 = (CPathMap *)
                (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                          (*(int *)&param_1->field_0xc1e8);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         pCVar10,pCVar20,fVar23,fVar24);
      if (iVar4 != 1) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s giving up attack\n",param_1);
        core_zombie_cpp_FUN_005bed80(param_1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
    goto LAB_005bbbdf;
  }
  uVar6 = *(uint *)&param_1->field_0x273c;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_005bbbb9:
      if (iVar4 != 1) {
        core_zombie_cpp_FUN_005bed80(param_1);
      }
    }
    else {
LAB_005bbe6b:
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0,1);
    }
  }
  else {
    if (uVar6 < 3) goto LAB_005bbbb9;
    if (uVar6 != 3) goto LAB_005bbe6b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
LAB_005bbbdf:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  pSVar9 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  iStack_28 = *(int *)(pSVar9 + 0x24);
  puStack_34 = (uint *)&param_1->field_0x249c;
  if (iStack_28 == 0xe) {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *puStack_34 = *(uint *)&param_1->field_0x24a0;
  }
  else if (iStack_28 == 0xf) {
    core_actor_cpp_FUN_00408ac0(param_1,puStack_34);
    fStack_1f4 = fStack_32c;
    afStack_1f0[(uint)bVar16 * -2] = afStack_358[(uint)bVar16 * -2 + 0xc];
    afStack_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
         afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0xd];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_1f4;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_1f0[0];
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + afStack_1f0[1];
    puStack_34[2] = 0;
    puStack_34[1] = puStack_34[2];
    *puStack_34 = puStack_34[1];
  }
  else {
    iVar4 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
    if (iVar4 != 0) {
      iVar4 = *(int *)&param_1->field_0xc1e8;
      if ((iVar4 != 0) &&
         (pCVar7 = (CZombie *)(**(code **)(*(int *)(iVar4 + 0x154) + 0xf4))(iVar4),
         pCVar7 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
      }
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
      fStack_254 = *(float *)&param_1->field_0x2518 * param_2;
      fStack_250 = *(float *)&param_1->field_0x251c * param_2;
      fStack_24c = *(float *)&param_1->field_0x2520 * param_2;
      fStack_d4 = fStack_254;
      afStack_d0[(uint)bVar16 * -2] = afStack_2a4[(uint)bVar16 * -2 + 0x15];
      afStack_d0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_2a4[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
      afStack_358[2] = fStack_d4 + *(float *)&param_1->field_0x250c;
      afStack_358[3] = afStack_d0[0] + *(float *)&param_1->field_0x2510;
      fStack_348 = afStack_d0[1] + *(float *)&param_1->field_0x2514;
      fStack_17c = afStack_358[2];
      afStack_178[(uint)bVar16 * -2] = afStack_358[(uint)bVar16 * -2 + 3];
      afStack_178[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
           afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
      fStack_320 = fStack_17c + *(float *)&param_1->field_0x249c;
      fStack_31c = afStack_178[0] + *(float *)&param_1->field_0x24a0;
      fStack_318 = afStack_178[1] + *(float *)&param_1->field_0x24a4;
      auStack_11c._0_4_ = fStack_320;
      *(float *)(auStack_11c + (uint)bVar16 * -8 + 4) = afStack_358[(uint)bVar16 * -2 + 0xf];
      *(float *)(auStack_11c + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8) =
           afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x10];
      *(uint *)&param_1->field_0x2514 = 0;
      *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)auStack_11c);
      if ((iStack_28 == 1) &&
         (iStack_44 = core_actor_cpp_castToClassHash_FUN_0040c600
                                (DAT_007c6380,g_CDoorClassInfo.name_hash), iStack_40 = iStack_44,
         iStack_44 != 0)) {
        (**(code **)(*(int *)(iStack_44 + 0x154) + 0x1c))(iStack_44);
        pfVar13 = afStack_560;
        pfVar15 = &fStack_4b8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar15 = *pfVar13;
          pfVar13 = pfVar13 + (uint)bVar16 * -2 + 1;
          pfVar15 = pfVar15 + (uint)bVar16 * -2 + 1;
        }
        afStack_40c[2] = fStack_4b8 + fStack_4ac;
        afStack_40c[3] = fStack_4b4 + fStack_4a8;
        fStack_3fc = fStack_4b0 + fStack_4a4;
        fStack_2e4 = fStack_4b8 + fStack_4ac;
        afStack_358[(uint)bVar16 * -2 + 0x1e] = afStack_40c[(uint)bVar16 * -2 + 3];
        iVar4 = iStack_40;
        afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x1f] =
             afStack_40c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        pfVar13 = &fStack_2b4;
        fStack_488 = fStack_2e4 * _DAT_005fa74c;
        fStack_484 = fStack_2e0 * _DAT_005fa74c;
        fStack_480 = fStack_2dc * _DAT_005fa74c;
        fStack_2b4 = fStack_2e4 * _DAT_005fa74c;
        afStack_2b0[(uint)bVar16 * -2] = afStack_49c[(uint)bVar16 * -2 + 6];
        afStack_2b0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             afStack_49c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
        core_actor_cpp_FUN_00408b40(iVar4,pfVar13);
        iVar4 = (int)&uStack_110;
        uStack_110 = uStack_1dc;
        afStack_10c[(uint)bVar16 * 0xfffffffe] = afStack_1f0[(uint)bVar16 * -2 + 6];
        afStack_10c[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1] =
             afStack_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 7];
        core_actor_cpp_FUN_00408bb0(param_1,iVar4);
        afStack_158[0] = afStack_1f0[2];
        afStack_178[(uint)bVar16 * -2 + 9] = afStack_1f0[(uint)bVar16 * -2 + 3];
        afStack_178[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 10] =
             afStack_1f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4];
        core_vecdir_cpp_FUN_005a7520(afStack_178 + 8);
        afStack_3e8[2] = (float)uStack_308;
        afStack_3e8[(uint)bVar16 * -2 + 3] = afStack_358[(uint)bVar16 * -2 + 0x15];
        afStack_3e8[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 4] =
             afStack_358[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 0x16];
        if (ABS(afStack_3e8[3]) < (float)_DAT_005fa774) {
          iVar4 = core_actor_cpp_FUN_0040cd00(0.5);
          iVar8 = 0x12;
          if (iVar4 != 0) {
            iVar8 = 0x13;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar8,1);
          *(int *)&param_1->field_0xc284 = iStack_44;
        }
      }
    }
  }
  iVar4 = iStack_28;
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  if (iVar4 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  }
  if (*(int *)&param_1->field_0xc1d4 == 0) {
    iVar4 = *(int *)&param_1->field_0xc338;
    if (*(int *)(&param_1->field_0x2298 + iVar4 * 4) == 0) {
      iVar8 = *(int *)&param_1->field_0xc320;
      fVar23 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1->field_0xc324,*(uint *)&param_1->field_0xc30c
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc324 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1->field_0xc328,
                   *(uint *)&param_1->field_0xc304,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1->field_0xc32c,*(uint *)&param_1->field_0xc310
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc32c * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1->field_0xc330,
                   *(uint *)&param_1->field_0xc308,0x3e4ccccd);
      }
      iVar8 = *(int *)&param_1->field_0xc2f8;
      fVar23 = 0.7;
      iVar4 = *(int *)&param_1->field_0xc33c;
    }
    core_charactr_cpp_FUN_00430b60((CCharacter *)param_1,iVar4,iVar8,fVar23);
    if ((*(int *)&param_1->field_0xc334 < 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc338 * 4) != 0)) {
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc338 * 4) = 0;
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1->field_0xc338,*(uint *)&param_1->field_0xc320
                 ,0x3e4ccccd);
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1->field_0xc338 * 4) = 1;
    }
    core_charactr_cpp_FUN_00430960(param_1);
  }
  iVar4 = core_zombie_cpp_FUN_005bdec0(param_1,1);
  if (((iStack_a0 != 0) && (-1 < iVar4)) &&
     (iVar4 = *(int *)(&param_1->field_0x25b0 + iVar4 * 0x78), iVar4 != 0)) {
    (**(code **)(*(int *)(iVar4 + 0x154) + 0x78))(iVar4,2);
    return;
  }
  return;
}
