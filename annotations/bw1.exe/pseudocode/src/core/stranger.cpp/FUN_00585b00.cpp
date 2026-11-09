// Name: core_stranger.cpp_FUN_00585b00
// Address: 00585b00
// Address Range: [[00585b00, 005881c1]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00585b00(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00585b00(CStranger *this_ptr,float delta_time)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  CGame *pCVar4;
  SMotion *pSVar5;
  CAmmoBox *this_ptr_00;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  float *pfVar9;
  int iVar10;
  uint *puVar11;
  float *pfVar12;
  byte bVar13;
  float afStackY_138c [51];
  uint *apuStackY_12c0 [3];
  float afStackY_12b4 [899];
  ulonglong uVar14;
  CVector3f *velocity;
  float fStack_478;
  uint *puStack_470;
  float fStack_468;
  float fStack_464;
  SDamageInfo aSStack_460 [4];
  float fStack_45c;
  int iStack_424;
  CStranger *pCStack_420;
  float fStack_41c;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  uint local_404;
  uint uStack_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint local_3ec [6];
  float fStack_3d4;
  float fStack_3d0;
  float fStack_3cc;
  float fStack_3c8;
  float fStack_3c4;
  float fStack_3c0;
  float afStack_3bc [6];
  float fStack_3a4;
  float afStack_3a0 [4];
  float fStack_390;
  float fStack_38c;
  float fStack_388;
  float fStack_384;
  float fStack_380;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  uint uStack_368;
  float fStack_35c;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  uint uStack_344;
  uint uStack_338;
  float fStack_32c;
  uint uStack_328;
  uint uStack_324;
  uint uStack_320;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  uint uStack_308;
  float fStack_2fc;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float afStack_2e0 [2];
  float *pfStack_2d8;
  uint *apuStack_2d4 [2];
  float fStack_2cc;
  float afStack_2c8 [5];
  float fStack_2b4;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  uint uStack_290;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  uint uStack_26c;
  float fStack_260;
  float fStack_254;
  float fStack_250;
  float fStack_24c;
  CVector3f CStack_248;
  float fStack_23c;
  float afStack_238 [4];
  float fStack_228;
  float fStack_224;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  uint uStack_1e8;
  uint uStack_1dc;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  uint uStack_1c4;
  uint uStack_1b8;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  uint uStack_194;
  float fStack_190;
  uint uStack_188;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  float fStack_160;
  float fStack_15c;
  uint uStack_158;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  uint uStack_140;
  float afStack_13c [4];
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float afStack_118 [4];
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  uint uStack_f8;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  uint uStack_d4;
  float fStack_d0;
  float afStack_c8 [3];
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  uint uStack_98;
  uint uStack_8c;
  byte *puStack_78;
  CBoxActor *pCStack_74;
  uint *puStack_70;
  uint *puStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  uint *puStack_5c;
  CMotionController *pCStack_58;
  float fStack_54;
  float fStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  uint *puStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  float *pfStack_20;
  CMotionController *pCStack_1c;
  uint *puStack_18;
  
  bVar13 = 0;
  local_34 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"?DebugActionPending" + 1);
  if ((*(int *)&this_ptr->field_0x2628 != 0) && (*(float *)&this_ptr->field_0x20084 < _DAT_005f6841)
     ) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2628 + 0x154) + 0x1c))();
    puVar8 = local_3ec;
    puVar11 = &local_404;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    if ((uint *)&this_ptr->field_0x20078 != &local_404) {
      *(uint *)&this_ptr->field_0x20078 = local_404;
      *(uint *)&this_ptr->field_0x2007c = uStack_400;
      *(uint *)&this_ptr->field_0x20080 = uStack_3fc;
    }
    if ((uint *)&this_ptr->field_0x20084 != &uStack_3f8) {
      *(uint *)&this_ptr->field_0x20084 = uStack_3f8;
      *(uint *)&this_ptr->field_0x20088 = uStack_3f4;
      *(uint *)&this_ptr->field_0x2008c = uStack_3f0;
    }
    fStack_3a4 = *(float *)&this_ptr->field_0x20078 + *(float *)&this_ptr->field_0x20084;
    afStack_3a0[0] = *(float *)&this_ptr->field_0x2007c + *(float *)&this_ptr->field_0x20088;
    afStack_3a0[1] = *(float *)&this_ptr->field_0x20080 + *(float *)&this_ptr->field_0x2008c;
    fStack_128 = fStack_3a4;
    afStack_13c[(uint)bVar13 * -2 + 6] = afStack_3a0[(uint)bVar13 * -2];
    afStack_13c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    fStack_170 = fStack_128 * _DAT_005f6845;
    fStack_16c = fStack_124 * _DAT_005f6845;
    fStack_168 = fStack_120 * _DAT_005f6845;
    fStack_2cc = fStack_128 * _DAT_005f6845;
    afStack_2c8[(uint)bVar13 * -2] = afStack_238[(uint)bVar13 * -2 + 0x33];
    afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x34];
    core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x2628);
    uStack_1c4 = uStack_344;
    afStack_238[(uint)bVar13 * -2 + 0x1e] = afStack_3a0[(uint)bVar13 * -2 + 0x18];
    afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
    core_actor_cpp_FUN_00408bb0(this_ptr);
    fStack_32c = (float)uStack_368;
    afStack_3a0[(uint)bVar13 * -2 + 0x1e] = afStack_3a0[(uint)bVar13 * -2 + 0xf];
    afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
    if ((float *)&this_ptr->field_0x2006c != afStack_3a0 + 0x1d) {
      *(float *)&this_ptr->field_0x2006c = fStack_32c;
      *(uint *)&this_ptr->field_0x20070 = uStack_328;
      *(uint *)&this_ptr->field_0x20074 = uStack_324;
    }
  }
  core_charactr_cpp_FUN_00434790(this_ptr);
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,delta_time);
  fVar2 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x20014 - delta_time;
  *(float *)&this_ptr->field_0x20014 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x20014 = 0;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_stranger_cpp_FUN_00588a10();
  uStack_bc = uStack_338;
  afStack_118[(uint)bVar13 * -2 + 0x18] = afStack_3a0[(uint)bVar13 * -2 + 0x1b];
  afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
       afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
  core_actor_cpp_FUN_00408b40(this_ptr);
  uVar14 = CONCAT44(delta_time,this_ptr);
  fStack_11c = fStack_20c;
  afStack_118[(uint)bVar13 * -2] = afStack_238[(uint)bVar13 * -2 + 0xc];
  afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
  core_stranger_cpp_FUN_005881d0(uVar14);
  iStack_3c = 1;
  iStack_48 = 1;
  iStack_4c = 1;
  iStack_2c = 1;
  iStack_30 = 1;
  if (*(int *)&this_ptr->field_0x26fc != 0) {
    iStack_3c = 0;
    iStack_4c = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_48 = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&this_ptr->field_0x1ff7c != 0) {
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    iStack_4c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&this_ptr->field_0x1ff84 != 0) || (*(int *)&this_ptr->field_0x20000 != 0)) {
    iStack_48 = 0;
    iStack_4c = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((*(int *)&this_ptr->field_0x1ff78 != 0) || (*(int *)&this_ptr->field_0x1ff5c == 4)) {
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  puVar1 = &this_ptr->field_0x158;
  puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puVar1);
  if ((((0.0 < (float)puStack_18) ||
       (puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puVar1), 0.0 < (float)puStack_18))
      || (puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puVar1), 0.0 < (float)puStack_18))
     || (*(float *)&this_ptr->field_0x2538 <= 0.0)) {
    iStack_4c = 0;
    iStack_2c = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  puVar1 = &this_ptr->field_0x158;
  puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puVar1);
  if (((0.0 < (float)puStack_18) ||
      (puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puVar1), 0.0 < (float)puStack_18)) ||
     ((puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puVar1), 0.0 < (float)puStack_18 ||
      ((*(int *)&this_ptr->field_0x1ff5c == 5 || (*(int *)&this_ptr->field_0x1ff74 != 0)))))) {
    iStack_30 = 0;
    iStack_3c = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158);
  if (0.0 < (float)puStack_18) {
    iStack_4c = 0;
    iStack_2c = 0;
    iStack_48 = 0;
    iStack_30 = 0;
    iStack_3c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x1ff5c == 1) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x1ff5c == 2) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x1ff5c == 6) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x1ff5c == 3) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x1ff5c == 7) {
    iStack_30 = 0;
    iStack_2c = 0;
    if (local_34 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x26fc == 0) {
    if (*(int *)&this_ptr->field_0xdc != 0) {
      iStack_48 = 1;
    }
    if (*(float *)&this_ptr->field_0x24 != *(float *)&this_ptr->field_0x2504) {
      iStack_48 = 1;
    }
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320(this_ptr);
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if ((*(int *)(pSVar5 + 0x24) == 5) ||
     (pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                         ((CMotionController *)&this_ptr->field_0x158), *(int *)(pSVar5 + 0x24) == 6
     )) {
    *(float *)&this_ptr->field_0x249c = *(float *)&this_ptr->field_0x249c * (float)_DAT_005f6849;
  }
  if (*(int *)&this_ptr->field_0x1ff88 == 0) {
    fVar2 = *(float *)&this_ptr->field_0x20018 - delta_time * (float)_DAT_005f6849;
    *(float *)&this_ptr->field_0x20018 = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)&this_ptr->field_0x20018 = 0;
    }
  }
  else {
    fVar2 = delta_time * (float)_DAT_005f6849 + *(float *)&this_ptr->field_0x20018;
    *(float *)&this_ptr->field_0x20018 = fVar2;
    if (1.0 < fVar2) {
      *(uint *)&this_ptr->field_0x20018 = 0x3f800000;
    }
  }
  iVar7 = *(int *)&this_ptr->field_0x1ff84;
  iStack_24 = 1;
  if (iVar7 == 0) {
    if (*(int *)&this_ptr->field_0x20000 == 0) {
      iVar10 = *(int *)&this_ptr->field_0x1ff88;
      if (iVar10 == 0) {
        if (*(int *)&this_ptr->field_0x26fc == 0) {
          if (*(int *)&this_ptr->field_0x1ff7c == 0) {
            iVar7 = core_charactr_cpp_FUN_00432240((CCharacter *)this_ptr,delta_time);
            if (iVar7 == 0) {
              if (iStack_3c != 0) {
                pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                   ((CMotionController *)&this_ptr->field_0x158);
                uVar6 = *(uint *)(pSVar5 + 0x24);
                if (uVar6 < 0x12) {
                  if ((uVar6 < 2) || (uVar6 < 3)) {
LAB_005876d2:
                    if (*(int *)&this_ptr->field_0x2500 != 0) {
                      iVar10 = 0;
                      pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                         ((CMotionController *)&this_ptr->field_0x158);
                      iVar7 = *(int *)(pSVar5 + 0x24);
                      if (*(int *)&this_ptr->field_0xc1d8 == 0) {
                        if (*(int *)&this_ptr->field_0xc1dc == 0) {
                          if ((float)_DAT_005f6851 <= *(float *)&this_ptr->field_0xc1fc) {
                            if (_DAT_005f6859 < (double)*(float *)&this_ptr->field_0xc1fc) {
                              iVar10 = 6;
                            }
                          }
                          else {
                            iVar10 = 5;
                          }
                        }
                        else {
                          iVar10 = 2;
                        }
                      }
                      else if (*(int *)&this_ptr->field_0xc1e0 == 0) {
                        iVar10 = 1;
                      }
                      else {
                        iVar10 = 4;
                      }
                      puStack_78 = &this_ptr->field_0x158;
                      puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puStack_78);
                      pfStack_20 = (float *)((float)puStack_18 * _DAT_006060a0);
                      puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puStack_78);
                      pfStack_20 = (float *)((float)puStack_18 * _DAT_006060a4 + (float)pfStack_20);
                      puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(puStack_78);
                      fVar3 = (float)puStack_18 * _DAT_006060a8;
                      fVar2 = *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528;
                      *(float *)&this_ptr->field_0x2508 = fVar2;
                      *(float *)&this_ptr->field_0x20024 =
                           *(float *)&this_ptr->field_0x20024 - fVar2;
                      *(float *)&this_ptr->field_0x1ffc4 =
                           *(float *)&this_ptr->field_0x1ffc4 - fVar2;
                      *(float *)&this_ptr->field_0x1ffe4 =
                           *(float *)&this_ptr->field_0x1ffe4 - *(float *)&this_ptr->field_0x2508;
                      *(float *)&this_ptr->field_0x1ffcc =
                           *(float *)&this_ptr->field_0x1ffcc - *(float *)&this_ptr->field_0x2508;
                      *(float *)&this_ptr->field_0x1ffec =
                           *(float *)&this_ptr->field_0x1ffec - *(float *)&this_ptr->field_0x2508;
                      *(float *)&this_ptr->field_0x250c =
                           *(float *)&this_ptr->field_0xc1fc * delta_time *
                           (fVar3 + (float)pfStack_20) + *(float *)&this_ptr->field_0x250c;
                      if ((*(int *)&this_ptr->field_0xc1f4 != 0) &&
                         (*(int *)&this_ptr->field_0x2c98 != 0xe)) {
                        switch(iVar7) {
                        case 0:
                        case 1:
                        case 2:
                        case 5:
                        case 6:
                          iVar10 = 0x16;
                          break;
                        default:
                          goto switchD_0058784a_caseD_3;
                        case 4:
                          iVar10 = 0x12;
                        }
                        *(uint *)&this_ptr->field_0x2500 = 0;
                      }
switchD_0058784a_caseD_3:
                      if (iVar10 != iVar7) {
                        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                  ((CMotionController *)&this_ptr->field_0x158,iVar10,1);
                      }
                      if (*(int *)&this_ptr->field_0xc1e8 != 0) {
                        core_hero_cpp_FUN_004ec020((CHero *)this_ptr);
                      }
                    }
                    iStack_24 = 0;
                  }
                  else if (uVar6 < 5) {
                    if (uVar6 == 4) goto LAB_005876d2;
                  }
                  else if ((uVar6 < 6) || (uVar6 == 6)) goto LAB_005876d2;
                }
                else if ((((uVar6 < 0x13) || (uVar6 < 0x16)) || (uVar6 < 0x17)) ||
                        (((uVar6 < 0x18 || (uVar6 < 0x19)) || (uVar6 == 0x19)))) {
                  *(uint *)&this_ptr->field_0x2500 = 0;
                }
              }
            }
            else {
              uVar6 = *(uint *)&this_ptr->field_0x273c;
              if (uVar6 < 2) {
                if (uVar6 == 1) {
                  iVar7 = 1;
                }
                else {
                  iVar7 = 0;
                }
LAB_0058763b:
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&this_ptr->field_0x158,iVar7,1);
              }
              else {
                if (uVar6 < 3) {
                  iVar7 = 4;
                  goto LAB_0058763b;
                }
                if (uVar6 != 3) {
                  iVar7 = 0;
                  goto LAB_0058763b;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&this_ptr->field_0x158,0,1);
                engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&this_ptr->field_0x24a4 = 0;
              *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
              *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
            }
          }
          else {
            iStack_28 = iVar7;
            if (*(int *)&this_ptr->field_0xc1e4 != 0) {
              (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1ff7c + 0x154) + 0x1c))();
              pfVar9 = afStack_3bc;
              pfVar12 = &fStack_3d4;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *pfVar12 = *pfVar9;
                pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
                pfVar12 = pfVar12 + (uint)bVar13 * -2 + 1;
              }
              fStack_104 = fStack_3d4 + fStack_3c8;
              fStack_100 = fStack_3d0 + fStack_3c4;
              fStack_fc = fStack_3cc + fStack_3c0;
              fStack_254 = fStack_3d4 + fStack_3c8;
              afStack_2c8[(uint)bVar13 * -2 + 0x1e] = afStack_118[(uint)bVar13 * -2 + 6];
              afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
                   afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
              afStack_118[2] = fStack_254 * _DAT_005f6845;
              afStack_118[3] = fStack_250 * _DAT_005f6845;
              fStack_108 = fStack_24c * _DAT_005f6845;
              fStack_17c = fStack_254 * _DAT_005f6845;
              afStack_238[(uint)bVar13 * -2 + 0x30] = afStack_118[(uint)bVar13 * -2 + 3];
              afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31] =
                   afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
              core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x1ff7c);
              uStack_f8 = uStack_1b8;
              afStack_118[(uint)bVar13 * -2 + 9] = afStack_238[(uint)bVar13 * -2 + 0x21];
              afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
                   afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
              core_actor_cpp_FUN_00408bb0(this_ptr);
              uStack_164 = uStack_158;
              afStack_238[(uint)bVar13 * -2 + 0x36] = afStack_238[(uint)bVar13 * -2 + 0x39];
              afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x37] =
                   afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3a];
              core_vecdir_cpp_FUN_005a7520();
              uStack_1dc = uStack_8c;
              afStack_238[(uint)bVar13 * -2 + 0x18] = afStack_118[(uint)bVar13 * -2 + 0x24];
              afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                   afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
              puStack_470 = (uint *)core_actor_cpp_FUN_0040cd60();
              puStack_18 = puStack_470;
              fStack_35c = fStack_3c8 - fStack_3d4;
              fStack_358 = fStack_3c4 - fStack_3d0;
              fStack_354 = fStack_3c0 - fStack_3cc;
              fStack_314 = fStack_3c8 - fStack_3d4;
              afStack_3a0[(uint)bVar13 * -2 + 0x24] = afStack_3a0[(uint)bVar13 * -2 + 0x12];
              afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
                   afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
              fStack_200 = fStack_314 * _DAT_005f6845;
              fStack_1fc = fStack_310 * _DAT_005f6845;
              fStack_1f8 = fStack_30c * _DAT_005f6845;
              fStack_23c = fStack_314 * _DAT_005f6845;
              afStack_238[(uint)bVar13 * -2] = afStack_238[(uint)bVar13 * -2 + 0xf];
              afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                   afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
              afStack_238[0] = 0.0;
              if ((((fStack_15c - SQRT(afStack_238[1] * afStack_238[1] + fStack_23c * fStack_23c) <
                     (float)_DAT_005f6861) && (1.0 < (double)fStack_160)) &&
                  ((double)fStack_160 < _DAT_005f6869)) &&
                 (ABS((float)puStack_470) < (float)_DAT_005f6871)) {
                puStack_5c = (uint *)(delta_time * _DAT_005f6879);
                if ((float)puStack_470 < -(float)puStack_5c) {
                  puStack_470 = (uint *)-(float)puStack_5c;
                }
                if ((float)puStack_5c < (float)puStack_470) {
                  puStack_470 = puStack_5c;
                }
                *(float *)&this_ptr->field_0x34 =
                     *(float *)&this_ptr->field_0x34 + (float)puStack_470;
                core_charactr_cpp_FUN_00433d50(this_ptr);
                goto LAB_0058636e;
              }
            }
            if (iStack_28 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&this_ptr->field_0x158,0,1);
              core_hero_cpp_FUN_004ebbe0((CHero *)this_ptr);
            }
          }
        }
        else {
          if (*(int *)&this_ptr->field_0x2700 == 0) {
            core_actor_cpp_FUN_00408bb0(this_ptr);
            uStack_1e8 = uStack_140;
            afStack_238[(uint)bVar13 * -2 + 0x15] = afStack_13c[(uint)bVar13 * -2];
            afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
                 afStack_13c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            core_vecdir_cpp_FUN_005a7520();
            uStack_26c = uStack_188;
            afStack_2c8[(uint)bVar13 * -2 + 0x18] = afStack_238[(uint)bVar13 * -2 + 0x2d];
            afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                 afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e];
            puStack_18 = (uint *)core_actor_cpp_FUN_0040cd60();
            puStack_38 = puStack_18;
            if ((float)puStack_18 < _DAT_005f687d) {
              puStack_38 = (uint *)((float)puStack_18 + _DAT_005f6879);
            }
            if (_DAT_005f6881 < (float)puStack_38) {
              puStack_38 = (uint *)((float)puStack_38 + _DAT_005f6885);
            }
            puStack_6c = (uint *)(delta_time * _DAT_005f6879);
            puStack_70 = (uint *)-(float)puStack_6c;
            if ((float)puStack_38 < (float)puStack_70) {
              puStack_38 = puStack_70;
            }
            if ((float)puStack_6c < (float)puStack_38) {
              puStack_38 = puStack_6c;
            }
            *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + (float)puStack_38;
            core_charactr_cpp_FUN_00433d50(this_ptr);
          }
          iStack_44 = *(int *)&this_ptr->field_0x26fc;
          pfStack_20 = *(float **)(iStack_44 + 0x154);
          pCStack_58 = (CMotionController *)&this_ptr->field_0x158;
          core_skeleton_cpp_FUN_00569130(pCStack_58);
          pfVar9 = pfStack_20;
          iVar7 = iStack_44;
          uVar14 = CONCAT44(afStack_118 + 0x14,this_ptr);
          afStack_c8[0] = (float)uStack_98;
          afStack_118[(uint)bVar13 * -2 + 0x15] = afStack_118[(uint)bVar13 * -2 + 0x21];
          afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
               afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
          iVar7 = (*(code *)pfVar9[0x44])(iVar7,uVar14);
          if (iVar7 == 0) {
            *(uint *)&this_ptr->field_0x26fc = 0;
          }
          else if (*(int *)&this_ptr->field_0x26fc != 0) {
            fVar2 = *(float *)&this_ptr->field_0x200a8 + delta_time;
            *(float *)&this_ptr->field_0x200a8 = fVar2;
            if ((_DAT_006060ac <= fVar2) && (*(int *)&this_ptr->field_0x2700 != 1)) {
              pfStack_20 = (float *)core_motion_cpp_FUN_00524a40(pCStack_58);
              puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(pCStack_58);
              if ((float)puStack_18 + (float)pfStack_20 <= 0.0) {
                (**(code **)(*(int *)&this_ptr->field_0x154 + 0xf0))();
              }
              else if (*(int *)&this_ptr->field_0xc1e4 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_58,0x30,1);
                *(uint *)&this_ptr->field_0xc1e4 = 0;
              }
            }
            goto LAB_0058636e;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar10 + 0x154) + 0x98))(iVar10);
        if ((iStack_424 == 0) || (this_ptr != pCStack_420)) {
          core_hero_cpp_FUN_004ebe80((CHero *)this_ptr);
        }
        else {
          puVar8 = (uint *)(*(int *)&pCStack_420->field_0x1ff88 + 0x34 + (uint)bVar13 * -8);
          pfStack_2d8 = *(float **)(*(int *)&pCStack_420->field_0x1ff88 + 0x30);
          apuStack_2d4[(uint)bVar13 * -2] = (uint *)*puVar8;
          apuStack_2d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               (uint *)puVar8[(uint)bVar13 * -2 + 1];
          fStack_50 = *(float *)&pCStack_420->field_0xc200 * _DAT_005f6879 * (float)_DAT_005f6889 *
                      delta_time;
          if (fStack_50 < fStack_410) {
            fStack_50 = fStack_410;
          }
          if (fStack_414 < fStack_50) {
            fStack_50 = fStack_414;
          }
          apuStack_2d4[0] = (uint *)core_actor_cpp_FUN_0040cd60();
          fStack_54 = *(float *)&this_ptr->field_0xc204 * _DAT_005f6879 * (float)_DAT_005f6889 *
                      delta_time;
          if (fStack_54 < fStack_408) {
            fStack_54 = fStack_408;
          }
          if (fStack_40c < fStack_54) {
            fStack_54 = fStack_40c;
          }
          puStack_18 = apuStack_2d4[0];
          pfStack_2d8 = (float *)core_actor_cpp_FUN_0040cd60();
          pfStack_20 = pfStack_2d8;
          iVar7 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1ff88 + 0x154) + 0xa0))
                            (*(int *)&this_ptr->field_0x1ff88,&pfStack_2d8);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,0,1);
            core_hero_cpp_FUN_004ebe80((CHero *)this_ptr);
          }
          else {
            puVar8 = (uint *)core_actor_cpp_FUN_0040cd60();
            if ((float)_DAT_005f6851 <= (float)puVar8) {
              if ((double)(float)puVar8 <= _DAT_005f6859) {
                iVar7 = 0;
              }
              else {
                iVar7 = 5;
              }
            }
            else {
              iVar7 = 6;
            }
            puStack_18 = puVar8;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,iVar7,1);
            pfVar9 = (float *)((int)this_ptr + (uint)bVar13 * -8 + 0x34);
            uStack_d4 = *(uint *)&this_ptr->field_0x30;
            afStack_118[(uint)bVar13 * -2 + 0x12] = *pfVar9;
            afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                 pfVar9[(uint)bVar13 * -2 + 1];
            fStack_d0 = (float)puVar8 * *(float *)&this_ptr->field_0x20018 + fStack_d0;
            core_charactr_cpp_FUN_00433d50(this_ptr);
            fStack_144 = fStack_41c + (float)_DAT_005f6891;
            uStack_14c = 0;
            uStack_148 = 0;
            pfStack_20 = (float *)fStack_144;
            core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x1ff88);
            fStack_b0 = fStack_224;
            afStack_118[(uint)bVar13 * -2 + 0x1b] = afStack_238[(uint)bVar13 * -2 + 6];
            afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
                 afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
            pfStack_20 = (float *)&this_ptr->field_0x20018;
            fStack_1f4 = fStack_b0 - *(float *)&this_ptr->field_0x20;
            fStack_1f0 = fStack_ac - *(float *)&this_ptr->field_0x24;
            fStack_1ec = fStack_a8 - *(float *)&this_ptr->field_0x28;
            fStack_2b4 = fStack_1f4;
            afStack_2c8[(uint)bVar13 * -2 + 6] = afStack_238[(uint)bVar13 * -2 + 0x12];
            afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                 afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
            core_actor_cpp_FUN_00408b00(this_ptr);
            afStack_238[2] = fStack_29c;
            afStack_238[(uint)bVar13 * -2 + 3] = afStack_2c8[(uint)bVar13 * -2 + 0xc];
            afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
            fStack_38c = afStack_238[2] * *pfStack_20;
            fStack_388 = afStack_238[3] * *pfStack_20;
            fStack_384 = fStack_228 * *pfStack_20;
            fStack_284 = afStack_238[2] * *pfStack_20;
            afStack_2c8[(uint)bVar13 * -2 + 0x12] = afStack_3a0[(uint)bVar13 * -2 + 6];
            afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                 afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
            if ((float *)&this_ptr->field_0x249c != afStack_2c8 + 0x11) {
              *(float *)&this_ptr->field_0x249c = fStack_284;
              *(uint *)&this_ptr->field_0x24a0 = uStack_280;
              *(uint *)&this_ptr->field_0x24a4 = uStack_27c;
            }
            *(uint *)&this_ptr->field_0x24a0 = 0;
          }
        }
      }
    }
    else {
      puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158);
      if (0.0 < (float)puStack_18) {
        if (*(float *)&this_ptr->field_0x24 <
            *(float *)(*(int *)&this_ptr->field_0x20000 + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0,1);
        }
      }
      else {
        *(uint *)&this_ptr->field_0x20000 = 0;
      }
      if (0.0 < *(float *)&this_ptr->field_0x20238) {
        if (*(float *)&this_ptr->field_0x20238 <= delta_time) {
          *(uint *)&this_ptr->field_0x20238 = 0;
          fStack_464 = 1.0;
        }
        else {
          fStack_464 = delta_time / *(float *)&this_ptr->field_0x20238;
          *(float *)&this_ptr->field_0x20238 = *(float *)&this_ptr->field_0x20238 - delta_time;
        }
        puVar1 = &this_ptr->field_0x20228;
        fVar2 = 1.0 - fStack_464;
        fStack_2f0 = *(float *)puVar1 * fStack_464;
        fStack_2ec = *(float *)&this_ptr->field_0x2022c * fStack_464;
        fStack_2e8 = *(float *)&this_ptr->field_0x20230 * fStack_464;
        fStack_350 = *(float *)puVar1 * fStack_464;
        afStack_3a0[(uint)bVar13 * -2 + 0x15] = afStack_3a0[(uint)bVar13 * -2 + 0x2d];
        afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
             afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e];
        *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_350;
        *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_34c;
        *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_348;
        *(float *)puVar1 = *(float *)puVar1 * fVar2;
        *(float *)&this_ptr->field_0x2022c = *(float *)&this_ptr->field_0x2022c * fVar2;
        *(float *)&this_ptr->field_0x20230 = *(float *)&this_ptr->field_0x20230 * fVar2;
        fStack_68 = fVar2;
        puStack_18 = (uint *)core_actor_cpp_FUN_0040cd60();
        *(float *)&this_ptr->field_0x2508 = (float)puStack_18 * fStack_464;
      }
      puStack_18 = (uint *)
                   (**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                             (this_ptr,*(uint *)&this_ptr->field_0x2fec);
      *(uint **)&this_ptr->field_0x2504 = puStack_18;
    }
  }
  else {
    puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158);
    if (0.0 < (float)puStack_18) {
      core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x1ff84);
      uStack_194 = uStack_290;
      afStack_238[(uint)bVar13 * -2 + 0x2a] = afStack_2c8[(uint)bVar13 * -2 + 0xf];
      afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
           afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
      if (fStack_190 + (float)_DAT_005f6899 < *(float *)&this_ptr->field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0,1);
      }
    }
    else {
      *(uint *)&this_ptr->field_0x1ff84 = 0;
    }
    if (0.0 < *(float *)&this_ptr->field_0x20238) {
      if (*(float *)&this_ptr->field_0x20238 <= delta_time) {
        *(uint *)&this_ptr->field_0x20238 = 0;
        fStack_478 = 1.0;
      }
      else {
        fStack_478 = delta_time / *(float *)&this_ptr->field_0x20238;
        *(float *)&this_ptr->field_0x20238 = *(float *)&this_ptr->field_0x20238 - delta_time;
      }
      puVar1 = &this_ptr->field_0x20228;
      fVar2 = 1.0 - fStack_478;
      fStack_ec = *(float *)puVar1 * fStack_478;
      fStack_e8 = *(float *)&this_ptr->field_0x2022c * fStack_478;
      fStack_e4 = *(float *)&this_ptr->field_0x20230 * fStack_478;
      fStack_374 = *(float *)puVar1 * fStack_478;
      afStack_3a0[(uint)bVar13 * -2 + 0xc] = afStack_118[(uint)bVar13 * -2 + 0xc];
      afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
           afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_374;
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_370;
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_36c;
      *(float *)puVar1 = *(float *)puVar1 * fVar2;
      *(float *)&this_ptr->field_0x2022c = *(float *)&this_ptr->field_0x2022c * fVar2;
      *(float *)&this_ptr->field_0x20230 = *(float *)&this_ptr->field_0x20230 * fVar2;
      fStack_64 = fVar2;
      puStack_18 = (uint *)core_actor_cpp_FUN_0040cd60();
      *(float *)&this_ptr->field_0x2508 = (float)puStack_18 * fStack_478;
    }
  }
LAB_0058636e:
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  if ((*(int *)(pSVar5 + 0x24) == 0x26) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c600
                              (*(uint *)&this_ptr->field_0x1ff78),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    puStack_18 = (uint *)
                 core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
    core_ammobox_cpp_FUN_0040e1a0(this_ptr_00,(float)puStack_18);
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)this_ptr);
  core_stranger_cpp_FUN_0058a010(this_ptr,delta_time);
  if (iStack_24 != 0) {
    *(uint *)&this_ptr->field_0x20054 = 0;
    *(uint *)&this_ptr->field_0x20050 = *(uint *)&this_ptr->field_0x20054;
    *(uint *)&this_ptr->field_0x2004c = *(uint *)&this_ptr->field_0x20050;
  }
  if ((*(int *)&this_ptr->field_0x1ff84 == 0) && (*(int *)&this_ptr->field_0x20000 == 0)) {
    if (iStack_48 == 0) goto LAB_0058648f;
    pCStack_1c = (CMotionController *)&this_ptr->field_0x158;
    pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCStack_1c);
    fVar2 = 0x41900000 * delta_time;
    iVar7 = *(int *)(pSVar5 + 0x24);
    fStack_2a8 = *(float *)&this_ptr->field_0x249c + *(float *)&this_ptr->field_0x250c;
    fStack_2a4 = *(float *)&this_ptr->field_0x24a0 + *(float *)&this_ptr->field_0x2510;
    fStack_2a0 = *(float *)&this_ptr->field_0x24a4 + *(float *)&this_ptr->field_0x2514;
    fStack_2e4 = fStack_2a8;
    afStack_2e0[(uint)bVar13 * -2] = afStack_2c8[(uint)bVar13 * -2 + 9];
    afStack_2e0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    fStack_60 = fVar2;
    iStack_40 = iVar7;
    if (iVar7 == 0x12) {
      fStack_2e4 = 0.0;
      afStack_2e0[0] = 0.0;
      *(float *)&this_ptr->field_0x20068 = 0x41900000;
      *(uint *)&this_ptr->field_0x20064 = 0;
      afStack_2e0[1] = fVar2;
    }
    else {
      if (iVar7 == 0x13) {
        fVar3 = (float)_DAT_005f68a1;
        *(float *)&this_ptr->field_0x20068 = 0x41900000;
        fVar3 = *(float *)&this_ptr->field_0x251c - delta_time * fVar3;
        *(uint *)&this_ptr->field_0x20064 = 0;
        afStack_2e0[1] = fVar2;
        goto LAB_00587a5e;
      }
      if (iVar7 == 0x14) {
        fVar3 = (float)_DAT_005f68a1;
        fStack_2e4 = 0.0;
        afStack_2e0[0] = 0.0;
        fVar2 = 0x3F000000 * 0x41900000;
        afStack_2e0[1] = *(float *)&this_ptr->field_0x20068 * delta_time;
        *(uint *)&this_ptr->field_0x20064 = 0;
        *(float *)&this_ptr->field_0x20068 = *(float *)&this_ptr->field_0x20068 - fVar2 * delta_time
        ;
        *(float *)&this_ptr->field_0x251c = *(float *)&this_ptr->field_0x251c - delta_time * fVar3;
        if (*(float *)&this_ptr->field_0x20068 < 0.0) {
          *(uint *)&this_ptr->field_0x20068 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0x1a,1);
        }
      }
      else if (iVar7 == 0x15) {
        afStack_2e0[0] = 0.0;
        fStack_2e4 = 0.0;
        afStack_2e0[1] = fVar2;
      }
      else if (iVar7 == 0x16) {
        *(uint *)&this_ptr->field_0x20064 = 0;
        *(float *)&this_ptr->field_0x20068 = 0x41200000;
      }
      else if (iVar7 == 0x17) {
        afStack_2e0[1] = 0x41200000 * delta_time;
        fVar2 = (float)_DAT_005f68a1;
        *(float *)&this_ptr->field_0x20068 = 0x41200000;
        fVar3 = *(float *)&this_ptr->field_0x251c - delta_time * fVar2;
        *(uint *)&this_ptr->field_0x20064 = 0;
LAB_00587a5e:
        afStack_2e0[0] = 0.0;
        fStack_2e4 = 0.0;
LAB_00587a60:
        *(float *)&this_ptr->field_0x251c = fVar3;
      }
      else if (iVar7 == 0x18) {
        fVar3 = (float)_DAT_005f68a1;
        fStack_2e4 = 0.0;
        afStack_2e0[0] = 0.0;
        fVar2 = 0x3F000000 * 0x41200000;
        afStack_2e0[1] = *(float *)&this_ptr->field_0x20068 * delta_time;
        *(uint *)&this_ptr->field_0x20064 = 0;
        *(float *)&this_ptr->field_0x20068 = *(float *)&this_ptr->field_0x20068 - fVar2 * delta_time
        ;
        *(float *)&this_ptr->field_0x251c = *(float *)&this_ptr->field_0x251c - delta_time * fVar3;
        if (*(float *)&this_ptr->field_0x20068 < 0.0) {
          *(uint *)&this_ptr->field_0x20068 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_1c,0x1a,1);
        }
      }
      else {
        if (iVar7 != 0x19) {
          if (iVar7 == 0x1a) {
            afStack_2e0[1] = 0.0;
            fVar3 = *(float *)&this_ptr->field_0x251c - delta_time * (float)_DAT_005f68a1;
            *(uint *)&this_ptr->field_0x20064 = 0x461c3f9a;
            goto LAB_00587a5e;
          }
          if (iVar7 == 0x1b) {
            afStack_2e0[1] = 0.0;
            afStack_2e0[0] = 0.0;
            fStack_2e4 = 0.0;
            fVar3 = *(float *)&this_ptr->field_0x251c - delta_time * (float)_DAT_005f68a1;
          }
          else {
            fVar3 = *(float *)&this_ptr->field_0x251c - delta_time * (float)_DAT_005f68a1;
          }
          goto LAB_00587a60;
        }
        afStack_2e0[0] = 0.0;
      }
    }
    core_actor_cpp_FUN_00408b00(this_ptr);
    fStack_1ac = fStack_260;
    afStack_238[(uint)bVar13 * -2 + 0x24] = afStack_2c8[(uint)bVar13 * -2 + 0x1b];
    afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
         afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
    fStack_380 = *(float *)&this_ptr->field_0x2518 * delta_time;
    velocity = (CVector3f *)&fStack_2e4;
    fStack_37c = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_378 = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_e0 = fStack_380;
    afStack_118[(uint)bVar13 * -2 + 0xf] = afStack_3a0[(uint)bVar13 * -2 + 9];
    afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
         afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    fStack_1d0 = fStack_e0 + fStack_1ac;
    fStack_1cc = fStack_dc + fStack_1a8;
    fStack_1c8 = fStack_d8 + fStack_1a4;
    fStack_218 = fStack_e0 + fStack_1ac;
    afStack_238[(uint)bVar13 * -2 + 9] = afStack_238[(uint)bVar13 * -2 + 0x1b];
    afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
         afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
    fStack_2e4 = fStack_2e4 + fStack_218;
    afStack_2e0[0] = afStack_2e0[0] + fStack_214;
    afStack_2e0[1] = afStack_2e0[1] + fStack_210;
    *(uint *)&this_ptr->field_0x20240 = *(uint *)&this_ptr->field_0x251c;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,velocity);
    if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504 + (float)_DAT_005f68a9)
    {
      *(uint *)&this_ptr->field_0x2500 = 1;
    }
    if (((iStack_40 == 0x1a) || (iStack_40 == 0x14)) || (iStack_40 == 0x18)) {
      if (*(int *)&this_ptr->field_0x2500 != 0) {
        engine_console_cpp_FUN_00445430
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)&this_ptr->field_0x251c);
        fVar2 = *(float *)&this_ptr->field_0x20240;
        if (-fVar2 < (float)_DAT_005f68b1) {
          if (iStack_40 == 0x18) {
            iVar7 = 0x19;
            goto LAB_00587c25;
          }
          if (iStack_40 == 0x14) {
            iVar7 = 0x15;
            goto LAB_00587c25;
          }
          if (iStack_40 == 0x1a) {
            iVar7 = 0x1b;
            goto LAB_00587c25;
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_460);
          fVar2 = (-fVar2 + (float)_DAT_005f68b9) * (float)_DAT_005f68c1 * (float)_DAT_005f68c9;
          fStack_45c = fVar2;
          if (0x42c80000 < (int)fVar2) {
            fStack_45c = 9999.0;
          }
          *(uint *)&this_ptr->field_0xc1d0 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x108))(this_ptr);
          if ((*(float *)&this_ptr->field_0x2538 <= 0.0) || (0x42c80000 < (int)fVar2)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,0x1d,1);
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
            iVar7 = *(int *)&this_ptr->field_0x2500;
            fStack_468 = 0x3F000000;
            goto joined_r0x00587fec;
          }
          iVar7 = 0x1c;
LAB_00587c25:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,iVar7,1);
        }
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x24))(this_ptr,&DAT_02c8af28);
      }
      iVar7 = *(int *)&this_ptr->field_0x2500;
      fStack_468 = 0x3F000000;
    }
    else {
      iVar7 = *(int *)&this_ptr->field_0x2500;
      fStack_468 = 0x3F000000;
    }
joined_r0x00587fec:
    0x3F000000 = fStack_468;
    if (iVar7 == 0) {
      *(float *)&this_ptr->field_0x20064 = *(float *)&this_ptr->field_0x20064 + delta_time;
      if (iStack_40 == 4) {
        fStack_468 = fStack_468 * (float)_DAT_005f6849;
      }
      if ((fStack_468 < *(float *)&this_ptr->field_0x20064) ||
         (*(float *)&this_ptr->field_0x20240 < (float)_DAT_005f68b9)) {
        if (iStack_40 != 0x1a) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0x1a,1);
        }
        *(uint *)&this_ptr->field_0x2500 = 0;
      }
      goto LAB_0058648f;
    }
  }
  else {
    puStack_18 = (uint *)&this_ptr->field_0x249c;
    core_actor_cpp_FUN_00408ac0(this_ptr);
    fStack_278 = fStack_2fc;
    afStack_2c8[(uint)bVar13 * -2 + 0x15] = afStack_3a0[(uint)bVar13 * -2 + 0x2a];
    afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_278;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_274;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_270;
    puStack_18[2] = 0;
    puStack_18[1] = puStack_18[2];
    *puStack_18 = puStack_18[1];
  }
  *(uint *)&this_ptr->field_0x20064 = 0;
LAB_0058648f:
  *(uint *)&this_ptr->field_0x20054 = 0;
  *(uint *)&this_ptr->field_0x20050 = *(uint *)&this_ptr->field_0x20054;
  *(uint *)&this_ptr->field_0x2004c = *(uint *)&this_ptr->field_0x20050;
  pCVar4 = g_CGamePtr;
  if (iStack_3c != 0) {
    if (*(int *)&this_ptr->field_0xc1f0 != 0) {
      if (*(int *)&this_ptr->field_0x1ffac == 0) {
        *(uint *)&this_ptr->field_0x1ffac = 1;
      }
      else {
        *(uint *)&this_ptr->field_0x1ffac = 0;
        if (*(int *)&pCVar4->field_0x264 != 0) {
          *(uint *)&pCVar4->field_0x264 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
        }
      }
    }
    if (((*(int *)&this_ptr->field_0xc1ec != 0) && (*(int *)&this_ptr->field_0x1fe20 != 0)) &&
       (*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x2f0) != 0)) {
      uVar6 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
      *(uint *)&g_CGamePtr->field_0x264 = uVar6;
      if (uVar6 != 0) {
        *(uint *)&this_ptr->field_0x1ffac = 1;
      }
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr);
    }
  }
  if (*(int *)&this_ptr->field_0x1fe20 == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  else if (*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x2f0) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  if (iStack_4c != 0) {
    core_stranger_cpp_FUN_005907a0(this_ptr,delta_time);
  }
  if (*(int *)&this_ptr->field_0x1ffac == 0) {
    fVar2 = *(float *)&this_ptr->field_0x1ffb0 - delta_time / _DAT_00606070;
    *(float *)&this_ptr->field_0x1ffb0 = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)&this_ptr->field_0x1ffb0 = 0;
    }
  }
  else {
    fVar2 = delta_time / _DAT_0060606c + *(float *)&this_ptr->field_0x1ffb0;
    *(float *)&this_ptr->field_0x1ffb0 = fVar2;
    if (1.0 < fVar2) {
      *(uint *)&this_ptr->field_0x1ffb0 = 0x3f800000;
    }
  }
  fVar2 = *(float *)&this_ptr->field_0x1ffd0 - delta_time / _DAT_00606074;
  *(uint *)&this_ptr->field_0x1ffb4 = 0;
  *(float *)&this_ptr->field_0x1ffd0 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&this_ptr->field_0x1ffd0 = 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x1fff0 - delta_time / _DAT_00606074;
  *(float *)&this_ptr->field_0x1fff0 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&this_ptr->field_0x1fff0 = 0;
  }
  if (iStack_2c != 0) {
    core_stranger_cpp_FUN_00591120(this_ptr);
  }
  core_stranger_cpp_FUN_00588ad0(this_ptr);
  if (((*(int *)&this_ptr->field_0x1fae4 == 2) && (*(int *)&this_ptr->field_0x20004 != 0)) &&
     (*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0) == 0)) {
    core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)&this_ptr->field_0x158);
    core_stranger_cpp_FUN_0058aeb0(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0058f660(this_ptr);
    core_stranger_cpp_FUN_00588ad0(this_ptr);
  }
  core_stranger_cpp_FUN_00590020(this_ptr,delta_time,iStack_30);
  core_stranger_cpp_FUN_005917b0(this_ptr);
  core_charactr_cpp_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  puStack_18 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158);
  if ((float)puStack_18 <= 0.0) {
    core_hero_cpp_FUN_004ebbe0((CHero *)this_ptr);
  }
  else {
    puStack_18 = (uint *)
                 core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
    if ((1.0 < (float)puStack_18) &&
       (pCStack_74 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (*(uint *)&this_ptr->field_0x1ff7c),
       pCStack_74 != (CBoxActor *)0x0)) {
      core_stranger_cpp_FUN_00588a10();
      afStack_2c8[2] = (float)uStack_320;
      afStack_2c8[(uint)bVar13 * -2 + 3] = afStack_3a0[(uint)bVar13 * -2 + 0x21];
      afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
      core_actor_cpp_FUN_00408b40(this_ptr);
      afStack_3a0[2] = fStack_a4;
      afStack_3a0[(uint)bVar13 * -2 + 3] = afStack_118[(uint)bVar13 * -2 + 0x1e];
      afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_118[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
      fStack_1a0 = afStack_3a0[2] - fStack_11c;
      fStack_19c = afStack_3a0[3] - afStack_118[0];
      fStack_198 = fStack_390 - afStack_118[1];
      CStack_248._0_4_ = afStack_3a0[2] - fStack_11c;
      *(float *)((int)&CStack_248 + ((uint)bVar13 * -2 + 1) * 4) =
           afStack_238[(uint)bVar13 * -2 + 0x27];
      *(float *)((int)&CStack_248 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 2) * 4) =
           afStack_238[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
      CStack_248._4_4_ = 0;
      core_actor_cpp_FUN_00408b00(this_ptr);
      afStack_13c[2] = (float)uStack_308;
      afStack_13c[(uint)bVar13 * -2 + 3] = afStack_3a0[(uint)bVar13 * -2 + 0x27];
      afStack_13c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
      if (0.0 < fStack_12c) {
        core_boxactor_cpp_FUN_00422ab0(pCStack_74,(CVector3f *)&fStack_11c,&CStack_248);
      }
    }
  }
  core_stranger_cpp_FUN_0058aeb0(this_ptr,0);
  core_stranger_cpp_FUN_0058eb50(this_ptr,0,delta_time);
  core_stranger_cpp_FUN_0058eb50(this_ptr,1,delta_time);
  core_stranger_cpp_FUN_005914a0(this_ptr,delta_time);
  core_inv_cpp_FUN_004f9f10();
  core_stranger_cpp_FUN_00591b20(this_ptr,delta_time);
  if ((*(int *)&this_ptr->field_0x20004 != 0) &&
     (*(int *)(*(int *)&this_ptr->field_0x20004 + 0xfc) != 0)) {
    *(uint *)&this_ptr->field_0xfc = 1;
  }
  iVar7 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0x2001c);
  if (iVar7 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x20020);
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572a10(1);
      uVar6 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-on.wav");
      *(uint *)&this_ptr->field_0x20020 = uVar6;
      sound_sndmain_cpp_FUN_005728e0(0.0);
      uVar6 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-loop.wav");
      *(uint *)&this_ptr->field_0x2001c = uVar6;
      sound_sndmain_cpp_FUN_00572b40();
      sound_sndmain_cpp_FUN_00573ab0(*(uint *)&this_ptr->field_0x2001c,1.0,1.0,0);
      return;
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x20020);
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0x2001c);
    sound_sndmain_cpp_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572a10(1);
    sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-off.wav");
    sound_sndmain_cpp_FUN_00572b40();
    return;
  }
  return;
}
