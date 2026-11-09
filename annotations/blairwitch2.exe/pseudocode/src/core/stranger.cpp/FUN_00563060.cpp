// Name: core_stranger.cpp_FUN_00563060
// Address: 00563060
// Address Range: [[00563060, 005656e9]]
// Convention: __cdecl
// Signature: void __cdecl core_stranger_cpp_FUN_00563060(CStranger *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_stranger_cpp_FUN_00563060(CStranger *this_ptr,float delta_time)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  CGame *pCVar4;
  CAmmoBox *this_ptr_00;
  uint uVar5;
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
  float afStackY_12b4 [901];
  ulonglong uVar14;
  CVector3f *velocity;
  float fStack_470;
  float fStack_46c;
  uint *puStack_468;
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
  float afStack_404 [6];
  float fStack_3ec;
  float fStack_3e8;
  float fStack_3e4;
  float fStack_3e0;
  float fStack_3dc;
  float fStack_3d8;
  uint local_3d4 [6];
  uint local_3bc;
  uint uStack_3b8;
  uint uStack_3b4;
  uint uStack_3b0;
  uint uStack_3ac;
  uint uStack_3a8;
  float fStack_3a4;
  float afStack_3a0 [4];
  float fStack_390;
  uint uStack_38c;
  float fStack_380;
  float fStack_374;
  float fStack_370;
  float fStack_36c;
  uint uStack_368;
  uint uStack_35c;
  float fStack_350;
  float fStack_34c;
  float fStack_348;
  CVector3f CStack_344;
  float fStack_338;
  float afStack_334 [2];
  CVector3f CStack_32c;
  float fStack_320;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  uint uStack_2fc;
  float fStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float *pfStack_2d8;
  uint *apuStack_2d4 [2];
  float fStack_2cc;
  float afStack_2c8 [2];
  byte auStack_2c0 [4];
  float afStack_2bc [5];
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  float fStack_29c;
  float fStack_298;
  float fStack_294;
  uint uStack_290;
  float fStack_284;
  uint uStack_280;
  uint uStack_27c;
  uint uStack_278;
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
  CVector3f CStack_23c;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  uint uStack_224;
  float afStack_218 [3];
  float fStack_20c;
  float afStack_208 [5];
  uint uStack_1f4;
  uint uStack_1e8;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  uint uStack_1d0;
  uint uStack_1c4;
  float fStack_1b8;
  uint uStack_1b4;
  float fStack_1b0;
  uint uStack_1ac;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  uint uStack_188;
  float fStack_17c;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  uint uStack_164;
  uint uStack_158;
  float fStack_14c;
  uint uStack_140;
  float fStack_13c;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  uint uStack_110;
  uint uStack_104;
  uint uStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float fStack_b0;
  float afStack_ac [4];
  float fStack_9c;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  byte *puStack_78;
  uint *puStack_74;
  int iStack_70;
  CBoxActor *pCStack_6c;
  float fStack_68;
  uint *puStack_64;
  CMotionController *pCStack_60;
  float fStack_5c;
  float fStack_58;
  CMotionController *pCStack_54;
  uint *puStack_50;
  float fStack_4c;
  float fStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  uint *puStack_30;
  int local_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  float *pfStack_1c;
  uint *puStack_18;
  
  bVar13 = 0;
  local_2c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  if ((*(int *)&this_ptr->field_0x2698 != 0) && (*(float *)&this_ptr->field_0x2571c < _DAT_005eb5cd)
     ) {
    (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2698 + 0x2b0) + 0x24))();
    puVar8 = local_3d4;
    puVar11 = &local_3bc;
    for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar11 = *puVar8;
      puVar8 = puVar8 + (uint)bVar13 * -2 + 1;
      puVar11 = puVar11 + (uint)bVar13 * -2 + 1;
    }
    if ((uint *)&this_ptr->field_0x25710 != &local_3bc) {
      *(uint *)&this_ptr->field_0x25710 = local_3bc;
      *(uint *)&this_ptr->field_0x25714 = uStack_3b8;
      *(uint *)&this_ptr->field_0x25718 = uStack_3b4;
    }
    if ((uint *)&this_ptr->field_0x2571c != &uStack_3b0) {
      *(uint *)&this_ptr->field_0x2571c = uStack_3b0;
      *(uint *)&this_ptr->field_0x25720 = uStack_3ac;
      *(uint *)&this_ptr->field_0x25724 = uStack_3a8;
    }
    fStack_29c = *(float *)&this_ptr->field_0x25710 + *(float *)&this_ptr->field_0x2571c;
    fStack_298 = *(float *)&this_ptr->field_0x25714 + *(float *)&this_ptr->field_0x25720;
    fStack_294 = *(float *)&this_ptr->field_0x25718 + *(float *)&this_ptr->field_0x25724;
    fStack_230 = fStack_29c;
    afStack_2bc[(uint)bVar13 * -2 + 0x24] = afStack_2bc[(uint)bVar13 * -2 + 9];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    fStack_134 = fStack_230 * _DAT_005eb5d1;
    fStack_130 = fStack_22c * _DAT_005eb5d1;
    fStack_12c = fStack_228 * _DAT_005eb5d1;
    fStack_194 = fStack_230 * _DAT_005eb5d1;
    afStack_208[(uint)bVar13 * -2 + 0x1e] = afStack_208[(uint)bVar13 * -2 + 0x36];
    afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
         afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x37];
    core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x2698);
    uStack_38c = uStack_278;
    afStack_3a0[(uint)bVar13 * -2 + 6] = afStack_2bc[(uint)bVar13 * -2 + 0x12];
    afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
    core_actor_cpp_FUN_00408de0(this_ptr);
    CStack_32c._0_4_ = CStack_23c._0_4_;
    afStack_334[(uint)bVar13 * -2 + 3] = afStack_2bc[(uint)bVar13 * -2 + 0x21];
    afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
         afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
    if ((CVector3f *)&this_ptr->field_0x25704 != &CStack_32c) {
      *(uint *)&this_ptr->field_0x25704 = CStack_32c._0_4_;
      *(uint *)&this_ptr->field_0x25708 = CStack_32c._4_4_;
      *(uint *)&this_ptr->field_0x2570c = CStack_32c._8_4_;
    }
  }
  core_charactr_cpp_FUN_0042a7a0((CCharacter *)this_ptr,delta_time);
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,delta_time);
  fVar2 = *(float *)&this_ptr->field_0x10a60 - delta_time;
  *(float *)&this_ptr->field_0x10a60 = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x10a60 = 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x256ac - delta_time;
  *(float *)&this_ptr->field_0x256ac = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)&this_ptr->field_0x256ac = 0;
  }
  *(uint *)&this_ptr->field_0x2510 = 0;
  *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
  *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
  core_stranger_cpp_FUN_00565f30();
  uStack_1e8 = uStack_290;
  afStack_208[(uint)bVar13 * -2 + 9] = afStack_2bc[(uint)bVar13 * -2 + 0xc];
  afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
       afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
  core_actor_cpp_FUN_00408d70(this_ptr);
  uVar14 = CONCAT44(delta_time,this_ptr);
  fStack_20c = fStack_320;
  afStack_208[(uint)bVar13 * -2] = afStack_334[(uint)bVar13 * -2 + 6];
  afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
       afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
  core_stranger_cpp_FUN_005656f0(uVar14);
  iStack_34 = 1;
  iStack_40 = 1;
  iStack_3c = 1;
  iStack_28 = 1;
  iStack_24 = 1;
  if (*(int *)&this_ptr->field_0x276c != 0) {
    iStack_34 = 0;
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_40 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&this_ptr->field_0x2560c != 0) {
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    iStack_3c = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&this_ptr->field_0x25614 != 0) || (*(int *)&this_ptr->field_0x25694 != 0)) {
    iStack_40 = 0;
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if ((*(int *)&this_ptr->field_0x25608 != 0) || (*(int *)&this_ptr->field_0x256a4 == 4)) {
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puVar1 = &this_ptr->field_0x2b4;
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1);
  if ((((0.0 < (float)puStack_18) ||
       (puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18))
      || (puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18))
     || (*(float *)&this_ptr->field_0x25a8 <= 0.0)) {
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puVar1 = &this_ptr->field_0x2b4;
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1);
  if (((0.0 < (float)puStack_18) ||
      (puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18)) ||
     ((puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < (float)puStack_18 ||
      ((*(int *)&this_ptr->field_0x256a4 == 5 || (*(int *)&this_ptr->field_0x25604 != 0)))))) {
    iStack_24 = 0;
    iStack_34 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
  if (0.0 < (float)puStack_18) {
    iStack_3c = 0;
    iStack_28 = 0;
    iStack_40 = 0;
    iStack_24 = 0;
    iStack_34 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x256a4 == 1) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x256a4 == 2) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x256a4 == 6) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x256a4 == 3) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x256a4 == 7) {
    iStack_24 = 0;
    iStack_28 = 0;
    if (local_2c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&this_ptr->field_0x276c == 0) {
    if (*(int *)&this_ptr->field_0xdc != 0) {
      iStack_40 = 1;
    }
    if (*(float *)&this_ptr->field_0x24 != *(float *)&this_ptr->field_0x2574) {
      iStack_40 = 1;
    }
  }
  *(uint *)&this_ptr->field_0x2594 = *(uint *)&this_ptr->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(this_ptr);
  iVar7 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar7 + 0x24) == 4) ||
     (iVar7 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar7 + 0x24) == 5)) {
    *(float *)&this_ptr->field_0x2508 = *(float *)&this_ptr->field_0x2508 * (float)_DAT_005eb5d5;
  }
  if (*(int *)&this_ptr->field_0x25618 == 0) {
    fVar2 = *(float *)&this_ptr->field_0x256b0 - delta_time * (float)_DAT_005eb5d5;
    *(float *)&this_ptr->field_0x256b0 = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)&this_ptr->field_0x256b0 = 0;
    }
  }
  else {
    fVar2 = delta_time * (float)_DAT_005eb5d5 + *(float *)&this_ptr->field_0x256b0;
    *(float *)&this_ptr->field_0x256b0 = fVar2;
    if (1.0 < fVar2) {
      *(uint *)&this_ptr->field_0x256b0 = 0x3f800000;
    }
  }
  iVar7 = *(int *)&this_ptr->field_0x25614;
  iStack_70 = 1;
  if (iVar7 == 0) {
    if (*(int *)&this_ptr->field_0x25694 == 0) {
      iVar10 = *(int *)&this_ptr->field_0x25618;
      if (iVar10 == 0) {
        if (*(int *)&this_ptr->field_0x276c == 0) {
          if (*(int *)&this_ptr->field_0x2560c == 0) {
            iVar7 = core_charactr_cpp_FUN_004287f0((CCharacter *)this_ptr,delta_time);
            if (iVar7 == 0) {
              if (iStack_34 != 0) {
                iVar7 = core_motion_cpp_FUN_005035c0();
                switch(*(uint *)(iVar7 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)&this_ptr->field_0x2570 != 0) {
                    iVar10 = 0;
                    iVar7 = core_motion_cpp_FUN_005035c0();
                    iVar7 = *(int *)(iVar7 + 0x24);
                    if (*(int *)&this_ptr->field_0x10a68 == 0) {
                      if (*(int *)&this_ptr->field_0x10a6c == 0) {
                        if ((float)_DAT_005eb5dd <= *(float *)&this_ptr->field_0x10a8c) {
                          if (_DAT_005eb5e5 < (double)*(float *)&this_ptr->field_0x10a8c) {
                            iVar10 = 5;
                          }
                        }
                        else {
                          iVar10 = 4;
                        }
                      }
                      else {
                        iVar10 = 2;
                      }
                    }
                    else if (*(int *)&this_ptr->field_0x10a70 == 0) {
                      iVar10 = 1;
                    }
                    else {
                      iVar10 = 3;
                    }
                    puStack_78 = &this_ptr->field_0x2b4;
                    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puStack_78);
                    pfStack_1c = (float *)((float)puStack_18 * _DAT_005fc1f0);
                    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puStack_78);
                    pfStack_1c = (float *)((float)puStack_18 * _DAT_005fc1f4 + (float)pfStack_1c);
                    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(puStack_78);
                    fVar3 = (float)puStack_18 * _DAT_005fc1f8;
                    fVar2 = *(float *)&this_ptr->field_0x10a90 * *(float *)&this_ptr->field_0x2598;
                    *(float *)&this_ptr->field_0x2578 = fVar2;
                    *(float *)&this_ptr->field_0x256bc = *(float *)&this_ptr->field_0x256bc - fVar2;
                    *(float *)&this_ptr->field_0x25658 = *(float *)&this_ptr->field_0x25658 - fVar2;
                    *(float *)&this_ptr->field_0x25678 =
                         *(float *)&this_ptr->field_0x25678 - *(float *)&this_ptr->field_0x2578;
                    *(float *)&this_ptr->field_0x25660 =
                         *(float *)&this_ptr->field_0x25660 - *(float *)&this_ptr->field_0x2578;
                    *(float *)&this_ptr->field_0x25680 =
                         *(float *)&this_ptr->field_0x25680 - *(float *)&this_ptr->field_0x2578;
                    *(float *)&this_ptr->field_0x257c =
                         *(float *)&this_ptr->field_0x10a8c * delta_time *
                         (fVar3 + (float)pfStack_1c) + *(float *)&this_ptr->field_0x257c;
                    if ((*(int *)&this_ptr->field_0x10a84 != 0) &&
                       (*(int *)&this_ptr->field_0x2d04 != 0xe)) {
                      switch(iVar7) {
                      case 0:
                      case 1:
                      case 2:
                      case 4:
                      case 5:
                        iVar10 = 0xb;
                        break;
                      case 3:
                        iVar10 = 7;
                        break;
                      default:
                        goto switchD_00564db7_default;
                      }
                      *(uint *)&this_ptr->field_0x2570 = 0;
                    }
switchD_00564db7_default:
                    if (iVar10 != iVar7) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)&this_ptr->field_0x2b4,iVar10,1);
                    }
                    if (*(int *)&this_ptr->field_0x10a78 != 0) {
                      core_hero_cpp_FUN_004cfc80();
                      iStack_70 = 0;
                      break;
                    }
                  }
                  iStack_70 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  *(uint *)&this_ptr->field_0x2570 = 0;
                }
              }
            }
            else {
              uVar5 = *(uint *)&this_ptr->field_0x27ac;
              if (uVar5 < 2) {
                if (uVar5 == 1) {
                  iVar7 = 1;
                }
                else {
                  iVar7 = 0;
                }
LAB_00564b9f:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&this_ptr->field_0x2b4,iVar7,1);
              }
              else {
                if (uVar5 < 3) {
                  iVar7 = 3;
                  goto LAB_00564b9f;
                }
                if (uVar5 != 3) {
                  iVar7 = 0;
                  goto LAB_00564b9f;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&this_ptr->field_0x2b4,0,1);
                engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&this_ptr->field_0x2510 = 0;
              *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
              *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
            }
          }
          else {
            iStack_20 = iVar7;
            if (*(int *)&this_ptr->field_0x10a74 != 0) {
              (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2560c + 0x2b0) + 0x24))();
              pfVar9 = afStack_404;
              pfVar12 = &fStack_3ec;
              for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
                *pfVar12 = *pfVar9;
                pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
                pfVar12 = pfVar12 + (uint)bVar13 * -2 + 1;
              }
              fStack_350 = fStack_3ec + fStack_3e0;
              fStack_34c = fStack_3e8 + fStack_3dc;
              fStack_348 = fStack_3e4 + fStack_3d8;
              fStack_254 = fStack_3ec + fStack_3e0;
              afStack_2bc[(uint)bVar13 * -2 + 0x1b] = afStack_3a0[(uint)bVar13 * -2 + 0x15];
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
                   afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
              fStack_8c = fStack_254 * _DAT_005eb5d1;
              fStack_88 = fStack_250 * _DAT_005eb5d1;
              fStack_84 = fStack_24c * _DAT_005eb5d1;
              fStack_17c = fStack_254 * _DAT_005eb5d1;
              afStack_208[(uint)bVar13 * -2 + 0x24] = afStack_ac[(uint)bVar13 * -2 + 9];
              afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25] =
                   afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
              core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x2560c);
              uStack_224 = uStack_11c;
              afStack_2bc[(uint)bVar13 * -2 + 0x27] = afStack_208[(uint)bVar13 * -2 + 0x3c];
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
                   afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3d];
              core_actor_cpp_FUN_00408de0(this_ptr);
              uStack_c8 = uStack_110;
              afStack_208[(uint)bVar13 * -2 + 0x51] = afStack_208[(uint)bVar13 * -2 + 0x3f];
              afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x52] =
                   afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x40];
              core_vecdir_cpp_FUN_005838f0();
              uStack_1d0 = uStack_104;
              afStack_208[(uint)bVar13 * -2 + 0xf] = afStack_208[(uint)bVar13 * -2 + 0x42];
              afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                   afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x43];
              puStack_468 = (uint *)core_actor_cpp_FUN_0040d0c0();
              puStack_18 = puStack_468;
              fStack_1a0 = fStack_3e0 - fStack_3ec;
              fStack_19c = fStack_3dc - fStack_3e8;
              fStack_198 = fStack_3d8 - fStack_3e4;
              fStack_260 = fStack_3e0 - fStack_3ec;
              afStack_2bc[(uint)bVar13 * -2 + 0x18] = afStack_208[(uint)bVar13 * -2 + 0x1b];
              afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
                   afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
              fStack_d4 = fStack_260 * _DAT_005eb5d1;
              fStack_d0 = fStack_25c * _DAT_005eb5d1;
              fStack_cc = fStack_258 * _DAT_005eb5d1;
              fStack_1b8 = fStack_260 * _DAT_005eb5d1;
              afStack_208[(uint)bVar13 * -2 + 0x15] = afStack_208[(uint)bVar13 * -2 + 0x4e];
              afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
                   afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x4f];
              uStack_1b4 = 0;
              if ((((fStack_c0 - SQRT(fStack_1b0 * fStack_1b0 + fStack_1b8 * fStack_1b8) <
                     (float)_DAT_005eb5ed) && (1.0 < fStack_c4)) &&
                  (fStack_c4 < (float)_DAT_005eb5f5)) &&
                 (ABS((float)puStack_468) < (float)_DAT_005eb5fd)) {
                puStack_50 = (uint *)(delta_time * _DAT_005eb605);
                if ((float)puStack_468 < -(float)puStack_50) {
                  puStack_468 = (uint *)-(float)puStack_50;
                }
                if ((float)puStack_50 < (float)puStack_468) {
                  puStack_468 = puStack_50;
                }
                *(float *)&this_ptr->field_0x34 =
                     *(float *)&this_ptr->field_0x34 + (float)puStack_468;
                core_charactr_cpp_FUN_00429d60(this_ptr);
                goto switchD_00564c2e_caseD_6;
              }
            }
            if (iStack_20 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&this_ptr->field_0x2b4,0,1);
              core_hero_cpp_FUN_004cf830((CHero *)this_ptr);
            }
          }
        }
        else {
          if (*(int *)&this_ptr->field_0x2770 == 0) {
            core_actor_cpp_FUN_00408de0(this_ptr);
            uStack_98 = uStack_368;
            afStack_ac[(uint)bVar13 * -2 + 6] = afStack_3a0[(uint)bVar13 * -2 + 0xf];
            afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
                 afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
            core_vecdir_cpp_FUN_005838f0();
            uStack_1c4 = uStack_188;
            afStack_208[(uint)bVar13 * -2 + 0x12] = afStack_208[(uint)bVar13 * -2 + 0x21];
            afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
                 afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
            puStack_18 = (uint *)core_actor_cpp_FUN_0040d0c0();
            puStack_30 = puStack_18;
            if ((float)puStack_18 < _DAT_005eb609) {
              puStack_30 = (uint *)((float)puStack_18 + _DAT_005eb605);
            }
            if (_DAT_005eb60d < (float)puStack_30) {
              puStack_30 = (uint *)((float)puStack_30 + _DAT_005eb611);
            }
            puStack_64 = (uint *)(delta_time * _DAT_005eb605);
            puStack_74 = (uint *)-(float)puStack_64;
            if ((float)puStack_30 < (float)puStack_74) {
              puStack_30 = puStack_74;
            }
            if ((float)puStack_64 < (float)puStack_30) {
              puStack_30 = puStack_64;
            }
            *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + (float)puStack_30;
            core_charactr_cpp_FUN_00429d60(this_ptr);
          }
          iStack_44 = *(int *)&this_ptr->field_0x276c;
          pfStack_1c = *(float **)(iStack_44 + 0x2b0);
          pCStack_54 = (CMotionController *)&this_ptr->field_0x2b4;
          core_skeleton_cpp_FUN_00546a90(pCStack_54);
          pfVar9 = pfStack_1c;
          iVar7 = iStack_44;
          uVar14 = CONCAT44(afStack_2bc + 0x29,this_ptr);
          afStack_218[0] = (float)uStack_35c;
          afStack_2bc[(uint)bVar13 * -2 + 0x2a] = afStack_3a0[(uint)bVar13 * -2 + 0x12];
          afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b] =
               afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
          iVar7 = (*(code *)pfVar9[0x46])(iVar7,uVar14);
          if (iVar7 == 0) {
            *(uint *)&this_ptr->field_0x276c = 0;
          }
          else if (*(int *)&this_ptr->field_0x276c != 0) {
            fVar2 = *(float *)&this_ptr->field_0x25740 + delta_time;
            *(float *)&this_ptr->field_0x25740 = fVar2;
            if ((_DAT_005fc1fc <= fVar2) && (*(int *)&this_ptr->field_0x2770 != 1)) {
              pfStack_1c = (float *)core_motion_cpp_FUN_005038a0(pCStack_54);
              puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(pCStack_54);
              if ((float)puStack_18 + (float)pfStack_1c <= 0.0) {
                (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0xf8))();
              }
              else if (*(int *)&this_ptr->field_0x10a74 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_54,0x23,1);
                *(uint *)&this_ptr->field_0x10a74 = 0;
              }
            }
            goto switchD_00564c2e_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar10 + 0x2b0) + 0xa0))(iVar10);
        if ((iStack_424 == 0) || (this_ptr != pCStack_420)) {
          core_hero_cpp_FUN_004cfad0((CHero *)this_ptr);
        }
        else {
          puVar8 = (uint *)(*(int *)&pCStack_420->field_0x25618 + 0x34 + (uint)bVar13 * -8);
          pfStack_2d8 = *(float **)(*(int *)&pCStack_420->field_0x25618 + 0x30);
          apuStack_2d4[(uint)bVar13 * -2] = (uint *)*puVar8;
          apuStack_2d4[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
               (uint *)puVar8[(uint)bVar13 * -2 + 1];
          fStack_4c = *(float *)&pCStack_420->field_0x10a90 * _DAT_005eb605 * (float)_DAT_005eb615 *
                      delta_time;
          if (fStack_4c < fStack_410) {
            fStack_4c = fStack_410;
          }
          if (fStack_414 < fStack_4c) {
            fStack_4c = fStack_414;
          }
          apuStack_2d4[0] = (uint *)core_actor_cpp_FUN_0040d0c0();
          fStack_48 = *(float *)&this_ptr->field_0x10a94 * _DAT_005eb605 * (float)_DAT_005eb615 *
                      delta_time;
          if (fStack_48 < fStack_408) {
            fStack_48 = fStack_408;
          }
          if (fStack_40c < fStack_48) {
            fStack_48 = fStack_40c;
          }
          puStack_18 = apuStack_2d4[0];
          pfStack_2d8 = (float *)core_actor_cpp_FUN_0040d0c0();
          pfStack_1c = pfStack_2d8;
          iVar7 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x25618 + 0x2b0) + 0xa8))
                            (*(int *)&this_ptr->field_0x25618,&pfStack_2d8);
          if (iVar7 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,0,1);
            core_hero_cpp_FUN_004cfad0((CHero *)this_ptr);
          }
          else {
            puVar8 = (uint *)core_actor_cpp_FUN_0040d0c0();
            if ((float)_DAT_005eb5dd <= (float)puVar8) {
              if ((double)(float)puVar8 <= _DAT_005eb5e5) {
                iVar7 = 0;
              }
              else {
                iVar7 = 4;
              }
            }
            else {
              iVar7 = 5;
            }
            puStack_18 = puVar8;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,iVar7,1);
            pfVar9 = (float *)((int)this_ptr + (uint)bVar13 * -8 + 0x34);
            uStack_140 = *(uint *)&this_ptr->field_0x30;
            afStack_208[(uint)bVar13 * -2 + 0x33] = *pfVar9;
            afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x34] =
                 pfVar9[(uint)bVar13 * -2 + 1];
            fStack_13c = (float)puVar8 * *(float *)&this_ptr->field_0x256b0 + fStack_13c;
            core_charactr_cpp_FUN_00429d60(this_ptr);
            fStack_b4 = fStack_41c + (float)_DAT_005eb61d;
            uStack_bc = 0;
            uStack_b8 = 0;
            pfStack_1c = (float *)fStack_b4;
            core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25618);
            fStack_338 = fStack_380;
            afStack_334[(uint)bVar13 * -2] = afStack_3a0[(uint)bVar13 * -2 + 9];
            afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
                 afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
            pfStack_1c = (float *)&this_ptr->field_0x256b0;
            fStack_b0 = fStack_338 - *(float *)&this_ptr->field_0x20;
            afStack_ac[0] = afStack_334[0] - *(float *)&this_ptr->field_0x24;
            afStack_ac[1] = afStack_334[1] - *(float *)&this_ptr->field_0x28;
            afStack_2bc[2] = fStack_b0;
            afStack_2bc[(uint)bVar13 * -2 + 3] = afStack_ac[(uint)bVar13 * -2];
            afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
                 afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
            core_actor_cpp_FUN_00408d30(this_ptr);
            fStack_1dc = afStack_208[2];
            afStack_208[(uint)bVar13 * -2 + 0xc] = afStack_208[(uint)bVar13 * -2 + 3];
            afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
                 afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
            fStack_170 = fStack_1dc * *pfStack_1c;
            fStack_16c = fStack_1d8 * *pfStack_1c;
            fStack_168 = fStack_1d4 * *pfStack_1c;
            fStack_284 = fStack_1dc * *pfStack_1c;
            afStack_2bc[(uint)bVar13 * -2 + 0xf] = afStack_208[(uint)bVar13 * -2 + 0x27];
            afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
                 afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28];
            if ((float *)&this_ptr->field_0x2508 != afStack_2bc + 0xe) {
              *(float *)&this_ptr->field_0x2508 = fStack_284;
              *(uint *)&this_ptr->field_0x250c = uStack_280;
              *(uint *)&this_ptr->field_0x2510 = uStack_27c;
            }
            *(uint *)&this_ptr->field_0x250c = 0;
          }
        }
      }
    }
    else {
      puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
      if (0.0 < (float)puStack_18) {
        if (*(float *)&this_ptr->field_0x24 <
            *(float *)(*(int *)&this_ptr->field_0x25694 + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0,1);
        }
      }
      else {
        *(uint *)&this_ptr->field_0x25694 = 0;
      }
      if (0.0 < *(float *)&this_ptr->field_0x258d0) {
        if (*(float *)&this_ptr->field_0x258d0 <= delta_time) {
          *(uint *)&this_ptr->field_0x258d0 = 0;
          fStack_46c = 1.0;
        }
        else {
          fStack_46c = delta_time / *(float *)&this_ptr->field_0x258d0;
          *(float *)&this_ptr->field_0x258d0 = *(float *)&this_ptr->field_0x258d0 - delta_time;
        }
        puVar1 = &this_ptr->field_0x258c0;
        fVar2 = 1.0 - fStack_46c;
        fStack_248 = *(float *)puVar1 * fStack_46c;
        fStack_244 = *(float *)&this_ptr->field_0x258c4 * fStack_46c;
        fStack_240 = *(float *)&this_ptr->field_0x258c8 * fStack_46c;
        fStack_2cc = *(float *)puVar1 * fStack_46c;
        afStack_2c8[(uint)bVar13 * -2] = afStack_2bc[(uint)bVar13 * -2 + 0x1e];
        afStack_2c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
        *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_2cc;
        *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + afStack_2c8[0];
        *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + afStack_2c8[1];
        *(float *)puVar1 = *(float *)puVar1 * fVar2;
        *(float *)&this_ptr->field_0x258c4 = *(float *)&this_ptr->field_0x258c4 * fVar2;
        *(float *)&this_ptr->field_0x258c8 = *(float *)&this_ptr->field_0x258c8 * fVar2;
        fStack_58 = fVar2;
        puStack_18 = (uint *)core_actor_cpp_FUN_0040d0c0();
        *(float *)&this_ptr->field_0x2578 = (float)puStack_18 * fStack_46c;
      }
      puStack_18 = (uint *)
                   (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x48))
                             (this_ptr,*(uint *)&this_ptr->field_0x3430);
      *(uint **)&this_ptr->field_0x2574 = puStack_18;
    }
  }
  else {
    puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
    if (0.0 < (float)puStack_18) {
      core_actor_cpp_FUN_00408d70(*(uint *)&this_ptr->field_0x25614);
      uStack_2fc = uStack_1f4;
      afStack_334[(uint)bVar13 * -2 + 0xf] = afStack_208[(uint)bVar13 * -2 + 6];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      if (fStack_2f8 + (float)_DAT_005eb625 < *(float *)&this_ptr->field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&this_ptr->field_0x2b4,0,1);
      }
    }
    else {
      *(uint *)&this_ptr->field_0x25614 = 0;
    }
    if (0.0 < *(float *)&this_ptr->field_0x258d0) {
      if (*(float *)&this_ptr->field_0x258d0 <= delta_time) {
        *(uint *)&this_ptr->field_0x258d0 = 0;
        fStack_470 = 1.0;
      }
      else {
        fStack_470 = delta_time / *(float *)&this_ptr->field_0x258d0;
        *(float *)&this_ptr->field_0x258d0 = *(float *)&this_ptr->field_0x258d0 - delta_time;
      }
      puVar1 = &this_ptr->field_0x258c0;
      fVar2 = 1.0 - fStack_470;
      fStack_3a4 = *(float *)puVar1 * fStack_470;
      afStack_3a0[0] = *(float *)&this_ptr->field_0x258c4 * fStack_470;
      afStack_3a0[1] = *(float *)&this_ptr->field_0x258c8 * fStack_470;
      fStack_2f0 = *(float *)puVar1 * fStack_470;
      afStack_334[(uint)bVar13 * -2 + 0x12] = afStack_3a0[(uint)bVar13 * -2];
      afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13] =
           afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_2f0;
      *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_2ec;
      *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_2e8;
      *(float *)puVar1 = *(float *)puVar1 * fVar2;
      *(float *)&this_ptr->field_0x258c4 = *(float *)&this_ptr->field_0x258c4 * fVar2;
      *(float *)&this_ptr->field_0x258c8 = *(float *)&this_ptr->field_0x258c8 * fVar2;
      fStack_5c = fVar2;
      puStack_18 = (uint *)core_actor_cpp_FUN_0040d0c0();
      *(float *)&this_ptr->field_0x2578 = (float)puStack_18 * fStack_470;
    }
  }
switchD_00564c2e_caseD_6:
  iVar7 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar7 + 0x24) == 0x1b) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)&this_ptr->field_0x25608),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    puStack_18 = (uint *)
                 core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
    core_ammobox_cpp_FUN_0040e600(this_ptr_00,(float)puStack_18);
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)this_ptr);
  core_stranger_cpp_FUN_00567530(this_ptr,delta_time);
  if (iStack_70 != 0) {
    *(uint *)&this_ptr->field_0x256ec = 0;
    *(uint *)&this_ptr->field_0x256e8 = *(uint *)&this_ptr->field_0x256ec;
    *(uint *)&this_ptr->field_0x256e4 = *(uint *)&this_ptr->field_0x256e8;
  }
  if ((*(int *)&this_ptr->field_0x25614 == 0) && (*(int *)&this_ptr->field_0x25694 == 0)) {
    if (iStack_40 == 0) goto LAB_005639ef;
    pCStack_60 = (CMotionController *)&this_ptr->field_0x2b4;
    iVar7 = core_motion_cpp_FUN_005035c0();
    fVar2 = 0x41900000 * delta_time;
    iVar7 = *(int *)(iVar7 + 0x24);
    afStack_3a0[2] = *(float *)&this_ptr->field_0x2508 + *(float *)&this_ptr->field_0x257c;
    afStack_3a0[3] = *(float *)&this_ptr->field_0x250c + *(float *)&this_ptr->field_0x2580;
    fStack_390 = *(float *)&this_ptr->field_0x2510 + *(float *)&this_ptr->field_0x2584;
    auStack_2c0 = (byte  [4])afStack_3a0[2];
    afStack_2bc[(uint)bVar13 * -2] = afStack_3a0[(uint)bVar13 * -2 + 3];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    *(uint *)&this_ptr->field_0x2510 = 0;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x2508 = *(uint *)&this_ptr->field_0x250c;
    *(uint *)&this_ptr->field_0x2584 = 0;
    *(uint *)&this_ptr->field_0x2580 = *(uint *)&this_ptr->field_0x2584;
    *(uint *)&this_ptr->field_0x257c = *(uint *)&this_ptr->field_0x2580;
    fStack_68 = fVar2;
    iStack_38 = iVar7;
    if (iVar7 == 7) {
      auStack_2c0 = (byte  [4])0x0;
      afStack_2bc[0] = 0.0;
      *(float *)&this_ptr->field_0x25700 = 0x41900000;
      *(uint *)&this_ptr->field_0x256fc = 0;
      afStack_2bc[1] = fVar2;
    }
    else {
      if (iVar7 == 8) {
        fVar3 = (float)_DAT_005eb62d;
        *(float *)&this_ptr->field_0x25700 = 0x41900000;
        fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * fVar3;
        *(uint *)&this_ptr->field_0x256fc = 0;
        afStack_2bc[1] = fVar2;
        goto LAB_00564f88;
      }
      if (iVar7 == 9) {
        fVar3 = (float)_DAT_005eb62d;
        auStack_2c0 = (byte  [4])0x0;
        afStack_2bc[0] = 0.0;
        fVar2 = 0x3F000000 * 0x41900000;
        afStack_2bc[1] = *(float *)&this_ptr->field_0x25700 * delta_time;
        *(uint *)&this_ptr->field_0x256fc = 0;
        *(float *)&this_ptr->field_0x25700 = *(float *)&this_ptr->field_0x25700 - fVar2 * delta_time
        ;
        *(float *)&this_ptr->field_0x258c = *(float *)&this_ptr->field_0x258c - delta_time * fVar3;
        if (*(float *)&this_ptr->field_0x25700 < 0.0) {
          *(uint *)&this_ptr->field_0x25700 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_60,0xf,1);
        }
      }
      else if (iVar7 == 10) {
        afStack_2bc[0] = 0.0;
        auStack_2c0 = (byte  [4])0x0;
        afStack_2bc[1] = fVar2;
      }
      else if (iVar7 == 0xb) {
        *(uint *)&this_ptr->field_0x256fc = 0;
        *(float *)&this_ptr->field_0x25700 = 0x41200000;
      }
      else if (iVar7 == 0xc) {
        afStack_2bc[1] = 0x41200000 * delta_time;
        fVar2 = (float)_DAT_005eb62d;
        *(float *)&this_ptr->field_0x25700 = 0x41200000;
        fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * fVar2;
        *(uint *)&this_ptr->field_0x256fc = 0;
LAB_00564f88:
        afStack_2bc[0] = 0.0;
        auStack_2c0 = (byte  [4])0x0;
LAB_00564f8a:
        *(float *)&this_ptr->field_0x258c = fVar3;
      }
      else if (iVar7 == 0xd) {
        fVar3 = (float)_DAT_005eb62d;
        auStack_2c0 = (byte  [4])0x0;
        afStack_2bc[0] = 0.0;
        fVar2 = 0x3F000000 * 0x41200000;
        afStack_2bc[1] = *(float *)&this_ptr->field_0x25700 * delta_time;
        *(uint *)&this_ptr->field_0x256fc = 0;
        *(float *)&this_ptr->field_0x25700 = *(float *)&this_ptr->field_0x25700 - fVar2 * delta_time
        ;
        *(float *)&this_ptr->field_0x258c = *(float *)&this_ptr->field_0x258c - delta_time * fVar3;
        if (*(float *)&this_ptr->field_0x25700 < 0.0) {
          *(uint *)&this_ptr->field_0x25700 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCStack_60,0xf,1);
        }
      }
      else {
        if (iVar7 != 0xe) {
          if (iVar7 == 0xf) {
            afStack_2bc[1] = 0.0;
            fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * (float)_DAT_005eb62d;
            *(uint *)&this_ptr->field_0x256fc = 0x461c3f9a;
            goto LAB_00564f88;
          }
          if (iVar7 == 0x10) {
            afStack_2bc[1] = 0.0;
            afStack_2bc[0] = 0.0;
            auStack_2c0 = (byte  [4])0x0;
            fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * (float)_DAT_005eb62d;
          }
          else {
            fVar3 = *(float *)&this_ptr->field_0x258c - delta_time * (float)_DAT_005eb62d;
          }
          goto LAB_00564f8a;
        }
        afStack_2bc[0] = 0.0;
      }
    }
    core_actor_cpp_FUN_00408d30(this_ptr);
    fStack_2a8 = fStack_14c;
    afStack_2bc[(uint)bVar13 * -2 + 6] = afStack_208[(uint)bVar13 * -2 + 0x30];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
         afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31];
    fStack_314 = *(float *)&this_ptr->field_0x2588 * delta_time;
    velocity = (CVector3f *)auStack_2c0;
    fStack_310 = *(float *)&this_ptr->field_0x258c * delta_time;
    fStack_30c = *(float *)&this_ptr->field_0x2590 * delta_time;
    fStack_374 = fStack_314;
    afStack_3a0[(uint)bVar13 * -2 + 0xc] = afStack_334[(uint)bVar13 * -2 + 9];
    afStack_3a0[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd] =
         afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
    fStack_128 = fStack_374 + fStack_2a8;
    fStack_124 = fStack_370 + fStack_2a4;
    fStack_120 = fStack_36c + fStack_2a0;
    fStack_ec = fStack_374 + fStack_2a8;
    afStack_208[(uint)bVar13 * -2 + 0x48] = afStack_208[(uint)bVar13 * -2 + 0x39];
    afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x49] =
         afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x3a];
    auStack_2c0 = (byte  [4])((float)auStack_2c0 + fStack_ec);
    afStack_2bc[0] = afStack_2bc[0] + fStack_e8;
    afStack_2bc[1] = afStack_2bc[1] + fStack_e4;
    *(uint *)&this_ptr->field_0x258d8 = *(uint *)&this_ptr->field_0x258c;
    core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,velocity);
    if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2574 + (float)_DAT_005eb635)
    {
      *(uint *)&this_ptr->field_0x2570 = 1;
    }
    if (((iStack_38 == 0xf) || (iStack_38 == 9)) || (iStack_38 == 0xd)) {
      if (*(int *)&this_ptr->field_0x2570 != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)&this_ptr->field_0x258c);
        fVar2 = *(float *)&this_ptr->field_0x258d8;
        if (-fVar2 < (float)_DAT_005eb63d) {
          if (iStack_38 == 0xd) {
            iVar7 = 0xe;
            goto LAB_0056514e;
          }
          if (iStack_38 == 9) {
            iVar7 = 10;
            goto LAB_0056514e;
          }
          if (iStack_38 == 0xf) {
            iVar7 = 0x10;
            goto LAB_0056514e;
          }
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(aSStack_460);
          fVar2 = (-fVar2 + (float)_DAT_005eb645) * (float)_DAT_005eb64d * (float)_DAT_005eb655;
          fStack_45c = fVar2;
          if (0x42c80000 < (int)fVar2) {
            fStack_45c = 9999.0;
          }
          *(uint *)&this_ptr->field_0x10a60 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x110))(this_ptr);
          if ((*(float *)&this_ptr->field_0x25a8 <= 0.0) || (0x42c80000 < (int)fVar2)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&this_ptr->field_0x2b4,0x12,1);
            (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
            iVar7 = *(int *)&this_ptr->field_0x2570;
            fStack_464 = 0x3F000000;
            goto joined_r0x00565514;
          }
          iVar7 = 0x11;
LAB_0056514e:
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,iVar7,1);
        }
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x2c))(this_ptr,&DAT_0265370c);
      }
      iVar7 = *(int *)&this_ptr->field_0x2570;
      fStack_464 = 0x3F000000;
    }
    else {
      iVar7 = *(int *)&this_ptr->field_0x2570;
      fStack_464 = 0x3F000000;
    }
joined_r0x00565514:
    0x3F000000 = fStack_464;
    if (iVar7 == 0) {
      *(float *)&this_ptr->field_0x256fc = *(float *)&this_ptr->field_0x256fc + delta_time;
      if (iStack_38 == 3) {
        fStack_464 = fStack_464 * (float)_DAT_005eb5d5;
      }
      if ((fStack_464 < *(float *)&this_ptr->field_0x256fc) ||
         (*(float *)&this_ptr->field_0x258d8 < (float)_DAT_005eb645)) {
        if (iStack_38 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&this_ptr->field_0x2b4,0xf,1);
        }
        *(uint *)&this_ptr->field_0x2570 = 0;
      }
      goto LAB_005639ef;
    }
  }
  else {
    puStack_18 = (uint *)&this_ptr->field_0x2508;
    core_actor_cpp_FUN_00408cf0(this_ptr);
    fStack_26c = fStack_2e4;
    afStack_2bc[(uint)bVar13 * -2 + 0x15] = afStack_334[(uint)bVar13 * -2 + 0x15];
    afStack_2bc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_26c;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + fStack_268;
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + fStack_264;
    puStack_18[2] = 0;
    puStack_18[1] = puStack_18[2];
    *puStack_18 = puStack_18[1];
  }
  *(uint *)&this_ptr->field_0x256fc = 0;
LAB_005639ef:
  *(uint *)&this_ptr->field_0x256ec = 0;
  *(uint *)&this_ptr->field_0x256e8 = *(uint *)&this_ptr->field_0x256ec;
  *(uint *)&this_ptr->field_0x256e4 = *(uint *)&this_ptr->field_0x256e8;
  pCVar4 = g_CGamePtr;
  if (iStack_34 != 0) {
    if (*(int *)&this_ptr->field_0x10a80 != 0) {
      if (*(int *)&this_ptr->field_0x25640 == 0) {
        *(uint *)&this_ptr->field_0x25640 = 1;
      }
      else {
        *(uint *)&this_ptr->field_0x25640 = 0;
        if (*(int *)&pCVar4->field_0x264 != 0) {
          *(uint *)&pCVar4->field_0x264 = 0;
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
        }
      }
    }
    if (((*(int *)&this_ptr->field_0x10a7c != 0) &&
        (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) != 0)) &&
       (*(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) + 0x44c)
        != 0)) {
      uVar5 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
      *(uint *)&g_CGamePtr->field_0x264 = uVar5;
      if (uVar5 != 0) {
        *(uint *)&this_ptr->field_0x25640 = 1;
      }
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))(this_ptr);
    }
  }
  if (*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  else if (*(int *)(*(int *)(&this_ptr->field_0x2498c + *(int *)&this_ptr->field_0x247e4 * 4) +
                   0x44c) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  if (iStack_3c != 0) {
    core_stranger_cpp_FUN_0056db50(this_ptr,delta_time);
  }
  if (*(int *)&this_ptr->field_0x25640 == 0) {
    fVar2 = *(float *)&this_ptr->field_0x25644 - delta_time / _DAT_005fc1c0;
    *(float *)&this_ptr->field_0x25644 = fVar2;
    if (fVar2 < 0.0) {
      *(uint *)&this_ptr->field_0x25644 = 0;
    }
  }
  else {
    fVar2 = delta_time / _DAT_005fc1bc + *(float *)&this_ptr->field_0x25644;
    *(float *)&this_ptr->field_0x25644 = fVar2;
    if (1.0 < fVar2) {
      *(uint *)&this_ptr->field_0x25644 = 0x3f800000;
    }
  }
  fVar2 = *(float *)&this_ptr->field_0x25664 - delta_time / _DAT_005fc1c4;
  *(uint *)&this_ptr->field_0x25648 = 0;
  *(float *)&this_ptr->field_0x25664 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&this_ptr->field_0x25664 = 0;
  }
  fVar2 = *(float *)&this_ptr->field_0x25684 - delta_time / _DAT_005fc1c4;
  *(float *)&this_ptr->field_0x25684 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&this_ptr->field_0x25684 = 0;
  }
  if (iStack_28 != 0) {
    core_stranger_cpp_FUN_0056e4d0(this_ptr);
  }
  core_stranger_cpp_FUN_00565ff0(this_ptr);
  if (((*(int *)&this_ptr->field_0x24378 == 2) && (*(int *)&this_ptr->field_0x25698 != 0)) &&
     (*(int *)(*(int *)&this_ptr->field_0x25698 + 0x43c) == 0)) {
    core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
              ((CDeformableModelInstance *)&this_ptr->field_0x2b4);
    core_stranger_cpp_FUN_005683d0(this_ptr,0);
    core_stranger_cpp_CStranger_aimLeftPistol_FUN_0056ca10(this_ptr);
    core_stranger_cpp_FUN_00565ff0(this_ptr);
  }
  core_stranger_cpp_FUN_0056d3d0(this_ptr,delta_time,iStack_24);
  core_stranger_cpp_FUN_0056eb60(this_ptr);
  core_charactr_cpp_FUN_00429e90((CCharacter *)this_ptr,delta_time);
  puStack_18 = (uint *)core_motion_cpp_FUN_005038a0(&this_ptr->field_0x2b4);
  if ((float)puStack_18 <= 0.0) {
    core_hero_cpp_FUN_004cf830((CHero *)this_ptr);
  }
  else {
    puStack_18 = (uint *)
                 core_motion_cpp_FUN_00503e60((CMotionController *)&this_ptr->field_0x2b4);
    if ((1.0 < (float)puStack_18) &&
       (pCStack_6c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c8f0
                               (*(uint *)&this_ptr->field_0x2560c),
       pCStack_6c != (CBoxActor *)0x0)) {
      core_stranger_cpp_FUN_00565f30();
      uStack_1ac = uStack_164;
      afStack_208[(uint)bVar13 * -2 + 0x18] = afStack_208[(uint)bVar13 * -2 + 0x2a];
      afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19] =
           afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b];
      core_actor_cpp_FUN_00408d70(this_ptr);
      afStack_ac[2] = fStack_e0;
      afStack_ac[(uint)bVar13 * -2 + 3] = afStack_208[(uint)bVar13 * -2 + 0x4b];
      afStack_ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x4c];
      fStack_308 = afStack_ac[2] - fStack_20c;
      fStack_304 = afStack_ac[3] - afStack_208[0];
      fStack_300 = fStack_9c - afStack_208[1];
      CStack_344._0_4_ = afStack_ac[2] - fStack_20c;
      *(float *)((int)&CStack_344 + ((uint)bVar13 * -2 + 1) * 4) =
           afStack_334[(uint)bVar13 * -2 + 0xc];
      *(float *)((int)&CStack_344 + ((uint)bVar13 * -2 + (uint)bVar13 * -2 + 2) * 4) =
           afStack_334[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      CStack_344._4_4_ = 0;
      core_actor_cpp_FUN_00408d30(this_ptr);
      uStack_f8 = uStack_158;
      afStack_208[(uint)bVar13 * -2 + 0x45] = afStack_208[(uint)bVar13 * -2 + 0x2d];
      afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x46] =
           afStack_208[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e];
      if (0.0 < fStack_f0) {
        core_boxactor_cpp_FUN_0041cb40(pCStack_6c,(CVector3f *)&fStack_20c,&CStack_344);
      }
    }
  }
  core_stranger_cpp_FUN_005683d0(this_ptr,0);
  core_stranger_cpp_FUN_0056bf00(this_ptr,0);
  core_stranger_cpp_FUN_0056bf00(this_ptr,1);
  core_stranger_cpp_FUN_0056e850(this_ptr,delta_time);
  core_inv_cpp_FUN_004dccd0((CInventory *)&this_ptr->field_0x2437c);
  core_stranger_cpp_FUN_0056eed0(this_ptr,delta_time);
  if ((*(int *)&this_ptr->field_0x25698 != 0) &&
     (*(int *)(*(int *)&this_ptr->field_0x25698 + 0xfc) != 0)) {
    *(uint *)&this_ptr->field_0xfc = 1;
  }
  iVar7 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&this_ptr->field_0x256b4);
  if (iVar7 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x256b8);
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_FUN_005503a0(1);
      uVar6 = sound_sndmain_cpp_FUN_005506b0();
      *(uint *)&this_ptr->field_0x256b8 = uVar6;
      sound_sndmain_cpp_FUN_00550270(0.0);
      uVar6 = sound_sndmain_cpp_FUN_005506b0();
      *(uint *)&this_ptr->field_0x256b4 = uVar6;
      sound_sndmain_cpp_FUN_005504d0();
      sound_sndmain_cpp_FUN_00551080(*(uint *)&this_ptr->field_0x256b4,1.0,1.0,0);
      return;
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x256b8);
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x256b4);
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_FUN_005503a0(1);
    sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_FUN_005504d0();
    return;
  }
  return;
}
