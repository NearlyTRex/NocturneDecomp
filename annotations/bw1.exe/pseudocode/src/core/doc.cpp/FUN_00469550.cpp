// Name: core_doc.cpp_FUN_00469550
// Address: 00469550
// Address Range: [[00469550, 0046bdd0]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00469550(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00469550(CCharacter *param_1,float param_2)

{
  CGame *pCVar1;
  SMotion *pSVar2;
  CAmmoBox *this_ptr;
  float fVar3;
  CDemonActor *specific_weapon;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  float *pfVar7;
  int desired_state_index;
  byte *puVar8;
  uint *puVar9;
  float *pfVar10;
  byte bVar11;
  float afStackY_13b8 [944];
  ulonglong uVar12;
  CVector3f *velocity;
  float fStack_4a8;
  float fStack_4a0;
  float fStack_49c;
  float fStack_494;
  uint *puStack_490;
  SDamageInfo aSStack_48c [4];
  float fStack_488;
  int iStack_450;
  CCharacter *pCStack_44c;
  float fStack_448;
  float fStack_440;
  float fStack_43c;
  float fStack_438;
  float fStack_434;
  float afStack_430 [6];
  float fStack_418;
  float fStack_414;
  float fStack_410;
  float fStack_40c;
  float fStack_408;
  float fStack_404;
  uint local_400;
  uint uStack_3fc;
  uint uStack_3f8;
  uint uStack_3f4;
  uint uStack_3f0;
  uint uStack_3ec;
  uint local_3e8 [6];
  float fStack_3d0;
  float afStack_3cc [5];
  float fStack_3b8;
  float fStack_3ac;
  float afStack_3a8 [5];
  uint uStack_394;
  uint uStack_388;
  float fStack_384;
  float fStack_37c;
  float fStack_378;
  float fStack_374;
  uint uStack_370;
  float fStack_364;
  float fStack_358;
  float fStack_354;
  float fStack_350;
  float fStack_34c;
  uint uStack_340;
  float fStack_33c;
  uint uStack_334;
  float fStack_32c;
  uint uStack_328;
  float fStack_31c;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_2f8;
  uint uStack_2f4;
  uint uStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float afStack_2c4 [4];
  float fStack_2b4;
  float fStack_2b0;
  float fStack_2ac;
  float fStack_2a8;
  uint uStack_2a4;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_25c;
  float fStack_258;
  float fStack_254;
  float fStack_250;
  uint uStack_244;
  uint uStack_238;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  uint uStack_214;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  uint *puStack_1fc;
  float afStack_1f8 [4];
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  uint uStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  uint uStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  CVector3f CStack_1b4;
  float fStack_1a8;
  float afStack_1a4 [4];
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint uStack_178;
  uint uStack_16c;
  uint uStack_160;
  uint uStack_154;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  float fStack_130;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_118;
  float fStack_10c;
  uint uStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  uint uStack_c4;
  float fStack_b8;
  uint uStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  uint *puStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float *pfStack_74;
  int iStack_70;
  int iStack_6c;
  CBoxActor *pCStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  int iStack_58;
  float fStack_54;
  float fStack_50;
  byte *puStack_4c;
  uint *puStack_48;
  int iStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  int local_28;
  uint uStack_24;
  int iStack_20;
  CInventory *pCStack_1c;
  float *pfStack_18;
  
  bVar11 = 0;
  local_28 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                       (0x01C51D80,"?DebugActionPending" + 1);
  if ((*(int *)&param_1->field_0x2628 != 0) && (*(float *)&param_1[2].field_0x7ce4 < _DAT_005d9d70))
  {
    (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x1c))();
    puVar6 = local_3e8;
    puVar9 = &local_400;
    for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar9 = *puVar6;
      puVar6 = puVar6 + (uint)bVar11 * -2 + 1;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
    }
    if ((uint *)&param_1[2].field_0x7cd8 != &local_400) {
      *(uint *)&param_1[2].field_0x7cd8 = local_400;
      *(uint *)&param_1[2].field_0x7cdc = uStack_3fc;
      *(uint *)&param_1[2].field_0x7ce0 = uStack_3f8;
    }
    if ((uint *)&param_1[2].field_0x7ce4 != &uStack_3f4) {
      *(uint *)&param_1[2].field_0x7ce4 = uStack_3f4;
      *(uint *)&param_1[2].field_0x7ce8 = uStack_3f0;
      *(uint *)&param_1[2].field_0x7cec = uStack_3ec;
    }
    fStack_dc = *(float *)&param_1[2].field_0x7cd8 + *(float *)&param_1[2].field_0x7ce4;
    fStack_d8 = *(float *)&param_1[2].field_0x7cdc + *(float *)&param_1[2].field_0x7ce8;
    fStack_d4 = *(float *)&param_1[2].field_0x7ce0 + *(float *)&param_1[2].field_0x7cec;
    fStack_184 = fStack_dc;
    afStack_1a4[(uint)bVar11 * -2 + 9] = afStack_1a4[(uint)bVar11 * -2 + 0x33];
    afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34];
    fStack_124 = fStack_184 * _DAT_005d9d74;
    fStack_120 = fStack_180 * _DAT_005d9d74;
    fStack_11c = fStack_17c * _DAT_005d9d74;
    fStack_31c = fStack_184 * _DAT_005d9d74;
    afStack_3a8[(uint)bVar11 * -2 + 0x24] = afStack_1a4[(uint)bVar11 * -2 + 0x21];
    afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
    core_actor_cpp_FUN_00408b40(*(uint *)&param_1->field_0x2628);
    afStack_3a8[2] = (float)uStack_370;
    afStack_3a8[(uint)bVar11 * -2 + 3] = afStack_3a8[(uint)bVar11 * -2 + 0xf];
    afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
    core_actor_cpp_FUN_00408bb0(param_1);
    fStack_1cc = (float)uStack_328;
    afStack_1f8[(uint)bVar11 * -2 + 0xc] = afStack_3a8[(uint)bVar11 * -2 + 0x21];
    afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
         afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22];
    if ((float *)&param_1[2].field_0x7ccc != afStack_1f8 + 0xb) {
      *(float *)&param_1[2].field_0x7ccc = fStack_1cc;
      *(uint *)&param_1[2].field_0x7cd0 = uStack_1c8;
      *(uint *)&param_1[2].field_0x7cd4 = uStack_1c4;
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004d7f50(g_CGamePtr,param_2);
  core_charactr_cpp_FUN_00434790(param_1);
  fVar3 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar3 - param_2;
  if (fVar3 - param_2 < 0.0) {
    *(uint *)(param_1 + 1) = 0;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  core_doc_cpp_FUN_0046c9e0();
  uStack_244 = uStack_394;
  afStack_2c4[(uint)bVar11 * -2 + 0x21] = afStack_3a8[(uint)bVar11 * -2 + 6];
  afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
       afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
  core_actor_cpp_FUN_00408b40(param_1);
  uVar12 = CONCAT44(param_2,param_1);
  fStack_3ac = fStack_268;
  afStack_3a8[(uint)bVar11 * -2] = afStack_2c4[(uint)bVar11 * -2 + 0x18];
  afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
  core_doc_cpp_FUN_0046bde0(uVar12);
  iStack_30 = 1;
  iStack_38 = 1;
  iStack_34 = 1;
  iStack_20 = 1;
  uStack_24 = 1;
  if (*(int *)&param_1->field_0x26fc != 0) {
    iStack_30 = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_38 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&param_1[2].field_0x7bdc != 0) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&param_1[2].field_0x7be4 != 0) || (*(int *)&param_1[2].field_0x7c60 != 0)) {
    iStack_38 = 0;
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x7bd8 != 0) || (*(int *)&param_1[2].field_0x7bbc == 4)) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  puVar8 = &param_1->field_0x158;
  pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(puVar8);
  if (((((0.0 < (float)pfStack_18) ||
        (pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(puVar8), 0.0 < (float)pfStack_18)) ||
       (pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(puVar8), 0.0 < (float)pfStack_18)) ||
      ((pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(puVar8), 0.0 < (float)pfStack_18 ||
       (pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(puVar8), 0.0 < (float)pfStack_18)))) ||
     (*(float *)&param_1->field_0x2538 <= 0.0)) {
    iStack_34 = 0;
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158);
  if (((0.0 < (float)pfStack_18) || (*(int *)&param_1[2].field_0x7bbc == 5)) ||
     (*(int *)&param_1[2].field_0x7bd4 != 0)) {
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158);
  if (((0.0 < (float)pfStack_18) || (*(int *)&param_1[2].field_0x7bbc == 5)) ||
     (*(int *)&param_1[2].field_0x7bd4 != 0)) {
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158);
  if (0.0 < (float)pfStack_18) {
    iStack_34 = 0;
    iStack_20 = 0;
    iStack_38 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x7bbc == 1) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x7bbc == 2) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x7bbc == 6) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x7bbc == 3) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x7bbc == 7) {
    uStack_24 = 0;
    iStack_20 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x7be0 != 0) ||
     (pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158),
     0.0 < (float)pfStack_18)) {
    iStack_20 = 0;
    uStack_24 = 0;
    iStack_30 = 0;
    iStack_34 = 0;
    if (local_28 != 0) {
      engine_console_cpp_FUN_00445430(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (*(int *)&param_1->field_0x26fc == 0) {
    if (*(int *)&param_1->field_0xdc != 0) {
      iStack_38 = 1;
    }
    if (*(float *)&param_1->field_0x24 != *(float *)&param_1->field_0x2504) {
      iStack_38 = 1;
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00435320(param_1);
  if (*(int *)&param_1[2].field_0x7be8 == 0) {
    fVar3 = *(float *)&param_1[2].field_0x7c74 -
            param_2 * (float)_DAT_005d9d7c * (float)_DAT_005d9d7c;
    *(float *)&param_1[2].field_0x7c74 = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)&param_1[2].field_0x7c74 = 0;
    }
  }
  else {
    fVar3 = param_2 * (float)_DAT_005d9d7c + *(float *)&param_1[2].field_0x7c74;
    *(float *)&param_1[2].field_0x7c74 = fVar3;
    if (1.0 < fVar3) {
      *(uint *)&param_1[2].field_0x7c74 = 0x3f800000;
    }
  }
  iStack_6c = 1;
  if (*(int *)&param_1[2].field_0x7be4 == 0) {
    if (*(int *)&param_1[2].field_0x7c60 == 0) {
      iVar5 = *(int *)&param_1[2].field_0x7be8;
      if (iVar5 == 0) {
        if (*(int *)&param_1->field_0x26fc == 0) {
          if (*(int *)&param_1[2].field_0x7bdc == 0) {
            iVar5 = core_charactr_cpp_FUN_00432240(param_1,param_2);
            if (iVar5 == 0) {
              if (iStack_30 != 0) {
                pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                   ((CMotionController *)&param_1->field_0x158);
                uVar4 = *(uint *)(pSVar2 + 0x24);
                if ((((uVar4 < 9) || (uVar4 < 10)) || (uVar4 < 0xe)) || (uVar4 < 0xf)) {
LAB_0046b39a:
                  if (*(int *)&param_1->field_0x2500 != 0) {
                    desired_state_index = 0;
                    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                       ((CMotionController *)&param_1->field_0x158);
                    iVar5 = *(int *)(pSVar2 + 0x24);
                    if (*(int *)&param_1[1].field_0x8 == 0) {
                      if (*(int *)&param_1[1].field_0xc == 0) {
                        if ((float)_DAT_005d9d84 <= *(float *)&param_1[1].field_0x2c) {
                          if (_DAT_005d9d8c < (double)*(float *)&param_1[1].field_0x2c) {
                            if (*(int *)&param_1[1].field_0x10 == 0) {
                              desired_state_index = 6;
                            }
                            else {
                              desired_state_index = 8;
                            }
                          }
                        }
                        else if (*(int *)&param_1[1].field_0x10 == 0) {
                          desired_state_index = 5;
                        }
                        else {
                          desired_state_index = 7;
                        }
                      }
                      else if (*(int *)&param_1[1].field_0x10 == 0) {
                        if ((float)_DAT_005d9d84 <= *(float *)&param_1[1].field_0x2c) {
                          if ((double)*(float *)&param_1[1].field_0x2c <= _DAT_005d9d8c) {
                            desired_state_index = 2;
                          }
                          else {
                            desired_state_index = 0x10;
                          }
                        }
                        else {
                          desired_state_index = 0xf;
                        }
                      }
                      else if ((float)_DAT_005d9d84 <= *(float *)&param_1[1].field_0x2c) {
                        if ((double)*(float *)&param_1[1].field_0x2c <= _DAT_005d9d8c) {
                          desired_state_index = 3;
                        }
                        else {
                          desired_state_index = 0xe;
                        }
                      }
                      else {
                        desired_state_index = 0xd;
                      }
                    }
                    else if (*(int *)&param_1[1].field_0x10 == 0) {
                      if ((float)_DAT_005d9d84 <= *(float *)&param_1[1].field_0x2c) {
                        if ((double)*(float *)&param_1[1].field_0x2c <= _DAT_005d9d8c) {
                          desired_state_index = 1;
                        }
                        else {
                          desired_state_index = 0xc;
                        }
                      }
                      else {
                        desired_state_index = 0xb;
                      }
                    }
                    else if ((float)_DAT_005d9d84 <= *(float *)&param_1[1].field_0x2c) {
                      if ((double)*(float *)&param_1[1].field_0x2c <= _DAT_005d9d8c) {
                        desired_state_index = 4;
                      }
                      else {
                        desired_state_index = 10;
                      }
                    }
                    else {
                      desired_state_index = 9;
                    }
                    if ((*(int *)&param_1[1].field_0x28 != 0) &&
                       (*(int *)&param_1->field_0x2c98 != 0xe)) {
                      *(uint *)&param_1[2].field_0x7d3c = 0;
                      *(uint *)&param_1[2].field_0x7d38 = 1;
                    }
                    if (*(int *)&param_1[2].field_0x7d38 == 0) {
                      fVar3 = *(float *)&param_1[1].field_0x30 * *(float *)&param_1->field_0x2528;
                      *(float *)&param_1->field_0x2508 = fVar3;
                      *(float *)&param_1[2].field_0x7c84 =
                           *(float *)&param_1[2].field_0x7c84 - fVar3;
                    }
                    if (desired_state_index != iVar5) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                                ((CMotionController *)&param_1->field_0x158,desired_state_index,1);
                    }
                    if (*(int *)&param_1[1].field_0x18 != 0) {
                      core_hero_cpp_FUN_004ec020((CHero *)param_1);
                    }
                  }
                  iStack_6c = 0;
                }
                else if (uVar4 < 0x75) {
                  if ((uVar4 < 0x10) || (uVar4 == 0x10)) goto LAB_0046b39a;
                }
                else if (((0x75 < uVar4) && (0x77 < uVar4)) && ((uVar4 < 0x79 || (uVar4 == 0x79))))
                {
                  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                     ((CMotionController *)&param_1->field_0x158);
                  iVar5 = 0x78;
                  if (*(int *)&param_1[1].field_0x8 != 0) {
                    iVar5 = 0x79;
                  }
                  if (iVar5 != *(int *)(pSVar2 + 0x24)) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                              ((CMotionController *)&param_1->field_0x158,iVar5,1);
                  }
                  if (*(int *)&param_1[2].field_0x7d38 == 0) {
                    fVar3 = *(float *)&param_1[1].field_0x30 * *(float *)&param_1->field_0x2528;
                    *(float *)&param_1->field_0x2508 = fVar3;
                    *(float *)&param_1[2].field_0x7c84 = *(float *)&param_1[2].field_0x7c84 - fVar3;
                  }
                }
              }
            }
            else {
              uVar4 = *(uint *)&param_1->field_0x273c;
              if (uVar4 < 2) {
                if (uVar4 == 1) {
                  iVar5 = 1;
                }
                else {
                  iVar5 = 0;
                }
LAB_0046b2fb:
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,iVar5,1);
              }
              else {
                if (uVar4 < 3) {
                  iVar5 = 4;
                  goto LAB_0046b2fb;
                }
                if (uVar4 != 3) {
                  iVar5 = 0;
                  goto LAB_0046b2fb;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,0,1);
                engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&param_1->field_0x24a4 = 0;
              *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
              *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
            }
          }
          else {
            iStack_58 = *(int *)&param_1[2].field_0x7be4;
            if (*(int *)&param_1[1].field_0x14 != 0) {
              (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7bdc + 0x154) + 0x1c))();
              pfVar7 = afStack_430;
              pfVar10 = &fStack_418;
              for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
                *pfVar10 = *pfVar7;
                pfVar7 = pfVar7 + (uint)bVar11 * -2 + 1;
                pfVar10 = pfVar10 + (uint)bVar11 * -2 + 1;
              }
              fStack_37c = fStack_418 + fStack_40c;
              fStack_378 = fStack_414 + fStack_408;
              fStack_374 = fStack_410 + fStack_404;
              fStack_1e4 = fStack_418 + fStack_40c;
              afStack_1f8[(uint)bVar11 * -2 + 6] = afStack_3a8[(uint)bVar11 * -2 + 0xc];
              afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
                   afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
              fStack_a0 = fStack_1e4 * _DAT_005d9d74;
              fStack_9c = fStack_1e0 * _DAT_005d9d74;
              fStack_98 = fStack_1dc * _DAT_005d9d74;
              fStack_130 = fStack_1e4 * _DAT_005d9d74;
              afStack_1a4[(uint)bVar11 * -2 + 0x1e] = afStack_1a4[(uint)bVar11 * -2 + 0x42];
              afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
                   afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x43];
              core_actor_cpp_FUN_00408b40(*(uint *)&param_1[2].field_0x7bdc);
              uStack_13c = uStack_c4;
              afStack_1a4[(uint)bVar11 * -2 + 0x1b] = afStack_1a4[(uint)bVar11 * -2 + 0x39];
              afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                   afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3a];
              core_actor_cpp_FUN_00408bb0(param_1);
              uStack_100 = uStack_154;
              afStack_1a4[(uint)bVar11 * -2 + 0x2a] = afStack_1a4[(uint)bVar11 * -2 + 0x15];
              afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
                   afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
              core_vecdir_cpp_FUN_005a7520();
              uStack_2a4 = uStack_ac;
              afStack_2c4[(uint)bVar11 * -2 + 9] = afStack_1a4[(uint)bVar11 * -2 + 0x3f];
              afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                   afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x40];
              puStack_490 = (uint *)core_actor_cpp_FUN_0040cd60();
              pfStack_18 = (float *)puStack_490;
              fStack_208 = fStack_40c - fStack_418;
              fStack_204 = fStack_408 - fStack_414;
              fStack_200 = fStack_404 - fStack_410;
              fStack_2e0 = fStack_40c - fStack_418;
              afStack_3a8[(uint)bVar11 * -2 + 0x33] = afStack_2c4[(uint)bVar11 * -2 + 0x30];
              afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x34] =
                   afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31];
              fStack_2b0 = fStack_2e0 * _DAT_005d9d74;
              fStack_2ac = fStack_2dc * _DAT_005d9d74;
              fStack_2a8 = fStack_2d8 * _DAT_005d9d74;
              fStack_1d8 = fStack_2e0 * _DAT_005d9d74;
              afStack_1f8[(uint)bVar11 * -2 + 9] = afStack_2c4[(uint)bVar11 * -2 + 6];
              afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
                   afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
              uStack_1d4 = 0;
              if ((((fStack_f8 - SQRT(fStack_1d0 * fStack_1d0 + fStack_1d8 * fStack_1d8) <
                     (float)_DAT_005d9d94) && (1.0 < (double)fStack_fc)) &&
                  ((double)fStack_fc < _DAT_005d9d9c)) &&
                 (ABS((float)puStack_490) < (float)_DAT_005d9da4)) {
                puStack_48 = (uint *)(param_2 * _DAT_005d9dac);
                if ((float)puStack_490 < -(float)puStack_48) {
                  puStack_490 = (uint *)-(float)puStack_48;
                }
                if ((float)puStack_48 < (float)puStack_490) {
                  puStack_490 = puStack_48;
                }
                *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + (float)puStack_490
                ;
                core_charactr_cpp_FUN_00433d50(param_1);
                goto LAB_00469e25;
              }
            }
            if (iStack_58 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        ((CMotionController *)&param_1->field_0x158,0,1);
              core_hero_cpp_FUN_004ebbe0((CHero *)param_1);
            }
          }
        }
        else {
          if (*(int *)&param_1->field_0x2700 == 0) {
            core_actor_cpp_FUN_00408bb0(param_1);
            afStack_3cc[2] = (float)uStack_e8;
            afStack_3cc[(uint)bVar11 * -2 + 3] = afStack_1a4[(uint)bVar11 * -2 + 0x30];
            afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31];
            core_vecdir_cpp_FUN_005a7520();
            uStack_214 = uStack_16c;
            afStack_2c4[(uint)bVar11 * -2 + 0x2d] = afStack_1a4[(uint)bVar11 * -2 + 0xf];
            afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
                 afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
            pfStack_18 = (float *)core_actor_cpp_FUN_0040cd60();
            fStack_2c = (float)pfStack_18;
            if ((float)pfStack_18 < _DAT_005d9db0) {
              fStack_2c = (float)pfStack_18 + _DAT_005d9dac;
            }
            if (_DAT_005d9db4 < fStack_2c) {
              fStack_2c = fStack_2c + _DAT_005d9db8;
            }
            fStack_54 = param_2 * _DAT_005d9dac;
            fStack_64 = -fStack_54;
            if (fStack_2c < fStack_64) {
              fStack_2c = fStack_64;
            }
            if (fStack_54 < fStack_2c) {
              fStack_2c = fStack_54;
            }
            *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + fStack_2c;
            core_charactr_cpp_FUN_00433d50(param_1);
          }
          iStack_70 = *(int *)&param_1->field_0x26fc;
          pfStack_18 = *(float **)(iStack_70 + 0x154);
          puStack_4c = &param_1->field_0x158;
          core_skeleton_cpp_FUN_00569130(puStack_4c);
          uStack_238 = uStack_1c0;
          afStack_2c4[(uint)bVar11 * -2 + 0x24] = afStack_1f8[(uint)bVar11 * -2 + 0xf];
          afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
               afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
          iVar5 = (*(code *)pfStack_18[0x44])(iStack_70,param_1);
          if (iVar5 == 0) {
            *(uint *)&param_1->field_0x26fc = 0;
          }
          else if (*(int *)&param_1->field_0x26fc != 0) {
            fVar3 = *(float *)&param_1[2].field_0x7d08 + param_2;
            *(float *)&param_1[2].field_0x7d08 = fVar3;
            if ((_DAT_005feccc <= fVar3) && (*(int *)&param_1->field_0x2700 != 1)) {
              pfStack_74 = (float *)core_motion_cpp_FUN_00524a40(puStack_4c);
              pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(puStack_4c);
              if ((float)pfStack_18 + (float)pfStack_74 <= 0.0) {
                (**(code **)(*(int *)&param_1->field_0x154 + 0xf0))();
              }
              else if ((*(int *)&param_1[1].field_0x14 != 0) || (_DAT_01c43544 != 0)) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                          ((CMotionController *)&param_1->field_0x158,0x28,1);
                *(uint *)&param_1[1].field_0x14 = 0;
              }
            }
            goto LAB_00469e25;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar5 + 0x154) + 0x98))(iVar5);
        if ((iStack_450 == 0) || (param_1 != pCStack_44c)) {
          core_hero_cpp_FUN_004ebe80((CHero *)param_1);
        }
        else {
          pfVar7 = (float *)(*(int *)&pCStack_44c[2].field_0x7be8 + 0x34 + (uint)bVar11 * -8);
          puStack_1fc = *(uint **)(*(int *)&pCStack_44c[2].field_0x7be8 + 0x30);
          afStack_1f8[(uint)bVar11 * -2] = *pfVar7;
          afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] = pfVar7[(uint)bVar11 * -2 + 1];
          fStack_3c = *(float *)&pCStack_44c[1].field_0x30 * _DAT_005d9dac * (float)_DAT_005d9dbc *
                      param_2;
          if (fStack_3c < fStack_43c) {
            fStack_3c = fStack_43c;
          }
          if (fStack_440 < fStack_3c) {
            fStack_3c = fStack_440;
          }
          afStack_1f8[0] = (float)core_actor_cpp_FUN_0040cd60();
          fStack_40 = *(float *)&param_1[1].field_0x34 * _DAT_005d9dac * (float)_DAT_005d9dbc *
                      param_2;
          if (fStack_40 < fStack_434) {
            fStack_40 = fStack_434;
          }
          if (fStack_438 < fStack_40) {
            fStack_40 = fStack_438;
          }
          pfStack_18 = (float *)afStack_1f8[0];
          puStack_1fc = (uint *)core_actor_cpp_FUN_0040cd60();
          pfStack_18 = (float *)puStack_1fc;
          iVar5 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x7be8 + 0x154) + 0xa0))
                            (*(int *)&param_1[2].field_0x7be8,&puStack_1fc);
          if (iVar5 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,0,1);
            core_hero_cpp_FUN_004ebe80((CHero *)param_1);
          }
          else {
            fVar3 = (float)core_actor_cpp_FUN_0040cd60();
            if ((float)_DAT_005d9d84 <= fVar3) {
              if ((double)fVar3 <= _DAT_005d9d8c) {
                iVar5 = 0;
              }
              else {
                iVar5 = 5;
              }
            }
            else {
              iVar5 = 6;
            }
            pfStack_18 = (float *)fVar3;
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&param_1->field_0x158,iVar5,1);
            pfVar7 = (float *)((int)param_1 + (uint)bVar11 * -8 + 0x34);
            uStack_340 = *(uint *)&param_1->field_0x30;
            afStack_3a8[(uint)bVar11 * -2 + 0x1b] = *pfVar7;
            afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c] =
                 pfVar7[(uint)bVar11 * -2 + 1];
            fStack_33c = fVar3 * *(float *)&param_1[2].field_0x7c74 + fStack_33c;
            core_charactr_cpp_FUN_00433d50(param_1);
            puStack_8c = (uint *)(fStack_448 + (float)_DAT_005d9dc4);
            uStack_94 = 0;
            uStack_90 = 0;
            pfStack_18 = (float *)puStack_8c;
            core_actor_cpp_FUN_00408b40(*(uint *)&param_1[2].field_0x7be8);
            fStack_88 = fStack_280;
            afStack_84[(uint)bVar11 * -2] = afStack_2c4[(uint)bVar11 * -2 + 0x12];
            afStack_84[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
            pfStack_74 = (float *)&param_1[2].field_0x7c74;
            fStack_310 = fStack_88 - *(float *)&param_1->field_0x20;
            fStack_30c = afStack_84[0] - *(float *)&param_1->field_0x24;
            fStack_308 = afStack_84[1] - *(float *)&param_1->field_0x28;
            fStack_304 = fStack_310;
            afStack_3a8[(uint)bVar11 * -2 + 0x2a] = afStack_3a8[(uint)bVar11 * -2 + 0x27];
            afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b] =
                 afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
            core_actor_cpp_FUN_00408b00(param_1);
            fStack_1a8 = fStack_250;
            afStack_1a4[(uint)bVar11 * -2] = afStack_2c4[(uint)bVar11 * -2 + 0x1e];
            afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
                 afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
            fStack_274 = fStack_1a8 * *pfStack_74;
            fStack_270 = afStack_1a4[0] * *pfStack_74;
            fStack_26c = afStack_1a4[1] * *pfStack_74;
            fStack_2f8 = fStack_1a8 * *pfStack_74;
            afStack_3a8[(uint)bVar11 * -2 + 0x2d] = afStack_2c4[(uint)bVar11 * -2 + 0x15];
            afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
                 afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
            if ((float *)&param_1->field_0x249c != afStack_3a8 + 0x2c) {
              *(float *)&param_1->field_0x249c = fStack_2f8;
              *(uint *)&param_1->field_0x24a0 = uStack_2f4;
              *(uint *)&param_1->field_0x24a4 = uStack_2f0;
            }
            *(uint *)&param_1->field_0x24a0 = 0;
          }
        }
      }
    }
    else {
      pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158);
      if (0.0 < (float)pfStack_18) {
        if (*(float *)&param_1->field_0x24 <
            *(float *)(*(int *)&param_1[2].field_0x7c60 + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else {
        *(uint *)&param_1[2].field_0x7c60 = 0;
      }
      if (0.0 < *(float *)&param_1[2].field_0x7d1c) {
        if (*(float *)&param_1[2].field_0x7d1c <= param_2) {
          *(uint *)&param_1[2].field_0x7d1c = 0;
          fStack_49c = 1.0;
        }
        else {
          fStack_49c = param_2 / *(float *)&param_1[2].field_0x7d1c;
          *(float *)&param_1[2].field_0x7d1c = *(float *)&param_1[2].field_0x7d1c - param_2;
        }
        puVar8 = &param_1[2].field_0x7d0c;
        fVar3 = 1.0 - fStack_49c;
        fStack_25c = *(float *)puVar8 * fStack_49c;
        fStack_258 = *(float *)&param_1[2].field_0x7d10 * fStack_49c;
        fStack_254 = *(float *)&param_1[2].field_0x7d14 * fStack_49c;
        fStack_3d0 = *(float *)puVar8 * fStack_49c;
        afStack_3cc[(uint)bVar11 * -2] = afStack_2c4[(uint)bVar11 * -2 + 0x1b];
        afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
             afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
        *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_3d0;
        *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + afStack_3cc[0];
        *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + afStack_3cc[1];
        *(float *)puVar8 = *(float *)puVar8 * fVar3;
        *(float *)&param_1[2].field_0x7d10 = *(float *)&param_1[2].field_0x7d10 * fVar3;
        *(float *)&param_1[2].field_0x7d14 = *(float *)&param_1[2].field_0x7d14 * fVar3;
        fStack_60 = fVar3;
        pfStack_18 = (float *)core_actor_cpp_FUN_0040cd60();
        *(float *)&param_1->field_0x2508 = (float)pfStack_18 * fStack_49c;
      }
      pfStack_18 = (float *)(**(code **)(*(int *)&param_1->field_0x154 + 0x40))
                                      (param_1,*(uint *)&param_1->field_0x2fec);
      *(float **)&param_1->field_0x2504 = pfStack_18;
    }
  }
  else {
    pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158);
    if (0.0 < (float)pfStack_18) {
      core_actor_cpp_FUN_00408b40(*(uint *)&param_1[2].field_0x7be4);
      uStack_388 = uStack_118;
      afStack_3a8[(uint)bVar11 * -2 + 9] = afStack_1a4[(uint)bVar11 * -2 + 0x24];
      afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
           afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25];
      if (fStack_384 + (float)_DAT_005d9dcc < *(float *)&param_1->field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,0,1);
      }
    }
    else {
      *(uint *)&param_1[2].field_0x7be4 = 0;
    }
    if (0.0 < *(float *)&param_1[2].field_0x7d1c) {
      if (*(float *)&param_1[2].field_0x7d1c <= param_2) {
        *(uint *)&param_1[2].field_0x7d1c = 0;
        fStack_494 = 1.0;
      }
      else {
        fStack_494 = param_2 / *(float *)&param_1[2].field_0x7d1c;
        *(float *)&param_1[2].field_0x7d1c = *(float *)&param_1[2].field_0x7d1c - param_2;
      }
      puVar8 = &param_1[2].field_0x7d0c;
      fVar3 = 1.0 - fStack_494;
      fStack_190 = *(float *)puVar8 * fStack_494;
      fStack_18c = *(float *)&param_1[2].field_0x7d10 * fStack_494;
      fStack_188 = *(float *)&param_1[2].field_0x7d14 * fStack_494;
      fStack_28c = *(float *)puVar8 * fStack_494;
      afStack_2c4[(uint)bVar11 * -2 + 0xf] = afStack_1a4[(uint)bVar11 * -2 + 6];
      afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
           afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
      *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_28c;
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_288;
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_284;
      *(float *)puVar8 = *(float *)puVar8 * fVar3;
      *(float *)&param_1[2].field_0x7d10 = *(float *)&param_1[2].field_0x7d10 * fVar3;
      *(float *)&param_1[2].field_0x7d14 = *(float *)&param_1[2].field_0x7d14 * fVar3;
      fStack_5c = fVar3;
      pfStack_18 = (float *)core_actor_cpp_FUN_0040cd60();
      *(float *)&param_1->field_0x2508 = (float)pfStack_18 * fStack_494;
    }
  }
LAB_00469e25:
  if (0.0 < *(float *)&param_1[2].field_0x7d30) {
    if (*(float *)&param_1[2].field_0x7d30 <= param_2) {
      *(uint *)&param_1[2].field_0x7d30 = 0;
      fStack_4a0 = 1.0;
    }
    else {
      fStack_4a0 = param_2 / *(float *)&param_1[2].field_0x7d30;
      *(float *)&param_1[2].field_0x7d30 = *(float *)&param_1[2].field_0x7d30 - param_2;
    }
    fStack_2ec = *(float *)&param_1[2].field_0x7d20 * fStack_4a0;
    pfStack_18 = (float *)&param_1[2].field_0x7d20;
    fStack_2e8 = *(float *)&param_1[2].field_0x7d24 * fStack_4a0;
    fStack_2e4 = *(float *)&param_1[2].field_0x7d28 * fStack_4a0;
    fStack_10c = fStack_2ec;
    afStack_1a4[(uint)bVar11 * -2 + 0x27] = afStack_3a8[(uint)bVar11 * -2 + 0x30];
    afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
         afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x31];
    core_actor_cpp_FUN_00408b00(param_1);
    afStack_1f8[2] = fStack_3b8;
    afStack_1f8[(uint)bVar11 * -2 + 3] = afStack_3cc[(uint)bVar11 * -2 + 6];
    afStack_1f8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_3cc[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7];
    fStack_50 = 1.0 - fStack_4a0;
    *(float *)&param_1->field_0x249c = *(float *)&param_1->field_0x249c + afStack_1f8[2];
    *(float *)&param_1->field_0x24a0 = *(float *)&param_1->field_0x24a0 + afStack_1f8[3];
    *(float *)&param_1->field_0x24a4 = *(float *)&param_1->field_0x24a4 + fStack_1e8;
    *pfStack_18 = *pfStack_18 * fStack_50;
    pfStack_18[1] = pfStack_18[1] * fStack_50;
    pfStack_18[2] = pfStack_18[2] * fStack_50;
    pfStack_18 = (float *)core_actor_cpp_FUN_0040cd60();
    *(float *)&param_1->field_0x2508 = (float)pfStack_18 * fStack_4a0;
  }
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&param_1->field_0x158);
  if ((*(int *)(pSVar2 + 0x24) == 0x1e) &&
     (this_ptr = (CAmmoBox *)
                 core_actor_cpp_castToClassHash_FUN_0040c600
                           (*(uint *)&param_1[2].field_0x7bd8), this_ptr != (CAmmoBox *)0x0))
  {
    pfStack_18 = (float *)core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
    core_ammobox_cpp_FUN_0040e1a0(this_ptr,(float)pfStack_18);
  }
  core_charactr_cpp_FUN_0042e160(param_1);
  core_doc_cpp_FUN_0046e730(param_1);
  if (iStack_6c != 0) {
    *(uint *)&param_1[2].field_0x7cb4 = 0;
    *(uint *)&param_1[2].field_0x7cb0 = *(uint *)&param_1[2].field_0x7cb4;
    *(uint *)&param_1[2].field_0x7cac = *(uint *)&param_1[2].field_0x7cb0;
  }
  if ((*(int *)&param_1[2].field_0x7be4 == 0) && (*(int *)&param_1[2].field_0x7c60 == 0)) {
    if (iStack_38 == 0) goto LAB_0046a09c;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    iVar5 = *(int *)(pSVar2 + 0x24);
    fStack_148 = *(float *)&param_1->field_0x249c + *(float *)&param_1->field_0x250c;
    fStack_144 = *(float *)&param_1->field_0x24a0 + *(float *)&param_1->field_0x2510;
    fStack_140 = *(float *)&param_1->field_0x24a4 + *(float *)&param_1->field_0x2514;
    fStack_2c8 = fStack_148;
    afStack_2c4[(uint)bVar11 * -2] = afStack_1a4[(uint)bVar11 * -2 + 0x18];
    afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    if (iVar5 == 0x12) {
      afStack_2c4[1] = 0.0;
      afStack_2c4[0] = 0.0;
      fStack_2c8 = 0.0;
      fVar3 = *(float *)&param_1->field_0x251c - param_2 * (float)_DAT_005d9dd4;
      *(uint *)&param_1[2].field_0x7cc4 = 0x461c3f9a;
    }
    else {
      if (iVar5 == 0x13) {
        afStack_2c4[1] = 0.0;
        afStack_2c4[0] = 0.0;
        fStack_2c8 = 0.0;
      }
      fVar3 = *(float *)&param_1->field_0x251c - param_2 * (float)_DAT_005d9dd4;
    }
    *(float *)&param_1->field_0x251c = fVar3;
    iStack_44 = iVar5;
    core_actor_cpp_FUN_00408b00(param_1);
    fStack_f4 = fStack_b8;
    afStack_1a4[(uint)bVar11 * -2 + 0x2d] = afStack_1a4[(uint)bVar11 * -2 + 0x3c];
    afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2e] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x3d];
    fStack_298 = *(float *)&param_1->field_0x2518 * param_2;
    velocity = (CVector3f *)&fStack_2c8;
    fStack_294 = *(float *)&param_1->field_0x251c * param_2;
    fStack_290 = *(float *)&param_1->field_0x2520 * param_2;
    afStack_2c4[2] = fStack_298;
    afStack_2c4[(uint)bVar11 * -2 + 3] = afStack_2c4[(uint)bVar11 * -2 + 0xc];
    afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
         afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
    afStack_1a4[2] = afStack_2c4[2] + fStack_f4;
    afStack_1a4[3] = afStack_2c4[3] + fStack_f0;
    fStack_194 = fStack_2b4 + fStack_ec;
    fStack_2d4 = afStack_2c4[2] + fStack_f4;
    afStack_3a8[(uint)bVar11 * -2 + 0x36] = afStack_1a4[(uint)bVar11 * -2 + 3];
    afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37] =
         afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4];
    fStack_2c8 = fStack_2c8 + fStack_2d4;
    afStack_2c4[0] = afStack_2c4[0] + fStack_2d0;
    afStack_2c4[1] = afStack_2c4[1] + fStack_2cc;
    *(uint *)&param_1[2].field_0x7d40 = *(uint *)&param_1->field_0x251c;
    core_charactr_cpp_FUN_0042d750(param_1,velocity);
    if (*(float *)&param_1->field_0x24 < *(float *)&param_1->field_0x2504 + (float)_DAT_005d9ddc) {
      *(uint *)&param_1->field_0x2500 = 1;
    }
    if ((iStack_44 == 0x12) && (*(int *)&param_1->field_0x2500 != 0)) {
      engine_console_cpp_FUN_00445430
                (g_CConsolePtr,"Splat at %3.2f fps\n",(double)*(float *)&param_1->field_0x251c
                );
      fVar3 = *(float *)&param_1[2].field_0x7d40;
      if (-fVar3 < (float)_DAT_005d9de4) {
        if (iStack_44 == 0x12) {
          iVar5 = 0x13;
          goto LAB_0046b941;
        }
LAB_0046b950:
        (**(code **)(*(int *)&param_1->field_0x154 + 0x24))(param_1,&DAT_02c8af28);
        goto LAB_0046b976;
      }
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_48c);
      fVar3 = (-fVar3 + (float)_DAT_005d9dec) * (float)_DAT_005d9df4 * (float)_DAT_005d9dfc;
      fStack_488 = fVar3;
      if (0x42c80000 < (int)fVar3) {
        fStack_488 = 9999.0;
      }
      *(uint *)(param_1 + 1) = 0;
      (**(code **)(*(int *)&param_1->field_0x154 + 0x108))(param_1);
      if ((0.0 < *(float *)&param_1->field_0x2538) && ((int)fVar3 < 0x42c80001)) {
        iVar5 = 0x14;
LAB_0046b941:
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&param_1->field_0x158,iVar5,1);
        goto LAB_0046b950;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&param_1->field_0x158,0x15,1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
      iVar5 = *(int *)&param_1->field_0x2500;
      fStack_4a8 = 0x3F000000;
    }
    else {
LAB_0046b976:
      iVar5 = *(int *)&param_1->field_0x2500;
      fStack_4a8 = 0x3F000000;
    }
    0x3F000000 = fStack_4a8;
    if (iVar5 == 0) {
      *(float *)&param_1[2].field_0x7cc4 = *(float *)&param_1[2].field_0x7cc4 + param_2;
      if (iStack_44 == 4) {
        fStack_4a8 = fStack_4a8 * (float)_DAT_005d9d7c;
      }
      if ((fStack_4a8 < *(float *)&param_1[2].field_0x7cc4) ||
         (*(float *)&param_1[2].field_0x7d40 < (float)_DAT_005d9dec)) {
        if (iStack_44 != 0x12) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&param_1->field_0x158,0x12,1);
        }
        *(uint *)&param_1->field_0x2500 = 0;
      }
      goto LAB_0046a09c;
    }
  }
  else {
    pfStack_18 = (float *)&param_1->field_0x249c;
    core_actor_cpp_FUN_00408ac0(param_1);
    fStack_22c = fStack_34c;
    afStack_2c4[(uint)bVar11 * -2 + 0x27] = afStack_3a8[(uint)bVar11 * -2 + 0x18];
    afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28] =
         afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + fStack_22c;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + fStack_228;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + fStack_224;
    pfStack_18[2] = 0.0;
    pfStack_18[1] = pfStack_18[2];
    *pfStack_18 = pfStack_18[1];
  }
  *(uint *)&param_1[2].field_0x7cc4 = 0;
LAB_0046a09c:
  *(uint *)&param_1[2].field_0x7cb4 = 0;
  *(uint *)&param_1[2].field_0x7cb0 = *(uint *)&param_1[2].field_0x7cb4;
  *(uint *)&param_1[2].field_0x7cac = *(uint *)&param_1[2].field_0x7cb0;
  pCVar1 = g_CGamePtr;
  if (iStack_30 != 0) {
    if (*(int *)&param_1[1].field_0x20 != 0) {
      if (*(int *)&param_1[2].field_0x7c0c == 0) {
        *(uint *)&param_1[2].field_0x7c0c = 1;
      }
      else {
        *(uint *)&param_1[2].field_0x7c0c = 0;
        if (*(int *)&pCVar1->field_0x264 != 0) {
          *(uint *)&pCVar1->field_0x264 = 0;
          (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        }
      }
    }
    if ((*(int *)&param_1[1].field_0x1c != 0) &&
       (puVar8 = &param_1[2].field_0x7748, *(int *)&param_1[2].field_0x7a80 != 0)) {
      if (*(int *)&param_1[2].field_0x7c0c == 1) {
        iVar5 = core_actor_cpp_FUN_0040c550
                          (*(CDemonActor **)&param_1[2].field_0x7c64,"CFlashlight");
        if ((iVar5 == 0) || (*(int *)&g_CGamePtr->field_0x264 != 1)) {
          if (*(int *)(*(int *)&param_1[2].field_0x7a80 + 0x2f0) != 0) {
            uVar4 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
            *(uint *)&g_CGamePtr->field_0x264 = uVar4;
            if (uVar4 != 0) {
              *(uint *)&param_1[2].field_0x7c0c = 1;
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
          }
        }
        else {
          *(uint *)&g_CGamePtr->field_0x264 = 0;
          *(uint *)&param_1[2].field_0x7c0c = 0;
        }
      }
      else {
        iVar5 = core_inv_cpp_FUN_004f8ce0(puVar8);
        if (iVar5 == 0) {
          if (*(int *)(*(int *)&param_1[2].field_0x7a80 + 0x2f0) != 0) {
            uVar4 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
            *(uint *)&g_CGamePtr->field_0x264 = uVar4;
            if (uVar4 != 0) {
              *(uint *)&param_1[2].field_0x7c0c = 1;
            }
            (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
          }
        }
        else {
          pCStack_1c = (CInventory *)puVar8;
          for (iVar5 = 0; iVar5 < *(int *)(pCStack_1c + 0x10); iVar5 = iVar5 + 1) {
            specific_weapon =
                 (CDemonActor *)
                 core_actor_cpp_castToClassHash_FUN_0040c600(*(uint *)(puVar8 + 0x14));
            if (specific_weapon != (CDemonActor *)0x0) {
              core_inv_cpp_FUN_004f8dc0(pCStack_1c,specific_weapon,5,1);
              break;
            }
            puVar8 = puVar8 + 4;
          }
          uVar4 = (uint)(*(int *)&g_CGamePtr->field_0x264 == 0);
          *(uint *)&g_CGamePtr->field_0x264 = uVar4;
          if (uVar4 != 0) {
            *(uint *)&param_1[2].field_0x7c0c = 1;
          }
          (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1);
        }
      }
    }
  }
  if (*(int *)&param_1[2].field_0x7a80 == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  else if (*(int *)(*(int *)&param_1[2].field_0x7a80 + 0x2f0) == 0) {
    *(uint *)&g_CGamePtr->field_0x264 = 0;
  }
  if ((*(int *)&g_CGamePtr->field_0x244 != 0) &&
     ((*(int *)&param_1[2].field_0x7bb8 != 0 || (*(int *)&g_CGamePtr->field_0x25c != 0)))) {
    (**(code **)(*(int *)&param_1->field_0x154 + 0x150))();
  }
  if (iStack_34 != 0) {
    core_doc_cpp_FUN_00474400(param_1);
  }
  if (*(int *)&param_1[2].field_0x7c0c == 0) {
    fVar3 = *(float *)&param_1[2].field_0x7c10 - param_2 / _DAT_005feca0;
    *(float *)&param_1[2].field_0x7c10 = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)&param_1[2].field_0x7c10 = 0;
    }
  }
  else {
    fVar3 = param_2 / _DAT_005fec9c + *(float *)&param_1[2].field_0x7c10;
    *(float *)&param_1[2].field_0x7c10 = fVar3;
    if (1.0 < fVar3) {
      *(uint *)&param_1[2].field_0x7c10 = 0x3f800000;
    }
  }
  fVar3 = *(float *)&param_1[2].field_0x7c30 - param_2 / _DAT_005feca4;
  *(float *)&param_1[2].field_0x7c30 = fVar3;
  if (fVar3 <= 0.0) {
    *(uint *)&param_1[2].field_0x7c30 = 0;
  }
  fVar3 = *(float *)&param_1[2].field_0x7c50 - param_2 / _DAT_005feca4;
  *(float *)&param_1[2].field_0x7c50 = fVar3;
  if (fVar3 <= 0.0) {
    *(uint *)&param_1[2].field_0x7c50 = 0;
  }
  if (iStack_20 != 0) {
    core_doc_cpp_FUN_00474ef0();
  }
  core_doc_cpp_FUN_0046caa0();
  if (((*(int *)&param_1[2].field_0x7744 == 2) && (*(int *)&param_1[2].field_0x7c64 != 0)) &&
     (*(int *)(*(int *)&param_1[2].field_0x7c64 + 0x2e0) == 0)) {
    core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)&param_1->field_0x158);
    core_doc_cpp_FUN_0046f610(param_1);
    core_doc_cpp_FUN_00473160();
    core_doc_cpp_FUN_0046caa0();
  }
  core_doc_cpp_FUN_00473c10(param_1,param_2);
  core_doc_cpp_FUN_00476080();
  core_charactr_cpp_FUN_00433e80(param_1,param_2);
  pfStack_18 = (float *)core_motion_cpp_FUN_00524a40(&param_1->field_0x158);
  if ((float)pfStack_18 <= 0.0) {
    core_hero_cpp_FUN_004ebbe0((CHero *)param_1);
  }
  else {
    pfStack_18 = (float *)core_motion_cpp_FUN_00525020((CMotionController *)&param_1->field_0x158);
    if ((1.0 < (float)pfStack_18) &&
       (pCStack_68 = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (*(uint *)&param_1[2].field_0x7bdc),
       pCStack_68 != (CBoxActor *)0x0)) {
      core_doc_cpp_FUN_0046c9e0();
      uStack_d0 = uStack_178;
      afStack_1a4[(uint)bVar11 * -2 + 0x36] = afStack_1a4[(uint)bVar11 * -2 + 0xc];
      afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x37] =
           afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
      core_actor_cpp_FUN_00408b40(param_1);
      fStack_358 = fStack_364;
      afStack_3a8[(uint)bVar11 * -2 + 0x15] = afStack_3a8[(uint)bVar11 * -2 + 0x12];
      afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16] =
           afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
      fStack_220 = fStack_358 - fStack_3ac;
      fStack_21c = fStack_354 - afStack_3a8[0];
      fStack_218 = fStack_350 - afStack_3a8[1];
      CStack_1b4._0_4_ = fStack_358 - fStack_3ac;
      *(float *)((int)&CStack_1b4 + ((uint)bVar11 * -2 + 1) * 4) =
           afStack_2c4[(uint)bVar11 * -2 + 0x2a];
      *(float *)((int)&CStack_1b4 + ((uint)bVar11 * -2 + (uint)bVar11 * -2 + 2) * 4) =
           afStack_2c4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x2b];
      CStack_1b4._4_4_ = 0;
      core_actor_cpp_FUN_00408b00(param_1);
      uStack_334 = uStack_160;
      afStack_3a8[(uint)bVar11 * -2 + 0x1e] = afStack_1a4[(uint)bVar11 * -2 + 0x12];
      afStack_3a8[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
           afStack_1a4[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
      if (0.0 < fStack_32c) {
        core_boxactor_cpp_FUN_00422ab0(pCStack_68,(CVector3f *)&fStack_3ac,&CStack_1b4);
      }
    }
  }
  core_doc_cpp_FUN_0046f610(param_1);
  core_doc_cpp_FUN_004724a0(param_1,0);
  core_doc_cpp_FUN_004724a0(param_1,1);
  core_doc_cpp_FUN_00475920(param_1);
  core_inv_cpp_FUN_004f9f10();
  core_doc_cpp_FUN_00476150(param_1);
  if (iStack_20 == 0) {
    core_hero_cpp_FUN_004eb5b0();
  }
  else {
    param_2 = *(float *)&param_1[2].field_0x7bd0 + param_2;
    *(float *)&param_1[2].field_0x7bd0 = param_2;
    if ((float)_DAT_005d9dbc < param_2) {
      core_hero_cpp_FUN_004eca10(param_1);
    }
  }
  if ((*(int *)&param_1[2].field_0x7c64 != 0) &&
     (*(int *)(*(int *)&param_1[2].field_0x7c64 + 0xfc) != 0)) {
    *(uint *)&param_1->field_0xfc = 1;
  }
  iVar5 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&param_1[2].field_0x7c78);
  if (iVar5 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[2].field_0x7c7c);
      sound_sndmain_cpp_FUN_00572ac0();
      sound_sndmain_cpp_FUN_00572a10(1);
      uVar4 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-on.wav");
      *(uint *)&param_1[2].field_0x7c7c = uVar4;
      sound_sndmain_cpp_FUN_005728e0(0.0);
      uVar4 = sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-loop.wav");
      *(uint *)&param_1[2].field_0x7c78 = uVar4;
      sound_sndmain_cpp_FUN_00572b40();
      sound_sndmain_cpp_FUN_00573ab0(*(uint *)&param_1[2].field_0x7c78,0.333,1.0,0);
      if (*(int *)&g_CGamePtr->field_0x264 != 0) {
        *(uint *)&g_CGamePtr->field_0x264 = 0;
        (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"flashlit.wav");
        return;
      }
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[2].field_0x7c7c);
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&param_1[2].field_0x7c78);
    sound_sndmain_cpp_FUN_00572ac0();
    sound_sndmain_cpp_FUN_00572a10(1);
    sound_sndmain_cpp_startSfx_FUN_00572d20("goggle-off.wav");
    sound_sndmain_cpp_FUN_00572b40();
    return;
  }
  return;
}
