// Name: core_demnfolk.cpp_CDemnfolk_process_FUN_00459100
// Address: 00459100
// Address Range: [[00459100, 0045b110]]
// Convention: __cdecl
// Signature: void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00459100(CDemnfolk *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00459100(CDemnfolk *this_ptr,float delta_time)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  CDemnfolk *pCVar4;
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
  CMotionController *this_ptr_00;
  EBloodType EVar15;
  float fVar16;
  float fVar17;
  SDamageInfo aSStack_544 [4];
  float fStack_540;
  CDemnfolk *pCStack_510;
  CDemnfolk *pCStack_50c;
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
  float fStack_3b8;
  float fStack_3ac;
  float fStack_3a8;
  float fStack_3a4;
  float fStack_3a0;
  float fStack_39c;
  float fStack_398;
  float fStack_394;
  float fStack_388;
  uint uStack_37c;
  float fStack_378;
  float fStack_370;
  CVector3f CStack_364;
  float fStack_358;
  float afStack_354 [4];
  float fStack_344;
  CVector3f CStack_340;
  float fStack_334;
  float afStack_330 [2];
  CVector3f CStack_328;
  float fStack_31c;
  float afStack_318 [6];
  float afStack_300 [5];
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float afStack_2dc [4];
  float fStack_2cc;
  CVector3f CStack_2c8;
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
  CVector3f CStack_268;
  float fStack_25c;
  float afStack_258 [5];
  float fStack_244;
  float fStack_240;
  float fStack_23c;
  CVector3f CStack_238;
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
  float fStack_130;
  float afStack_12c [5];
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  CVector3f CStack_10c;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
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
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc350);
    return;
  }
  if ((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc33c * 4) == 0) &&
     (iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr), iVar2 == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,0x18,1);
  }
  iStack_50 = *(int *)&this_ptr->field_0x26fc;
  if (iStack_50 != 0) {
    fStack_14 = *(float *)(iStack_50 + 0x154);
    core_skeleton_cpp_FUN_00569130(&this_ptr->field_0x158,0);
    fVar16 = fStack_14;
    iVar2 = iStack_50;
    pfVar9 = afStack_2b8 + 5;
    afStack_2a4[0] = (float)uStack_1a8;
    afStack_2b8[(uint)bVar11 * -2 + 6] = afStack_1a4[(uint)bVar11 * -2];
    pCVar4 = this_ptr;
    afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
    iVar2 = (**(code **)((int)fVar16 + 0x110))(iVar2,pCVar4,pfVar9);
    if (iVar2 != 0) {
      return;
    }
    *(uint *)&this_ptr->field_0x26fc = 0;
    return;
  }
  iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc358);
  if (iVar2 != 0) {
    if (*(int *)&g_CGamePtr->field_0x280 == 1) {
      fVar16 = (1.0 - *(float *)&g_CGamePtr->field_0x284) * (float)_DAT_005d801b +
               (float)_DAT_005d801b;
      uVar3 = *(uint *)&this_ptr->field_0xc358;
      fStack_a8 = fVar16;
    }
    else {
      uVar3 = *(uint *)&this_ptr->field_0xc358;
      fVar16 = 1.0;
    }
    sound_sndmain_cpp_FUN_00573980(uVar3,fVar16);
  }
  if (0.0 < *(float *)&this_ptr->field_0xc344) {
    *(float *)&this_ptr->field_0xc344 = *(float *)&this_ptr->field_0xc344 - delta_time;
  }
  pfStack_60 = afStack_454;
  fStack_9c = delta_time * *(float *)&this_ptr->field_0xc1d0 * *(float *)&this_ptr->field_0xc368;
  pfStack_84 = afStack_4fc;
  pCStack_28 = (CMotionController *)&this_ptr->field_0x158;
LAB_004591e5:
  if (0.0 < fStack_9c) {
    uVar3 = core_motion_cpp_CMotionController_advance_FUN_00524270(pCStack_28,&fStack_9c);
    if (uVar3 < 0xb) {
      if (uVar3 < 5) {
        if (uVar3 == 2) {
          iVar2 = *(int *)&this_ptr->field_0xc278;
          if (iVar2 != 0) {
            *(uint *)&this_ptr->field_0xc278 = 0;
            iVar5 = unkafter_demnfolk_cpp_FUN_0045bec0
                              (this_ptr,*(uint *)&this_ptr->field_0xc27c);
            if (-1 < iVar5) {
              core_charactr_cpp_FUN_004325b0(this_ptr,iVar5,iVar2,0x3e4ccccd,0);
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s picked up %s using hand %d\n",this_ptr,iVar2,iVar5);
            }
          }
        }
        else {
          core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar3);
        }
        goto LAB_004591e5;
      }
      if (uVar3 < 6) {
        iStack_94 = 1;
        if (*(int *)&this_ptr->field_0xc1e8 != 0) {
          afStack_274[2] = 0x3FA66666;
          afStack_274[0] = 0.0;
          afStack_274[1] = 0.0;
          core_actor_cpp_FUN_00408b40(this_ptr,afStack_2b8 + 0x11);
          fStack_40c = fStack_208;
          afStack_444[(uint)bVar11 * -2 + 0xf] = afStack_228[(uint)bVar11 * -2 + 9];
          afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
               afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
          iVar2 = *(int *)&this_ptr->field_0xc1e8;
          fStack_280 = fStack_40c - *(float *)(iVar2 + 0x20);
          fStack_27c = fStack_408 - *(float *)(iVar2 + 0x24);
          fStack_278 = fStack_404 - *(float *)(iVar2 + 0x28);
          fStack_118 = fStack_280;
          afStack_12c[(uint)bVar11 * -2 + 6] = afStack_2b8[(uint)bVar11 * -2 + 0xf];
          afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
               afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
          uStack_114 = 0;
          if (SQRT(fStack_110 * fStack_110 + fStack_118 * fStack_118) <= 1.0) {
            afStack_318[2] = 0.0;
            afStack_318[4] = 0.0;
            afStack_318[3] = 4.0;
            core_actor_cpp_FUN_00408b40(this_ptr,afStack_318 + 2);
            CStack_3dc.x = fStack_2e0;
            *(float *)((int)&CStack_3dc + (uint)bVar11 * -8 + 4) = afStack_2dc[(uint)bVar11 * -2];
            *(float *)((int)&CStack_3dc + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 afStack_2dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            puVar8 = (uint *)(*(int *)&this_ptr->field_0xc1e8 + 0x24 + (uint)bVar11 * -8);
            CStack_1b4.x = *(float *)(*(int *)&this_ptr->field_0xc1e8 + 0x20);
            *(uint *)((int)&CStack_1b4 + (uint)bVar11 * -8 + 4) = *puVar8;
            *(uint *)((int)&CStack_1b4 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
                 puVar8[(uint)bVar11 * -2 + 1];
            CStack_1b4.y = CStack_3dc.y;
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                      (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0xc1e8);
            iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                              (g_CDemonSetPtr,&CStack_3dc,&CStack_1b4);
            if (iVar2 != 0) {
              iStack_94 = 0;
            }
            core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
            if ((iStack_94 == 0) ||
               (iVar2 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xec))
                                  (*(int *)&this_ptr->field_0xc1e8,this_ptr,0), iVar2 != 0)) {
              if (iStack_94 == 0) {
                unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
              }
              goto LAB_004591e5;
            }
          }
        }
        unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
        goto LAB_004591e5;
      }
      if (uVar3 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar3);
        goto LAB_004591e5;
      }
      if (*(int *)&this_ptr->field_0xc1e8 != 0) {
        core_skeleton_cpp_FUN_00569040(pCStack_28,*(uint *)&this_ptr->field_0xc2fc);
        pfVar9 = afStack_fc + 8;
        afStack_dc[0] = (float)uStack_448;
        afStack_fc[(uint)bVar11 * -2 + 9] = afStack_444[(uint)bVar11 * -2];
        afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
             afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
        CStack_340.x = fStack_418;
        *(float *)((int)&CStack_340 + (uint)bVar11 * -8 + 4) = afStack_444[(uint)bVar11 * -2 + 0xc];
        *(float *)((int)&CStack_340 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
        if (*(int *)&this_ptr->field_0xc338 < 0) {
          fVar16 = CStack_340.x - *(float *)(*(int *)&this_ptr->field_0xc1e8 + 0x20);
          fVar17 = CStack_340.z - *(float *)(*(int *)&this_ptr->field_0xc1e8 + 0x28);
          if ((float)_DAT_005d80a3 < SQRT(fVar17 * fVar17 + fVar16 * fVar16)) {
            unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
            goto LAB_004591e5;
          }
        }
        else {
          pCVar4 = (CDemnfolk *)
                   (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf4))
                             (*(int *)&this_ptr->field_0xc1e8);
          if (pCVar4 != this_ptr) {
            unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
            goto LAB_004591e5;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_544);
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(10.0,20.0);
        fStack_540 = fStack_14 * *(float *)&this_ptr->field_0xc368;
        pCStack_510 = this_ptr;
        pCStack_50c = this_ptr;
        (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0x108))
                  (*(int *)&this_ptr->field_0xc1e8,aSStack_544);
        dStack_b4 = (double)fStack_540;
        if (0.0 < dStack_b4) {
          fVar12 = (float10)fStack_540 * (float10)_DAT_005d807b * (float10)_DAT_005d8083;
          EVar15 = BLOOD_TYPE_RED;
          round();
          iStack_34 = (int)ROUND(fVar12);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                    (g_CGorePtr,&CStack_340,(CVector3f *)0x0,iStack_34,EVar15);
        }
        iVar2 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0x10c))
                          (*(int *)&this_ptr->field_0xc1e8);
        if (0 < iVar2) {
          (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf0))
                    (*(int *)&this_ptr->field_0xc1e8);
          unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
        }
        iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc354);
        if (iVar2 == 0) {
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x154))(this_ptr);
        }
        goto LAB_004591e5;
      }
      unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
    }
    else if (uVar3 < 0xc) {
      iVar2 = unkafter_demnfolk_cpp_FUN_0045bec0(this_ptr,2);
      if (iVar2 < 0) {
        _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
        _DAT_01d1d404 = 0x24a;
        core_main_c_FUN_005030e0(&DAT_005d7f2f);
      }
      if (*(int *)(&this_ptr->field_0x25b0 + iVar2 * 0x78) != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"%s lugging %s\n",this_ptr,
                   *(int *)(&this_ptr->field_0x25b0 + iVar2 * 0x78));
        afStack_1fc[0] = 0.0;
        afStack_1fc[1] = 6.0;
        afStack_1fc[2] = 17.0;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,iVar2,afStack_228 + 0xb);
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr);
      }
    }
    else if (uVar3 < 0x65) {
      if (uVar3 == 0xc) {
        iStack_74 = unkafter_demnfolk_cpp_FUN_0045bec0(this_ptr,3);
        if (iStack_74 < 0) {
          _DAT_01d1d400 = "..\\core\\demnfolk.cpp";
          _DAT_01d1d404 = 0x261;
          core_main_c_FUN_005030e0(&DAT_005d7f58);
        }
        puStack_64 = &this_ptr->field_0x0 + iStack_74 * 0x78;
        if (*(int *)(puStack_64 + 0x25b0) != 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s tossing %s\n",this_ptr,*(int *)(puStack_64 + 0x25b0));
          fStack_2ec = 0.0;
          fStack_2e8 = 0.0;
          fStack_2e4 = 1.0;
          if (*(int *)&this_ptr->field_0xc1e8 != 0) {
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
            afStack_444[(uint)bVar11 * -2 + 6] = afStack_258[(uint)bVar11 * -2 + 6];
            puVar1 = puStack_64;
            afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_258[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            pfVar9 = afStack_228 + 5;
            fStack_3ac = fStack_430 * _DAT_005d8073;
            fStack_3a8 = fStack_42c * _DAT_005d8073;
            fStack_3a4 = fStack_428 * _DAT_005d8073;
            afStack_214[0] = fStack_430 * _DAT_005d8073;
            afStack_228[(uint)bVar11 * -2 + 6] = afStack_3cc[(uint)bVar11 * -2 + 9];
            afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            core_actor_cpp_FUN_00408b40(*(uint *)(puVar1 + 0x25b0),pfVar9);
            fStack_31c = fStack_25c;
            afStack_318[(uint)bVar11 * -2] = afStack_258[(uint)bVar11 * -2];
            afStack_318[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_258[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0x1c))
                      (*(int *)&this_ptr->field_0xc1e8);
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
            afStack_354[2] = fStack_508 + *pfStack_84;
            afStack_354[(uint)bVar11 * -2 + 3] = afStack_444[(uint)bVar11 * -2 + 0x18];
            afStack_354[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
            fStack_184 = afStack_354[2] * _DAT_005d8073;
            fStack_180 = afStack_354[3] * _DAT_005d8073;
            fStack_17c = fStack_344 * _DAT_005d8073;
            afStack_258[2] = afStack_354[2] * _DAT_005d8073;
            afStack_258[(uint)bVar11 * -2 + 3] = afStack_1a4[(uint)bVar11 * -2 + 9];
            afStack_258[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
            core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0xc1e8,afStack_258 + 2);
            afStack_444[2] = fStack_154;
            afStack_444[(uint)bVar11 * -2 + 3] = afStack_168[(uint)bVar11 * -2 + 6];
            afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            fStack_e8 = afStack_444[2] - fStack_31c;
            fStack_e4 = afStack_444[3] - afStack_318[0];
            fStack_e0 = fStack_434 - afStack_318[1];
            afStack_168[2] = afStack_444[2] - fStack_31c;
            afStack_168[(uint)bVar11 * -2 + 3] = afStack_fc[(uint)bVar11 * -2 + 6];
            afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
            fStack_a0 = SQRT(fStack_158 * fStack_158 +
                             afStack_168[2] * afStack_168[2] + afStack_168[3] * afStack_168[3]);
            if (0.0 < fStack_a0) {
              core_actor_cpp_FUN_00408b00(this_ptr,afStack_168 + 2);
              afStack_3cc[2] = fStack_388;
              afStack_3cc[(uint)bVar11 * -2 + 3] = afStack_3cc[(uint)bVar11 * -2 + 0x12];
              afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                   afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
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
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x128))(this_ptr,iStack_74,afStack_300 + 5);
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr);
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar3);
      }
    }
    else if (uVar3 < 0x66) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"fall-?.wav");
    }
    else if (uVar3 == 0x29a) {
      core_skeleton_cpp_FUN_00569040(pCStack_28,*(uint *)&this_ptr->field_0xc2fc);
      puVar8 = &uStack_3d0;
      uStack_3d0 = uStack_148;
      afStack_3cc[(uint)bVar11 * -2] = afStack_168[(uint)bVar11 * -2 + 9];
      afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
           afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
      core_actor_cpp_FUN_00408b40(this_ptr,puVar8);
      EVar15 = BLOOD_TYPE_RED;
      iVar2 = 3;
      pCVar14 = (CVector3f *)0x0;
      CStack_328.x = fStack_3b8;
      *(float *)((int)&CStack_328 + (uint)bVar11 * -8 + 4) = afStack_3cc[(uint)bVar11 * -2 + 6];
      *(float *)((int)&CStack_328 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060(g_CGorePtr,&CStack_328,pCVar14,iVar2,EVar15);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x154))(this_ptr);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar3);
    }
    goto LAB_004591e5;
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr,delta_time * *(float *)&this_ptr->field_0xc1d0);
  if (((*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc334 * 4) == 0) &&
      (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc32c * 4) == 0)) ||
     (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc340 * 4) == 0)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,0x18,1);
  }
  puVar1 = &this_ptr->field_0x158;
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)puVar1);
  iVar2 = *(int *)(pSVar6 + 0x24);
  iStack_a4 = 0;
  iVar5 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
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
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(delta_time * (float)_DAT_005d806b);
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0((CEnemy *)this_ptr,delta_time);
        if (iVar2 != 0) {
          unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
        if (*(int *)&this_ptr->field_0xc1e8 == 0) {
          iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if (iVar2 == 0) break;
          *(uint *)&g_CGamePtr->field_0x23c = 1;
          *(uint *)&this_ptr->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
        }
        if (*(int *)&this_ptr->field_0xc1e8 != 0) {
          unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
          iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc350);
          if (iVar2 == 0) {
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr);
          }
        }
      }
      else {
LAB_0045a07d:
        iVar5 = 1;
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,iVar2,iVar5);
      }
      break;
    case 4:
    case 6:
    case 7:
    case 8:
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.3);
      if (iVar2 != 0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr);
      }
      iVar2 = *(int *)&this_ptr->field_0xc1e8;
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
      if ((*(int *)&this_ptr->field_0xc1e8 == 0) &&
         (iVar5 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4),
         iVar5 = (**(code **)(*(int *)(iVar5 + 0x154) + 0x10c))(iVar5), iVar5 != 0)) {
        *(uint *)&g_CGamePtr->field_0x23c = 1;
        *(uint *)&this_ptr->field_0xc1e8 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      }
      if (*(int *)&this_ptr->field_0xc1e8 == 0) {
        iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0((CEnemy *)this_ptr,delta_time);
        if (iVar2 == 0) {
          iVar5 = 1;
          iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar2,iVar5);
        }
      }
      else {
        if (iVar2 == 0) {
          iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc350);
          if (iVar2 == 0) {
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr);
          }
          goto LAB_0045a676;
        }
        if (*(int *)&this_ptr->field_0xc1e8 != 0) {
          fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
          if ((float)_DAT_005d803b < fStack_14) {
            iVar2 = *(int *)&this_ptr->field_0xc1e8;
            fStack_190 = *(float *)(iVar2 + 0x20) - *(float *)&this_ptr->field_0x20;
            fStack_18c = *(float *)(iVar2 + 0x24) - *(float *)&this_ptr->field_0x24;
            fStack_188 = *(float *)(iVar2 + 0x28) - *(float *)&this_ptr->field_0x28;
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
              iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
              if (iVar2 == 1) {
                *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + _DAT_005d804b;
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&this_ptr->field_0x158,0xc,1);
              }
              else {
                unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
              }
            }
          }
        }
        iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(delta_time * (float)_DAT_005d8053);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,4,1);
        }
        uStack_70 = (uint)(*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc32c * 4)
                          != 0);
        if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc334 * 4) != 0) {
          uStack_70 = uStack_70 + 1;
        }
        iVar2 = core_demnfolk_cpp_FUN_0045b560(this_ptr,delta_time);
        if (iVar2 == 0) {
          fStack_6c = 0x3FA66666;
          iStack_68 = unkafter_demnfolk_cpp_FUN_0045bec0(this_ptr,1);
          if (((-1 < iStack_68) &&
              (iVar2 = *(int *)(&this_ptr->field_0x25b0 + iStack_68 * 0x78), iVar2 != 0)) &&
             (*(int *)&this_ptr->field_0xc27c == 1)) {
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
              core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_364);
              CStack_364.x = fStack_46c - fStack_478;
              CStack_364.y = fStack_468 - fStack_474;
              CStack_364.z = fStack_464 - fStack_470;
              fStack_298 = fStack_46c - fStack_478;
              afStack_2b8[(uint)bVar11 * -2 + 9] =
                   *(float *)((int)&CStack_364 + (uint)bVar11 * -8 + 4);
              afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                   *(float *)((int)&CStack_364 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
              fStack_58 = fStack_290 * (float)_DAT_005d801b + 1.0;
            }
            fStack_6c = fStack_58;
          }
          fVar17 = 0.34906584;
          fVar16 = 1.1;
          CStack_2c8.x = 0.0;
          CStack_2c8.z = fStack_6c;
          pCVar14 = &CStack_2c8;
          CStack_2c8.y = 0.0;
          pCVar7 = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xc4))
                             (*(int *)&this_ptr->field_0xc1e8);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                            ((CCharacter *)this_ptr,
                             (CVector3f *)(*(int *)&this_ptr->field_0xc1e8 + 0x20),pCVar7,pCVar14,
                             fVar16,fVar17);
          pCStack_30 = (CMotionController *)&this_ptr->field_0x158;
          if (iVar2 < 0) {
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
            iVar5 = 1;
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,iVar2,iVar5);
          }
          else if (iVar2 < 1) {
            iStack_54 = unkafter_demnfolk_cpp_FUN_0045bec0
                                  (this_ptr,*(uint *)&this_ptr->field_0xc27c);
            iVar2 = *(int *)&this_ptr->field_0xc1e8;
            fStack_334 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
            afStack_330[0] = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
            afStack_330[1] = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
            fStack_1d8 = fStack_334;
            afStack_1ec[(uint)bVar11 * -2 + 6] = afStack_330[(uint)bVar11 * -2];
            afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                 afStack_330[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            if (SQRT(fStack_1d0 * fStack_1d0 + fStack_1d8 * fStack_1d8 + fStack_1d4 * fStack_1d4) <
                (float)_DAT_005d805b) {
              core_actor_cpp_FUN_00408bb0(this_ptr,iVar2 + 0x20);
              afStack_300[2] = afStack_2b8[2];
              afStack_300[(uint)bVar11 * -2 + 3] = afStack_2b8[(uint)bVar11 * -2 + 3];
              afStack_300[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                   afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_300 + 2);
              uStack_37c = afStack_12c[2];
              afStack_3cc[(uint)bVar11 * -2 + 0x15] = afStack_12c[(uint)bVar11 * -2 + 3];
              afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
                   afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
              if (((ABS(fStack_378) < (float)_DAT_005d8063) && (-1 < iStack_54)) &&
                 (uVar3 = *(uint *)&this_ptr->field_0xc27c, 1 < uVar3)) {
                if (uVar3 < 3) {
                  if (*(int *)(&this_ptr->field_0x25b0 + iStack_54 * 0x78) != 0) {
                    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s lugging\n",this_ptr);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              (pCStack_30,0x23,1);
                  }
                }
                else if ((uVar3 == 3) && (*(int *)(&this_ptr->field_0x25b0 + iStack_54 * 0x78) != 0)
                        ) {
                  engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s tossing\n",this_ptr);
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_30,0x21,1);
                }
              }
            }
          }
          else if (((0 < (int)uStack_70) && (*(float *)&this_ptr->field_0xc1e4 <= 0.0)) &&
                  (iVar2 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf4))
                                     (*(int *)&this_ptr->field_0xc1e8), iVar2 == 0)) {
            if ((iStack_68 < 0) || (*(int *)(&this_ptr->field_0x25b0 + iStack_68 * 0x78) == 0)) {
              this_ptr_00 = (CMotionController *)&this_ptr->field_0x158;
              iVar2 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0x10c))
                                (*(int *)&this_ptr->field_0xc1e8);
              if (iVar2 == 0) {
                iVar2 = 0xe;
              }
              else {
                iVar2 = core_actor_cpp_randomChance_FUN_0040cd00(0.5);
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
              this_ptr_00 = pCStack_30;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr_00,iVar2,1);
            *(uint *)&this_ptr->field_0xc1e4 = 0x3f4ccccd;
          }
        }
      }
      break;
    case 5:
    case 9:
    case 10:
      fStack_14 = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
      if ((float)_DAT_005d803b < fStack_14) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,4,1);
      }
      break;
    case 0xd:
      if (*(int *)&this_ptr->field_0xc1e8 == 0) {
LAB_0045ac61:
        unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
      }
      else {
        iVar2 = unkafter_demnfolk_cpp_FUN_0045bec0(this_ptr,1);
        if ((((iVar2 < 0) ||
             (iVar5 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0x10c))
                                (*(int *)&this_ptr->field_0xc1e8), 0 < iVar5)) ||
            (*(int *)(&this_ptr->field_0x25b0 + iVar2 * 0x78) == 0)) ||
           (iVar5 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf4))
                              (*(int *)&this_ptr->field_0xc1e8), iVar5 != 0)) {
          engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s gave up swing\n",this_ptr);
          unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
        }
        else {
          iVar2 = *(int *)(&this_ptr->field_0x25b0 + iVar2 * 0x78);
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
            core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_268);
            CStack_268.x = fStack_49c - fStack_4a8;
            CStack_268.y = fStack_498 - fStack_4a4;
            CStack_268.z = fStack_494 - fStack_4a0;
            fStack_22c = fStack_49c - fStack_4a8;
            afStack_228[(uint)bVar11 * -2] = *(float *)((int)&CStack_268 + (uint)bVar11 * -8 + 4);
            afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 *(float *)((int)&CStack_268 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8);
            afStack_1a4[2] = fStack_22c;
            afStack_1a4[(uint)bVar11 * -2 + 3] = afStack_228[(uint)bVar11 * -2];
            afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            fStack_16c = afStack_1a4[2];
            afStack_168[(uint)bVar11 * -2] = afStack_1a4[(uint)bVar11 * -2 + 3];
            afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            fStack_370 = fStack_16c;
            afStack_3cc[(uint)bVar11 * -2 + 0x18] = afStack_168[(uint)bVar11 * -2];
            afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
                 afStack_168[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
            afStack_1fc[3] = fStack_370;
            afStack_1ec[(uint)bVar11 * -2] = afStack_3cc[(uint)bVar11 * -2 + 0x18];
            afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
            fStack_48 = afStack_1ec[1] * (float)_DAT_005d801b + fStack_48;
          }
          fStack_1c = fStack_48;
          fStack_4c = core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
          dStack_c4 = (double)fStack_4c;
          fStack_14 = fStack_4c;
          if ((1.0 <= dStack_c4) && (dStack_c4 <= _DAT_005d8033)) {
            iStack_a4 = 1;
          }
        }
      }
      break;
    case 0xe:
      iVar2 = *(int *)&this_ptr->field_0xc1e8;
      if ((iVar2 == 0) || (iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2), 0 < iVar2)
         ) {
LAB_0045a676:
        unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
      }
      else {
        pCVar4 = (CDemnfolk *)
                 (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xf4))
                           (*(int *)&this_ptr->field_0xc1e8);
        if (pCVar4 == (CDemnfolk *)0x0) {
          fStack_1c = 0x3FA66666;
          fStack_98 = 3.0;
        }
        else if (pCVar4 != this_ptr) goto LAB_0045ac61;
      }
      break;
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1e:
      if ((*(int *)&this_ptr->field_0xc1d4 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(&this_ptr->field_0x158,0);
        pfVar9 = afStack_444 + 0x14;
        afStack_3f4[0] = (float)uStack_d0;
        afStack_444[(uint)bVar11 * -2 + 0x15] = afStack_fc[(uint)bVar11 * -2 + 0xc];
        afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
             afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
        core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
        EVar15 = BLOOD_TYPE_RED;
        CStack_178.x = fStack_130;
        *(float *)((int)&CStack_178 + (uint)bVar11 * -8 + 4) = afStack_12c[(uint)bVar11 * -2];
        *(float *)((int)&CStack_178 + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
             afStack_12c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&CStack_178,EVar15);
        *(uint *)&this_ptr->field_0xc1d4 = 1;
      }
      break;
    case 0x24:
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&this_ptr->field_0xc288);
      if ((iVar2 != 0) &&
         (fVar16 = *(float *)&this_ptr->field_0xc35c - delta_time,
         *(float *)&this_ptr->field_0xc35c = fVar16, fVar16 < 0.0)) {
        pfStack_7c = (float *)&this_ptr->field_0x20;
        iStack_80 = 0;
        iStack_24 = 0;
        *(float *)&this_ptr->field_0xc35c = *(float *)&this_ptr->field_0xc35c + 1.0;
        for (; iStack_80 < g_CDemonSetPtr->character_count; iStack_80 = iStack_80 + 1) {
          iVar2 = *(int *)((int)g_CDemonSetPtr->characters + iStack_24);
          iVar5 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))(iVar2,this_ptr);
          if (iVar5 != 0) {
            afStack_228[2] = *(float *)(iVar2 + 0x20) - *pfStack_7c;
            afStack_228[3] = *(float *)(iVar2 + 0x24) - pfStack_7c[1];
            fStack_218 = *(float *)(iVar2 + 0x28) - pfStack_7c[2];
            fStack_100 = afStack_228[2];
            afStack_fc[(uint)bVar11 * -2] = afStack_228[(uint)bVar11 * -2 + 3];
            afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_228[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
            if ((ABS(afStack_fc[0]) <= (float)_DAT_005d80ab) &&
               (afStack_fc[0] = 0.0,
               SQRT(afStack_fc[1] * afStack_fc[1] + fStack_100 * fStack_100) <=
               *(float *)&this_ptr->field_0xc1e0)) {
              engine_console_cpp_FUN_00445430
                        (g_CConsolePtr,"%s rising from the grave\n",this_ptr);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&this_ptr->field_0x158,0x25,1);
              if (*(CGrave **)&this_ptr->field_0xc280 != (CGrave *)0x0) {
                core_grave_cpp_CGrave_startAnimation_FUN_004e6bf0
                          (*(CGrave **)&this_ptr->field_0xc280);
                *(uint *)&this_ptr->field_0xc280 = 0;
              }
              *(uint *)&this_ptr->field_0xc1e0 = 0x42c80000;
              break;
            }
          }
          iStack_24 = iStack_24 + 4;
        }
      }
      break;
    case 0x2a:
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
      iVar2 = *(int *)&this_ptr->field_0xc1e8;
      if ((iVar2 != 0) &&
         ((fVar16 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20),
          fVar17 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28),
          SQRT(fVar17 * fVar17 + fVar16 * fVar16) <= (float)_DAT_005d802b &&
          (ABS(*(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24)) <= (float)_DAT_005d8033))
         )) {
        iVar5 = 1;
        iVar2 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,3);
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)puVar1,iVar2,iVar5);
      }
      break;
    case 0x2b:
    case 0x2c:
      iVar2 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if ((iVar2 == 0) &&
         ((**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time),
         *(int *)&this_ptr->field_0xc1e8 != 0)) goto LAB_0045a07d;
      break;
    case 0x2d:
      core_set_cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060
                (g_CDemonSetPtr,(CDemonActor *)this_ptr);
      break;
    case 0x2f:
      fVar16 = *(float *)&this_ptr->field_0xc360 - delta_time;
      *(float *)&this_ptr->field_0xc360 = fVar16;
      if (fVar16 <= 0.0) {
        *(uint *)&this_ptr->field_0xc360 = 0;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
        iVar2 = *(int *)&this_ptr->field_0xc1e8;
        if (iVar2 != 0) {
          fStack_28c = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
          fStack_288 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_284 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
          fStack_358 = fStack_28c;
          afStack_354[(uint)bVar11 * -2] = afStack_2b8[(uint)bVar11 * -2 + 0xc];
          afStack_354[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
               afStack_2b8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
          if (afStack_168 + 0xb != &fStack_358) {
            fStack_13c = fStack_358;
            fStack_138 = afStack_354[0];
            fStack_134 = afStack_354[1];
          }
          fStack_90 = fStack_134 * fStack_134 + fStack_13c * fStack_13c + fStack_138 * fStack_138;
          fStack_8c = (float)(((int)fStack_90 >> 1) + _DAT_01cc804c);
          if (fStack_8c <= (float)_DAT_005d8023) {
            fStack_18 = *(float *)&this_ptr->field_0x3000;
            if (fStack_18 < *(float *)&this_ptr->field_0x2ffc) {
              fStack_18 = *(float *)&this_ptr->field_0x2490;
            }
            if (fStack_18 < *(float *)&this_ptr->field_0x2ffc) {
              fStack_18 = *(float *)&this_ptr->field_0x2ffc + (float)_DAT_005d801b;
            }
            iVar2 = 0;
            do {
              fStack_88 = (float)iVar2 * _DAT_005d808b * _DAT_005d808f;
              fStack_14 = (float)iVar2;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                        (g_CDemonSetPtr,(CDemonActor *)this_ptr);
              fVar12 = (float10)fcos((float10)fStack_88);
              fVar13 = (float10)fsin((float10)fStack_88);
              fStack_44 = (float)core_setcolid_cpp_FUN_00558450
                                           (g_CDemonSetPtr,*(uint *)&this_ptr->field_0x20,
                                            *(uint *)&this_ptr->field_0x28,
                                            (float)(fVar13 * (float10)_DAT_005d8093),
                                            (float)(fVar12 * (float10)_DAT_005d8093),
                                            *(uint *)&this_ptr->field_0x2ff0,
                                            *(float *)&this_ptr->field_0x24 +
                                            *(float *)&this_ptr->field_0x2ffc,
                                            *(float *)&this_ptr->field_0x24 + fStack_18);
              fStack_14 = fStack_44;
              core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
              if (fStack_44 < 1.0) break;
              iVar2 = iVar2 + 1;
            } while (iVar2 < 4);
            if (3 < iVar2) goto LAB_0045a07d;
            *(uint *)&this_ptr->field_0xc360 = 0x40400000;
            *(uint *)&this_ptr->field_0xc1e8 = 0;
          }
        }
      }
    }
    if ((0.0 <= fStack_1c) && (*(int *)&this_ptr->field_0xc1e8 != 0)) {
      *(float *)&this_ptr->field_0x2524 = fStack_98 * *(float *)&this_ptr->field_0xc1d0 * delta_time
      ;
      core_charactr_cpp_FUN_00435320(this_ptr,delta_time * *(float *)&this_ptr->field_0xc1d0);
      fVar17 = 0.7853982;
      fVar16 = 3.0;
      CStack_238.x = 0.0;
      CStack_238.z = fStack_1c;
      pCVar14 = &CStack_238;
      CStack_238.y = 0.0;
      pCVar7 = (CPathMap *)
               (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xc4))
                         (*(int *)&this_ptr->field_0xc1e8);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,
                         (CVector3f *)(*(int *)&this_ptr->field_0xc1e8 + 0x20),pCVar7,pCVar14,fVar16
                         ,fVar17);
      if (iVar2 != 1) {
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s giving up attack\n",this_ptr);
        unkafter_demnfolk_cpp_FUN_0045d060(this_ptr);
        *(uint *)&this_ptr->field_0x2508 = 0;
      }
    }
    goto LAB_00459d36;
  }
  uVar3 = *(uint *)&this_ptr->field_0x273c;
  if (uVar3 < 2) {
    if (uVar3 == 1) goto LAB_00459d1e;
LAB_00459f57:
    iVar2 = 0;
  }
  else {
    if (2 < uVar3) {
      if (uVar3 == 3) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,2,1);
        engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        goto LAB_00459d36;
      }
      goto LAB_00459f57;
    }
LAB_00459d1e:
    if (iVar2 == 4) goto LAB_00459d36;
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&this_ptr->field_0x158,iVar2,1);
LAB_00459d36:
  if (0.0 < *(float *)&this_ptr->field_0xc1e4) {
    *(float *)&this_ptr->field_0xc1e4 = *(float *)&this_ptr->field_0xc1e4 - delta_time;
  }
  pSVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  iStack_20 = *(int *)(pSVar6 + 0x24);
  puStack_2c = (uint *)&this_ptr->field_0x249c;
  if (iStack_20 == 0x24) {
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *puStack_2c = *(uint *)&this_ptr->field_0x24a0;
  }
  else if (iStack_20 == 0x25) {
    core_actor_cpp_FUN_00408ac0(this_ptr,puStack_2c);
    fStack_400 = fStack_394;
    afStack_444[(uint)bVar11 * -2 + 0x12] = afStack_3cc[(uint)bVar11 * -2 + 0xf];
    afStack_444[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
         afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_400;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_3fc;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_3f8;
    puStack_2c[2] = 0;
    puStack_2c[1] = puStack_2c[2];
    *puStack_2c = puStack_2c[1];
  }
  else {
    iVar2 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
    if (iVar2 != 0) {
      iVar2 = *(int *)&this_ptr->field_0xc1e8;
      if ((iVar2 != 0) &&
         (pCVar4 = (CDemnfolk *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2),
         pCVar4 == this_ptr)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00559250
                  (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0xc1e8);
      }
      core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
      afStack_318[5] = *(float *)&this_ptr->field_0x2518 * delta_time;
      afStack_300[0] = *(float *)&this_ptr->field_0x251c * delta_time;
      afStack_300[1] = *(float *)&this_ptr->field_0x2520 * delta_time;
      fStack_3a0 = afStack_318[5];
      afStack_3cc[(uint)bVar11 * -2 + 0xc] = afStack_300[(uint)bVar11 * -2];
      afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
           afStack_300[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
      afStack_2dc[2] = fStack_3a0 + *(float *)&this_ptr->field_0x250c;
      afStack_2dc[3] = fStack_39c + *(float *)&this_ptr->field_0x2510;
      fStack_2cc = fStack_398 + *(float *)&this_ptr->field_0x2514;
      afStack_fc[2] = afStack_2dc[2];
      afStack_fc[(uint)bVar11 * -2 + 3] = afStack_2dc[(uint)bVar11 * -2 + 3];
      afStack_fc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
           afStack_2dc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      afStack_1ec[2] = afStack_fc[2] + *(float *)&this_ptr->field_0x249c;
      afStack_1ec[3] = afStack_fc[3] + *(float *)&this_ptr->field_0x24a0;
      fStack_1dc = fStack_ec + *(float *)&this_ptr->field_0x24a4;
      CStack_10c.x = afStack_1ec[2];
      *(float *)((int)&CStack_10c + (uint)bVar11 * -8 + 4) = afStack_1ec[(uint)bVar11 * -2 + 3];
      *(float *)((int)&CStack_10c + (uint)bVar11 * -8 + (uint)bVar11 * -8 + 8) =
           afStack_1ec[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
      *(uint *)&this_ptr->field_0x2514 = 0;
      *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
      *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
      *(uint *)&this_ptr->field_0x24a4 = 0;
      *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
      *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a4;
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_10c);
    }
  }
  iVar2 = iStack_20;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  if (iVar2 != 0x24) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&this_ptr->field_0x158);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  }
  if (*(int *)&this_ptr->field_0xc1d4 == 0) {
    iVar2 = *(int *)&this_ptr->field_0xc33c;
    if (*(int *)(&this_ptr->field_0x2298 + iVar2 * 4) == 0) {
      iVar5 = *(int *)&this_ptr->field_0xc324;
      fVar16 = 0.5;
    }
    else {
      core_charactr_cpp_FUN_00430a90
                (this_ptr,*(uint *)&this_ptr->field_0xc328,
                 *(uint *)&this_ptr->field_0xc310,0x3e4ccccd);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc328 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (this_ptr,*(uint *)&this_ptr->field_0xc32c,
                   *(uint *)&this_ptr->field_0xc308,0x3e4ccccd);
      }
      core_charactr_cpp_FUN_00430a90
                (this_ptr,*(uint *)&this_ptr->field_0xc330,
                 *(uint *)&this_ptr->field_0xc314,0x3e4ccccd);
      if (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc330 * 4) != 0) {
        core_charactr_cpp_FUN_00430a90
                  (this_ptr,*(uint *)&this_ptr->field_0xc334,
                   *(uint *)&this_ptr->field_0xc30c,0x3e4ccccd);
      }
      iVar5 = *(int *)&this_ptr->field_0xc2fc;
      fVar16 = 0.7;
      iVar2 = *(int *)&this_ptr->field_0xc340;
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
              ((CCharacter *)this_ptr,iVar2,iVar5,fVar16);
    if ((*(int *)&this_ptr->field_0xc338 < 0) &&
       (*(int *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc33c * 4) != 0)) {
      *(uint *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc33c * 4) = 0;
      core_charactr_cpp_FUN_00430a90
                (this_ptr,*(uint *)&this_ptr->field_0xc33c,
                 *(uint *)&this_ptr->field_0xc324,0x3e4ccccd);
      *(uint *)(&this_ptr->field_0x2298 + *(int *)&this_ptr->field_0xc33c * 4) = 1;
    }
    core_charactr_cpp_FUN_00430960(this_ptr);
  }
  iVar2 = unkafter_demnfolk_cpp_FUN_0045bec0(this_ptr,1);
  if (((iStack_a4 != 0) && (-1 < iVar2)) &&
     (iVar2 = *(int *)(&this_ptr->field_0x25b0 + iVar2 * 0x78), iVar2 != 0)) {
    (**(code **)(*(int *)(iVar2 + 0x154) + 0x78))(iVar2,2);
    return;
  }
  return;
}
