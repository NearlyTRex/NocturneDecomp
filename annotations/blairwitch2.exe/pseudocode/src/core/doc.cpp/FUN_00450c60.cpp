// Name: core_doc.cpp_FUN_00450c60
// Address: 00450c60
// Address Range: [[00450c60, 00453241]]
// Convention: unknown
// Signature: void core_doc_cpp_FUN_00450c60(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_doc_cpp_FUN_00450c60(CCharacter *param_1,float param_2)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  CMotionController *this_ptr;
  CAmmoBox *this_ptr_00;
  float fVar7;
  int iVar8;
  uint *puVar9;
  float *pfVar10;
  int iVar11;
  uint *puVar12;
  float *pfVar13;
  byte bVar14;
  float afStackY_1cdc [1443];
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  CVector3f *velocity;
  SDamageInfo local_61c [4];
  float local_618;
  uint local_5e0 [12];
  uint local_5b0 [12];
  int local_580;
  CCharacter *local_57c;
  float local_578;
  float local_570;
  float local_56c;
  float local_568;
  float local_564;
  float local_560 [6];
  uint local_548;
  uint local_544;
  uint local_540;
  uint local_53c;
  uint local_538;
  uint local_534;
  float local_530;
  float local_52c;
  float local_528;
  float local_524;
  float local_520;
  float local_51c;
  uint local_518 [6];
  uint local_500;
  float afStack_4fc [7];
  float local_4e0 [4];
  float local_4d0 [4];
  uint local_4c0;
  float local_4b0 [4];
  uint local_4a0;
  float local_490 [4];
  uint local_480;
  uint local_470;
  float local_460;
  float local_45c;
  float local_458;
  float local_454;
  float local_450 [5];
  float local_43c;
  uint local_438;
  uint local_434;
  float local_430;
  float local_42c [5];
  float local_418;
  float local_40c;
  float local_408;
  float local_404;
  float local_400;
  float local_3f4;
  float local_3f0 [4];
  float local_3e0;
  float local_3dc;
  float local_3d8;
  float local_3d4;
  uint local_3d0;
  uint local_3c4;
  float local_3b8;
  uint local_3b4;
  float local_3ac;
  float local_3a8;
  float local_3a4;
  float local_3a0 [3];
  uint local_394;
  uint local_388;
  float local_37c;
  uint local_370;
  float local_364;
  float local_358;
  uint local_354;
  uint local_350;
  float local_34c;
  float local_348;
  float local_344;
  float local_340;
  float local_33c;
  float local_338;
  float local_334;
  uint local_328;
  float local_31c;
  float local_318;
  float local_314;
  CVector3f local_310;
  float local_304;
  float local_300 [4];
  float local_2f0;
  uint local_2ec;
  float local_2e0;
  uint local_2d4;
  uint local_2c8;
  uint local_2bc;
  uint local_2b0 [3];
  float local_2a4;
  float local_2a0;
  float local_29c;
  uint local_298;
  float local_28c;
  float local_288;
  float local_284;
  uint local_280;
  float local_274;
  uint local_270;
  float local_26c;
  float local_268;
  uint local_25c;
  float local_250;
  float local_24c;
  float local_248;
  float local_244;
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  float local_230;
  float local_22c;
  float local_228;
  float local_224;
  uint local_220;
  float local_21c;
  float local_214;
  float local_210;
  float local_20c;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  float local_1f8 [4];
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  uint local_1cc;
  uint local_1c0;
  uint local_1bc;
  float local_1b8;
  float local_1b4;
  float afStack_1b0 [5];
  uint local_19c;
  uint local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  uint local_178;
  float local_170;
  float local_16c;
  float local_160;
  float local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  uint local_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  float local_cc;
  double local_c4;
  double local_bc;
  double local_b4;
  uint local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  float local_90;
  byte *local_8c;
  float local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  CMotionController *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  int local_3c;
  uint local_38;
  int local_34;
  byte *local_30;
  int local_2c;
  float *local_28;
  int local_24;
  float local_20;
  CBoxActor *local_1c;
  CMotionController *local_18;
  float local_14;
  
  bVar14 = 0;
  unkafter_special_cpp_FUN_0059e110(&param_1->field_0x3058);
  local_3c = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                       (0x01C38BC0,"?DebugActionPending" + 1);
  if ((*(int *)&param_1->field_0x2698 != 0) && (*(float *)&param_1[2].field_0x4258 < _DAT_005cff6f))
  {
    (**(code **)(*(int *)(*(int *)&param_1->field_0x2698 + 0x2b0) + 0x24))();
    puVar9 = local_518;
    puVar12 = &local_548;
    for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar12 = *puVar9;
      puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
      puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
    }
    if ((uint *)&param_1[2].field_0x424c != &local_548) {
      *(uint *)&param_1[2].field_0x424c = local_548;
      *(uint *)&param_1[2].field_0x4250 = local_544;
      *(uint *)&param_1[2].field_0x4254 = local_540;
    }
    if ((uint *)&param_1[2].field_0x4258 != &local_53c) {
      *(uint *)&param_1[2].field_0x4258 = local_53c;
      *(uint *)&param_1[2].field_0x425c = local_538;
      *(uint *)&param_1[2].field_0x4260 = local_534;
    }
    local_10c = *(float *)&param_1[2].field_0x424c + *(float *)&param_1[2].field_0x4258;
    local_108 = *(float *)&param_1[2].field_0x4250 + *(float *)&param_1[2].field_0x425c;
    local_104 = *(float *)&param_1[2].field_0x4254 + *(float *)&param_1[2].field_0x4260;
    local_1e4 = local_10c;
    local_1f8[(uint)bVar14 * -2 + 6] = afStack_1b0[(uint)bVar14 * -2 + 0x2a];
    local_1f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2b];
    local_31c = local_1e4 * _DAT_005cff73;
    local_318 = local_1e0 * _DAT_005cff73;
    local_314 = local_1dc * _DAT_005cff73;
    local_418 = local_1e4 * _DAT_005cff73;
    local_42c[(uint)bVar14 * -2 + 6] = local_3f0[(uint)bVar14 * -2 + 0x36];
    local_42c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
         local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x37];
    core_actor_cpp_FUN_00408d70(*(uint *)&param_1->field_0x2698);
    local_2c8 = local_e8;
    local_300[(uint)bVar14 * -2 + 0xf] = afStack_1b0[(uint)bVar14 * -2 + 0x33];
    local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
         afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x34];
    core_actor_cpp_FUN_00408de0(param_1);
    local_430 = (float)local_394;
    local_42c[(uint)bVar14 * -2] = local_3f0[(uint)bVar14 * -2 + 0x18];
    local_42c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
    if ((float *)&param_1[2].field_0x4240 != local_450 + 8) {
      *(float *)&param_1[2].field_0x4240 = local_430;
      *(float *)&param_1[2].field_0x4244 = local_42c[0];
      *(float *)&param_1[2].field_0x4248 = local_42c[1];
    }
  }
  core_game_cpp_CGame_slamDT_FUN_004bd460(g_CGamePtr,param_2);
  fVar7 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar7 - param_2;
  if (fVar7 - param_2 < 0.0) {
    *(uint *)(param_1 + 1) = 0;
  }
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  core_doc_cpp_FUN_00453cc0();
  local_3d0 = local_370;
  local_3f0[(uint)bVar14 * -2 + 9] = local_3f0[(uint)bVar14 * -2 + 0x21];
  local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
       local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
  core_actor_cpp_FUN_00408d70(param_1);
  uVar18 = CONCAT44(param_2,param_1);
  local_454 = local_364;
  local_450[(uint)bVar14 * -2] = local_3f0[(uint)bVar14 * -2 + 0x24];
  local_450[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
       local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25];
  core_doc_cpp_FUN_00453250(uVar18);
  local_44 = 1;
  local_58 = 1;
  local_4c = 1;
  local_34 = 1;
  local_38 = 1;
  if (*(int *)&param_1->field_0x276c != 0) {
    local_44 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_58 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"grabbedBy=%s\n");
    }
  }
  if (*(int *)&param_1[2].field_0x414c != 0) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"pushedObject=%s\n");
    }
  }
  if ((*(int *)&param_1[2].field_0x4154 != 0) || (*(int *)&param_1[2].field_0x41d4 != 0)) {
    local_58 = 0;
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x4148 != 0) || (*(int *)&param_1[2].field_0x41e4 == 4)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  puVar1 = &param_1->field_0x2b4;
  local_14 = (float)core_motion_cpp_FUN_005038a0(puVar1);
  if ((((0.0 < local_14) || (local_14 = (float)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < local_14)
       ) || (local_14 = (float)core_motion_cpp_FUN_005038a0(puVar1), 0.0 < local_14)) ||
     (*(float *)&param_1->field_0x25a8 <= 0.0)) {
    local_4c = 0;
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4);
  if (((0.0 < local_14) || (*(int *)&param_1[2].field_0x41e4 == 5)) ||
     (*(int *)&param_1[2].field_0x4144 != 0)) {
    local_38 = 0;
    local_44 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4);
  if (0.0 < local_14) {
    local_4c = 0;
    local_34 = 0;
    local_58 = 0;
    local_38 = 0;
    local_44 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 1) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 2) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 6) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 3) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if (*(int *)&param_1[2].field_0x41e4 == 7) {
    local_38 = 0;
    local_34 = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr);
    }
  }
  if ((*(int *)&param_1[2].field_0x4150 != 0) ||
     (local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4), 0.0 < local_14)) {
    local_34 = 0;
    local_38 = 0;
    local_44 = 0;
    local_4c = 0;
    if (local_3c != 0) {
      engine_console_cpp_FUN_00436710(g_CConsolePtr,"leverToPull=%s\n");
    }
  }
  if (*(int *)&param_1->field_0x276c == 0) {
    if (*(int *)&param_1->field_0xdc != 0) {
      local_58 = 1;
    }
    if (*(float *)&param_1->field_0x24 != *(float *)&param_1->field_0x2574) {
      local_58 = 1;
    }
  }
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1);
  iVar8 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar8 + 0x24) == 4) ||
     (iVar8 = core_motion_cpp_FUN_005035c0(), *(int *)(iVar8 + 0x24) == 5)) {
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x2508;
  }
  if (*(int *)&param_1[2].field_0x4158 == 0) {
    fVar7 = *(float *)&param_1[2].field_0x41ec -
            param_2 * (float)_DAT_005cff77 * (float)_DAT_005cff77;
    *(float *)&param_1[2].field_0x41ec = fVar7;
    if (fVar7 < 0.0) {
      *(uint *)&param_1[2].field_0x41ec = 0;
    }
  }
  else {
    fVar7 = param_2 * (float)_DAT_005cff77 + *(float *)&param_1[2].field_0x41ec;
    *(float *)&param_1[2].field_0x41ec = fVar7;
    if (1.0 < fVar7) {
      *(uint *)&param_1[2].field_0x41ec = 0x3f800000;
    }
  }
  iVar8 = *(int *)&param_1[2].field_0x4154;
  local_94 = 1;
  if (iVar8 == 0) {
    if (*(int *)&param_1[2].field_0x41d4 == 0) {
      iVar11 = *(int *)&param_1[2].field_0x4158;
      if (iVar11 == 0) {
        if (*(int *)&param_1->field_0x276c == 0) {
          if (*(int *)&param_1[2].field_0x414c == 0) {
            iVar8 = core_charactr_cpp_FUN_004287f0(param_1,param_2);
            if (iVar8 == 0) {
              if (local_44 != 0) {
                iVar8 = core_motion_cpp_FUN_005035c0();
                switch(*(uint *)(iVar8 + 0x24)) {
                case 0:
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                  if (*(int *)&param_1->field_0x2570 != 0) {
                    iVar11 = 0;
                    iVar8 = core_motion_cpp_FUN_005035c0();
                    local_98 = *(int *)(iVar8 + 0x24);
                    if (*(int *)&param_1[1].field_0x8 == 0) {
                      if (*(int *)&param_1[1].field_0xc == 0) {
                        local_b4 = (double)*(float *)&param_1[1].field_0x2c;
                        if ((float)_DAT_005cff7f <= *(float *)&param_1[1].field_0x2c) {
                          if (_DAT_005cff87 < local_b4) {
                            iVar11 = 5;
                          }
                        }
                        else {
                          iVar11 = 4;
                        }
                      }
                      else {
                        iVar11 = 2;
                      }
                    }
                    else if (*(int *)&param_1[1].field_0x10 == 0) {
                      iVar11 = 1;
                    }
                    else {
                      iVar11 = 3;
                    }
                    puVar1 = &param_1->field_0x2b4;
                    local_14 = (float)core_motion_cpp_FUN_005038a0(puVar1);
                    local_28 = (float *)(local_14 * _DAT_005f514c);
                    local_14 = (float)core_motion_cpp_FUN_005038a0(puVar1);
                    local_28 = (float *)(local_14 * _DAT_005f5150 + (float)local_28);
                    local_14 = (float)core_motion_cpp_FUN_005038a0(puVar1);
                    fVar6 = local_14 * _DAT_005f5154;
                    fVar7 = *(float *)&param_1[1].field_0x2c;
                    fVar5 = *(float *)&param_1[1].field_0x30 * *(float *)&param_1->field_0x2598;
                    *(float *)&param_1->field_0x2578 = fVar5;
                    fVar3 = *(float *)&param_1->field_0x2578;
                    fVar2 = *(float *)&param_1->field_0x2578;
                    *(float *)&param_1[2].field_0x41f8 = *(float *)&param_1[2].field_0x41f8 - fVar5;
                    *(float *)&param_1[2].field_0x4198 = *(float *)&param_1[2].field_0x4198 - fVar5;
                    *(float *)&param_1[2].field_0x41b8 = *(float *)&param_1[2].field_0x41b8 - fVar3;
                    *(float *)&param_1[2].field_0x41a0 = *(float *)&param_1[2].field_0x41a0 - fVar3;
                    fVar3 = *(float *)&param_1->field_0x257c;
                    *(float *)&param_1[2].field_0x41c0 = *(float *)&param_1[2].field_0x41c0 - fVar2;
                    *(float *)&param_1->field_0x257c =
                         fVar7 * param_2 * (fVar6 + (float)local_28) + fVar3;
                    if (iVar11 != local_98) {
                      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                                ((CMotionController *)puVar1,iVar11,1);
                    }
                    if (*(int *)&param_1[1].field_0x18 != 0) {
                      core_hero_cpp_FUN_004cfc80();
                    }
                    if ((*(int *)&param_1[1].field_0x38 != 0) &&
                       ((*(uint *)&param_1[2].field_0x44f0 & 0x7fffffff) == 0)) {
                      engine_console_cpp_FUN_00436710(g_CConsolePtr);
                      iVar8 = *(int *)&param_1->field_0x2698;
                      *(int *)&param_1[2].field_0x415c = iVar8;
                      if ((iVar8 == 0) &&
                         (((iVar8 = *(int *)(&param_1[2].field_0x34b8 +
                                            *(int *)&param_1[2].field_0x3324 * 4),
                           *(int *)&param_1[2].field_0x415c = iVar8, iVar8 != 0 &&
                           (*(int *)&param_1[2].field_0x41d8 != 0)) &&
                          (*(int *)&param_1[2].field_0x4180 != 0)))) {
                        *(uint *)&param_1[2].field_0x415c = 0;
                        local_94 = 0;
                        break;
                      }
                    }
                  }
                  local_94 = 0;
                  break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                case 0xc:
                case 0xd:
                case 0xe:
                  *(uint *)&param_1->field_0x2570 = 0;
                }
              }
            }
            else {
              uVar4 = *(uint *)&param_1->field_0x27ac;
              if (uVar4 < 2) {
                if (uVar4 == 1) {
                  iVar8 = 1;
                }
                else {
                  iVar8 = 0;
                }
LAB_004526f0:
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,iVar8,1);
              }
              else {
                if (uVar4 < 3) {
                  iVar8 = 3;
                  goto LAB_004526f0;
                }
                if (uVar4 != 3) {
                  iVar8 = 0;
                  goto LAB_004526f0;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                          ((CMotionController *)&param_1->field_0x2b4,0,1);
                engine_console_cpp_FUN_00436710(g_CConsolePtr,"%s confused while walking to scriptDest!\n");
              }
              *(uint *)&param_1->field_0x2510 = 0;
              *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
              *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
            }
          }
          else {
            local_24 = iVar8;
            if (*(int *)&param_1[1].field_0x14 != 0) {
              (**(code **)(*(int *)(*(int *)&param_1[2].field_0x414c + 0x2b0) + 0x24))();
              pfVar10 = local_560;
              pfVar13 = &local_530;
              for (iVar8 = 6; iVar8 != 0; iVar8 = iVar8 + -1) {
                *pfVar13 = *pfVar10;
                pfVar10 = pfVar10 + (uint)bVar14 * -2 + 1;
                pfVar13 = pfVar13 + (uint)bVar14 * -2 + 1;
              }
              local_300[2] = local_530 + local_524;
              local_300[3] = local_52c + local_520;
              local_2f0 = local_528 + local_51c;
              local_1d8 = local_530 + local_524;
              local_1f8[(uint)bVar14 * -2 + 9] = local_300[(uint)bVar14 * -2 + 3];
              local_1f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
                   local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
              local_100 = local_1d8 * _DAT_005cff73;
              local_fc = local_1d4 * _DAT_005cff73;
              local_f8 = local_1d0 * _DAT_005cff73;
              local_1b4 = local_1d8 * _DAT_005cff73;
              afStack_1b0[(uint)bVar14 * -2] = afStack_1b0[(uint)bVar14 * -2 + 0x2d];
              afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                   afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2e];
              core_actor_cpp_FUN_00408d70(*(uint *)&param_1[2].field_0x414c);
              afStack_1b0[2] = (float)local_3c4;
              afStack_1b0[(uint)bVar14 * -2 + 3] = local_3f0[(uint)bVar14 * -2 + 0xc];
              afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4] =
                   local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
              core_actor_cpp_FUN_00408de0(param_1);
              local_190 = local_280;
              afStack_1b0[(uint)bVar14 * -2 + 9] = local_300[(uint)bVar14 * -2 + 0x21];
              afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10] =
                   local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
              core_vecdir_cpp_FUN_005838f0();
              local_2bc = local_1cc;
              local_300[(uint)bVar14 * -2 + 0x12] = local_1f8[(uint)bVar14 * -2 + 0xc];
              local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13] =
                   local_1f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
              fVar7 = (float)core_actor_cpp_FUN_0040d0c0();
              local_184 = local_524 - local_530;
              local_180 = local_520 - local_52c;
              local_17c = local_51c - local_528;
              local_3dc = local_524 - local_530;
              local_3f0[(uint)bVar14 * -2 + 6] = afStack_1b0[(uint)bVar14 * -2 + 0xc];
              local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7] =
                   afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
              local_dc = local_3dc * _DAT_005cff73;
              local_d8 = local_3d8 * _DAT_005cff73;
              local_d4 = local_3d4 * _DAT_005cff73;
              local_274 = local_3dc * _DAT_005cff73;
              local_300[(uint)bVar14 * -2 + 0x24] = afStack_1b0[(uint)bVar14 * -2 + 0x36];
              local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
                   afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x37];
              local_270 = 0;
              local_50 = fVar7;
              local_14 = fVar7;
              if (((local_188 - SQRT(local_26c * local_26c + local_274 * local_274) <
                    (float)_DAT_005cff8f) && (1.0 < local_18c)) &&
                 ((local_18c < (float)_DAT_005cff97 && (ABS(fVar7) < (float)_DAT_005cff9f)))) {
                local_68 = param_2 * _DAT_005cffa7;
                if (fVar7 < -local_68) {
                  local_50 = -local_68;
                }
                if (local_68 < local_50) {
                  local_50 = local_68;
                }
                *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + local_50;
                core_charactr_cpp_FUN_00429d60(param_1);
                goto switchD_0045277b_caseD_6;
              }
            }
            if (local_24 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                        ((CMotionController *)&param_1->field_0x2b4,0,1);
              core_hero_cpp_FUN_004cf830((CHero *)param_1);
            }
          }
        }
        else {
          if (*(int *)&param_1->field_0x2770 == 0) {
            core_actor_cpp_FUN_00408de0(param_1);
            local_298 = local_25c;
            local_300[(uint)bVar14 * -2 + 0x1b] = local_300[(uint)bVar14 * -2 + 0x2a];
            local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c] =
                 local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2b];
            core_vecdir_cpp_FUN_005838f0();
            local_1fc = local_388;
            local_1f8[(uint)bVar14 * -2] = local_3f0[(uint)bVar14 * -2 + 0x1b];
            local_1f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
                 local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c];
            local_14 = (float)core_actor_cpp_FUN_0040d0c0();
            local_40 = local_14;
            if (local_14 < _DAT_005cffab) {
              local_40 = local_14 + _DAT_005cffa7;
            }
            if (_DAT_005cffaf < local_40) {
              local_40 = local_40 + _DAT_005cffb3;
            }
            local_78 = param_2 * _DAT_005cffa7;
            local_88 = -local_78;
            if (local_40 < local_88) {
              local_40 = local_88;
            }
            if (local_78 < local_40) {
              local_40 = local_78;
            }
            *(float *)&param_1->field_0x34 = *(float *)&param_1->field_0x34 + local_40;
            core_charactr_cpp_FUN_00429d60(param_1);
          }
          local_9c = *(int *)&param_1->field_0x276c;
          local_28 = *(float **)(local_9c + 0x2b0);
          local_6c = (CMotionController *)&param_1->field_0x2b4;
          core_skeleton_cpp_FUN_00546a90(local_6c);
          pfVar10 = local_28;
          iVar8 = local_9c;
          uVar18 = CONCAT44(local_2b0,param_1);
          local_2b0[0] = local_450[2];
          local_300[(uint)bVar14 * -2 + 0x15] = local_450[(uint)bVar14 * -2 + 3];
          local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
               local_450[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          iVar8 = (*(code *)pfVar10[0x46])(iVar8,uVar18);
          this_ptr = local_6c;
          if (iVar8 == 0) {
            *(uint *)&param_1->field_0x276c = 0;
          }
          else if (*(int *)&param_1->field_0x276c != 0) {
            fVar7 = *(float *)&param_1[2].field_0x427c + param_2;
            *(float *)&param_1[2].field_0x427c = fVar7;
            if ((_DAT_005f5158 <= fVar7) && (*(int *)&param_1->field_0x2770 != 1)) {
              local_28 = (float *)core_motion_cpp_FUN_005038a0(local_6c);
              local_14 = (float)core_motion_cpp_FUN_005038a0(this_ptr);
              if (local_14 + (float)local_28 <= 0.0) {
                (**(code **)(*(int *)&param_1->field_0x2b0 + 0xf8))();
              }
              else if (*(int *)&param_1[1].field_0x14 != 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,0x25,1);
                *(uint *)&param_1[1].field_0x14 = 0;
              }
            }
            goto switchD_0045277b_caseD_6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
      }
      else {
        (**(code **)(*(int *)(iVar11 + 0x2b0) + 0xa0))(iVar11);
        if ((local_580 == 0) || (param_1 != local_57c)) {
          core_hero_cpp_FUN_004cfad0((CHero *)param_1);
        }
        else {
          pfVar10 = (float *)(*(int *)&local_57c[2].field_0x4158 + 0x34 + (uint)bVar14 * -8);
          local_3b8 = *(float *)(*(int *)&local_57c[2].field_0x4158 + 0x30);
          local_3f0[(uint)bVar14 * -2 + 0xf] = *pfVar10;
          local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] = pfVar10[(uint)bVar14 * -2 + 1];
          local_60 = *(float *)&param_1[1].field_0x30 * _DAT_005cffa7 * (float)_DAT_005cffb7 *
                     param_2;
          if (local_60 < local_56c) {
            local_60 = local_56c;
          }
          if (local_570 < local_60) {
            local_60 = local_570;
          }
          local_3b4 = core_actor_cpp_FUN_0040d0c0();
          local_64 = *(float *)&param_1[1].field_0x34 * _DAT_005cffa7 * (float)_DAT_005cffb7 *
                     param_2;
          if (local_64 < local_564) {
            local_64 = local_564;
          }
          if (local_568 < local_64) {
            local_64 = local_568;
          }
          local_14 = (float)local_3b4;
          local_3b8 = (float)core_actor_cpp_FUN_0040d0c0();
          local_14 = local_3b8;
          iVar8 = (**(code **)(*(int *)(*(int *)&param_1[2].field_0x4158 + 0x2b0) + 0xa8))
                            (*(int *)&param_1[2].field_0x4158,local_3f0 + 0xe);
          if (iVar8 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0,1);
            core_hero_cpp_FUN_004cfad0((CHero *)param_1);
          }
          else {
            local_90 = (float)core_actor_cpp_FUN_0040d0c0();
            local_bc = (double)local_90;
            if ((float)_DAT_005cff7f <= local_90) {
              if (local_bc <= _DAT_005cff87) {
                iVar8 = 0;
              }
              else {
                iVar8 = 4;
              }
            }
            else {
              iVar8 = 5;
            }
            local_14 = local_90;
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,iVar8,1);
            fVar7 = local_90;
            pfVar10 = (float *)((int)param_1 + (uint)bVar14 * -8 + 0x34);
            local_d0 = *(uint *)&param_1->field_0x30;
            afStack_1b0[(uint)bVar14 * -2 + 0x39] = *pfVar10;
            afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3a] =
                 pfVar10[(uint)bVar14 * -2 + 1];
            local_cc = fVar7 * *(float *)&param_1[2].field_0x41ec + local_cc;
            core_charactr_cpp_FUN_00429d60(param_1);
            local_1b8 = local_578 + (float)_DAT_005cffbf;
            local_1c0 = 0;
            local_1bc = 0;
            local_28 = (float *)local_1b8;
            core_actor_cpp_FUN_00408d70(*(uint *)&param_1[2].field_0x4158);
            local_124 = local_2e0;
            afStack_1b0[(uint)bVar14 * -2 + 0x24] = local_300[(uint)bVar14 * -2 + 9];
            afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25] =
                 local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
            local_28 = (float *)&param_1[2].field_0x41ec;
            local_154 = local_124 - *(float *)&param_1->field_0x20;
            local_150 = local_120 - *(float *)&param_1->field_0x24;
            local_14c = local_11c - *(float *)&param_1->field_0x28;
            local_f4 = local_154;
            afStack_1b0[(uint)bVar14 * -2 + 0x30] = afStack_1b0[(uint)bVar14 * -2 + 0x18];
            afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x31] =
                 afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
            core_actor_cpp_FUN_00408d30(param_1);
            local_244 = local_400;
            local_300[(uint)bVar14 * -2 + 0x30] = local_42c[(uint)bVar14 * -2 + 0xc];
            local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x31] =
                 local_42c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
            local_3f0[2] = local_244 * *local_28;
            local_3f0[3] = local_240 * *local_28;
            local_3e0 = local_23c * *local_28;
            local_358 = local_244 * *local_28;
            local_3f0[(uint)bVar14 * -2 + 0x27] = local_3f0[(uint)bVar14 * -2 + 3];
            local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28] =
                 local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
            if ((float *)&param_1->field_0x2508 != local_3f0 + 0x26) {
              *(float *)&param_1->field_0x2508 = local_358;
              *(uint *)&param_1->field_0x250c = local_354;
              *(uint *)&param_1->field_0x2510 = local_350;
            }
            *(uint *)&param_1->field_0x250c = 0;
          }
        }
      }
    }
    else {
      local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4);
      if (0.0 < local_14) {
        if (*(float *)&param_1->field_0x24 <
            *(float *)(*(int *)&param_1[2].field_0x41d4 + 0x24) + 1.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0,1);
        }
      }
      else {
        *(uint *)&param_1[2].field_0x41d4 = 0;
      }
      if (0.0 < *(float *)&param_1[2].field_0x4290) {
        if (*(float *)&param_1[2].field_0x4290 <= param_2) {
          *(uint *)&param_1[2].field_0x4290 = 0;
          local_54 = 1.0;
        }
        else {
          local_54 = param_2 / *(float *)&param_1[2].field_0x4290;
          *(float *)&param_1[2].field_0x4290 = *(float *)&param_1[2].field_0x4290 - param_2;
        }
        puVar1 = &param_1[2].field_0x4280;
        fVar7 = 1.0 - local_54;
        local_130 = *(float *)puVar1 * local_54;
        local_12c = *(float *)&param_1[2].field_0x4284 * local_54;
        local_128 = *(float *)&param_1[2].field_0x4288 * local_54;
        local_34c = *(float *)puVar1 * local_54;
        local_3f0[(uint)bVar14 * -2 + 0x2a] = afStack_1b0[(uint)bVar14 * -2 + 0x21];
        local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2b] =
             afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x22];
        *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + local_34c;
        *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + local_348;
        *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + local_344;
        *(float *)puVar1 = *(float *)puVar1 * fVar7;
        *(float *)&param_1[2].field_0x4284 = *(float *)&param_1[2].field_0x4284 * fVar7;
        *(float *)&param_1[2].field_0x4288 = *(float *)&param_1[2].field_0x4288 * fVar7;
        local_20 = fVar7;
        local_14 = (float)core_actor_cpp_FUN_0040d0c0();
        *(float *)&param_1->field_0x2578 = local_14 * local_54;
      }
      local_14 = (float)(**(code **)(*(int *)&param_1->field_0x2b0 + 0x48))
                                  (param_1,*(uint *)&param_1->field_0x3430);
      *(float *)&param_1->field_0x2574 = local_14;
    }
  }
  else {
    local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4);
    if (0.0 < local_14) {
      core_actor_cpp_FUN_00408d70(*(uint *)&param_1[2].field_0x4154);
      local_220 = local_19c;
      local_300[(uint)bVar14 * -2 + 0x39] = afStack_1b0[(uint)bVar14 * -2 + 6];
      local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3a] =
           afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      if (local_21c + (float)_DAT_005cffc7 < *(float *)&param_1->field_0x24) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,0,1);
      }
    }
    else {
      *(uint *)&param_1[2].field_0x4154 = 0;
    }
    if (0.0 < *(float *)&param_1[2].field_0x4290) {
      if (*(float *)&param_1[2].field_0x4290 <= param_2) {
        *(uint *)&param_1[2].field_0x4290 = 0;
        local_5c = 1.0;
      }
      else {
        local_5c = param_2 / *(float *)&param_1[2].field_0x4290;
        *(float *)&param_1[2].field_0x4290 = *(float *)&param_1[2].field_0x4290 - param_2;
      }
      puVar1 = &param_1[2].field_0x4280;
      fVar7 = 1.0 - local_5c;
      local_460 = *(float *)puVar1 * local_5c;
      local_45c = *(float *)&param_1[2].field_0x4284 * local_5c;
      local_458 = *(float *)&param_1[2].field_0x4288 * local_5c;
      local_340 = *(float *)puVar1 * local_5c;
      local_3f0[(uint)bVar14 * -2 + 0x2d] = afStack_4fc[(uint)bVar14 * -2 + 0x28];
      local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2e] =
           afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x29];
      *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + local_340;
      *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + local_33c;
      *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + local_338;
      *(float *)puVar1 = *(float *)puVar1 * fVar7;
      *(float *)&param_1[2].field_0x4284 = *(float *)&param_1[2].field_0x4284 * fVar7;
      *(float *)&param_1[2].field_0x4288 = *(float *)&param_1[2].field_0x4288 * fVar7;
      local_7c = fVar7;
      local_14 = (float)core_actor_cpp_FUN_0040d0c0();
      *(float *)&param_1->field_0x2578 = local_14 * local_5c;
    }
  }
switchD_0045277b_caseD_6:
  iVar8 = core_motion_cpp_FUN_005035c0();
  if ((*(int *)(iVar8 + 0x24) == 0x1b) &&
     (this_ptr_00 = (CAmmoBox *)
                    core_actor_cpp_castToClassHash_FUN_0040c8f0
                              (*(uint *)&param_1[2].field_0x4148),
     this_ptr_00 != (CAmmoBox *)0x0)) {
    local_14 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
    core_ammobox_cpp_FUN_0040e600(this_ptr_00,local_14);
  }
  core_charactr_cpp_FUN_00424470(param_1);
  core_doc_cpp_FUN_00455270(param_1);
  if (local_94 != 0) {
    *(uint *)&param_1[2].field_0x4228 = 0;
    *(uint *)&param_1[2].field_0x4224 = *(uint *)&param_1[2].field_0x4228;
    *(uint *)&param_1[2].field_0x4220 = *(uint *)&param_1[2].field_0x4224;
  }
  if ((*(int *)&param_1[2].field_0x4154 == 0) && (*(int *)&param_1[2].field_0x41d4 == 0)) {
    if (local_58 == 0) goto LAB_004514a7;
    local_18 = (CMotionController *)&param_1->field_0x2b4;
    iVar8 = core_motion_cpp_FUN_005035c0();
    fVar7 = 0x41900000 * param_2;
    iVar8 = *(int *)(iVar8 + 0x24);
    local_3ac = *(float *)&param_1->field_0x2508 + *(float *)&param_1->field_0x257c;
    local_3a8 = *(float *)&param_1->field_0x250c + *(float *)&param_1->field_0x2580;
    local_3a4 = *(float *)&param_1->field_0x2510 + *(float *)&param_1->field_0x2584;
    local_3f4 = local_3ac;
    local_3f0[(uint)bVar14 * -2] = local_3f0[(uint)bVar14 * -2 + 0x12];
    local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
         local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    *(uint *)&param_1->field_0x2584 = 0;
    *(uint *)&param_1->field_0x2580 = *(uint *)&param_1->field_0x2584;
    *(uint *)&param_1->field_0x257c = *(uint *)&param_1->field_0x2580;
    local_74 = fVar7;
    local_48 = iVar8;
    if (iVar8 == 7) {
      local_3f4 = 0.0;
      local_3f0[0] = 0.0;
      *(float *)&param_1[2].field_0x423c = 0x41900000;
      *(uint *)&param_1[2].field_0x4238 = 0;
      local_3f0[1] = fVar7;
    }
    else {
      if (iVar8 == 8) {
        fVar2 = (float)_DAT_005cffcf;
        local_3f0[0] = 0.0;
        fVar3 = *(float *)&param_1->field_0x258c;
        *(float *)&param_1[2].field_0x423c = 0x41900000;
        fVar3 = fVar3 - param_2 * fVar2;
        *(uint *)&param_1[2].field_0x4238 = 0;
        local_3f0[1] = fVar7;
        goto LAB_00452ac9;
      }
      if (iVar8 == 9) {
        fVar2 = (float)_DAT_005cffcf;
        local_3f4 = 0.0;
        local_3f0[0] = 0.0;
        fVar3 = 0x40000000 * 0x41900000;
        local_3f0[1] = *(float *)&param_1[2].field_0x423c * param_2;
        *(uint *)&param_1[2].field_0x4238 = 0;
        fVar7 = *(float *)&param_1->field_0x258c;
        *(float *)&param_1[2].field_0x423c = *(float *)&param_1[2].field_0x423c - fVar3 * param_2;
        fVar3 = *(float *)&param_1[2].field_0x423c;
        *(float *)&param_1->field_0x258c = fVar7 - param_2 * fVar2;
        if (fVar3 < 0.0) {
          *(uint *)&param_1[2].field_0x423c = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else if (iVar8 == 10) {
        local_3f4 = 0.0;
        local_3f0[0] = 0.0;
        local_3f0[1] = fVar7 * (float)_DAT_005cffb7;
      }
      else if (iVar8 == 0xb) {
        *(uint *)&param_1[2].field_0x423c = 0x41200000;
        *(uint *)&param_1[2].field_0x4238 = 0;
      }
      else if (iVar8 == 0xc) {
        local_3f0[1] = param_2 * _DAT_005cffd7;
        fVar7 = (float)_DAT_005cffcf;
        fVar3 = *(float *)&param_1->field_0x258c;
        *(uint *)&param_1[2].field_0x423c = 0x41200000;
        fVar3 = fVar3 - param_2 * fVar7;
        *(uint *)&param_1[2].field_0x4238 = 0;
LAB_00452ac9:
        local_3f4 = 0.0;
LAB_00452acb:
        *(float *)&param_1->field_0x258c = fVar3;
      }
      else if (iVar8 == 0xd) {
        local_3f4 = 0.0;
        local_3f0[0] = 0.0;
        local_3f0[1] = *(float *)&param_1[2].field_0x423c * param_2;
        fVar2 = (float)_DAT_005cffcf;
        fVar7 = *(float *)&param_1->field_0x258c;
        fVar3 = *(float *)&param_1[2].field_0x423c;
        *(uint *)&param_1[2].field_0x4238 = 0;
        *(float *)&param_1->field_0x258c = fVar7 - param_2 * fVar2;
        if (fVar3 < 0.0) {
          *(uint *)&param_1[2].field_0x423c = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_18,0xf,1);
        }
      }
      else {
        if (iVar8 != 0xe) {
          if (iVar8 == 0xf) {
            local_3f0[1] = 0.0;
            local_3f0[0] = 0.0;
            fVar3 = *(float *)&param_1->field_0x258c - param_2 * (float)_DAT_005cffcf;
            *(uint *)&param_1[2].field_0x4238 = 0x461c3f9a;
            goto LAB_00452ac9;
          }
          if (iVar8 == 0x10) {
            local_3f0[1] = 0.0;
            local_3f0[0] = 0.0;
            local_3f4 = 0.0;
            fVar3 = *(float *)&param_1->field_0x258c - param_2 * (float)_DAT_005cffcf;
          }
          else {
            fVar3 = *(float *)&param_1->field_0x258c - param_2 * (float)_DAT_005cffcf;
          }
          goto LAB_00452acb;
        }
        local_3f0[0] = 0.0;
      }
    }
    core_actor_cpp_FUN_00408d30(param_1);
    local_118 = local_268;
    afStack_1b0[(uint)bVar14 * -2 + 0x27] = local_300[(uint)bVar14 * -2 + 0x27];
    afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28] =
         local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x28];
    local_40c = *(float *)&param_1->field_0x2588 * param_2;
    velocity = (CVector3f *)&local_3f4;
    local_408 = *(float *)&param_1->field_0x258c * param_2;
    local_404 = *(float *)&param_1->field_0x2590 * param_2;
    local_238 = local_40c;
    local_300[(uint)bVar14 * -2 + 0x33] = local_42c[(uint)bVar14 * -2 + 9];
    local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x34] =
         local_42c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 10];
    local_13c = local_238 + local_118;
    local_138 = local_234 + local_114;
    local_134 = local_230 + local_110;
    local_148 = local_238 + local_118;
    afStack_1b0[(uint)bVar14 * -2 + 0x1b] = afStack_1b0[(uint)bVar14 * -2 + 0x1e];
    afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1c] =
         afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f];
    local_3f4 = local_3f4 + local_148;
    local_3f0[0] = local_3f0[0] + local_144;
    local_3f0[1] = local_3f0[1] + local_140;
    *(uint *)&param_1[2].field_0x42e8 = *(uint *)&param_1->field_0x258c;
    core_charactr_cpp_FUN_00423a60(param_1,velocity);
    if (*(float *)&param_1->field_0x24 < *(float *)&param_1->field_0x2574 + (float)_DAT_005cffdf) {
      *(uint *)&param_1->field_0x2570 = 1;
    }
    if (((local_48 == 0xf) || (local_48 == 9)) || (local_48 == 0xd)) {
      if (*(int *)&param_1->field_0x2570 != 0) {
        engine_console_cpp_FUN_00436710
                  (g_CConsolePtr,"Splat at %3.2f fps\n",
                   (double)*(float *)&param_1->field_0x258c);
        local_70 = -*(float *)&param_1[2].field_0x42e8;
        local_c4 = (double)local_70;
        if ((float)_DAT_005cffe7 <= local_70) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_61c);
          fVar7 = (float)(((float10)local_c4 + (float10)_DAT_005cffef) * (float10)_DAT_005cfff7 *
                         (float10)_DAT_005cffff);
          local_618 = fVar7;
          if (0x42c80000 < (int)fVar7) {
            local_618 = 9999.0;
          }
          *(uint *)(param_1 + 1) = 0;
          (**(code **)(*(int *)&param_1->field_0x2b0 + 0x110))(param_1);
          if ((*(float *)&param_1->field_0x25a8 <= 0.0) || (0x42c80000 < (int)fVar7)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                      ((CMotionController *)&param_1->field_0x2b4,0x12,1);
            goto LAB_00452c9a;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0x11,1);
        }
        else {
          if (local_48 == 0xd) {
            iVar8 = 0xe;
          }
          else if (local_48 == 9) {
            iVar8 = 10;
          }
          else {
            if (local_48 != 0xf) goto LAB_00452c78;
            iVar8 = 0x10;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,iVar8,1);
        }
LAB_00452c78:
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x2c))(param_1,&DAT_0265370c);
      }
LAB_00452c9a:
      iVar8 = *(int *)&param_1->field_0x2570;
      fVar7 = 0x40000000;
    }
    else {
      iVar8 = *(int *)&param_1->field_0x2570;
      fVar7 = 0x40000000;
    }
    0x40000000 = fVar7;
    if (iVar8 == 0) {
      *(float *)&param_1[2].field_0x4238 = *(float *)&param_1[2].field_0x4238 + param_2;
      local_80 = fVar7;
      if (local_48 == 3) {
        local_80 = fVar7 * (float)_DAT_005cff77;
      }
      if ((local_80 < *(float *)&param_1[2].field_0x4238) ||
         (*(float *)&param_1[2].field_0x42e8 < (float)_DAT_005cffef)) {
        if (local_48 != 0xf) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)&param_1->field_0x2b4,0xf,1);
        }
        *(uint *)&param_1->field_0x2570 = 0;
      }
      goto LAB_004514a7;
    }
  }
  else {
    local_28 = (float *)&param_1->field_0x2508;
    core_actor_cpp_FUN_00408cf0(param_1);
    local_160 = local_42c[2];
    afStack_1b0[(uint)bVar14 * -2 + 0x15] = local_42c[(uint)bVar14 * -2 + 3];
    afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
         local_42c[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
    *(float *)&param_1->field_0x20 = *(float *)&param_1->field_0x20 + local_160;
    *(float *)&param_1->field_0x24 = *(float *)&param_1->field_0x24 + local_15c;
    *(float *)&param_1->field_0x28 = *(float *)&param_1->field_0x28 + local_158;
    local_28[2] = 0.0;
    local_28[1] = local_28[2];
    *local_28 = local_28[1];
  }
  *(uint *)&param_1[2].field_0x4238 = 0;
LAB_004514a7:
  *(uint *)&param_1[2].field_0x4228 = 0;
  *(uint *)&param_1[2].field_0x4224 = *(uint *)&param_1[2].field_0x4228;
  *(uint *)&param_1[2].field_0x4220 = *(uint *)&param_1[2].field_0x4224;
  if (local_44 != 0) {
    if (*(int *)&param_1[1].field_0x20 != 0) {
      if (*(int *)&param_1[2].field_0x4180 == 0) {
        if ((*(int *)&param_1[2].field_0x4298 == 0) ||
           (iVar8 = core_actor_cpp_FUN_0040c840
                              (*(CDemonActor **)
                                (&param_1[2].field_0x34cc + *(int *)&param_1[2].field_0x3324 * 4),
                               &DAT_005cff2d), iVar8 != 0)) {
          *(uint *)&param_1[2].field_0x4180 = 1;
        }
        else {
          *(uint *)&param_1[2].field_0x4180 = 0;
        }
      }
      else {
        *(uint *)&param_1[2].field_0x4180 = 0;
      }
    }
    if ((*(int *)&param_1[1].field_0x1c != 0) &&
       (iVar8 = unkafter_stranger_cpp_FUN_0045df30(), iVar8 == 0)) {
      if (*(int *)&param_1[2].field_0x4298 == 0) {
        *(uint *)&param_1[2].field_0x4298 = 1;
      }
      else {
        *(uint *)&param_1[2].field_0x4298 = 0;
      }
    }
  }
  if (local_4c != 0) {
    unkafter_stranger_cpp_FUN_0045bdc0(param_1);
  }
  if (*(int *)&param_1[2].field_0x4180 == 0) {
    fVar7 = *(float *)&param_1[2].field_0x4184 - param_2 / _DAT_005f5120;
    *(float *)&param_1[2].field_0x4184 = fVar7;
    if (fVar7 < 0.0) {
      *(uint *)&param_1[2].field_0x4184 = 0;
    }
  }
  else {
    fVar7 = param_2 / _DAT_005f511c + *(float *)&param_1[2].field_0x4184;
    *(float *)&param_1[2].field_0x4184 = fVar7;
    if (1.0 < fVar7) {
      *(uint *)&param_1[2].field_0x4184 = 0x3f800000;
    }
  }
  fVar7 = *(float *)&param_1[2].field_0x41a4 - param_2 / _DAT_005f5124;
  *(float *)&param_1[2].field_0x41a4 = fVar7;
  if (fVar7 <= 0.0) {
    *(uint *)&param_1[2].field_0x41a4 = 0;
  }
  fVar7 = *(float *)&param_1[2].field_0x41c4 - param_2 / _DAT_005f5124;
  *(float *)&param_1[2].field_0x41c4 = fVar7;
  if (fVar7 <= 0.0) {
    *(uint *)&param_1[2].field_0x41c4 = 0;
  }
  if (local_34 != 0) {
    unkafter_stranger_cpp_FUN_0045c960();
  }
  core_doc_cpp_FUN_00453d80();
  unkafter_stranger_cpp_FUN_0045b510(param_1,param_2);
  unkafter_stranger_cpp_FUN_0045db40();
  core_charactr_cpp_FUN_00429420(param_1,param_2,0);
  core_charactr_cpp_FUN_00429e90(param_1,param_2);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)&param_1->field_0x2b4);
  fVar7 = *(float *)&param_1->field_0x2a8 - param_2;
  *(float *)&param_1->field_0x2a8 = fVar7;
  if (fVar7 <= 0.0) {
    local_8c = &param_1->field_0x154;
    iVar8 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                      ((CComplexPolygon *)local_8c);
    if (iVar8 != 0) {
      core_xform_cpp_FUN_00591530(&DAT_0265370c);
      puVar1 = local_8c;
      local_214 = local_334;
      local_300[(uint)bVar14 * -2 + 0x3c] = local_3f0[(uint)bVar14 * -2 + 0x30];
      local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x3d] =
           local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x31];
      local_30 = puVar1;
      *(uint *)&param_1->field_0x2a8 = 0x3dcccccd;
      local_2c = 0;
      do {
        iVar8 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar8 != 0) {
          local_a4 = core_actor_cpp_FUN_0040cf60(0);
          local_14 = (float)local_a4;
          local_a0 = core_actor_cpp_FUN_0040cf60(0);
          local_14 = (float)local_a0;
          local_14 = (float)core_actor_cpp_FUN_0040cf60(0);
          core_xform_cpp_quaternionFromAngleZ_FUN_00594020();
          pfVar10 = afStack_4fc + 7;
          local_4e0[0] = (float)local_500;
          afStack_4fc[(uint)bVar14 * -2 + 8] = afStack_4fc[(uint)bVar14 * -2];
          afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 9] =
               afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1];
          (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 9)[(uint)bVar14 * -2 + 1] =
               (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 1)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(local_a0);
          uVar18 = CONCAT44(pfVar10,afStack_4fc + 0x1b);
          local_490[0] = (float)local_480;
          afStack_4fc[(uint)bVar14 * -2 + 0x1c] = afStack_4fc[(uint)bVar14 * -2 + 0x20];
          afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1d] =
               afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x21];
          (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1d)[(uint)bVar14 * -2 + 1] =
               (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x21)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(local_a4,uVar18);
          local_4b0[0] = (float)local_4c0;
          afStack_4fc[(uint)bVar14 * -2 + 0x14] = afStack_4fc[(uint)bVar14 * -2 + 0x10];
          afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x15] =
               afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x11];
          (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x15)[(uint)bVar14 * -2 + 1] =
               (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x11)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_4fc + 0x13);
          local_4d0[0] = (float)local_470;
          afStack_4fc[(uint)bVar14 * -2 + 0xc] = afStack_4fc[(uint)bVar14 * -2 + 0x24];
          afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd] =
               afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25];
          (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd)[(uint)bVar14 * -2 + 1] =
               (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x25)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_4fc + 0xb);
          local_4a0 = afStack_4fc[3];
          afStack_4fc[(uint)bVar14 * -2 + 0x18] = afStack_4fc[(uint)bVar14 * -2 + 4];
          afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19] =
               afStack_4fc[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 5];
          (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19)[(uint)bVar14 * -2 + 1] =
               (afStack_4fc + (uint)bVar14 * -2 + (uint)bVar14 * -2 + 5)[(uint)bVar14 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
          puVar9 = local_5b0;
          puVar12 = local_5e0;
          for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar12 = *puVar9;
            puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
            puVar12 = puVar12 + (uint)bVar14 * -2 + 1;
          }
          local_438 = core_actor_cpp_FUN_0040cf60(0x3f800000,CONCAT44(local_5e0,0x40000000));
          local_43c = 0.0;
          local_434 = 0;
          local_84 = local_438;
          local_14 = (float)local_438;
          core_xform_cpp_FUN_00591530(local_450 + 5);
          local_208 = 0;
          local_204 = 0x40a00000;
          local_200 = 0;
          local_250 = local_37c;
          local_300[(uint)bVar14 * -2 + 0x2d] = local_3f0[(uint)bVar14 * -2 + 0x1e];
          local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x2e] =
               local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f];
          pfVar10 = local_3f0 + 0x14;
          local_1f8[2] = local_250 + local_214;
          local_1f8[3] = local_24c + local_210;
          local_1e8 = local_248 + local_20c;
          local_22c = local_250 + local_214;
          local_300[(uint)bVar14 * -2 + 0x36] = local_1f8[(uint)bVar14 * -2 + 3];
          local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x37] =
               local_1f8[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 4];
          pfVar13 = &local_22c;
          uVar17 = 0;
          uVar16 = 0x3e4ccccd;
          local_2a4 = local_22c - local_214;
          local_2a0 = local_228 - local_210;
          local_29c = local_224 - local_20c;
          uVar15 = 0;
          local_3a0[0] = local_22c - local_214;
          local_3f0[(uint)bVar14 * -2 + 0x15] = local_300[(uint)bVar14 * -2 + 0x18];
          local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x16] =
               local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x19];
          local_14 = (float)core_actor_cpp_FUN_0040cf60(uVar15,uVar16,uVar17,pfVar13,pfVar10);
          local_14 = (float)core_actor_cpp_FUN_0040cf60(0x3e4ccccd,0x3ecccccd,local_14);
          unkafter_superopt_cpp_FUN_005a8300(local_30,0x3f19999a,0x3f800000,0,0x3f333333,0,local_14)
          ;
        }
        local_2c = local_2c + 1;
      } while (local_2c < 0xf);
    }
  }
  local_14 = (float)core_motion_cpp_FUN_005038a0(&param_1->field_0x2b4);
  if (local_14 <= 0.0) {
    core_hero_cpp_FUN_004cf830((CHero *)param_1);
  }
  else {
    local_28 = (float *)core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
    if ((1.0 < (float)local_28) &&
       (local_1c = (CBoxActor *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)&param_1[2].field_0x414c), local_1c != (CBoxActor *)0x0
       )) {
      core_doc_cpp_FUN_00453cc0();
      local_328 = local_2ec;
      local_3f0[(uint)bVar14 * -2 + 0x33] = local_300[(uint)bVar14 * -2 + 6];
      local_3f0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x34] =
           local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 7];
      core_actor_cpp_FUN_00408d70(param_1);
      local_304 = local_16c;
      local_300[(uint)bVar14 * -2] = afStack_1b0[(uint)bVar14 * -2 + 0x12];
      local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 1] =
           afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x13];
      local_28c = local_304 - local_454;
      local_288 = local_300[0] - local_450[0];
      local_284 = local_300[1] - local_450[1];
      local_310._0_4_ = local_304 - local_454;
      *(float *)((int)&local_310 + ((uint)bVar14 * -2 + 1) * 4) =
           local_300[(uint)bVar14 * -2 + 0x1e];
      *(float *)((int)&local_310 + ((uint)bVar14 * -2 + (uint)bVar14 * -2 + 2) * 4) =
           local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x1f];
      local_310._4_4_ = 0;
      core_actor_cpp_FUN_00408d30(param_1);
      local_178 = local_2d4;
      afStack_1b0[(uint)bVar14 * -2 + 0xf] = local_300[(uint)bVar14 * -2 + 0xc];
      afStack_1b0[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0x10] =
           local_300[(uint)bVar14 * -2 + (uint)bVar14 * -2 + 0xd];
      if (0.0 < local_170) {
        core_boxactor_cpp_FUN_0041cb40(local_1c,(CVector3f *)&local_454,&local_310);
      }
    }
  }
  unkafter_stranger_cpp_FUN_00459ff0(param_1,0);
  unkafter_stranger_cpp_FUN_0045d2c0(param_1);
  core_inv_cpp_FUN_004dccd0((CInventory *)&param_1[2].field_0x2ebc);
  unkafter_stranger_cpp_FUN_0045dbf0(param_1);
  if (local_34 == 0) {
    core_hero_cpp_FUN_004cf200();
  }
  else {
    param_2 = *(float *)&param_1[2].field_0x4140 + param_2;
    *(float *)&param_1[2].field_0x4140 = param_2;
    if ((float)_DAT_005cffb7 < param_2) {
      core_hero_cpp_FUN_004d0780(param_1);
    }
  }
  if ((*(int *)&param_1[2].field_0x41d8 != 0) &&
     (*(int *)(*(int *)&param_1[2].field_0x41d8 + 0xfc) != 0)) {
    *(uint *)&param_1->field_0xfc = 1;
  }
  iVar8 = sound_sndmain_cpp_FUN_00550b70(*(uint *)&param_1[2].field_0x41f0);
  if (iVar8 == 0) {
    if (*(int *)&g_CGamePtr->field_0x25c != 0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x41f4);
      sound_sndmain_cpp_FUN_00550450();
      sound_sndmain_cpp_FUN_005503a0(1);
      uVar15 = sound_sndmain_cpp_FUN_005506b0();
      *(uint *)&param_1[2].field_0x41f4 = uVar15;
      sound_sndmain_cpp_FUN_00550270(0.0);
      uVar15 = sound_sndmain_cpp_FUN_005506b0();
      *(uint *)&param_1[2].field_0x41f0 = uVar15;
      sound_sndmain_cpp_FUN_005504d0();
      sound_sndmain_cpp_FUN_00551080(*(uint *)&param_1[2].field_0x41f0,1.0,1.0,0);
      if (*(int *)&g_CGamePtr->field_0x264 != 0) {
        *(uint *)&g_CGamePtr->field_0x264 = 0;
        (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"flashlit.wav");
        return;
      }
    }
  }
  else if (*(int *)&g_CGamePtr->field_0x25c == 0) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x41f4);
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&param_1[2].field_0x41f0);
    sound_sndmain_cpp_FUN_00550450();
    sound_sndmain_cpp_FUN_005503a0(1);
    sound_sndmain_cpp_FUN_005506b0();
    sound_sndmain_cpp_FUN_005504d0();
    return;
  }
  return;
}
