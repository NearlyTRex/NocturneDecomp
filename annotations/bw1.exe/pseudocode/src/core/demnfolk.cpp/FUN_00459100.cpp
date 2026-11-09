// Name: core_demnfolk.cpp_FUN_00459100
// Address: 00459100
// Address Range: [[00459100, 0045b110]]
// Convention: unknown
// Signature: void core_demnfolk_cpp_FUN_00459100(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_demnfolk_cpp_FUN_00459100(CEnemy *param_1,float param_2)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  CEnemy *pCVar4;
  int iVar5;
  SMotion *pSVar6;
  CPathMap *pCVar7;
  uint *puVar8;
  float *pfVar9;
  float *pfVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float afStackY_1430 [947];
  CVector3f *pCVar14;
  CMotionController *this_ptr;
  EBloodType EVar15;
  float fVar16;
  float fVar17;
  SDamageInfo aSStack_544 [4];
  float fStack_540;
  CEnemy *pCStack_510;
  CEnemy *pCStack_50c;
  float fStack_508;
  float fStack_504;
  float fStack_500;
  float afStack_4fc [3];
  float afStack_4f0 [6];
  float afStack_4d8 [6];
  float afStack_4c0 [6];
  float fStack_4a8;
  float fStack_4a4;
  float fStack_4a0;
  float fStack_49c;
  float fStack_498;
  float fStack_494;
  float afStack_490 [6];
  float fStack_478;
  float fStack_474;
  float fStack_470;
  float fStack_46c;
  float fStack_468;
  float fStack_464;
  float fStack_460;
  float fStack_45c;
  float fStack_458;
  float afStack_454 [3];
  uint uStack_448;
  float afStack_444 [4];
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  float fStack_428;
  float fStack_424;
  float fStack_420;
  float fStack_41c;
  float fStack_418;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  float fStack_400;
  float fStack_3fc;
  float fStack_3f8;
  float afStack_3f4 [3];
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  CVector3f CStack_3dc;
  uint uStack_3d0;
  float afStack_3cc [4];
  float fStack_3bc;
  CVector3f CStack_3b8;
  float fStack_3ac;
  float afStack_3a8 [4];
  float fStack_398;
  float fStack_394;
  float fStack_388;
  uint uStack_37c;
  float fStack_378;
  float fStack_370;
  float fStack_364;
  float afStack_360 [4];
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float afStack_33c [4];
  float fStack_32c;
  CVector3f CStack_328;
  float fStack_31c;
  float afStack_318 [6];
  float afStack_300 [5];
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  CVector3f CStack_2e0;
  float fStack_2d4;
  float afStack_2d0 [2];
  byte auStack_2c8 [12];
  float fStack_2bc;
  float afStack_2b8 [5];
  float afStack_2a4 [3];
  float fStack_298;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float afStack_274 [3];
  float fStack_268;
  float afStack_264 [5];
  float afStack_250 [3];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  byte auStack_238 [12];
  float fStack_22c;
  float afStack_228 [4];
  float fStack_218;
  float afStack_214 [3];
  float fStack_208;
  float afStack_1fc [4];
  float afStack_1ec [4];
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  CVector3f CStack_1b4;
  uint uStack_1a8;
  float afStack_1a4 [5];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  CVector3f CStack_178;
  float fStack_16c;
  float afStack_168 [4];
  float fStack_158;
  float fStack_154;
  uint uStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  CVector3f CStack_130;
  uint uStack_124;
  float afStack_120 [5];
  float fStack_10c;
  float afStack_108 [5];
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint auStack_dc [3];
  uint uStack_d0;
  double dStack_c4;
  double dStack_b4;
  float fStack_a8;
  int iStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float *pfStack_84;
  int iStack_80;
  float *pfStack_7c;
  int iStack_74;
  uint uStack_70;
  float fStack_6c;
  int iStack_68;
  byte *puStack_64;
  float *pfStack_60;
  float fStack_5c;
  float fStack_58;
  int iStack_54;
  int iStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  int iStack_34;
  CMotionController *pCStack_30;
  uint *puStack_2c;
  CMotionController *pCStack_28;
  int iStack_24;
  int iStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[1].field_0xe8);
    return;
  }
  if ((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) == 0) &&
     (iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x10c))(param_1), iVar2 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0x18,1);
  }
  iStack_50 = *(int *)&param_1->field_0x26fc;
  if (iStack_50 != 0) {
    fStack_14 = *(float *)(iStack_50 + 0x154);
    core_skeleton_cpp_FUN_00569130(&param_1->field_0x158,0);
    fVar16 = fStack_14;
    iVar2 = iStack_50;
    pfVar9 = afStack_2b8 + 5;
    afStack_2a4[0] = (float)uStack_1a8;
    afStack_2b8[(uint)bVar11 * -2 + 6] = afStack_1a4[(uint)bVar11 * -2];
    pCVar4 = param_1;
    afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    iVar2 = (**(code **)((int)fVar16 + 0x110))(iVar2,pCVar4,pfVar9);
    if (iVar2 != 0) {
      return;
    }
    *(uint *)&param_1->field_0x26fc = 0;
    return;
  }
  iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0xf0);
  if (iVar2 != 0) {
    if (*(int *)&g_CGamePtr->field_0x280 == 1) {
      fVar16 = (1.0 - *(float *)&g_CGamePtr->field_0x284) * (float)_DAT_005d801b +
               (float)_DAT_005d801b;
      uVar3 = *(uint *)&param_1[1].field_0xf0;
      fStack_a8 = fVar16;
    }
    else {
      uVar3 = *(uint *)&param_1[1].field_0xf0;
      fVar16 = 1.0;
    }
    sound_sndmain_cpp_FUN_00573980(uVar3,fVar16);
  }
  if (0.0 < *(float *)&param_1[1].field_0xdc) {
    *(float *)&param_1[1].field_0xdc = *(float *)&param_1[1].field_0xdc - param_2;
  }
  pfStack_60 = afStack_454;
  fStack_9c = param_2 * *(float *)&param_1->field_0xc1d0 * *(float *)&param_1[1].field_0x100;
  pfStack_84 = afStack_4fc;
  pCStack_28 = (CMotionController *)&param_1->field_0x158;
LAB_004591e5:
  if (0.0 < fStack_9c) {
    uVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_28,&fStack_9c);
    if (uVar3 < 0xb) {
      if (uVar3 < 5) {
        if (uVar3 == 2) {
          iVar2 = *(int *)&param_1[1].field_0x10;
          if (iVar2 != 0) {
            *(uint *)&param_1[1].field_0x10 = 0;
            iVar5 = unkafter_demnfolk_cpp_FUN_0045bec0
                              (param_1,*(uint *)&param_1[1].field_0x14);
            if (-1 < iVar5) {
              core_charactr_cpp_FUN_004325b0(param_1,iVar5,iVar2,0x3e4ccccd,0);
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",param_1,iVar2,iVar5);
            }
          }
        }
        else {
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar3);
        }
        goto LAB_004591e5;
      }
      if (uVar3 < 6) {
        iStack_94 = 1;
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          afStack_274[2] = 0x3FA66666;
          afStack_274[0] = 0.0;
          afStack_274[1] = 0.0;
          core_actor_cpp_FUN_00408b40(param_1,afStack_2b8 + 0x11);
          fStack_40c = fStack_208;
          afStack_444[(uint)bVar11 * -2 + 0xf] = afStack_228[(uint)bVar11 * -2 + 9];
          afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
               afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
          iVar2 = *(int *)&param_1->field_0xc1e8;
          fStack_280 = fStack_40c - *(float *)(iVar2 + 0x20);
          fStack_27c = fStack_408 - *(float *)(iVar2 + 0x24);
          fStack_278 = fStack_404 - *(float *)(iVar2 + 0x28);
          afStack_120[2] = fStack_280;
          afStack_120[(uint)bVar11 * -2 + 3] = afStack_2b8[(uint)bVar11 * -2 + 0xf];
          afStack_120[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
          afStack_120[3] = 0.0;
          if (SQRT(afStack_120[4] * afStack_120[4] + afStack_120[2] * afStack_120[2]) <= 1.0) {
            afStack_318[2] = 0.0;
            afStack_318[4] = 0.0;
            afStack_318[3] = 4.0;
            core_actor_cpp_FUN_00408b40(param_1,afStack_318 + 2);
            CStack_3dc._0_4_ = CStack_2e0._0_4_;
            *(uint *)((int)&CStack_3dc + (uint)bVar11 * -8 + 4) =
                 *(uint *)((int)&CStack_2e0 + (uint)bVar11 * -8 + 4);
            *(uint *)((int)&CStack_3dc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 *(uint *)((int)&CStack_2e0 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            puVar8 = (uint *)(*(int *)&param_1->field_0xc1e8 + 0x24 + (uint)bVar11 * -8);
            CStack_1b4._0_4_ = *(uint *)(*(int *)&param_1->field_0xc1e8 + 0x20);
            *(uint *)((int)&CStack_1b4 + (uint)bVar11 * -8 + 4) = *puVar8;
            *(uint *)((int)&CStack_1b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 puVar8[(uint)bVar11 * -2 + 1];
            CStack_1b4._4_4_ = CStack_3dc._4_4_;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
            iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                              (g_CDemonSetPtr,&CStack_3dc,&CStack_1b4);
            if (iVar2 != 0) {
              iStack_94 = 0;
            }
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            if ((iStack_94 == 0) ||
               (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xec))
                                  (*(int *)&param_1->field_0xc1e8,param_1,0), iVar2 != 0)) {
              if (iStack_94 == 0) {
                unkafter_demnfolk_cpp_FUN_0045d060(param_1);
              }
              goto LAB_004591e5;
            }
          }
        }
        unkafter_demnfolk_cpp_FUN_0045d060(param_1);
        goto LAB_004591e5;
      }
      if (uVar3 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar3);
        goto LAB_004591e5;
      }
      if (*(int *)&param_1->field_0xc1e8 != 0) {
        core_skeleton_cpp_FUN_00569040(pCStack_28,*(uint *)&param_1[1].field_0x94);
        puVar8 = auStack_dc;
        auStack_dc[0] = uStack_448;
        afStack_108[(uint)bVar11 * -2 + 0xc] = afStack_444[(uint)bVar11 * -2];
        afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
             afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_FUN_00408b40(param_1,puVar8);
        fStack_340 = fStack_418;
        afStack_33c[(uint)bVar11 * -2] = afStack_444[(uint)bVar11 * -2 + 0xc];
        afStack_33c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
        if (*(int *)&param_1[1].field_0xd0 < 0) {
          fVar16 = fStack_340 - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x20);
          fVar17 = afStack_33c[1] - *(float *)(*(int *)&param_1->field_0xc1e8 + 0x28);
          if ((float)_DAT_005d80a3 < SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
            unkafter_demnfolk_cpp_FUN_0045d060(param_1);
            goto LAB_004591e5;
          }
        }
        else {
          pCVar4 = (CEnemy *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                             (*(int *)&param_1->field_0xc1e8);
          if (pCVar4 != param_1) {
            unkafter_demnfolk_cpp_FUN_0045d060(param_1);
            goto LAB_004591e5;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_544);
        fStack_14 = (float)core_actor_cpp_FUN_0040cc00(0x41200000,0x41a00000);
        fStack_540 = fStack_14 * *(float *)&param_1[1].field_0x100;
        pCStack_510 = param_1;
        pCStack_50c = param_1;
        (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x108))
                  (*(int *)&param_1->field_0xc1e8,aSStack_544);
        dStack_b4 = (double)fStack_540;
        if (0.0 < dStack_b4) {
          fVar12 = (float10)fStack_540 * (float10)_DAT_005d807b * (float10)_DAT_005d8083;
          EVar15 = BLOOD_TYPE_RED;
          round();
          iStack_34 = (int)ROUND(fVar12);
          core_gore_cpp_FUN_004e6060
                    (g_CGorePtr,(CVector3f *)&fStack_340,(CVector3f *)0x0,iStack_34,EVar15);
        }
        iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                          (*(int *)&param_1->field_0xc1e8);
        if (0 < iVar2) {
          (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf0))
                    (*(int *)&param_1->field_0xc1e8);
          unkafter_demnfolk_cpp_FUN_0045d060(param_1);
        }
        iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0xec);
        if (iVar2 == 0) {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x154))(param_1);
        }
        goto LAB_004591e5;
      }
      unkafter_demnfolk_cpp_FUN_0045d060(param_1);
    }
    else if (uVar3 < 0xc) {
      iVar2 = unkafter_demnfolk_cpp_FUN_0045bec0(param_1,2);
      if (iVar2 < 0) {
        _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
        _DAT_01d1d404 = 0x24a;
        core_main_c_FUN_005030e0(&DAT_005d7f2f);
      }
      if (*(int *)(&param_1->field_0x25b0 + iVar2 * 0x78) != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s lugging %s\n",param_1,
                   *(int *)(&param_1->field_0x25b0 + iVar2 * 0x78));
        afStack_1fc[0] = 0.0;
        afStack_1fc[1] = 6.0;
        afStack_1fc[2] = 17.0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iVar2,afStack_228 + 0xb);
        (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
      }
    }
    else if (uVar3 < 0x65) {
      if (uVar3 == 0xc) {
        iStack_74 = unkafter_demnfolk_cpp_FUN_0045bec0(param_1,3);
        if (iStack_74 < 0) {
          _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
          _DAT_01d1d404 = 0x261;
          core_main_c_FUN_005030e0(&DAT_005d7f58);
        }
        puStack_64 = &param_1->field_0x0 + iStack_74 * 0x78;
        if (*(int *)(puStack_64 + 0x25b0) != 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s tossing %s\n",param_1,*(int *)(puStack_64 + 0x25b0));
          fStack_2ec = 0.0;
          fStack_2e8 = 0.0;
          fStack_2e4 = 1.0;
          if (*(int *)&param_1->field_0xc1e8 != 0) {
            (**(code **)(*(int *)(*(int *)(puStack_64 + 0x25b0) + 0x154) + 0x1c))
                      (*(int *)(puStack_64 + 0x25b0));
            pfVar9 = afStack_4c0;
            pfVar10 = &fStack_460;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pfVar10 = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
              pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
            }
            fStack_244 = fStack_460 + *pfStack_60;
            fStack_240 = fStack_45c + pfStack_60[1];
            fStack_23c = fStack_458 + pfStack_60[2];
            fStack_430 = fStack_460 + *pfStack_60;
            afStack_444[(uint)bVar11 * -2 + 6] = afStack_264[(uint)bVar11 * -2 + 9];
            puVar1 = puStack_64;
            afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_264[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            pfVar9 = afStack_228 + 5;
            fStack_3ac = fStack_430 * _DAT_005d8073;
            afStack_3a8[0] = fStack_42c * _DAT_005d8073;
            afStack_3a8[1] = fStack_428 * _DAT_005d8073;
            afStack_214[0] = fStack_430 * _DAT_005d8073;
            afStack_228[(uint)bVar11 * -2 + 6] = afStack_3a8[(uint)bVar11 * -2];
            afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            core_actor_cpp_FUN_00408b40(*(uint *)(puVar1 + 0x25b0),pfVar9);
            fStack_31c = afStack_264[2];
            afStack_318[(uint)bVar11 * -2] = afStack_264[(uint)bVar11 * -2 + 3];
            afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_264[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x1c))
                      (*(int *)&param_1->field_0xc1e8);
            pfVar9 = afStack_4f0;
            pfVar10 = &fStack_508;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pfVar10 = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
              pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
            }
            fStack_3e8 = fStack_508 + *pfStack_84;
            fStack_3e4 = fStack_504 + pfStack_84[1];
            fStack_3e0 = fStack_500 + pfStack_84[2];
            fStack_34c = fStack_508 + *pfStack_84;
            afStack_360[(uint)bVar11 * -2 + 6] = afStack_444[(uint)bVar11 * -2 + 0x18];
            afStack_360[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
            fStack_184 = fStack_34c * _DAT_005d8073;
            fStack_180 = fStack_348 * _DAT_005d8073;
            fStack_17c = fStack_344 * _DAT_005d8073;
            afStack_250[0] = fStack_34c * _DAT_005d8073;
            afStack_264[(uint)bVar11 * -2 + 6] = afStack_1a4[(uint)bVar11 * -2 + 9];
            afStack_264[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0xc1e8,afStack_264 + 5);
            afStack_444[2] = fStack_154;
            afStack_444[(uint)bVar11 * -2 + 3] = afStack_168[(uint)bVar11 * -2 + 6];
            afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            fStack_e8 = afStack_444[2] - fStack_31c;
            fStack_e4 = afStack_444[3] - afStack_318[0];
            fStack_e0 = fStack_434 - afStack_318[1];
            afStack_168[2] = afStack_444[2] - fStack_31c;
            afStack_168[(uint)bVar11 * -2 + 3] = afStack_108[(uint)bVar11 * -2 + 9];
            afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            fStack_a0 = SQRT(fStack_158 * fStack_158 +
                             afStack_168[2] * afStack_168[2] + afStack_168[3] * afStack_168[3]);
            if (0.0 < fStack_a0) {
              core_actor_cpp_FUN_00408b00(param_1,afStack_168 + 2);
              afStack_3cc[2] = fStack_388;
              afStack_3cc[(uint)bVar11 * -2 + 3] = afStack_3a8[(uint)bVar11 * -2 + 9];
              afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                   afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
              fVar16 = 1.0 / fStack_a0;
              fStack_2bc = afStack_3cc[2] * fVar16;
              afStack_2b8[0] = afStack_3cc[3] * fVar16;
              afStack_2b8[1] = fStack_3bc * fVar16;
              fStack_424 = afStack_3cc[2] * fVar16;
              afStack_444[(uint)bVar11 * -2 + 9] = afStack_2b8[(uint)bVar11 * -2];
              afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                   afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              if (afStack_300 + 5 != afStack_444 + 8) {
                fStack_2ec = fStack_424;
                fStack_2e8 = fStack_420;
                fStack_2e4 = fStack_41c;
              }
            }
          }
          fStack_2ec = fStack_2ec * _DAT_005d8077;
          fStack_2e4 = fStack_2e4 * _DAT_005d8077;
          fStack_2e8 = fStack_2e8 * _DAT_005d8077 + _DAT_005d809b;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,iStack_74,afStack_300 + 5);
          (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar3);
      }
    }
    else if (uVar3 < 0x66) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"fall-?.wav");
    }
    else if (uVar3 == 0x29a) {
      core_skeleton_cpp_FUN_00569040(pCStack_28,*(uint *)&param_1[1].field_0x94);
      puVar8 = &uStack_3d0;
      uStack_3d0 = uStack_148;
      afStack_3cc[(uint)bVar11 * -2] = afStack_168[(uint)bVar11 * -2 + 9];
      afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      core_actor_cpp_FUN_00408b40(param_1,puVar8);
      EVar15 = BLOOD_TYPE_RED;
      iVar2 = 3;
      pCVar14 = (CVector3f *)0x0;
      CStack_328._0_4_ = CStack_3b8._0_4_;
      *(uint *)((int)&CStack_328 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)&CStack_3b8 + (uint)bVar11 * -8 + 4);
      *(uint *)((int)&CStack_328 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           *(uint *)((int)&CStack_3b8 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
      core_gore_cpp_FUN_004e6060(g_CGorePtr,&CStack_328,pCVar14,iVar2,EVar15);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x154))(param_1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)param_1,uVar3);
    }
    goto LAB_004591e5;
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
  if (((*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xcc * 4) == 0) &&
      (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc4 * 4) == 0)) ||
     (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd8 * 4) == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&param_1->field_0x158,0x18,1);
  }
  puVar1 = &param_1->field_0x158;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)puVar1);
  iVar2 = *(int *)(pSVar6 + 0x24);
  iStack_a4 = 0;
  iVar5 = core_charactr_cpp_FUN_00432240((CCharacter *)param_1,param_2);
  if (iVar5 == 0) {
    fStack_1c = -1.0;
    fStack_98 = 0.3;
    pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)puVar1);
    switch(*(uint *)(pSVar6 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar2 = core_actor_cpp_FUN_0040cd00(param_2 * (float)_DAT_005d806b);
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 != 0) {
          unkafter_demnfolk_cpp_FUN_0045d060(param_1);
        }
        (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
        if (*(int *)&param_1->field_0xc1e8 == 0) {
          iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if (iVar2 == 0) break;
          *(uint *)&g_CGamePtr->field_0x23c = 1;
          *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        }
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          unkafter_demnfolk_cpp_FUN_0045d060(param_1);
          iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0xe8);
          if (iVar2 == 0) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
          }
        }
      }
      else {
LAB_0045a07d:
        iVar5 = 1;
        iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar2,iVar5);
      }
      break;
    case 4:
    case 6:
    case 7:
    case 8:
      iVar2 = core_actor_cpp_FUN_0040cd00(0.3);
      if (iVar2 != 0) {
        (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
      }
      iVar2 = *(int *)&param_1->field_0xc1e8;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      if ((*(int *)&param_1->field_0xc1e8 == 0) &&
         (iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
         iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar5 != 0)) {
        *(uint *)&g_CGamePtr->field_0x23c = 1;
        *(uint *)&param_1->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      }
      if (*(int *)&param_1->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_FUN_004a0fe0(param_1,param_2);
        if (iVar2 == 0) {
          iVar5 = 1;
          iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,iVar2,iVar5);
        }
      }
      else {
        if (iVar2 == 0) {
          iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[1].field_0xe8);
          if (iVar2 == 0) {
            (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1);
          }
          goto LAB_0045a676;
        }
        if (*(int *)&param_1->field_0xc1e8 != 0) {
          fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
          if ((float)_DAT_005d803b < fStack_14) {
            iVar2 = *(int *)&param_1->field_0xc1e8;
            fStack_190 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_18c = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_188 = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            fStack_1cc = fStack_190;
            afStack_1ec[(uint)bVar11 * -2 + 9] = afStack_1a4[(uint)bVar11 * -2 + 6];
            afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            if (afStack_1ec + 0xb != afStack_1ec + 8) {
              fStack_1c0 = fStack_1cc;
              fStack_1bc = fStack_1c8;
              fStack_1b8 = fStack_1c4;
            }
            fStack_5c = SQRT(fStack_1b8 * fStack_1b8 +
                             fStack_1c0 * fStack_1c0 + fStack_1bc * fStack_1bc);
            if ((fStack_5c < _DAT_005d8043) && (_DAT_005d8047 < fStack_5c)) {
              iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
              if (iVar2 == 1) {
                *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + _DAT_005d804b;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,0xc,1);
              }
              else {
                unkafter_demnfolk_cpp_FUN_0045d060(param_1);
              }
            }
          }
        }
        iVar2 = core_actor_cpp_FUN_0040cd00(param_2 * (float)_DAT_005d8053);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,4,1);
        }
        uStack_70 = (uint)(*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc4 * 4) !=
                          0);
        if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xcc * 4) != 0) {
          uStack_70 = uStack_70 + 1;
        }
        iVar2 = core_demnfolk_cpp_FUN_0045b560(param_1,param_2);
        if (iVar2 == 0) {
          fStack_6c = 0x3FA66666;
          iStack_68 = unkafter_demnfolk_cpp_FUN_0045bec0(param_1,1);
          if (((-1 < iStack_68) &&
              (iVar2 = *(int *)(&param_1->field_0x25b0 + iStack_68 * 0x78), iVar2 != 0)) &&
             (*(int *)&param_1[1].field_0x14 == 1)) {
            fStack_58 = 1.0;
            if (iVar2 != 0) {
              (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
              pfVar9 = afStack_4d8;
              pfVar10 = &fStack_478;
              for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
                *pfVar10 = *pfVar9;
                pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)&fStack_364);
              fStack_364 = fStack_46c - fStack_478;
              afStack_360[0] = fStack_468 - fStack_474;
              afStack_360[1] = fStack_464 - fStack_470;
              fStack_298 = fStack_46c - fStack_478;
              afStack_2b8[(uint)bVar11 * -2 + 9] = afStack_360[(uint)bVar11 * -2];
              afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                   afStack_360[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              fStack_58 = fStack_290 * (float)_DAT_005d801b + 1.0;
            }
            fStack_6c = fStack_58;
          }
          fVar17 = 0.34906584;
          fVar16 = 1.1;
          auStack_2c8._0_4_ = 0;
          auStack_2c8._8_4_ = fStack_6c;
          pCVar14 = (CVector3f *)auStack_2c8;
          auStack_2c8._4_4_ = 0;
          pCVar7 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xc1e8);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),pCVar7,pCVar14,
                             fVar16,fVar17);
          pCStack_30 = (CMotionController *)&param_1->field_0x158;
          if (iVar2 < 0) {
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
            iVar5 = 1;
            iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,iVar2,iVar5);
          }
          else if (iVar2 < 1) {
            iStack_54 = unkafter_demnfolk_cpp_FUN_0045bec0
                                  (param_1,*(uint *)&param_1[1].field_0x14);
            iVar2 = *(int *)&param_1->field_0xc1e8;
            afStack_33c[2] = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
            afStack_33c[3] = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
            fStack_32c = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
            fStack_1d8 = afStack_33c[2];
            afStack_1ec[(uint)bVar11 * -2 + 6] = afStack_33c[(uint)bVar11 * -2 + 3];
            afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_33c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            if (SQRT(fStack_1d0 * fStack_1d0 + fStack_1d8 * fStack_1d8 + fStack_1d4 * fStack_1d4) <
                (float)_DAT_005d805b) {
              core_actor_cpp_FUN_00408bb0(param_1,iVar2 + 0x20);
              afStack_300[2] = afStack_2b8[2];
              afStack_300[(uint)bVar11 * -2 + 3] = afStack_2b8[(uint)bVar11 * -2 + 3];
              afStack_300[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                   afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              core_vecdir_cpp_FUN_005a7520(afStack_300 + 2);
              uStack_37c = uStack_124;
              afStack_3a8[(uint)bVar11 * -2 + 0xc] = afStack_120[(uint)bVar11 * -2];
              afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
                   afStack_120[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
              if (((ABS(fStack_378) < (float)_DAT_005d8063) && (-1 < iStack_54)) &&
                 (uVar3 = *(uint *)&param_1[1].field_0x14, 1 < uVar3)) {
                if (uVar3 < 3) {
                  if (*(int *)(&param_1->field_0x25b0 + iStack_54 * 0x78) != 0) {
                    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s lugging\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (pCStack_30,0x23,1);
                  }
                }
                else if ((uVar3 == 3) && (*(int *)(&param_1->field_0x25b0 + iStack_54 * 0x78) != 0))
                {
                  engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s tossing\n",param_1);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,0x21,1);
                }
              }
            }
          }
          else if (((0 < (int)uStack_70) && (*(float *)&param_1->field_0xc1e4 <= 0.0)) &&
                  (iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                                     (*(int *)&param_1->field_0xc1e8), iVar2 == 0)) {
            if ((iStack_68 < 0) || (*(int *)(&param_1->field_0x25b0 + iStack_68 * 0x78) == 0)) {
              this_ptr = (CMotionController *)&param_1->field_0x158;
              iVar2 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                                (*(int *)&param_1->field_0xc1e8);
              if (iVar2 == 0) {
                iVar2 = 0xe;
              }
              else {
                iVar2 = core_actor_cpp_FUN_0040cd00(0.5);
                if (iVar2 == 0) {
                  iVar2 = 0x2c;
                }
                else {
                  iVar2 = 0x2b;
                }
              }
            }
            else {
              iVar2 = 0xd;
              this_ptr = pCStack_30;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar2,1);
            *(uint *)&param_1->field_0xc1e4 = 0x3f4ccccd;
          }
        }
      }
      break;
    case 5:
    case 9:
    case 10:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
      if ((float)_DAT_005d803b < fStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,4,1);
      }
      break;
    case 0xd:
      if (*(int *)&param_1->field_0xc1e8 == 0) {
LAB_0045ac61:
        unkafter_demnfolk_cpp_FUN_0045d060(param_1);
      }
      else {
        iVar2 = unkafter_demnfolk_cpp_FUN_0045bec0(param_1,1);
        if ((((iVar2 < 0) ||
             (iVar5 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0x10c))
                                (*(int *)&param_1->field_0xc1e8), 0 < iVar5)) ||
            (*(int *)(&param_1->field_0x25b0 + iVar2 * 0x78) == 0)) ||
           (iVar5 = (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                              (*(int *)&param_1->field_0xc1e8), iVar5 != 0)) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up swing\n",param_1);
          unkafter_demnfolk_cpp_FUN_0045d060(param_1);
        }
        else {
          iVar2 = *(int *)(&param_1->field_0x25b0 + iVar2 * 0x78);
          fStack_48 = 1.0;
          if (iVar2 != 0) {
            (**(code **)(*(int *)(iVar2 + 0x154) + 0x1c))(iVar2);
            pfVar9 = afStack_490;
            pfVar10 = &fStack_4a8;
            for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
              *pfVar10 = *pfVar9;
              pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
              pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
            }
            core_actor_cpp_CVector3f_ctor_FUN_0040cfe0((CVector3f *)&fStack_268);
            fStack_268 = fStack_49c - fStack_4a8;
            afStack_264[0] = fStack_498 - fStack_4a4;
            afStack_264[1] = fStack_494 - fStack_4a0;
            fStack_22c = fStack_49c - fStack_4a8;
            afStack_228[(uint)bVar11 * -2] = afStack_264[(uint)bVar11 * -2];
            afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_264[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            afStack_1a4[2] = fStack_22c;
            afStack_1a4[(uint)bVar11 * -2 + 3] = afStack_228[(uint)bVar11 * -2];
            afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            fStack_16c = afStack_1a4[2];
            afStack_168[(uint)bVar11 * -2] = afStack_1a4[(uint)bVar11 * -2 + 3];
            afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            fStack_370 = fStack_16c;
            afStack_3a8[(uint)bVar11 * -2 + 0xf] = afStack_168[(uint)bVar11 * -2];
            afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
                 afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            afStack_1fc[3] = fStack_370;
            afStack_1ec[(uint)bVar11 * -2] = afStack_3a8[(uint)bVar11 * -2 + 0xf];
            afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
            fStack_48 = afStack_1ec[1] * (float)_DAT_005d801b + fStack_48;
          }
          fStack_1c = fStack_48;
          fStack_4c = core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
          dStack_c4 = (double)fStack_4c;
          fStack_14 = fStack_4c;
          if ((1.0 <= dStack_c4) && (dStack_c4 <= _DAT_005d8033)) {
            iStack_a4 = 1;
          }
        }
      }
      break;
    case 0xe:
      iVar2 = *(int *)&param_1->field_0xc1e8;
      if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), 0 < iVar2)
         ) {
LAB_0045a676:
        unkafter_demnfolk_cpp_FUN_0045d060(param_1);
      }
      else {
        pCVar4 = (CEnemy *)
                 (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xf4))
                           (*(int *)&param_1->field_0xc1e8);
        if (pCVar4 == (CEnemy *)0x0) {
          fStack_1c = 0x3FA66666;
          fStack_98 = 3.0;
        }
        else if (pCVar4 != param_1) goto LAB_0045ac61;
      }
      break;
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      if ((*(int *)&param_1->field_0xc1d4 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(&param_1->field_0x158,0);
        pfVar9 = afStack_444 + 0x14;
        afStack_3f4[0] = (float)uStack_d0;
        afStack_444[(uint)bVar11 * -2 + 0x15] = afStack_108[(uint)bVar11 * -2 + 0xf];
        afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
             afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
        core_actor_cpp_FUN_00408b40(param_1,pfVar9);
        EVar15 = BLOOD_TYPE_RED;
        CStack_178._0_4_ = CStack_130._0_4_;
        *(uint *)((int)&CStack_178 + (uint)bVar11 * -8 + 4) =
             *(uint *)((int)&CStack_130 + (uint)bVar11 * -8 + 4);
        *(uint *)((int)&CStack_178 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             *(uint *)((int)&CStack_130 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_178,EVar15);
        *(uint *)&param_1->field_0xc1d4 = 1;
      }
      break;
    case 0x24:
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&param_1[1].field_0x20);
      if ((iVar2 != 0) &&
         (fVar16 = *(float *)&param_1[1].field_0xf4 - param_2,
         *(float *)&param_1[1].field_0xf4 = fVar16, fVar16 < 0.0)) {
        pfStack_7c = (float *)&param_1->field_0x20;
        iStack_80 = 0;
        iStack_24 = 0;
        *(float *)&param_1[1].field_0xf4 = *(float *)&param_1[1].field_0xf4 + 1.0;
        for (; iStack_80 < *(int *)&g_CDemonSetPtr->field_0x14f0a8; iStack_80 = iStack_80 + 1) {
          iVar2 = *(int *)(&g_CDemonSetPtr->field_0x14f0ac + iStack_24);
          iVar5 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))(iVar2,param_1);
          if (iVar5 != 0) {
            afStack_228[2] = *(float *)(iVar2 + 0x20) - *pfStack_7c;
            afStack_228[3] = *(float *)(iVar2 + 0x24) - pfStack_7c[1];
            fStack_218 = *(float *)(iVar2 + 0x28) - pfStack_7c[2];
            afStack_108[2] = afStack_228[2];
            afStack_108[(uint)bVar11 * -2 + 3] = afStack_228[(uint)bVar11 * -2 + 3];
            afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            if ((ABS(afStack_108[3]) <= (float)_DAT_005d80ab) &&
               (afStack_108[3] = 0.0,
               SQRT(afStack_108[4] * afStack_108[4] + afStack_108[2] * afStack_108[2]) <=
               *(float *)&param_1->field_0xc1e0)) {
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s rising from the grave\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0x25,1);
              if (*(CGrave **)&param_1[1].field_0x18 != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0
                          (*(CGrave **)&param_1[1].field_0x18);
                *(uint *)&param_1[1].field_0x18 = 0;
              }
              *(uint *)&param_1->field_0xc1e0 = 0x42c80000;
              break;
            }
          }
          iStack_24 = iStack_24 + 4;
        }
      }
      break;
    case 0x2a:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xc1e8;
      if ((iVar2 != 0) &&
         ((fVar16 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20),
          fVar17 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28),
          SQRT(fVar17 * fVar17 + fVar16 * fVar16) <= (float)_DAT_005d802b &&
          (ABS(*(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24)) <= (float)_DAT_005d8033)))
         ) {
        iVar5 = 1;
        iVar2 = core_actor_cpp_FUN_0040cc60(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar1,iVar2,iVar5);
      }
      break;
    case 0x2b:
    case 0x2c:
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if ((iVar2 == 0) &&
         ((**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2),
         *(int *)&param_1->field_0xc1e8 != 0)) goto LAB_0045a07d;
      break;
    case 0x2d:
      core_set_cpp_FUN_0054f060(g_CDemonSetPtr,(CDemonActor *)param_1);
      break;
    case 0x2f:
      fVar16 = *(float *)&param_1[1].field_0xf8 - param_2;
      *(float *)&param_1[1].field_0xf8 = fVar16;
      if (fVar16 <= 0.0) {
        iVar2 = *(int *)&param_1->field_0x154;
        *(uint *)&param_1[1].field_0xf8 = 0;
        (**(code **)(iVar2 + 0x144))(param_1,param_2);
        iVar2 = *(int *)&param_1->field_0xc1e8;
        if (iVar2 != 0) {
          fStack_28c = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          fStack_288 = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_284 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          afStack_360[2] = fStack_28c;
          afStack_360[(uint)bVar11 * -2 + 3] = afStack_2b8[(uint)bVar11 * -2 + 0xc];
          afStack_360[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
               afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          if (afStack_168 + 0xb != afStack_360 + 2) {
            fStack_13c = afStack_360[2];
            fStack_138 = afStack_360[3];
            fStack_134 = fStack_350;
          }
          fStack_90 = fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138;
          fStack_8c = (float)(((int)fStack_90 >> 1) + _DAT_01cc804c);
          if (fStack_8c <= (float)_DAT_005d8023) {
            fStack_18 = *(float *)&param_1->field_0x3000;
            if (fStack_18 < *(float *)&param_1->field_0x2ffc) {
              fStack_18 = *(float *)&param_1->field_0x2490;
            }
            if (fStack_18 < *(float *)&param_1->field_0x2ffc) {
              fStack_18 = *(float *)&param_1->field_0x2ffc + (float)_DAT_005d801b;
            }
            iVar2 = 0;
            do {
              fStack_88 = (float)iVar2 * _DAT_005d808b * _DAT_005d808f;
              fStack_14 = (float)iVar2;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)param_1)
              ;
              fVar12 = (float10)fcos((float10)fStack_88);
              fVar13 = (float10)fsin((float10)fStack_88);
              fStack_44 = (float)core_setcolid_cpp_FUN_00558450
                                           (g_CDemonSetPtr,*(uint *)&param_1->field_0x20,
                                            *(uint *)&param_1->field_0x28,
                                            (float)(fVar13 * (float10)_DAT_005d8093),
                                            (float)(fVar12 * (float10)_DAT_005d8093),
                                            *(uint *)&param_1->field_0x2ff0,
                                            *(float *)&param_1->field_0x24 +
                                            *(float *)&param_1->field_0x2ffc,
                                            *(float *)&param_1->field_0x24 + fStack_18);
              fStack_14 = fStack_44;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              if (fStack_44 < 1.0) break;
              iVar2 = iVar2 + 1;
            } while (iVar2 < 4);
            if (3 < iVar2) goto LAB_0045a07d;
            *(uint *)&param_1[1].field_0xf8 = 0x40400000;
            *(uint *)&param_1->field_0xc1e8 = 0;
          }
        }
      }
    }
    if ((0.0 <= fStack_1c) && (*(int *)&param_1->field_0xc1e8 != 0)) {
      *(float *)&param_1->field_0x2524 = fStack_98 * *(float *)&param_1->field_0xc1d0 * param_2;
      core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)&param_1->field_0xc1d0);
      fVar17 = 0.7853982;
      fVar16 = 3.0;
      auStack_238._0_4_ = 0;
      auStack_238._8_4_ = fStack_1c;
      pCVar14 = (CVector3f *)auStack_238;
      auStack_238._4_4_ = 0;
      pCVar7 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&param_1->field_0xc1e8 + 0x154) + 0xc4))
                         (*(int *)&param_1->field_0xc1e8);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)param_1,(CVector3f *)(*(int *)&param_1->field_0xc1e8 + 0x20),
                         pCVar7,pCVar14,fVar16,fVar17);
      if (iVar2 != 1) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s giving up attack\n",param_1);
        unkafter_demnfolk_cpp_FUN_0045d060(param_1);
        *(uint *)&param_1->field_0x2508 = 0;
      }
    }
    goto LAB_00459d36;
  }
  uVar3 = *(uint *)&param_1->field_0x273c;
  if (uVar3 < 2) {
    if (uVar3 == 1) goto LAB_00459d1e;
LAB_00459f57:
    iVar2 = 0;
  }
  else {
    if (2 < uVar3) {
      if (uVar3 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,2,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
        goto LAB_00459d36;
      }
      goto LAB_00459f57;
    }
LAB_00459d1e:
    if (iVar2 == 4) goto LAB_00459d36;
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&param_1->field_0x158,iVar2,1);
LAB_00459d36:
  if (0.0 < *(float *)&param_1->field_0xc1e4) {
    *(float *)&param_1->field_0xc1e4 = *(float *)&param_1->field_0xc1e4 - param_2;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  iStack_20 = *(int *)(pSVar6 + 0x24);
  puStack_2c = (uint *)&param_1->field_0x249c;
  if (iStack_20 == 0x24) {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *puStack_2c = *(uint *)&param_1->field_0x24a0;
  }
  else if (iStack_20 == 0x25) {
    core_actor_cpp_FUN_00408ac0(param_1,puStack_2c);
    fStack_400 = fStack_394;
    afStack_444[(uint)bVar11 * -2 + 0x12] = afStack_3a8[(uint)bVar11 * -2 + 6];
    afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_400;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_3fc;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_3f8;
    puStack_2c[2] = 0;
    puStack_2c[1] = puStack_2c[2];
    *puStack_2c = puStack_2c[1];
  }
  else {
    iVar2 = core_charactr_cpp_FUN_0042e120((CCharacter *)param_1);
    if (iVar2 != 0) {
      iVar2 = *(int *)&param_1->field_0xc1e8;
      if ((iVar2 != 0) &&
         (pCVar4 = (CEnemy *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2), pCVar4 == param_1
         )) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xc1e8);
      }
      core_charactr_cpp_FUN_0042d700(param_1,param_2);
      afStack_318[5] = *(float *)&param_1->field_0x2518 * param_2;
      afStack_300[0] = *(float *)&param_1->field_0x251c * param_2;
      afStack_300[1] = *(float *)&param_1->field_0x2520 * param_2;
      afStack_3a8[2] = afStack_318[5];
      afStack_3a8[(uint)bVar11 * -2 + 3] = afStack_300[(uint)bVar11 * -2];
      afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_300[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      fStack_2d4 = afStack_3a8[2] + *(float *)&param_1->field_0x250c;
      afStack_2d0[0] = afStack_3a8[3] + *(float *)&param_1->field_0x2510;
      afStack_2d0[1] = fStack_398 + *(float *)&param_1->field_0x2514;
      fStack_f4 = fStack_2d4;
      afStack_108[(uint)bVar11 * -2 + 6] = afStack_2d0[(uint)bVar11 * -2];
      afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
           afStack_2d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      afStack_1ec[2] = fStack_f4 + *(float *)&param_1->field_0x249c;
      afStack_1ec[3] = fStack_f0 + *(float *)&param_1->field_0x24a0;
      fStack_1dc = fStack_ec + *(float *)&param_1->field_0x24a4;
      fStack_10c = afStack_1ec[2];
      afStack_108[(uint)bVar11 * -2] = afStack_1ec[(uint)bVar11 * -2 + 3];
      afStack_108[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      *(uint *)&param_1->field_0x2514 = 0;
      *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
      core_charactr_cpp_FUN_0042d750((CCharacter *)param_1,(CVector3f *)&fStack_10c);
    }
  }
  iVar2 = iStack_20;
  core_charactr_cpp_FUN_0042e160((CCharacter *)param_1);
  if (iVar2 != 0x24) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433e80((CCharacter *)param_1,param_2);
  }
  if (*(int *)&param_1->field_0xc1d4 == 0) {
    iVar2 = *(int *)&param_1[1].field_0xd4;
    if (*(int *)(&param_1->field_0x2298 + iVar2 * 4) == 0) {
      iVar5 = *(int *)&param_1[1].field_0xbc;
      fVar16 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1[1].field_0xc0,*(uint *)&param_1[1].field_0xa8
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc0 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1[1].field_0xc4,
                   *(uint *)&param_1[1].field_0xa0,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1[1].field_0xc8,*(uint *)&param_1[1].field_0xac
                 ,0x3e4ccccd);
      if (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xc8 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (param_1,*(uint *)&param_1[1].field_0xcc,
                   *(uint *)&param_1[1].field_0xa4,0x3e4ccccd);
      }
      iVar5 = *(int *)&param_1[1].field_0x94;
      fVar16 = 0.7;
      iVar2 = *(int *)&param_1[1].field_0xd8;
    }
    core_charactr_cpp_FUN_00430b60((CCharacter *)param_1,iVar2,iVar5,fVar16);
    if ((*(int *)&param_1[1].field_0xd0 < 0) &&
       (*(int *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) != 0)) {
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) = 0;
      core_charactr_cpp_FUN_00430a90
                (param_1,*(uint *)&param_1[1].field_0xd4,*(uint *)&param_1[1].field_0xbc
                 ,0x3e4ccccd);
      *(uint *)(&param_1->field_0x2298 + *(int *)&param_1[1].field_0xd4 * 4) = 1;
    }
    core_charactr_cpp_FUN_00430960(param_1);
  }
  iVar2 = unkafter_demnfolk_cpp_FUN_0045bec0(param_1,1);
  if (((iStack_a4 != 0) && (-1 < iVar2)) &&
     (iVar2 = *(int *)(&param_1->field_0x25b0 + iVar2 * 0x78), iVar2 != 0)) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x78))(iVar2,2);
    return;
  }
  return;
}
