// Name: FUN_0055ef50
// Address: 0055ef50
// Address Range: [[0055ef50, 00560ccb]]
// Convention: unknown
// Signature: void FUN_0055ef50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00560989) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0055ef50(int param_1,float param_2)

{
  float fVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int iVar9;
  char *pcVar10;
  char *pcVar11;
  char cVar12;
  float10 fVar13;
  float10 fVar14;
  uint uVar15;
  byte local_3ac [4];
  float *local_3a8;
  int local_378;
  int local_374;
  byte local_370 [4];
  uint local_36c;
  int local_33c;
  int local_338;
  char local_334 [32];
  byte local_314 [24];
  byte local_2fc [24];
  byte local_2e4 [24];
  byte local_2cc [24];
  byte local_2b4 [24];
  byte local_29c [12];
  uint local_290;
  uint local_28c;
  float local_288;
  float local_284;
  float local_280;
  float local_27c;
  byte local_278 [12];
  float local_26c [2];
  float local_264;
  float local_260;
  float local_25c;
  float local_258;
  float local_254;
  float local_250;
  float local_24c;
  float local_248 [2];
  float local_240;
  float local_23c;
  float local_238;
  float local_234;
  byte local_230 [4];
  uint local_22c;
  float local_224;
  float local_220;
  float local_21c;
  byte local_218 [12];
  byte local_20c [12];
  uint local_200;
  uint local_1fc;
  float local_1f8;
  float local_1f4;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  byte local_1d0 [12];
  byte local_1c4 [12];
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  uint local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  uint local_188;
  uint local_184;
  uint local_180;
  byte local_17c [12];
  byte local_170 [12];
  float local_164;
  float local_160;
  float local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint local_14c;
  uint local_148;
  uint local_144;
  byte local_140 [12];
  float local_134;
  float local_130;
  float local_12c;
  byte local_128 [12];
  byte local_11c [12];
  float local_110;
  float local_10c;
  float local_108;
  byte local_104 [12];
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  uint local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  byte local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  byte local_b0 [12];
  byte local_a4 [12];
  double local_98;
  double local_88;
  int local_80;
  float local_7c;
  float local_78;
  float local_74;
  float *local_68;
  float local_5c;
  int local_58;
  float *local_54;
  float local_50;
  float local_4c;
  int local_48;
  float local_44;
  int local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  float *local_24;
  int local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  
  iVar3 = FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  local_38 = 0;
  uVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                    (param_1 + 0x150,"CHASE_2",0);
  iVar3 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar4);
  if (iVar3 == 0x16) {
    local_38 = 1;
  }
  iVar3 = *(int *)(param_1 + 0x2590);
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + 0x14c);
    uVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                      (param_1 + 0x150,local_1d0,0);
    iVar3 = (**(code **)(iVar6 + 0x108))(iVar3,param_1,uVar4);
    if (iVar3 != 0) {
      return;
    }
    *(uint *)(param_1 + 0x2590) = 0;
    return;
  }
  if (0.0 < *(float *)(param_1 + 0xbdfc)) {
    *(float *)(param_1 + 0xbdfc) = *(float *)(param_1 + 0xbdfc) - param_2;
  }
  local_20 = param_1 + 0x150;
  local_7c = param_2 * *(float *)(param_1 + 0xbc8c);
LAB_0055efe4:
  iVar3 = local_20;
  if (0.0 < local_7c) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_20,&local_7c);
    if (uVar5 < 0xb) {
      if (uVar5 < 5) {
        if (uVar5 == 2) {
          iVar3 = *(int *)(param_1 + 0xbd34);
          if (iVar3 != 0) {
            *(uint *)(param_1 + 0xbd34) = 0;
            iVar6 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                              (param_1,*(uint *)(param_1 + 0xbd38));
            if (-1 < iVar6) {
              core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40
                        (param_1,iVar6,iVar3,0x3e4ccccd);
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s picked up %s using hand %d\n",param_1,iVar3,
                         iVar6);
            }
          }
        }
        else {
LAB_0055f021:
          core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
        }
        goto LAB_0055efe4;
      }
      if (uVar5 < 6) {
        if (*(int *)(param_1 + 0xbca4) != 0) {
          local_74 = 0x3FA66666;
          local_290 = 0;
          local_28c = 0;
          local_288 = 0x3FA66666;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_26c,&local_290);
          local_1a0 = local_26c[0] - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
          local_198 = local_264 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
          local_19c = 0;
          if (SQRT(local_198 * local_198 + local_1a0 * local_1a0) <= 1.0) {
            local_184 = 0x40800000;
            local_188 = 0;
            local_180 = 0;
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_230,&local_188);
            local_158 = *(uint *)(*(int *)(param_1 + 0xbca4) + 0x20);
            local_150 = *(uint *)(*(int *)(param_1 + 0xbca4) + 0x28);
            local_154 = local_22c;
            core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
            core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                      (0x01E57284,*(uint *)(param_1 + 0xbca4));
            iVar3 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                              (0x01E57284,local_230,&local_158);
            core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
            if ((iVar3 != 0) ||
               (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe4))
                                  (*(int *)(param_1 + 0xbca4),param_1,0), iVar6 != 0)) {
              if (iVar3 != 0) {
                core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
              }
              goto LAB_0055efe4;
            }
          }
        }
        core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        goto LAB_0055efe4;
      }
      if (uVar5 != 10) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
        goto LAB_0055efe4;
      }
      if (*(int *)(param_1 + 0xbca4) != 0) {
        uVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (local_20,local_29c,*(uint *)(param_1 + 0xbdb4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_248,uVar4);
        if (*(int *)(param_1 + 0xbdf0) < 0) {
          fVar1 = local_248[0] - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
          fVar2 = local_240 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
          if ((float)_DAT_0059876e < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
            goto LAB_0055efe4;
          }
        }
        else {
          iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                            (*(int *)(param_1 + 0xbca4));
          if (iVar3 != param_1) {
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
            goto LAB_0055efe4;
          }
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_3ac);
        local_3a8 = (float *)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0x41700000,0x41c80000);
        local_378 = param_1;
        local_374 = param_1;
        local_14 = local_3a8;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                  (*(int *)(param_1 + 0xbca4),local_3ac);
        local_98 = (double)(float)local_3a8;
        if (0.0 < local_98) {
          uVar15 = 0;
          uVar4 = 0x55f37c;
          fVar13 = (float10)round
                                      ((float10)(float)local_3a8 * (float10)_DAT_0059872e *
                                       (float10)_DAT_00598736);
          local_80 = (int)ROUND(fVar13);
          core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                    (0x01C78C7C,local_248,0,local_80,uVar4,uVar15);
        }
        iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))
                          (*(int *)(param_1 + 0xbca4));
        if (0 < iVar3) {
          (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))
                    (*(int *)(param_1 + 0xbca4));
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"ghoul-eat-?.wav");
        goto LAB_0055efe4;
      }
      core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
    }
    else if (uVar5 < 0xc) {
      iVar3 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,2);
      if (iVar3 < 0) {
        _DAT_01cc4800 = "..\\core\\zombie.cpp";
        _DAT_01cc4804 = 0x1ee;
        FUN_004c8440(&DAT_00598558);
      }
      iVar6 = *(int *)(iVar3 * 0x44 + param_1 + 0x24ac);
      if (iVar6 != 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s lugging %s\n",param_1,iVar6);
        local_14c = 0;
        local_148 = 0x40c00000;
        local_144 = 0x41880000;
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,iVar3,&local_14c);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar5 < 0xd) {
      iVar3 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,3);
      if (iVar3 < 0) {
        _DAT_01cc4800 = "..\\core\\zombie.cpp";
        _DAT_01cc4804 = 0x205;
        FUN_004c8440(&DAT_0059858b);
      }
      iVar6 = iVar3 * 0x44 + param_1;
      if (*(int *)(iVar6 + 0x24ac) != 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s tossing %s\n",param_1,*(int *)(iVar6 + 0x24ac));
        local_23c = 0.0;
        local_238 = 0.0;
        local_234 = 1.0;
        if (*(int *)(param_1 + 0xbca4) != 0) {
          pfVar7 = (float *)(**(code **)(*(int *)(*(int *)(iVar6 + 0x24ac) + 0x14c) + 0x14))
                                      (*(int *)(iVar6 + 0x24ac),local_2e4);
          local_224 = *pfVar7 + pfVar7[3];
          local_220 = pfVar7[1] + pfVar7[4];
          local_ec = local_224 * _DAT_00598726;
          local_21c = pfVar7[2] + pfVar7[5];
          local_e8 = local_220 * _DAT_00598726;
          local_e4 = local_21c * _DAT_00598726;
          pfVar7 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                      (*(uint *)(iVar6 + 0x24ac),local_c8,&local_ec);
          pfVar8 = (float *)(**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x14))
                                      (*(int *)(param_1 + 0xbca4),local_314);
          local_1dc = *pfVar8 + pfVar8[3];
          local_1d8 = pfVar8[1] + pfVar8[4];
          local_f8 = local_1dc * _DAT_00598726;
          local_1d4 = pfVar8[2] + pfVar8[5];
          local_f4 = local_1d8 * _DAT_00598726;
          local_f0 = local_1d4 * _DAT_00598726;
          pfVar8 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                      (*(uint *)(param_1 + 0xbca4),local_b0,&local_f8);
          local_1e8 = *pfVar8 - *pfVar7;
          local_1e4 = pfVar8[1] - pfVar7[1];
          local_1e0 = pfVar8[2] - pfVar7[2];
          local_2c = SQRT(local_1e0 * local_1e0 + local_1e8 * local_1e8 + local_1e4 * local_1e4);
          if (0.0 < local_2c) {
            pfVar7 = (float *)core_actor_cpp_CDemonActor_inverseTransformVector_FUN_0040a220
                                        (param_1,local_278,&local_1e8);
            local_cc = 1.0 / local_2c;
            local_d4 = *pfVar7 * local_cc;
            local_d0 = pfVar7[1] * local_cc;
            local_cc = local_cc * pfVar7[2];
            if (&local_23c != &local_d4) {
              local_23c = local_d4;
              local_238 = local_d0;
              local_234 = local_cc;
            }
          }
        }
        local_23c = local_23c * _DAT_0059872a;
        local_234 = local_234 * _DAT_0059872a;
        local_238 = local_238 * _DAT_0059872a + _DAT_00598766;
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,iVar3,&local_23c);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"zom-h0?.wav");
      }
    }
    else if (uVar5 < 0xe) {
      if (*(int *)(param_1 + 0xbd40) != 0) {
        core_door_cpp_CDoor_setSwingRange_FUN_00456220(*(int *)(param_1 + 0xbd40),0x3e99999a);
        (**(code **)(*(int *)(*(int *)(param_1 + 0xbd40) + 0x14c) + 0x24))
                  (*(int *)(param_1 + 0xbd40),"zombie-bang-door?.wav");
        *(uint *)(param_1 + 0xbd40) = 0;
      }
    }
    else {
      if (uVar5 < 0x65) goto LAB_0055f021;
      if (uVar5 < 0x66) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"fall-?.wav");
      }
      else if (uVar5 == 0x29a) {
        uVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar3,local_11c,*(uint *)(param_1 + 0xbdb4));
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_104,uVar4);
        core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(0x01C78C7C,local_104,0,3,0);
        iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
        if (iVar3 == 0) {
          pcVar10 = "ghoul-dig-?.wav";
        }
        else {
          pcVar10 = "ghoul-eat-?.wav";
        }
        pcVar11 = local_334;
        do {
          cVar12 = *pcVar10;
          *pcVar11 = cVar12;
          if (cVar12 == '\0') break;
          cVar12 = pcVar10[1];
          pcVar10 = pcVar10 + 2;
          pcVar11[1] = cVar12;
          pcVar11 = pcVar11 + 2;
        } while (cVar12 != '\0');
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,local_334);
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
      }
    }
    goto LAB_0055efe4;
  }
  fVar2 = (float)_DAT_005986de;
  fVar1 = (float)_DAT_005986e6;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c) * fVar1;
  if ((((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdec) * 4) == 0) &&
       (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde4) * 4) == 0)) ||
      (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) == 0)) &&
     ((0.0 <= *(float *)(param_1 + 0xbe00) &&
      (fVar1 = *(float *)(param_1 + 0xbe00) + param_2, *(float *)(param_1 + 0xbe00) = fVar1,
      (float)_DAT_005986ee <= fVar1)))) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_370);
    local_36c = 0x461c3f9a;
    local_33c = param_1;
    local_338 = param_1;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,local_370);
    *(uint *)(param_1 + 0xbe00) = 0xbf800000;
  }
  iVar3 = param_1 + 0x150;
  iVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
  iVar6 = *(int *)(iVar6 + 0x24);
  local_48 = 0;
  iVar9 = FUN_00428c00(param_1,param_2);
  if (iVar9 == 0) {
    local_34 = -1.0;
    local_4c = 0.3;
    iVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
    uVar5 = *(uint *)(iVar6 + 0x24);
    if (uVar5 < 8) {
      if (uVar5 == 0) {
        iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(param_2 * (float)_DAT_0059871e);
        if (iVar3 != 0) {
          uVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                            (param_1 + 0x150,"pickass",0);
          iVar3 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar4);
          if (-1 < iVar3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x10,1);
            goto LAB_0055fc6b;
          }
        }
        iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar3 != 0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if ((*(int *)(param_1 + 0xbca4) == 0) && (local_38 != 0)) {
          iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
          iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
          if (iVar3 == 0) goto LAB_0055fc6b;
          *(uint *)(0x01C775EC + 0x220) = 1;
          *(uint *)(param_1 + 0xbca4) = *(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        }
        if (*(int *)(param_1 + 0xbca4) != 0) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbe08));
          if (iVar3 == 0) {
            if (*(int *)(param_1 + 0xbdb0) == 0) {
              uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                (param_1,"zom-a0?.wav");
              *(uint *)(param_1 + 0xbe08) = uVar4;
            }
            else {
              uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                (param_1,"f-zombie-alert?.wav");
              *(uint *)(param_1 + 0xbe08) = uVar4;
            }
          }
        }
      }
      else if (uVar5 < 2) {
        iVar3 = *(int *)(param_1 + 0xbca4);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if (((*(int *)(param_1 + 0xbca4) == 0) && (local_38 != 0)) &&
           (iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),
           iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x104))(iVar6), iVar6 != 0)) {
          *(uint *)(0x01C775EC + 0x220) = 1;
          *(uint *)(param_1 + 0xbca4) = *(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        }
        if (*(int *)(param_1 + 0xbca4) == 0) {
          iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          }
        }
        else if (iVar3 == 0) {
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbe08));
          if (iVar3 == 0) {
            if (*(int *)(param_1 + 0xbdb0) == 0) {
              pcVar10 = "zom-a0?.wav";
            }
            else {
              pcVar10 = "f-zombie-alert?.wav";
            }
            uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar10);
            *(uint *)(param_1 + 0xbe08) = uVar4;
          }
LAB_0056033e:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        else {
          cVar12 = *(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde4) * 4) != 0;
          if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdec) * 4) != 0) {
            cVar12 = cVar12 + '\x01';
          }
          *(uint *)(param_1 + 0x23ac) = 0;
          *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
          *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
          iVar3 = FUN_00561010(param_1,param_2);
          if (iVar3 == 0) {
            local_50 = 0x3FA66666;
            local_40 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
            if (((-1 < local_40) &&
                (iVar3 = *(int *)(local_40 * 0x44 + param_1 + 0x24ac), iVar3 != 0)) &&
               (*(int *)(param_1 + 0xbd38) == 1)) {
              local_44 = 1.0;
              if (iVar3 != 0) {
                pfVar7 = (float *)(**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,local_2cc);
                local_14 = pfVar7 + 3;
                core_actor_cpp_CVector_ctor_FUN_0040e160(&local_194);
                local_194 = *local_14 - *pfVar7;
                local_190 = local_14[1] - pfVar7[1];
                local_18c = local_14[2] - pfVar7[2];
                local_44 = local_18c * (float)_DAT_005986e6 + 1.0;
              }
              local_50 = local_44;
            }
            local_200 = 0;
            local_1f8 = local_50;
            local_1fc = 0;
            uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                              (*(int *)(param_1 + 0xbca4),&local_200,0x3f8ccccd,0x3eb2b8c2);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar4);
            iVar3 = param_1 + 0x150;
            if (iVar6 < 0) {
              engine_console_cpp_CConsole_printf_FUN_0043ac60
                        (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
            }
            else if (iVar6 < 1) {
              iVar9 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0
                                (param_1,*(uint *)(param_1 + 0xbd38));
              iVar6 = *(int *)(param_1 + 0xbca4);
              local_1ac = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20);
              local_1a8 = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24);
              local_1a4 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28);
              if (SQRT(local_1a4 * local_1a4 + local_1ac * local_1ac + local_1a8 * local_1a8) <
                  (float)_DAT_0059870e) {
                uVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                  (param_1,local_20c,*(int *)(param_1 + 0xbca4) + 0x20);
                iVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                                  (local_218,uVar4);
                if (((ABS(*(float *)(iVar6 + 4)) < (float)_DAT_00598716) && (-1 < iVar9)) &&
                   (uVar5 = *(uint *)(param_1 + 0xbd38), 1 < uVar5)) {
                  iVar6 = iVar9 * 0x44 + param_1;
                  if (uVar5 < 3) {
                    if (*(int *)(iVar6 + 0x24ac) != 0) {
                      engine_console_cpp_CConsole_printf_FUN_0043ac60
                                (PTR_DAT_005ad350,"%s lugging\n",param_1);
                      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0xd,1);
                    }
                  }
                  else if ((uVar5 == 3) && (*(int *)(iVar6 + 0x24ac) != 0)) {
                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                              (PTR_DAT_005ad350,"%s tossing\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0xb,1);
                  }
                }
              }
            }
            else if (((cVar12 != '\0') && (*(float *)(param_1 + 0xbca0) <= 0.0)) &&
                    (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                                       (*(int *)(param_1 + 0xbca4)), iVar3 == 0)) {
              if ((local_40 < 0) || (*(int *)(param_1 + 0x24ac + local_40 * 0x44) == 0)) {
                if ((local_38 == 0) ||
                   (iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))
                                      (*(int *)(param_1 + 0xbca4)), iVar3 == 0)) {
                  uVar4 = 3;
                }
                else {
                  iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
                  if (iVar3 == 0) {
                    uVar4 = 0x19;
                  }
                  else {
                    uVar4 = 0x18;
                  }
                }
              }
              else {
                uVar4 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (param_1 + 0x150,uVar4,1);
              *(uint *)(param_1 + 0xbca0) = 0x3f4ccccd;
            }
          }
        }
      }
      else if (uVar5 < 3) {
        if (*(int *)(param_1 + 0xbca4) == 0) {
LAB_00560776:
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
        else {
          iVar3 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
          if ((((iVar3 < 0) ||
               (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))
                                  (*(int *)(param_1 + 0xbca4)), 0 < iVar6)) ||
              (*(int *)(param_1 + 0x24ac + iVar3 * 0x44) == 0)) ||
             (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                                (*(int *)(param_1 + 0xbca4)), iVar6 != 0)) {
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s gave up swing\n",param_1);
            core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
          }
          else {
            iVar3 = *(int *)(param_1 + 0x24ac + iVar3 * 0x44);
            local_3c = 1.0;
            if (iVar3 != 0) {
              pfVar7 = (float *)(**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,local_2fc);
              local_68 = &local_1f4;
              core_actor_cpp_CVector_ctor_FUN_0040e160(local_68);
              local_1f4 = pfVar7[3] - *pfVar7;
              local_1f0 = pfVar7[4] - pfVar7[1];
              local_1ec = pfVar7[5] - pfVar7[2];
              local_3c = local_68[2] * (float)_DAT_005986e6 + local_3c;
            }
            local_34 = local_3c;
            local_54 = (float *)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                          (param_1 + 0x150);
            local_88 = (double)(float)local_54;
            local_14 = local_54;
            if ((1.0 <= local_88) && (local_88 <= _DAT_00598706)) {
              local_48 = 1;
            }
          }
        }
      }
      else if (uVar5 == 3) {
        iVar3 = *(int *)(param_1 + 0xbca4);
        if ((iVar3 == 0) ||
           (iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), 0 < iVar3))
        goto LAB_0056033e;
        iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                          (*(int *)(param_1 + 0xbca4));
        if (iVar3 == 0) {
          local_34 = 0x3FA66666;
          local_4c = 3.0;
        }
        else if (iVar3 != param_1) goto LAB_00560776;
      }
    }
    else if (uVar5 < 9) {
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar3,local_a4,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_1c4,uVar4);
        FUN_004b0480(0x01C78C7C,local_1c4,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
    }
    else {
      pfVar7 = (float *)(param_1 + 0x20);
      if (uVar5 < 0x18) {
        if (0xd < uVar5) {
          if (uVar5 < 0xf) {
            iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                              (0x01C03A10,param_1 + 0xbd44);
            if ((iVar3 != 0) &&
               (fVar1 = *(float *)(param_1 + 0xbe0c) - param_2, *(float *)(param_1 + 0xbe0c) = fVar1
               , fVar1 < 0.0)) {
              iVar3 = 0;
              local_28 = 0;
              *(float *)(param_1 + 0xbe0c) = *(float *)(param_1 + 0xbe0c) + 1.0;
              local_24 = pfVar7;
              for (; local_28 < *(int *)(0x01E57284 + 0x14ecb0); local_28 = local_28 + 1) {
                iVar6 = *(int *)(iVar3 + 0x14ecb4 + 0x01E57284);
                iVar9 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0xdc))(iVar6,param_1);
                if (iVar9 != 0) {
                  local_1b8 = *(float *)(iVar6 + 0x20) - *local_24;
                  local_1b4 = *(float *)(iVar6 + 0x24) - local_24[1];
                  local_1b0 = *(float *)(iVar6 + 0x28) - local_24[2];
                  if ((ABS(local_1b4) <= (float)_DAT_00598776) &&
                     (local_1b4 = 0.0,
                     SQRT(local_1b0 * local_1b0 + local_1b8 * local_1b8) <=
                     *(float *)(param_1 + 0xbc9c))) {
                    engine_console_cpp_CConsole_printf_FUN_0043ac60
                              (PTR_DAT_005ad350,"%s rising from the grave\n",param_1);
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              (param_1 + 0x150,0xf,1);
                    if (*(int *)(param_1 + 0xbd3c) != 0) {
                      core_grave_cpp_CGrave_startAnimation_FUN_004b0dc0(*(int *)(param_1 + 0xbd3c));
                      *(uint *)(param_1 + 0xbd3c) = 0;
                    }
                    *(uint *)(param_1 + 0xbc9c) = 0x42c80000;
                    break;
                  }
                }
                iVar3 = iVar3 + 4;
              }
            }
          }
          else if (uVar5 == 0x14) {
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
            iVar6 = *(int *)(param_1 + 0xbca4);
            if (((iVar6 != 0) &&
                (fVar1 = *pfVar7 - *(float *)(iVar6 + 0x20),
                fVar2 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28),
                SQRT(fVar2 * fVar2 + fVar1 * fVar1) <= (float)_DAT_005986fe)) &&
               (ABS(*(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24)) <= (float)_DAT_00598706))
            {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
            }
          }
        }
      }
      else if ((uVar5 < 0x19) || (uVar5 < 0x1a)) {
        iVar3 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        iVar3 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3);
        if ((iVar3 == 0) &&
           ((**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2),
           *(int *)(param_1 + 0xbca4) != 0)) {
LAB_0055fd59:
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
      }
      else if ((uVar5 == 0x1c) &&
              (fVar1 = *(float *)(param_1 + 0xbe10) - param_2, *(float *)(param_1 + 0xbe10) = fVar1,
              fVar1 <= 0.0)) {
        *(uint *)(param_1 + 0xbe10) = 0;
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar3 = *(int *)(param_1 + 0xbca4);
        if (iVar3 != 0) {
          local_254 = *pfVar7 - *(float *)(iVar3 + 0x20);
          local_250 = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          local_24c = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          if (&local_134 != &local_254) {
            local_134 = local_254;
            local_130 = local_250;
            local_12c = local_24c;
          }
          local_1c = local_12c * local_12c + local_134 * local_134 + local_130 * local_130;
          local_5c = (float)(((int)local_1c >> 1) + _DAT_01c7070c);
          if (local_5c <= (float)_DAT_005986f6) {
            local_30 = *(float *)(param_1 + 0x2de8);
            if (local_30 < *(float *)(param_1 + 0x2de4)) {
              local_30 = *(float *)(param_1 + 0x2398);
            }
            if (local_30 < *(float *)(param_1 + 0x2de4)) {
              local_30 = *(float *)(param_1 + 0x2de4) + (float)_DAT_005986e6;
            }
            iVar3 = 0;
            do {
              local_78 = (float)iVar3 * (float)_DAT_0059873e * (float)_DAT_00598736;
              local_14 = (float *)iVar3;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
              fVar13 = (float10)fcos((float10)local_78);
              fVar14 = (float10)fsin((float10)local_78);
              local_18 = (float *)FUN_00510a40(0x01E57284,*(uint *)(param_1 + 0x20),
                                               *(uint *)(param_1 + 0x28),
                                               (float)(fVar14 * (float10)_DAT_00598746),
                                               (float)(fVar13 * (float10)_DAT_00598746),
                                               *(uint *)(param_1 + 0x2dd8),
                                               *(float *)(param_1 + 0x24) +
                                               *(float *)(param_1 + 0x2de4),
                                               *(float *)(param_1 + 0x24) + local_30);
              local_14 = local_18;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
              if ((float)local_18 < 1.0) break;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 4);
            if (3 < iVar3) goto LAB_0055fd59;
            *(uint *)(param_1 + 0xbe10) = 0x40400000;
            *(uint *)(param_1 + 0xbca4) = 0;
          }
        }
      }
    }
LAB_0055fc6b:
    if ((0.0 <= local_34) && (*(int *)(param_1 + 0xbca4) != 0)) {
      fVar1 = (float)_DAT_0059874e;
      *(float *)(param_1 + 0x242c) = local_4c * *(float *)(param_1 + 0xbc8c) * param_2;
      *(float *)(param_1 + 0x2430) = param_2 * *(float *)(param_1 + 0xbc8c) * fVar1;
      local_e0 = 0;
      local_d8 = local_34;
      local_dc = 0;
      uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                        (*(int *)(param_1 + 0xbca4),&local_e0,0x40400000,0x3f490fdb);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar4);
      if (iVar3 != 1) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s giving up attack\n",param_1);
        core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        *(uint *)(param_1 + 0x2410) = 0;
      }
    }
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x25a8);
    if (uVar5 < 2) {
      if (uVar5 == 1) {
LAB_0055f986:
        if (iVar6 != 1) {
          core_zombie_cpp_CZombie_resetChaseState_FUN_005624e0(param_1);
        }
      }
      else {
LAB_0055fc2f:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
    }
    else {
      if (uVar5 < 3) goto LAB_0055f986;
      if (uVar5 != 3) goto LAB_0055fc2f;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  }
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (iVar3 == 0xe) {
    *(uint *)(param_1 + 0x23ac) = 0;
  }
  else {
    if (iVar3 != 0xf) {
      iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
      if (iVar6 != 0) {
        iVar6 = *(int *)(param_1 + 0xbca4);
        if ((iVar6 != 0) &&
           (iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0xec))(iVar6), iVar6 == param_1)) {
          core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                    (0x01E57284,*(uint *)(param_1 + 0xbca4));
        }
        *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_00598756
        ;
        local_260 = *(float *)(param_1 + 0x2420) * param_2;
        local_25c = *(float *)(param_1 + 0x2424) * param_2;
        local_258 = param_2 * *(float *)(param_1 + 0x2428);
        local_110 = local_260 + *(float *)(param_1 + 0x2414);
        local_10c = local_25c + *(float *)(param_1 + 0x2418);
        local_108 = local_258 + *(float *)(param_1 + 0x241c);
        local_284 = local_110 + *(float *)(param_1 + 0x23a4);
        local_280 = local_10c + *(float *)(param_1 + 0x23a8);
        local_27c = local_108 + *(float *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x241c) = 0;
        *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
        *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
        *(uint *)(param_1 + 0x23ac) = 0;
        *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
        *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
        core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_284);
        if ((iVar3 == 1) &&
           (iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890(DAT_00765a9c,_DAT_01af4ed4),
           local_58 = iVar6, iVar6 != 0)) {
          pfVar7 = (float *)(**(code **)(*(int *)(iVar6 + 0x14c) + 0x14))(iVar6,local_2b4);
          local_bc = *pfVar7 + pfVar7[3];
          local_b8 = pfVar7[1] + pfVar7[4];
          local_164 = local_bc * _DAT_00598726;
          local_160 = local_b8 * _DAT_00598726;
          local_b4 = pfVar7[2] + pfVar7[5];
          local_15c = local_b4 * _DAT_00598726;
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(iVar6,local_17c,&local_164);
          uVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                            (param_1,local_140,local_17c);
          iVar6 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_128,uVar4);
          if (ABS(*(float *)(iVar6 + 4)) < (float)_DAT_0059875e) {
            iVar6 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
            uVar4 = 0x12;
            if (iVar6 != 0) {
              uVar4 = 0x13;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar4,1);
            *(int *)(param_1 + 0xbd40) = local_58;
          }
        }
      }
      goto LAB_0055fa02;
    }
    pfVar7 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,local_170,(uint *)(param_1 + 0x23a4));
    *(float *)(param_1 + 0x20) = *pfVar7 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar7[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar7[2] + *(float *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x23ac) = 0;
  }
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
LAB_0055fa02:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  if (iVar3 != 0xe) {
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
    FUN_0042a150(param_1,param_2);
  }
  if (*(int *)(param_1 + 0xbc90) == 0) {
    iVar3 = *(int *)(param_1 + 0xbdf4);
    if (*(int *)(param_1 + 0x2290 + iVar3 * 4) == 0) {
      uVar4 = *(uint *)(param_1 + 0xbddc);
      uVar15 = 0x3f000000;
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbde0),*(uint *)(param_1 + 0xbdc8),
                 0x3e4ccccd);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde0) * 4) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(uint *)(param_1 + 0xbde4),*(uint *)(param_1 + 0xbdc0),
                   0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbde8),*(uint *)(param_1 + 0xbdcc),
                 0x3e4ccccd);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde8) * 4) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(uint *)(param_1 + 0xbdec),*(uint *)(param_1 + 0xbdc4),
                   0x3e4ccccd);
      }
      uVar4 = *(uint *)(param_1 + 0xbdb4);
      uVar15 = 0x3f333333;
      iVar3 = *(int *)(param_1 + 0xbdf8);
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(param_1,iVar3,uVar4,uVar15);
    if ((*(int *)(param_1 + 0xbdf0) < 0) &&
       (iVar3 = *(int *)(param_1 + 0xbdf4) * 4 + param_1, *(int *)(iVar3 + 0x2290) != 0)) {
      *(uint *)(iVar3 + 0x2290) = 0;
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbdf4),*(uint *)(param_1 + 0xbddc),
                 0x3e4ccccd);
      *(uint *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf4) * 4) = 1;
    }
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(param_1);
  }
  iVar3 = core_zombie_cpp_CZombie_getPickupHandIndex_FUN_005617e0(param_1,1);
  if (((local_48 != 0) && (-1 < iVar3)) &&
     (iVar3 = *(int *)(iVar3 * 0x44 + param_1 + 0x24ac), iVar3 != 0)) {
    (**(code **)(*(int *)(iVar3 + 0x14c) + 0x70))(iVar3,2);
    return;
  }
  return;
}
