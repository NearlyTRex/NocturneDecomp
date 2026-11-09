// Name: core_zombie.cpp_FUN_00595f30
// Address: 00595f30
// Address Range: [[00595f30, 00598097]]
// Convention: unknown
// Signature: void core_zombie_cpp_FUN_00595f30(CZombie *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00597c7b) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_zombie_cpp_FUN_00595f30(CZombie *param_1,float param_2)

{
  byte *puVar1;
  byte *puVar2;
  char cVar3;
  int iVar4;
  CMotionList *pCVar5;
  uint uVar6;
  CZombie *pCVar7;
  int iVar8;
  CPathMap *pCVar9;
  uint uVar10;
  uint *puVar11;
  float *pfVar12;
  char *pcVar13;
  float *pfVar14;
  byte bVar15;
  float10 fVar16;
  float10 fVar17;
  float afStackY_1488 [912];
  CGore *pCVar18;
  CVector3f *pCVar19;
  CVector3f *direction;
  CMotionController *this_ptr;
  char *pcVar20;
  EBloodType EVar21;
  float fVar22;
  float fVar23;
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
  
  bVar15 = 0;
  iVar4 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  iVar4 = 0;
  pcVar20 = "CHASE_2";
  iStack_54 = 0;
  pCVar5 = core_motion_cpp_FUN_00503860((CMotionController *)&param_1->field_0x2b4);
  iVar4 = core_motion_cpp_FUN_00502fa0(pCVar5,pcVar20,iVar4);
  if (iVar4 == 0x16) {
    iStack_54 = 1;
  }
  iStack_70 = *(int *)&param_1->field_0x276c;
  if (iStack_70 != 0) {
    fStack_14 = *(float *)(iStack_70 + 0x2b0);
    core_skeleton_cpp_FUN_00546a90(&param_1->field_0x2b4,0);
    pfVar12 = afStack_358 + 0x23;
    afStack_2d8[3] = afStack_2a4[2];
    afStack_2c8[(uint)bVar15 * -2] = afStack_2a4[(uint)bVar15 * -2 + 3];
    afStack_2c8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
    iVar4 = (**(code **)((int)fStack_14 + 0x118))(iStack_70,param_1,pfVar12);
    if (iVar4 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x276c = 0;
    return;
  }
  if (0.0 < *(float *)&param_1->field_0x10bd0) {
    *(float *)&param_1->field_0x10bd0 = *(float *)&param_1->field_0x10bd0 - param_2;
  }
  pfStack_6c = afStack_56c;
  fStack_9c = param_2 * *(float *)&param_1->field_0x10a60;
  pfStack_64 = afStack_50c;
  pCStack_30 = (CMotionController *)&param_1->field_0x2b4;
LAB_00595fe0:
  if (0.0 < fStack_9c) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_005030c0(pCStack_30,&fStack_9c);
    if (uVar6 < 0xb) {
      if (4 < uVar6) {
        if (5 < uVar6) {
          if (uVar6 == 10) {
            if (*(int *)&param_1->field_0x10a78 == 0) {
              core_zombie_cpp_FUN_00599d00(param_1);
              goto LAB_00595fe0;
            }
            core_skeleton_cpp_FUN_005469a0(pCStack_30,*(uint *)&param_1->field_0x10b88);
            pfVar12 = afStack_178 + 0xb;
            afStack_14c[0] = (float)uStack_3d4;
            afStack_178[(uint)bVar15 * -2 + 0xc] = afStack_3e8[(uint)bVar15 * -2 + 6];
            afStack_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                 afStack_3e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
            core_actor_cpp_FUN_00408d70(param_1,pfVar12);
            fStack_1b8 = fStack_3c8;
            afStack_1b4[(uint)bVar15 * -2] = afStack_3e8[(uint)bVar15 * -2 + 9];
            afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_3e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
            if (*(int *)&param_1->field_0x10bc4 < 0) {
              fVar22 = fStack_1b8 - *(float *)(*(int *)&param_1->field_0x10a78 + 0x20);
              fVar23 = afStack_1b4[1] - *(float *)(*(int *)&param_1->field_0x10a78 + 0x28);
              if ((float)_DAT_005ef1ba < SQRT(fVar23 * fVar23 + fVar22 * fVar22)) {
                core_zombie_cpp_FUN_00599d00(param_1);
                goto LAB_00595fe0;
              }
            }
            else {
              pCVar7 = (CZombie *)
                       (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                                 (*(int *)&param_1->field_0x10a78);
              if (pCVar7 != param_1) {
                core_zombie_cpp_FUN_00599d00(param_1);
                goto LAB_00595fe0;
              }
            }
            core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_628);
            fStack_624 = (float)core_actor_cpp_FUN_0040cf60(0x41700000,0x41c80000);
            pCStack_5f4 = param_1;
            pCStack_5f0 = param_1;
            fStack_14 = fStack_624;
            (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x110))
                      (*(int *)&param_1->field_0x10a78,aSStack_628);
            dStack_b8 = (double)fStack_624;
            if (0.0 < dStack_b8) {
              fVar16 = (float10)fStack_624 * (float10)_DAT_005ef182 * (float10)_DAT_005ef18a;
              EVar21 = BLOOD_TYPE_RED;
              round();
              iStack_3c = (int)ROUND(fVar16);
              core_gore_cpp_FUN_004c9850
                        (g_CGorePtr,(CVector3f *)&fStack_1b8,(CVector3f *)0x0,iStack_3c,EVar21);
            }
            iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))
                              (*(int *)&param_1->field_0x10a78);
            if (0 < iVar4) {
              (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf8))
                        (*(int *)&param_1->field_0x10a78);
              core_zombie_cpp_FUN_00599d00(param_1);
            }
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"ghoul-eat-?.wav");
            goto LAB_00595fe0;
          }
          core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar6);
          goto LAB_00595fe0;
        }
        iStack_50 = 1;
        if (*(int *)&param_1->field_0x10a78 != 0) {
          afStack_3f8[2] = 0x3FA66666;
          afStack_3f8[0] = 0.0;
          afStack_3f8[1] = 0.0;
          core_actor_cpp_FUN_00408d70(param_1,afStack_40c + 5);
          fStack_380 = fStack_464;
          afStack_394[(uint)bVar15 * -2 + 6] = afStack_49c[(uint)bVar15 * -2 + 0xf];
          afStack_394[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
          iVar4 = *(int *)&param_1->field_0x10a78;
          fStack_f8 = fStack_380 - *(float *)(iVar4 + 0x20);
          fStack_f4 = fStack_37c - *(float *)(iVar4 + 0x24);
          fStack_f0 = fStack_378 - *(float *)(iVar4 + 0x28);
          fStack_44c = fStack_f8;
          afStack_49c[(uint)bVar15 * -2 + 0x15] = afStack_10c[(uint)bVar15 * -2 + 6];
          afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16] =
               afStack_10c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          uStack_448 = 0;
          if (SQRT(fStack_444 * fStack_444 + fStack_44c * fStack_44c) <= 1.0) {
            if (iStack_50 != 0) {
              afStack_2d8[0] = 0.0;
              afStack_2d8[2] = 0.0;
              afStack_2d8[1] = 4.0;
              core_actor_cpp_FUN_00408d70(param_1,afStack_358 + 0x20);
              CStack_3a4._0_4_ = CStack_200._0_4_;
              *(uint *)((int)&CStack_3a4 + (uint)bVar15 * -8 + 4) =
                   *(uint *)((int)&CStack_200 + (uint)bVar15 * -8 + 4);
              *(uint *)((int)&CStack_3a4 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   *(uint *)((int)&CStack_200 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
              puVar11 = (uint *)(*(int *)&param_1->field_0x10a78 + 0x24 + (uint)bVar15 * -8);
              CStack_20c._0_4_ = *(uint *)(*(int *)&param_1->field_0x10a78 + 0x20);
              *(uint *)((int)&CStack_20c + (uint)bVar15 * -8 + 4) = *puVar11;
              *(uint *)((int)&CStack_20c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
                   puVar11[(uint)bVar15 * -2 + 1];
              CStack_20c._4_4_ = CStack_3a4._4_4_;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                        (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
              iVar4 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                                (g_CDemonSetPtr,&CStack_3a4,&CStack_20c);
              if (iVar4 != 0) {
                iStack_50 = 0;
              }
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
            }
            if ((iStack_50 == 0) ||
               (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xf4))
                                  (*(int *)&param_1->field_0x10a78,param_1,0), iVar4 != 0)) {
              if (iStack_50 == 0) {
                core_zombie_cpp_FUN_00599d00(param_1);
              }
              goto LAB_00595fe0;
            }
          }
        }
        core_zombie_cpp_FUN_00599d00(param_1);
        goto LAB_00595fe0;
      }
      if (uVar6 == 2) {
        iVar4 = *(int *)&param_1->field_0x10b08;
        if (iVar4 != 0) {
          *(uint *)&param_1->field_0x10b08 = 0;
          iVar8 = core_zombie_cpp_FUN_00598e40(param_1,*(int *)&param_1->field_0x10b0c);
          if (-1 < iVar8) {
            core_charactr_cpp_FUN_00428b10(param_1,iVar8,iVar4,0x3e4ccccd,0);
            engine_console_cpp_FUN_00436710
                      (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar4,iVar8);
          }
        }
      }
      else {
LAB_0059601d:
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar6);
      }
    }
    else if (uVar6 < 0xc) {
      iVar4 = core_zombie_cpp_FUN_00598e40(param_1,2);
      if (iVar4 < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x1ef;
        core_main_c_FUN_004e4500(&DAT_005eefb4);
      }
      if (*(int *)(&param_1->field_0x2620 + iVar4 * 0x78) != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x2620 + iVar4 * 0x78));
        afStack_3b8[2] = 0.0;
        afStack_3b8[3] = 6.0;
        afStack_3b8[4] = 17.0;
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,iVar4,afStack_3b8 + 2);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar6 < 0xd) {
      iStack_ac = core_zombie_cpp_FUN_00598e40(param_1,3);
      if (iStack_ac < 0) {
        _DAT_01d046a0 = "..\\core\\zombie.cpp";
        _DAT_01d046a4 = 0x206;
        core_main_c_FUN_004e4500(&DAT_005eefe7);
      }
      puStack_a8 = &param_1->field_0x0 + iStack_ac * 0x78;
      if (*(int *)(puStack_a8 + 0x2620) != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"%s tossing %s\n",param_1,*(int *)(puStack_a8 + 0x2620));
        fStack_368 = 0.0;
        fStack_364 = 0.0;
        fStack_360 = 1.0;
        if (*(int *)&param_1->field_0x10a78 != 0) {
          (**(code **)(*(int *)(*(int *)(puStack_a8 + 0x2620) + 0x2b0) + 0x24))
                    (*(int *)(puStack_a8 + 0x2620));
          pfVar12 = afStack_530;
          pfVar14 = &fStack_578;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          fStack_260 = fStack_578 + *pfStack_6c;
          fStack_25c = fStack_574 + pfStack_6c[1];
          fStack_258 = fStack_570 + pfStack_6c[2];
          fStack_1d0 = fStack_578 + *pfStack_6c;
          afStack_1f0[(uint)bVar15 * -2 + 9] = afStack_2a4[(uint)bVar15 * -2 + 0x12];
          puVar2 = puStack_a8;
          afStack_1f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
          pfVar12 = afStack_2a4 + 5;
          fStack_218 = fStack_1d0 * _DAT_005ef17a;
          fStack_214 = fStack_1cc * _DAT_005ef17a;
          fStack_210 = fStack_1c8 * _DAT_005ef17a;
          afStack_290[0] = fStack_1d0 * _DAT_005ef17a;
          afStack_2a4[(uint)bVar15 * -2 + 6] = afStack_238[(uint)bVar15 * -2 + 9];
          afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
               afStack_238[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          core_actor_cpp_FUN_00408d70(*(uint *)(puVar2 + 0x2620),pfVar12);
          fStack_23c = fStack_3ec;
          afStack_238[(uint)bVar15 * -2] = afStack_3e8[(uint)bVar15 * -2];
          afStack_238[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_3e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
          (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x24))
                    (*(int *)&param_1->field_0x10a78);
          pfVar12 = afStack_590;
          pfVar14 = &fStack_518;
          for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
            *pfVar14 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
          }
          afStack_1b4[2] = fStack_518 + *pfStack_64;
          afStack_1b4[3] = fStack_514 + pfStack_64[1];
          fStack_1a4 = fStack_510 + pfStack_64[2];
          fStack_128 = fStack_518 + *pfStack_64;
          afStack_124[(uint)bVar15 * -2] = afStack_1b4[(uint)bVar15 * -2 + 3];
          afStack_124[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
          fStack_164 = fStack_128 * _DAT_005ef17a;
          fStack_160 = afStack_124[0] * _DAT_005ef17a;
          fStack_15c = afStack_124[1] * _DAT_005ef17a;
          fStack_410 = fStack_128 * _DAT_005ef17a;
          afStack_40c[(uint)bVar15 * -2] = afStack_178[(uint)bVar15 * -2 + 6];
          afStack_40c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
               afStack_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
          core_actor_cpp_FUN_00408d70(*(uint *)&param_1->field_0x10a78,&fStack_410);
          afStack_394[2] = fStack_338;
          afStack_394[(uint)bVar15 * -2 + 3] = afStack_358[(uint)bVar15 * -2 + 9];
          afStack_394[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
               afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
          fStack_1c4 = afStack_394[2] - fStack_23c;
          fStack_1c0 = afStack_394[3] - afStack_238[0];
          fStack_1bc = fStack_384 - afStack_238[1];
          fStack_314 = afStack_394[2] - fStack_23c;
          afStack_358[(uint)bVar15 * -2 + 0x12] = afStack_1f0[(uint)bVar15 * -2 + 0xc];
          afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13] =
               afStack_1f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
          fStack_60 = SQRT(fStack_30c * fStack_30c +
                           fStack_314 * fStack_314 + fStack_310 * fStack_310);
          if (0.0 < fStack_60) {
            core_actor_cpp_FUN_00408d30(param_1,afStack_358 + 0x11);
            fStack_4a0 = fStack_470;
            afStack_49c[(uint)bVar15 * -2] = afStack_49c[(uint)bVar15 * -2 + 0xc];
            afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
                 afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
            fVar22 = 1.0 / fStack_60;
            fStack_35c = fStack_4a0 * fVar22;
            afStack_358[0] = afStack_49c[0] * fVar22;
            afStack_358[1] = afStack_49c[1] * fVar22;
            fStack_434 = fStack_4a0 * fVar22;
            afStack_49c[(uint)bVar15 * -2 + 0x1b] = afStack_358[(uint)bVar15 * -2];
            afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
                 afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
            if (afStack_394 + 0xb != afStack_49c + 0x1a) {
              fStack_368 = fStack_434;
              fStack_364 = fStack_430;
              fStack_360 = fStack_42c;
            }
          }
        }
        fStack_368 = fStack_368 * _DAT_005ef17e;
        fStack_360 = fStack_360 * _DAT_005ef17e;
        fStack_364 = fStack_364 * _DAT_005ef17e + _DAT_005ef1b2;
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,iStack_ac,afStack_394 + 0xb);
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar6 < 0xe) {
      if (*(CDoor **)&param_1->field_0x10b14 != (CDoor *)0x0) {
        core_door_cpp_FUN_00460310(*(CDoor **)&param_1->field_0x10b14,0.3);
        (**(code **)(*(int *)(*(int *)&param_1->field_0x10b14 + 0x2b0) + 0x34))
                  (*(int *)&param_1->field_0x10b14,"zombie-bang-door?.wav");
        *(uint *)&param_1->field_0x10b14 = 0;
      }
    }
    else {
      if (uVar6 < 0x65) goto LAB_0059601d;
      if (uVar6 < 0x66) {
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"fall-?.wav");
      }
      else if (uVar6 == 0x29a) {
        core_skeleton_cpp_FUN_005469a0(pCStack_30,*(uint *)&param_1->field_0x10b88);
        puVar11 = auStack_1a0;
        auStack_1a0[0] = uStack_194;
        afStack_1b4[(uint)bVar15 * -2 + 6] = afStack_1b4[(uint)bVar15 * -2 + 9];
        afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
             afStack_1b4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
        core_actor_cpp_FUN_00408d70(param_1,puVar11);
        EVar21 = BLOOD_TYPE_RED;
        iVar4 = 3;
        direction = (CVector3f *)0x0;
        pCVar19 = &CStack_134;
        CStack_134._0_4_ = CStack_41c._0_4_;
        *(uint *)((int)&CStack_134 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_41c + (uint)bVar15 * -8 + 4);
        pCVar18 = g_CGorePtr;
        *(uint *)((int)&CStack_134 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_41c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_FUN_004c9850(pCVar18,pCVar19,direction,iVar4,EVar21);
        iVar4 = core_actor_cpp_FUN_0040d060(0.5);
        if (iVar4 == 0) {
          pcVar20 = "ghoul-dig-?.wav";
        }
        else {
          pcVar20 = "ghoul-eat-?.wav";
        }
        pcVar13 = acStack_5b0;
        do {
          cVar3 = *pcVar20;
          *pcVar13 = cVar3;
          if (cVar3 == '\0') break;
          cVar3 = pcVar20[1];
          pcVar20 = pcVar20 + 2;
          pcVar13[1] = cVar3;
          pcVar13 = pcVar13 + 2;
        } while (cVar3 != '\0');
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,acStack_5b0);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00((CCharacter *)param_1,uVar6);
      }
    }
    goto LAB_00595fe0;
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
  if ((((*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bc0 * 4) == 0) &&
       (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bb8 * 4) == 0)) ||
      (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bcc * 4) == 0)) &&
     ((0.0 <= *(float *)&param_1->field_0x10bd4 &&
      (fVar22 = *(float *)&param_1->field_0x10bd4 + param_2,
      *(float *)&param_1->field_0x10bd4 = fVar22, (float)_DAT_005ef13a <= fVar22)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_5ec);
    uStack_5e8 = 0x461c3f9a;
    pCStack_5b8 = param_1;
    pCStack_5b4 = param_1;
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x110))(param_1,aSStack_5ec);
    *(uint *)&param_1->field_0x10bd4 = 0xbf800000;
  }
  puVar2 = &param_1->field_0x2b4;
  iVar4 = core_motion_cpp_FUN_005035c0(puVar2);
  iVar4 = *(int *)(iVar4 + 0x24);
  iStack_a0 = 0;
  iVar8 = core_charactr_cpp_FUN_004287f0((CCharacter *)param_1,param_2);
  if (iVar8 == 0) {
    fStack_98 = -1.0;
    fStack_20 = 0.3;
    iVar4 = core_motion_cpp_FUN_005035c0(puVar2);
    uVar6 = *(uint *)(iVar4 + 0x24);
    if (uVar6 < 8) {
      if (uVar6 == 0) {
        iVar4 = core_actor_cpp_FUN_0040d060(param_2 * (float)_DAT_005ef172);
        if (iVar4 != 0) {
          iVar4 = 0;
          pcVar20 = "pickass";
          pCVar5 = core_motion_cpp_FUN_00503860((CMotionController *)&param_1->field_0x2b4);
          iVar4 = core_motion_cpp_FUN_00502f10(pCVar5,pcVar20,iVar4);
          if (-1 < iVar4) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0x10,1);
            goto LAB_00596e2a;
          }
        }
        iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
        if (iVar4 != 0) {
          core_zombie_cpp_FUN_00599d00(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        if ((*(int *)&param_1->field_0x10a78 == 0) && (iStack_54 != 0)) {
          iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
          if (iVar4 == 0) goto LAB_00596e2a;
          *(uint *)&g_CGamePtr->field_0x23c = 1;
          *(uint *)&param_1->field_0x10a78 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        }
        if (*(int *)&param_1->field_0x10a78 != 0) {
          core_zombie_cpp_FUN_00599d00(param_1);
          iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bdc);
          if (iVar4 == 0) {
            if (*(int *)&param_1->field_0x10b84 == 0) {
              uVar10 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                 (param_1,"zom-a0?.wav");
              *(uint *)&param_1->field_0x10bdc = uVar10;
            }
            else {
              uVar10 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))
                                 (param_1,"f-zombie-alert?.wav");
              *(uint *)&param_1->field_0x10bdc = uVar10;
            }
          }
        }
      }
      else if (uVar6 < 2) {
        iVar4 = *(int *)&param_1->field_0x10a78;
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        if (((*(int *)&param_1->field_0x10a78 == 0) && (iStack_54 != 0)) &&
           (iVar8 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4),
           iVar8 = (**(code **)(*(int *)(iVar8 + 0x2b0) + 0x114))(iVar8), iVar8 != 0)) {
          *(uint *)&g_CGamePtr->field_0x23c = 1;
          *(uint *)&param_1->field_0x10a78 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        }
        if (*(int *)&param_1->field_0x10a78 == 0) {
          iVar4 = core_enemy_cpp_FUN_00488970((CEnemy *)param_1,param_2);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0,1);
          }
        }
        else if (iVar4 == 0) {
          iVar4 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1->field_0x10bdc);
          if (iVar4 == 0) {
            if (*(int *)&param_1->field_0x10b84 == 0) {
              pcVar20 = "zom-a0?.wav";
            }
            else {
              pcVar20 = "f-zombie-alert?.wav";
            }
            uVar10 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,pcVar20);
            *(uint *)&param_1->field_0x10bdc = uVar10;
          }
LAB_0059753e:
          core_zombie_cpp_FUN_00599d00(param_1);
        }
        else {
          uStack_7c = (uint)(*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bb8 * 4)
                            != 0);
          if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bc0 * 4) != 0) {
            uStack_7c = uStack_7c + 1;
          }
          *(uint *)&param_1->field_0x2510 = 0;
          *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
          *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
          iVar4 = core_zombie_cpp_FUN_005984e0(param_1,param_2);
          if (iVar4 == 0) {
            fStack_78 = 0x3FA66666;
            iStack_74 = core_zombie_cpp_FUN_00598e40(param_1,1);
            if (((-1 < iStack_74) &&
                (iVar4 = *(int *)(&param_1->field_0x2620 + iStack_74 * 0x78), iVar4 != 0)) &&
               (*(int *)&param_1->field_0x10b0c == 1)) {
              fStack_68 = 1.0;
              if (iVar4 != 0) {
                (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
                pfVar12 = afStack_4d0;
                pfVar14 = &fStack_548;
                for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *pfVar14 = *pfVar12;
                  pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
                  pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
                }
                core_actor_cpp_CVector3f_ctor_FUN_0040d340((CVector3f *)&fStack_3bc);
                fStack_3bc = fStack_53c - fStack_548;
                afStack_3b8[0] = fStack_538 - fStack_544;
                afStack_3b8[1] = fStack_534 - fStack_540;
                afStack_238[2] = fStack_53c - fStack_548;
                afStack_238[(uint)bVar15 * -2 + 3] = afStack_3b8[(uint)bVar15 * -2];
                afStack_238[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                     afStack_3b8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
                fStack_68 = fStack_228 * (float)_DAT_005ef14a + 1.0;
              }
              fStack_78 = fStack_68;
            }
            fVar23 = 0.34906584;
            fVar22 = 1.1;
            auStack_2c0._0_4_ = 0;
            auStack_2c0._8_4_ = fStack_78;
            pCVar19 = (CVector3f *)auStack_2c0;
            auStack_2c0._4_4_ = 0;
            pCVar9 = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                               (*(int *)&param_1->field_0x10a78);
            iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                              ((CCharacter *)param_1,
                               (CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20),pCVar9,pCVar19,
                               fVar22,fVar23);
            pCStack_38 = (CMotionController *)&param_1->field_0x2b4;
            if (iVar4 < 0) {
              engine_console_cpp_FUN_00436710
                        (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_38,0,1);
            }
            else if (iVar4 < 1) {
              iStack_5c = core_zombie_cpp_FUN_00598e40(param_1,*(int *)&param_1->field_0x10b0c);
              iVar4 = *(int *)&param_1->field_0x10a78;
              afStack_49c[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar4 + 0x20);
              afStack_49c[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
              fStack_48c = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
              fStack_224 = afStack_49c[2];
              afStack_238[(uint)bVar15 * -2 + 6] = afStack_49c[(uint)bVar15 * -2 + 3];
              afStack_238[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                   afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
              if (SQRT(fStack_21c * fStack_21c + fStack_224 * fStack_224 + fStack_220 * fStack_220)
                  < (float)_DAT_005ef162) {
                core_actor_cpp_FUN_00408de0(param_1,iVar4 + 0x20);
                afStack_440[0] = (float)uStack_458;
                afStack_49c[(uint)bVar15 * -2 + 0x18] = afStack_49c[(uint)bVar15 * -2 + 0x12];
                afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
                     afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x13];
                core_vecdir_cpp_FUN_005838f0(afStack_49c + 0x17);
                uStack_47c = uStack_398;
                afStack_49c[(uint)bVar15 * -2 + 9] = afStack_394[(uint)bVar15 * -2];
                afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                     afStack_394[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
                if (((ABS(fStack_478) < (float)_DAT_005ef16a) && (-1 < iStack_5c)) &&
                   (uVar6 = *(uint *)&param_1->field_0x10b0c, 1 < uVar6)) {
                  if (uVar6 < 3) {
                    if (*(int *)(&param_1->field_0x2620 + iStack_5c * 0x78) != 0) {
                      engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s lugging\n",param_1);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                (pCStack_38,0xd,1);
                    }
                  }
                  else if ((uVar6 == 3) &&
                          (*(int *)(&param_1->field_0x2620 + iStack_5c * 0x78) != 0)) {
                    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s tossing\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_38,0xb,1)
                    ;
                  }
                }
              }
            }
            else if (((0 < (int)uStack_7c) && (*(float *)&param_1->field_0x10a74 <= 0.0)) &&
                    (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                                       (*(int *)&param_1->field_0x10a78), iVar4 == 0)) {
              if ((iStack_74 < 0) || (*(int *)(&param_1->field_0x2620 + iStack_74 * 0x78) == 0)) {
                if ((iStack_54 == 0) ||
                   (iVar4 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))
                                      (*(int *)&param_1->field_0x10a78), iVar4 == 0)) {
                  iVar4 = 3;
                  this_ptr = (CMotionController *)&param_1->field_0x2b4;
                }
                else {
                  iVar4 = core_actor_cpp_FUN_0040d060(0.5);
                  this_ptr = (CMotionController *)&param_1->field_0x2b4;
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
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,iVar4,1);
              *(uint *)&param_1->field_0x10a74 = 0x3f4ccccd;
            }
          }
        }
      }
      else if (uVar6 < 3) {
        if (*(int *)&param_1->field_0x10a78 == 0) {
LAB_00597a00:
          core_zombie_cpp_FUN_00599d00(param_1);
        }
        else {
          iVar4 = core_zombie_cpp_FUN_00598e40(param_1,1);
          if ((((iVar4 < 0) ||
               (iVar8 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0x114))
                                  (*(int *)&param_1->field_0x10a78), 0 < iVar8)) ||
              (*(int *)(&param_1->field_0x2620 + iVar4 * 0x78) == 0)) ||
             (iVar8 = (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                                (*(int *)&param_1->field_0x10a78), iVar8 != 0)) {
            engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s gave up swing\n",param_1);
            core_zombie_cpp_FUN_00599d00(param_1);
          }
          else {
            iVar4 = *(int *)(&param_1->field_0x2620 + iVar4 * 0x78);
            fStack_24 = 1.0;
            if (iVar4 != 0) {
              (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x24))(iVar4);
              pfVar12 = afStack_4e8;
              pfVar14 = &fStack_500;
              for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
                *pfVar14 = *pfVar12;
                pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
                pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040d340((CVector3f *)auStack_2a8);
              auStack_2a8 = (byte  [4])(fStack_4f4 - fStack_500);
              afStack_2a4[0] = fStack_4f0 - fStack_4fc;
              afStack_2a4[1] = fStack_4ec - fStack_4f8;
              fStack_284 = fStack_4f4 - fStack_500;
              afStack_2a4[(uint)bVar15 * -2 + 9] = afStack_2a4[(uint)bVar15 * -2];
              afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
                   afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1];
              fStack_2f0 = fStack_284;
              afStack_358[(uint)bVar15 * -2 + 0x1b] = afStack_2a4[(uint)bVar15 * -2 + 9];
              afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c] =
                   afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10];
              fStack_2fc = fStack_2f0;
              afStack_358[(uint)bVar15 * -2 + 0x18] = afStack_358[(uint)bVar15 * -2 + 0x1b];
              afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19] =
                   afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1c];
              fStack_278 = fStack_2fc;
              afStack_2a4[(uint)bVar15 * -2 + 0xc] = afStack_358[(uint)bVar15 * -2 + 0x18];
              afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd] =
                   afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x19];
              fStack_344 = fStack_278;
              afStack_358[(uint)bVar15 * -2 + 6] = afStack_2a4[(uint)bVar15 * -2 + 0xc];
              afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7] =
                   afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
              fStack_24 = fStack_33c * (float)_DAT_005ef14a + fStack_24;
            }
            fStack_98 = fStack_24;
            fStack_58 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
            dStack_c8 = (double)fStack_58;
            fStack_14 = fStack_58;
            if ((1.0 <= dStack_c8) && (dStack_c8 <= _DAT_005ef15a)) {
              iStack_a0 = 1;
            }
          }
        }
      }
      else if (uVar6 == 3) {
        iVar4 = *(int *)&param_1->field_0x10a78;
        if ((iVar4 == 0) ||
           (iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4), 0 < iVar4))
        goto LAB_0059753e;
        pCVar7 = (CZombie *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xfc))
                           (*(int *)&param_1->field_0x10a78);
        if (pCVar7 == (CZombie *)0x0) {
          fStack_98 = 0x3FA66666;
          fStack_20 = 3.0;
        }
        else if (pCVar7 != param_1) goto LAB_00597a00;
      }
    }
    else if (uVar6 < 9) {
      if ((*(int *)&param_1->field_0x10a64 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(puVar2,0);
        puVar11 = auStack_ec;
        auStack_ec[0] = afStack_10c[2];
        afStack_10c[(uint)bVar15 * -2 + 9] = afStack_10c[(uint)bVar15 * -2 + 3];
        afStack_10c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
             afStack_10c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_actor_cpp_FUN_00408d70(param_1,puVar11);
        EVar21 = BLOOD_TYPE_RED;
        pCVar19 = &CStack_140;
        CStack_140._0_4_ = CStack_188._0_4_;
        *(uint *)((int)&CStack_140 + (uint)bVar15 * -8 + 4) =
             *(uint *)((int)&CStack_188 + (uint)bVar15 * -8 + 4);
        pCVar18 = g_CGorePtr;
        *(uint *)((int)&CStack_140 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
             *(uint *)((int)&CStack_188 + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(pCVar18,pCVar19,EVar21);
        *(uint *)&param_1->field_0x10a64 = 1;
      }
    }
    else {
      puVar1 = &param_1->field_0x20;
      if (uVar6 < 0x18) {
        if (0xd < uVar6) {
          if (uVar6 < 0xf) {
            iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                              (0x01C38BC0,&param_1->field_0x10b18);
            if ((iVar4 != 0) &&
               (fVar22 = *(float *)&param_1->field_0x10be0 - param_2,
               *(float *)&param_1->field_0x10be0 = fVar22, fVar22 < 0.0)) {
              iStack_88 = 0;
              iStack_2c = 0;
              *(float *)&param_1->field_0x10be0 = *(float *)&param_1->field_0x10be0 + 1.0;
              pfStack_84 = (float *)puVar1;
              for (; iStack_88 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_88 = iStack_88 + 1)
              {
                iVar4 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_2c);
                iVar8 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0xec))(iVar4,param_1);
                if (iVar8 != 0) {
                  fStack_428 = *(float *)(iVar4 + 0x20) - *pfStack_84;
                  fStack_424 = *(float *)(iVar4 + 0x24) - pfStack_84[1];
                  fStack_420 = *(float *)(iVar4 + 0x28) - pfStack_84[2];
                  afStack_178[2] = fStack_428;
                  afStack_178[(uint)bVar15 * -2 + 3] = afStack_49c[(uint)bVar15 * -2 + 0x1e];
                  afStack_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
                       afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f];
                  if ((ABS(afStack_178[3]) <= (float)_DAT_005ef1aa) &&
                     (afStack_178[3] = 0.0,
                     SQRT(afStack_178[4] * afStack_178[4] + afStack_178[2] * afStack_178[2]) <=
                     *(float *)&param_1->field_0x10a70)) {
                    engine_console_cpp_FUN_00436710
                              (g_CConsolePtr,"%s rising from the grave\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                              ((CMotionController *)&param_1->field_0x2b4,0xf,1);
                    if (*(CGrave **)&param_1->field_0x10b10 != (CGrave *)0x0) {
                      core_grave_cpp_FUN_004ca3e0(*(CGrave **)&param_1->field_0x10b10);
                      *(uint *)&param_1->field_0x10b10 = 0;
                    }
                    *(uint *)&param_1->field_0x10a70 = 0x42c80000;
                    break;
                  }
                }
                iStack_2c = iStack_2c + 4;
              }
            }
          }
          else if (uVar6 == 0x14) {
            (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
            iVar4 = *(int *)&param_1->field_0x10a78;
            if (((iVar4 != 0) &&
                (fVar22 = *(float *)puVar1 - *(float *)(iVar4 + 0x20),
                fVar23 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28),
                SQRT(fVar23 * fVar23 + fVar22 * fVar22) <= (float)_DAT_005ef152)) &&
               (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24)) <=
                (float)_DAT_005ef15a)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)puVar2,0,1);
            }
          }
        }
      }
      else if ((uVar6 < 0x19) || (uVar6 < 0x1a)) {
        iVar4 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x114))(iVar4);
        if ((iVar4 == 0) &&
           ((**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2),
           *(int *)&param_1->field_0x10a78 != 0)) {
LAB_00596f17:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
      }
      else if ((uVar6 == 0x1c) &&
              (fVar22 = *(float *)&param_1->field_0x10be4 - param_2,
              *(float *)&param_1->field_0x10be4 = fVar22, fVar22 <= 0.0)) {
        *(uint *)&param_1->field_0x10be4 = 0;
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
        iVar4 = *(int *)&param_1->field_0x10a78;
        if (iVar4 != 0) {
          fStack_26c = *(float *)puVar1 - *(float *)(iVar4 + 0x20);
          fStack_268 = *(float *)&param_1->field_0x24 - *(float *)(iVar4 + 0x24);
          fStack_264 = *(float *)&param_1->field_0x28 - *(float *)(iVar4 + 0x28);
          fStack_374 = fStack_26c;
          afStack_394[(uint)bVar15 * -2 + 9] = afStack_2a4[(uint)bVar15 * -2 + 0xf];
          afStack_394[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
               afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
          if (afStack_2a4 + 0x17 != afStack_394 + 8) {
            fStack_248 = fStack_374;
            fStack_244 = fStack_370;
            fStack_240 = fStack_36c;
          }
          fStack_18 = fStack_240 * fStack_240 + fStack_248 * fStack_248 + fStack_244 * fStack_244;
          fStack_94 = (float)(((int)fStack_18 >> 1) + _DAT_01caf5b4);
          if (fStack_94 <= (float)_DAT_005ef142) {
            fStack_1c = *(float *)&param_1->field_0x3444;
            if (fStack_1c < *(float *)&param_1->field_0x3440) {
              fStack_1c = *(float *)&param_1->field_0x24fc;
            }
            if (fStack_1c < *(float *)&param_1->field_0x3440) {
              fStack_1c = *(float *)&param_1->field_0x3440 + (float)_DAT_005ef14a;
            }
            iVar4 = 0;
            do {
              fStack_90 = (float)iVar4 * _DAT_005ef192 * _DAT_005ef196;
              fStack_14 = (float)iVar4;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              fVar16 = (float10)fcos((float10)fStack_90);
              fVar17 = (float10)fsin((float10)fStack_90);
              fStack_8c = (float)core_setcolid_cpp_FUN_00537030
                                           (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                            *(uint *)&param_1->field_0x28,
                                            (float)(fVar17 * (float10)_DAT_005ef19a),
                                            (float)(fVar16 * (float10)_DAT_005ef19a),
                                            *(uint *)&param_1->field_0x3434,
                                            *(float *)&param_1->field_0x24 +
                                            *(float *)&param_1->field_0x3440,
                                            *(float *)&param_1->field_0x24 + fStack_1c);
              fStack_14 = fStack_8c;
              core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
              if (fStack_8c < 1.0) break;
              iVar4 = iVar4 + 1;
            } while (iVar4 < 4);
            if (3 < iVar4) goto LAB_00596f17;
            *(uint *)&param_1->field_0x10be4 = 0x40400000;
            *(uint *)&param_1->field_0x10a78 = 0;
          }
        }
      }
    }
LAB_00596e2a:
    if ((0.0 <= fStack_98) && (*(int *)&param_1->field_0x10a78 != 0)) {
      *(float *)&param_1->field_0x2594 = fStack_20 * *(float *)&param_1->field_0x10a60 * param_2;
      core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)&param_1->field_0x10a60);
      fVar23 = 0.7853982;
      fVar22 = 3.0;
      auStack_e0._0_4_ = 0;
      auStack_e0._8_4_ = fStack_98;
      pCVar19 = (CVector3f *)auStack_e0;
      auStack_e0._4_4_ = 0;
      pCVar9 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0x10a78 + 0x2b0) + 0xcc))
                         (*(int *)&param_1->field_0x10a78);
      iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0x10a78 + 0x20)
                         ,pCVar9,pCVar19,fVar22,fVar23);
      if (iVar4 != 1) {
        engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s giving up attack\n",param_1);
        core_zombie_cpp_FUN_00599d00(param_1);
        *(uint *)&param_1->field_0x2578 = 0;
      }
    }
    goto LAB_00596b5f;
  }
  uVar6 = *(uint *)&param_1->field_0x27ac;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_00596b39:
      if (iVar4 != 1) {
        core_zombie_cpp_FUN_00599d00(param_1);
      }
    }
    else {
LAB_00596dee:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
    }
  }
  else {
    if (uVar6 < 3) goto LAB_00596b39;
    if (uVar6 != 3) goto LAB_00596dee;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,0,1);
    engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
LAB_00596b5f:
  if (0.0 < *(float *)&param_1->field_0x10a74) {
    *(float *)&param_1->field_0x10a74 = *(float *)&param_1->field_0x10a74 - param_2;
  }
  iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iStack_28 = *(int *)(iVar4 + 0x24);
  puStack_34 = (uint *)&param_1->field_0x2508;
  if (iStack_28 == 0xe) {
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *puStack_34 = *(uint *)&param_1->field_0x250c;
  }
  else if (iStack_28 == 0xf) {
    core_actor_cpp_FUN_00408cf0(param_1,puStack_34);
    fStack_1f4 = fStack_32c;
    afStack_1f0[(uint)bVar15 * -2] = afStack_358[(uint)bVar15 * -2 + 0xc];
    afStack_1f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
         afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0xd];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_1f4;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_1f0[0];
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + afStack_1f0[1];
    puStack_34[2] = 0;
    puStack_34[1] = puStack_34[2];
    *puStack_34 = puStack_34[1];
  }
  else {
    iVar4 = core_charactr_cpp_FUN_00424430((CCharacter *)param_1);
    if (iVar4 != 0) {
      iVar4 = *(int *)&param_1->field_0x10a78;
      if ((iVar4 != 0) &&
         (pCVar7 = (CZombie *)(**(code **)(*(int *)(iVar4 + 0x2b0) + 0xfc))(iVar4),
         pCVar7 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0x10a78);
      }
      core_charactr_cpp_FUN_00423a10(param_1,param_2);
      fStack_254 = *(float *)&param_1->field_0x2588 * param_2;
      fStack_250 = *(float *)&param_1->field_0x258c * param_2;
      fStack_24c = *(float *)&param_1->field_0x2590 * param_2;
      fStack_d4 = fStack_254;
      afStack_d0[(uint)bVar15 * -2] = afStack_2a4[(uint)bVar15 * -2 + 0x15];
      afStack_d0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_2a4[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
      afStack_358[2] = fStack_d4 + *(float *)&param_1->field_0x257c;
      afStack_358[3] = afStack_d0[0] + *(float *)&param_1->field_0x2580;
      fStack_348 = afStack_d0[1] + *(float *)&param_1->field_0x2584;
      fStack_17c = afStack_358[2];
      afStack_178[(uint)bVar15 * -2] = afStack_358[(uint)bVar15 * -2 + 3];
      afStack_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
           afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
      fStack_320 = fStack_17c + *(float *)&param_1->field_0x2508;
      fStack_31c = afStack_178[0] + *(float *)&param_1->field_0x250c;
      fStack_318 = afStack_178[1] + *(float *)&param_1->field_0x2510;
      auStack_11c._0_4_ = fStack_320;
      *(float *)(auStack_11c + (uint)bVar15 * -8 + 4) = afStack_358[(uint)bVar15 * -2 + 0xf];
      *(float *)(auStack_11c + (uint)bVar15 * -8 + (uint)bVar15 * -8 + 8) =
           afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x10];
      *(uint *)&param_1->field_0x2584 = 0;
      *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
      *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2510;
      core_charactr_cpp_FUN_00423a60((CCharacter *)param_1,(CVector3f *)auStack_11c);
      if ((iStack_28 == 1) &&
         (iStack_44 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                (DAT_007bdc98,g_CDoorClassInfo.name_hash), iStack_40 = iStack_44,
         iStack_44 != 0)) {
        (**(code **)(*(int *)(iStack_44 + 0x2b0) + 0x24))(iStack_44);
        pfVar12 = afStack_560;
        pfVar14 = &fStack_4b8;
        for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
          *pfVar14 = *pfVar12;
          pfVar12 = pfVar12 + (uint)bVar15 * -2 + 1;
          pfVar14 = pfVar14 + (uint)bVar15 * -2 + 1;
        }
        afStack_40c[2] = fStack_4b8 + fStack_4ac;
        afStack_40c[3] = fStack_4b4 + fStack_4a8;
        fStack_3fc = fStack_4b0 + fStack_4a4;
        fStack_2e4 = fStack_4b8 + fStack_4ac;
        afStack_358[(uint)bVar15 * -2 + 0x1e] = afStack_40c[(uint)bVar15 * -2 + 3];
        iVar4 = iStack_40;
        afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x1f] =
             afStack_40c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        pfVar12 = &fStack_2b4;
        fStack_488 = fStack_2e4 * _DAT_005ef17a;
        fStack_484 = fStack_2e0 * _DAT_005ef17a;
        fStack_480 = fStack_2dc * _DAT_005ef17a;
        fStack_2b4 = fStack_2e4 * _DAT_005ef17a;
        afStack_2b0[(uint)bVar15 * -2] = afStack_49c[(uint)bVar15 * -2 + 6];
        afStack_2b0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_49c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_actor_cpp_FUN_00408d70(iVar4,pfVar12);
        iVar4 = (int)&uStack_110;
        uStack_110 = uStack_1dc;
        afStack_10c[(uint)bVar15 * 0xfffffffe] = afStack_1f0[(uint)bVar15 * -2 + 6];
        afStack_10c[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 1] =
             afStack_1f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 7];
        core_actor_cpp_FUN_00408de0(param_1,iVar4);
        afStack_158[0] = afStack_1f0[2];
        afStack_178[(uint)bVar15 * -2 + 9] = afStack_1f0[(uint)bVar15 * -2 + 3];
        afStack_178[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 10] =
             afStack_1f0[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4];
        core_vecdir_cpp_FUN_005838f0(afStack_178 + 8);
        afStack_3e8[2] = (float)uStack_308;
        afStack_3e8[(uint)bVar15 * -2 + 3] = afStack_358[(uint)bVar15 * -2 + 0x15];
        afStack_3e8[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 4] =
             afStack_358[(uint)bVar15 * -2 + (uint)bVar15 * -2 + 0x16];
        if (ABS(afStack_3e8[3]) < (float)_DAT_005ef1a2) {
          iVar4 = core_actor_cpp_FUN_0040d060(0.5);
          iVar8 = 0x12;
          if (iVar4 != 0) {
            iVar8 = 0x13;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,iVar8,1);
          *(int *)&param_1->field_0x10b14 = iStack_44;
        }
      }
    }
  }
  iVar4 = iStack_28;
  core_charactr_cpp_FUN_00424470((CCharacter *)param_1);
  if (iVar4 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              ((CDeformableModelInstance *)&param_1->field_0x2b4);
    core_charactr_cpp_FUN_00429e90((CCharacter *)param_1,param_2);
  }
  if (*(int *)&param_1->field_0x10a64 == 0) {
    iVar4 = *(int *)&param_1->field_0x10bc8;
    if (*(int *)(&param_1->field_0x23f4 + iVar4 * 4) == 0) {
      iVar8 = *(int *)&param_1->field_0x10bb0;
      fVar22 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00427060
                (param_1,*(uint *)&param_1->field_0x10bb4,
                 *(uint *)&param_1->field_0x10b9c,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bb4 * 4) != 0) {
        core_charactr_cpp_FUN_00427060
                  (param_1,*(uint *)&param_1->field_0x10bb8,
                   *(uint *)&param_1->field_0x10b94,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00427060
                (param_1,*(uint *)&param_1->field_0x10bbc,
                 *(uint *)&param_1->field_0x10ba0,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bbc * 4) != 0) {
        core_charactr_cpp_FUN_00427060
                  (param_1,*(uint *)&param_1->field_0x10bc0,
                   *(uint *)&param_1->field_0x10b98,0x3e4ccccd);
      }
      iVar8 = *(int *)&param_1->field_0x10b88;
      fVar22 = 0.7;
      iVar4 = *(int *)&param_1->field_0x10bcc;
    }
    core_charactr_cpp_FUN_00427130((CCharacter *)param_1,iVar4,iVar8,fVar22);
    if ((*(int *)&param_1->field_0x10bc4 < 0) &&
       (*(int *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bc8 * 4) != 0)) {
      *(uint *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bc8 * 4) = 0;
      core_charactr_cpp_FUN_00427060
                (param_1,*(uint *)&param_1->field_0x10bc8,
                 *(uint *)&param_1->field_0x10bb0,0x3e4ccccd);
      *(uint *)(&param_1->field_0x23f4 + *(int *)&param_1->field_0x10bc8 * 4) = 1;
    }
    core_charactr_cpp_FUN_00426f30(param_1);
  }
  iVar4 = core_zombie_cpp_FUN_00598e40(param_1,1);
  if (((iStack_a0 != 0) && (-1 < iVar4)) &&
     (iVar4 = *(int *)(&param_1->field_0x2620 + iVar4 * 0x78), iVar4 != 0)) {
    (**(code **)(*(int *)(iVar4 + 0x2b0) + 0x80))(iVar4,2);
    return;
  }
  return;
}
