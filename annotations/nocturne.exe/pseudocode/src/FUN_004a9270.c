// Name: FUN_004a9270
// Address: 004a9270
// Address Range: [[004a9270, 004aadfc]]
// Convention: unknown
// Signature: void FUN_004a9270(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a9270(int param_1,float param_2)

{
  uint uVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  char *pcVar10;
  char *pcVar11;
  char cVar12;
  float10 fVar13;
  float10 fVar14;
  ulonglong uVar15;
  uint local_378 [25];
  byte local_314 [4];
  float local_310;
  int local_2e0;
  int local_2dc;
  byte local_2d8 [4];
  float local_2d4;
  int local_2a4;
  int local_2a0;
  float local_298;
  uint local_280;
  uint local_27c;
  uint local_278;
  int local_268;
  int local_264;
  char local_260 [36];
  float local_23c;
  float local_230;
  byte local_228 [12];
  byte local_21c [12];
  byte local_210 [24];
  float local_1f8;
  float local_1f4;
  float local_1f0;
  byte local_1ec [12];
  byte local_1e0 [12];
  byte local_1d4 [12];
  float local_1c8;
  float local_1c4;
  float local_1c0;
  byte local_1bc [12];
  byte local_1b0 [12];
  byte local_1a4 [12];
  byte local_198 [12];
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  uint local_174;
  uint local_170;
  float local_16c;
  uint local_168;
  float local_164;
  uint local_160;
  byte local_15c [12];
  byte local_150 [12];
  byte local_144 [12];
  uint local_138;
  uint local_134;
  float local_130;
  byte local_12c [12];
  float local_120;
  float local_11c;
  float local_118;
  byte local_114 [12];
  byte local_108 [12];
  uint local_fc;
  uint local_f8;
  float local_f4;
  byte local_f0 [12];
  uint local_e4;
  uint local_e0;
  uint local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  double local_b4;
  double local_ac;
  double local_a4;
  double local_9c;
  double local_8c;
  int local_84;
  float local_7c;
  float local_78;
  int local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  uint local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  float local_14;
  
  iVar5 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_64 = param_2 * *(float *)(param_1 + 0xbc8c);
  local_18 = param_1 + 0x150;
switchD_004a9c0a_caseD_e:
  iVar5 = local_18;
  if (0.0 < local_64) {
    uVar9 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(local_18,&local_64);
    switch(uVar9) {
    case 5:
      if ((((*(int *)(param_1 + 0xbca4) != 0) &&
           (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))(),
           iVar5 == 0)) &&
          (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))(), iVar5 == 0)
          ) && (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe0))
                                  (*(int *)(param_1 + 0xbca4),param_1), iVar5 != 0)) {
        local_16c = 0x40200000;
        local_174 = 0;
        local_170 = 0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1);
        fVar3 = local_1c8 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
        fVar4 = local_1c0 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
        bVar2 = SQRT(fVar4 * fVar4 + fVar3 * fVar3) <= 1.0;
        iVar5 = *(int *)(param_1 + 0xbca4);
        if (((ABS(local_1c4 - *(float *)(iVar5 + 0x24)) <= (float)4) &&
            ((!bVar2 || (iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0xe4))(iVar5), iVar5 != 0)))
            ) && (bVar2)) break;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_18);
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0();
      break;
    case 10:
      if (*(int *)(param_1 + 0xbca4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5);
      }
      else {
        iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))();
        if (iVar6 == param_1) {
          iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))();
          if (iVar6 == 0) {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x14))
                      (*(int *)(param_1 + 0xbca4));
            iVar5 = *(int *)(param_1 + 0xbca4);
            local_168 = *(uint *)(iVar5 + 0x20);
            local_160 = *(uint *)(iVar5 + 0x28);
            local_164 = (local_230 - local_23c) * (float)0.69999999999999996 + *(float *)(iVar5 + 0x24);
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0();
            local_298 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41700000);
            local_14 = local_298;
            puVar7 = (uint *)
                     core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                               (*(uint *)(param_1 + 0xbca4),local_f0);
            if (&local_280 != puVar7) {
              local_280 = *puVar7;
              local_27c = puVar7[1];
              local_278 = puVar7[2];
            }
            local_268 = param_1;
            local_264 = param_1;
            (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                      (*(int *)(param_1 + 0xbca4));
            local_ac = (double)local_298;
            if (0.0 < local_ac) {
              uVar15 = 0x4a995e;
              fVar13 = (float10)round
                                          ((float10)local_298 * (float10)2.5 *
                                           (float10)0.25);
              local_70 = (int)ROUND(fVar13);
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                        (0x01C78C7C,&local_168,0,local_70,uVar15);
            }
            iVar5 = *(int *)(param_1 + 0xbca4);
            if (*(float *)(iVar5 + 0x2434) <= 0.0) {
              (**(code **)(*(int *)(iVar5 + 0x14c) + 0xe8))(iVar5);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_18,1,1);
            }
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1);
          }
          else {
            (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))();
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5);
        }
      }
      break;
    case 0xb:
    case 0xc:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0();
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                (local_18,local_1e0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_1d4);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000);
      uVar15 = 0x4a9a56;
      fVar13 = (float10)round((float10)local_14 * (float10)0.25);
      local_58 = (int)ROUND(fVar13);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(0x01C78C7C,local_1d4,0,local_58,uVar15);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1);
      break;
    case 0xd:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0();
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(iVar5,local_1b0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_228);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000);
      uVar15 = 0x4a9ae1;
      fVar13 = (float10)round((float10)local_14 * (float10)0.25);
      local_54 = (int)ROUND(fVar13);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(0x01C78C7C,local_228,0,local_54,uVar15);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1);
      break;
    case 0xe:
    case 0x11:
    case 0x12:
      break;
    case 0x10:
      core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0();
      core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0(iVar5,local_1ec);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_15c);
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41000000);
      uVar15 = 0x4a9b6c;
      fVar13 = (float10)round((float10)local_14 * (float10)0.25);
      local_84 = (int)ROUND(fVar13);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200(0x01C78C7C,local_15c,0,local_84,uVar15);
      iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
      if (iVar5 == 0) {
        pcVar10 = "ghoul-dig-?.wav @1.3";
      }
      else {
        pcVar10 = "ghoul-eat-?.wav @1.3";
      }
      pcVar11 = local_260;
      do {
        cVar12 = *pcVar10;
        *pcVar11 = cVar12;
        if (cVar12 == '\0') break;
        cVar12 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar11[1] = cVar12;
        pcVar11 = pcVar11 + 2;
      } while (cVar12 != '\0');
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1);
    }
    goto switchD_004a9c0a_caseD_e;
  }
  local_14 = (float)core_motion_cpp_CMotionController_getStateBlendWeight_FUN_004e18d0(local_18,1);
  local_8c = (double)param_2;
  fVar3 = (float)1.57079632675;
  *(float *)(param_1 + 0x242c) =
       *(float *)(param_1 + 0xbc8c) * local_14 * (float)3 * param_2;
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c);
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
  iVar5 = *(int *)(iVar5 + 0x24);
  if (iVar5 == 0x11) {
    fVar13 = (float10)8;
    *(float *)(param_1 + 0x2430) = (float)(fVar13 * (float10)*(float *)(param_1 + 0x2430));
    *(float *)(param_1 + 0x242c) =
         (float)((float10)local_8c * fVar13 * (float10)*(float *)(param_1 + 0xbc8c));
  }
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar6 == 0) {
    local_20 = -1.0;
    iVar6 = param_1 + 0x150;
    iVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660();
    switch(*(uint *)(iVar8 + 0x24)) {
    case 0:
      if (*(float *)(param_1 + 0xbd80) <= 0.0) {
        iVar6 = *(int *)(param_1 + 0xbd84);
        if (iVar6 == 0) {
          iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar6 != 0) goto LAB_004aa1e6;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
          if (*(int *)(param_1 + 0xbca4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
            iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50();
            if ((iVar6 == 0) || (iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(), iVar6 == 0))
            {
              uVar9 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                (param_1,"ghoul-alert-?.wav");
              *(uint *)(param_1 + 0xbd74) = uVar9;
            }
          }
        }
        else {
          local_180 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20);
          local_17c = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 0x24);
          local_178 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28);
          if (SQRT(local_178 * local_178 + local_180 * local_180 + local_17c * local_17c) <
              (float)4) {
            fVar3 = *(float *)(param_1 + 0x2434) + param_2;
            *(float *)(param_1 + 0xbd88) = *(float *)(param_1 + 0xbd88) - param_2;
            *(float *)(param_1 + 0x2434) = fVar3;
            if ((float)100 < fVar3) {
              *(uint *)(param_1 + 0x2434) = 0x42c80000;
            }
            if (*(float *)(param_1 + 0xbd88) < 0.0) {
              *(uint *)(param_1 + 0xbd88) = 0;
              *(uint *)(param_1 + 0xbd84) = 0;
            }
          }
        }
      }
      else {
        *(float *)(param_1 + 0xbd80) = *(float *)(param_1 + 0xbd80) - param_2;
      }
      break;
    case 1:
    case 0x11:
      if ((*(int *)(param_1 + 0xbd8c) != 0) && (iVar5 == 1)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x11,1);
      }
      if (0.0 < *(float *)(param_1 + 0xbd80)) {
        *(float *)(param_1 + 0xbd80) = *(float *)(param_1 + 0xbd80) - param_2;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
      else {
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        cVar12 = *(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd4c) * 4) != 0;
        if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) != 0) {
          cVar12 = cVar12 + '\x01';
        }
        iVar8 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) + 0x104))();
        iVar6 = 0x01C775EC;
        if (iVar8 == 0) {
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
          iVar6 = *(int *)(param_1 + 0xbca4);
          if (iVar6 == 0) {
            iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
            if (iVar6 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
            }
          }
          else {
            local_1f8 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20);
            local_1f0 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28);
            local_1f4 = 0.0;
            if (((*(float *)(param_1 + 0x2434) < (float)25) && (cVar12 != '\0')) &&
               (*(int *)(param_1 + 0xbd84) == 0)) {
              core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(param_1,param_2);
            }
            local_30 = param_1 + 0x150;
            iVar6 = *(int *)(param_1 + 0xbd84);
            if (iVar6 == 0) {
              local_fc = 0;
              local_f4 = 0x40200000;
              local_f8 = 0;
              uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                                (*(int *)(param_1 + 0xbca4),&local_fc,0x3f800000,0x3e32b8c2);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar9);
              if (iVar6 < 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_30,0,1);
              }
              else if (((0 < iVar6) && (cVar12 != '\0')) &&
                      ((*(float *)(param_1 + 0xbca0) <= 0.0 &&
                       ((iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                                           (), iVar6 == 0 && (*(float *)(param_1 + 0xbd38) <= 0.0)))
                       ))) {
                local_48 = SQRT(local_1f0 * local_1f0 +
                                local_1f8 * local_1f8 + local_1f4 * local_1f4);
                local_24 = 0.0;
                local_40 = 0.0;
                local_38 = 0.0;
                if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) != 0) {
                  local_24 = (1.0 - ABS(local_48 - 0x4059999A) / 0x4059999A) *
                             (float)0.29999999999999999;
                }
                if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd4c) * 4) != 0) {
                  local_40 = (1.0 - ABS(local_48 - 0x40200000) / 0x40200000) *
                             (float)0.40000000000000002;
                }
                local_44 = local_48;
                iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe0))
                                  (*(int *)(param_1 + 0xbca4),param_1,0);
                if (iVar6 != 0) {
                  local_38 = (1.0 - ABS(local_48 - 0x40200000) / 0x40200000) *
                             (float)0.29999999999999999;
                }
                local_3c = local_24 + local_40;
                local_34 = local_3c + local_38;
                if (0.0 < local_34) {
                  local_28 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,local_34);
                  if (local_24 <= local_28) {
                    if (local_3c <= local_28) {
                      uVar15 = 0x10000000b;
                    }
                    else {
                      uVar15 = 0x10000000c;
                    }
                  }
                  else {
                    uVar15 = 0x100000002;
                  }
                  local_14 = local_28;
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (param_1 + 0x150,uVar15);
                  *(uint *)(param_1 + 0xbca0) = 0x3f333333;
                }
              }
            }
            else {
              uVar9 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0xbc))
                                (iVar6,&DAT_02dd1184,0x40400000,0);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                                (param_1,*(int *)(param_1 + 0xbd84) + 0x20,uVar9);
              if (0 < iVar6) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(local_30,0,1);
                local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                            (0x41200000,0x41f00000);
                *(float *)(param_1 + 0xbd88) = local_14;
              }
              if (iVar6 < 0) {
                *(uint *)(param_1 + 0xbd88) = 0x41f00000;
                *(uint *)(param_1 + 0xbd84) = 0;
              }
              if (iVar5 == 1) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                          (param_1 + 0x150,0x11,1);
              }
            }
          }
        }
        else {
          if (*(int *)(param_1 + 0xbd34) < 0) {
            cVar12 = *(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd4c) * 4) != 0;
            if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) != 0) {
              cVar12 = cVar12 + '\x01';
            }
            if (cVar12 != '\0') {
              if (cVar12 == '\x01') {
                *(uint *)(param_1 + 0xbd34) = 0xe;
                *(uint *)(iVar6 + 0x220) = 1;
              }
              else {
                iVar6 = core_actor_cpp_randomChance_FUN_0040dea0();
                *(uint *)(param_1 + 0xbd34) = (iVar6 == 0) + 0xd;
                *(uint *)(0x01C775EC + 0x220) = 1;
              }
              goto LAB_004aa6a3;
            }
            *(uint *)(param_1 + 0xbd34) = 0;
          }
          else {
LAB_004aa6a3:
            if (*(int *)(param_1 + 0xbd34) != 0) {
              local_2c = 0x40000000;
              if (*(int *)(param_1 + 0xbd34) == 0xe) {
                local_2c = 0x40B00000;
              }
              local_dc = local_2c;
              local_e4 = 0;
              iVar6 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
              local_e0 = 0;
              uVar9 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0xbc))
                                (iVar6,&local_e4,0x3f000000,0x3db2b8c2);
              uVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                                (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x150,local_198,0,uVar9);
              uVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                (*(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8),local_150,uVar9);
              iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0(param_1,uVar9);
              if (((0 < iVar6) &&
                  (iVar6 = (**(code **)(*(int *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x14c) +
                                       0x104))(), iVar6 == 2)) &&
                 (core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (param_1 + 0x150,*(uint *)(param_1 + 0xbd34),1),
                 *(int *)(param_1 + 0xbd34) == 0xd)) {
                iVar6 = *(int *)(param_1 + 0x14c);
                local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                            (0x3f000000,0x3f99999a);
                (**(code **)(iVar6 + 0x2c))(param_1,"ghoul-scream-!-?.wav",local_14);
              }
              break;
            }
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
      }
      break;
    case 2:
      if (*(int *)(param_1 + 0xbca4) == 0) {
LAB_004aa1e6:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
      }
      else {
        iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))();
        if (iVar8 == 0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xbca0) = local_14;
          if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) != 0) {
            local_50 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60()
            ;
            local_9c = (double)local_50;
            local_14 = local_50;
            if ((local_50 <= (float)2) && (local_20 = 0x4059999A, 1.0 <= local_9c))
            {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0();
              local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                          (0x40e00000,0x41700000);
              local_2d4 = local_14;
              if (*(int *)(param_1 + 0xbd8c) != 0) {
                local_2d4 = local_14 * (float)2;
              }
              local_2a4 = param_1;
              local_2a0 = param_1;
              uVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                (local_114,0x1c78bcc,_DAT_01c78c1c * 0x30 + param_1 + 0xfd0,
                                 0x3e4ccccd,local_2d8);
              uVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                (param_1,local_1bc,uVar9);
              iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar9);
              if (iVar6 != 0) {
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"gh-hits?.wav");
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar6,1,1);
        }
      }
      break;
    case 10:
      if (((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xbd40) < 1)) &&
         (*(int *)(param_1 + 0xdc) == 0)) {
        uVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar6,local_12c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_108,uVar9);
        FUN_004b0480(0x01C78C7C,local_108,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      *(uint *)(param_1 + 0xbd8c) = 0;
      if (((0 < *(int *)(param_1 + 0xbd44)) || (0 < *(int *)(param_1 + 0xbd40))) &&
         (iVar6 = *(int *)(param_1 + 0xbd2c) - _DAT_01bd1d80, *(int *)(param_1 + 0xbd2c) = iVar6,
         iVar6 < 1)) {
        if (*(int *)(param_1 + 0xbd40) < 1) {
          *(int *)(param_1 + 0xbd44) = *(int *)(param_1 + 0xbd44) + -1;
        }
        if ((0 < *(int *)(param_1 + 0xbd44)) || (0 < *(int *)(param_1 + 0xbd40))) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x3f800000,0x41400000);
          uVar15 = 0x10000000f;
          uVar9 = 0x4a9e4f;
          fVar13 = (float10)round
                                      ((float10)local_14 * (float10)65536);
          *(int *)(param_1 + 0xbd2c) = (int)ROUND(fVar13);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                    (param_1 + 0x150,uVar9,uVar15);
        }
      }
      if (0 < *(int *)(param_1 + 0xbd40)) {
        if (*(int *)(param_1 + 0xbd30) < 1) {
          iVar6 = *(int *)(param_1 + 0xbd30) + _DAT_01bd1d80;
          *(int *)(param_1 + 0xbd30) = iVar6;
          if (iVar6 < 0) {
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
            iVar6 = *(int *)(param_1 + 0xbca4);
            if (iVar6 != 0) {
              local_120 = *(float *)(param_1 + 0x20) - *(float *)(iVar6 + 0x20);
              local_11c = *(float *)(param_1 + 0x24) - *(float *)(iVar6 + 0x24);
              local_118 = *(float *)(param_1 + 0x28) - *(float *)(iVar6 + 0x28);
              if (&local_c0 != &local_120) {
                local_c0 = local_120;
                local_bc = local_11c;
                local_b8 = local_118;
              }
              local_7c = local_b8 * local_b8 + local_c0 * local_c0 + local_bc * local_bc;
              local_78 = (float)(((int)local_7c >> 1) + _DAT_01c7070c);
              if (local_78 < (float)8) goto LAB_004a9eb3;
            }
          }
          else {
            *(uint *)(param_1 + 0xbd30) = 0;
LAB_004a9eb3:
            local_1c = *(float *)(param_1 + 0x2de8);
            if (local_1c < *(float *)(param_1 + 0x2de4)) {
              local_1c = *(float *)(param_1 + 0x2398);
            }
            if (local_1c < *(float *)(param_1 + 0x2de4)) {
              local_1c = *(float *)(param_1 + 0x2de4) + (float)0.5;
            }
            iVar6 = 0;
            do {
              local_68 = (float)iVar6 * (float)6.2831853070000001 * (float)0.25;
              local_14 = (float)iVar6;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750();
              core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(0x01E57284,param_1);
              fVar13 = (float10)fcos((float10)local_68);
              fVar14 = (float10)fsin((float10)local_68);
              local_6c = (float)FUN_00510a40(0x01E57284,*(uint *)(param_1 + 0x20),
                                             *(uint *)(param_1 + 0x28),
                                             (float)(fVar14 * (float10)0.050000000000000003),
                                             (float)(fVar13 * (float10)0.050000000000000003),
                                             *(uint *)(param_1 + 0x2dd8),
                                             *(float *)(param_1 + 0x24) +
                                             *(float *)(param_1 + 0x2de4));
              local_14 = local_6c;
              core_setcolid_cpp_CDemonSet_init_FUN_00511750();
              if (local_6c < 1.0) break;
              iVar6 = iVar6 + 1;
            } while (iVar6 < 4);
            if (iVar6 < 4) {
              *(uint *)(param_1 + 0xbd30) = 3;
              *(uint *)(param_1 + 0xbca4) = 0;
            }
            else {
              local_14 = (float)(*(int *)(param_1 + 0xbd40) + 1);
              local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                          (0x41200000,(float)(int)local_14 * (float)10)
              ;
              *(float *)(param_1 + 0x2434) = local_14;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x10,1)
              ;
            }
          }
        }
        else {
          iVar6 = *(int *)(param_1 + 0xbd30) - _DAT_01bd1d80;
          *(int *)(param_1 + 0xbd30) = iVar6;
          if (iVar6 < 1) {
            local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x41f00000);
            local_378[0] = 0x4a9e85;
            fVar13 = (float10)round
                                        (-(float10)local_14 * (float10)65536.0f);
            *(int *)(param_1 + 0xbd30) = (int)ROUND(fVar13);
          }
        }
      }
      break;
    case 0xb:
      if (*(int *)(param_1 + 0xbca4) == 0) {
LAB_004aaa0a:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar6,1,1);
      }
      else {
        iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))();
        if (iVar8 == 0) {
          local_20 = 0x40200000;
        }
        else {
          iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))();
          if (iVar8 != param_1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar6,1,1);
          }
        }
      }
      break;
    case 0xc:
      if ((*(int *)(param_1 + 0xbca4) == 0) ||
         (iVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))(), iVar8 != 0))
      goto LAB_004aaa0a;
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3e4ccccd,0x3f000000);
      *(float *)(param_1 + 0xbca0) = local_14;
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd4c) * 4) != 0) {
        local_4c = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60();
        local_a4 = (double)local_4c;
        local_14 = local_4c;
        if (local_4c <= (float)2) {
          local_20 = 0x40200000;
          if (1.0 <= local_a4) {
            core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0();
            local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                        (0x40e00000,0x41700000);
            local_310 = local_14;
            if (*(int *)(param_1 + 0xbd8c) != 0) {
              local_310 = local_14 * (float)2;
            }
            local_2e0 = param_1;
            local_2dc = param_1;
            uVar9 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                              (local_210,0x1c78bc0,_DAT_01c78c18 * 0x30 + param_1 + 0xfd0,0x3ecccccd
                               ,local_314);
            uVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                              (param_1,local_21c,uVar9);
            iVar6 = core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar9);
            if (iVar6 != 0) {
              (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"gh-hits?.wav");
            }
          }
        }
      }
      break;
    case 0xd:
    case 0xe:
      iVar6 = *(int *)(param_1 + 0xbd28) - _DAT_01bd1d80;
      *(int *)(param_1 + 0xbd28) = iVar6;
      if (iVar6 < 1) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"burp[1,2].wav");
        local_378[0] = 0x41f00000;
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0();
        local_378[0] = 0x4aac05;
        fVar13 = (float10)round
                                    ((float10)local_14 * (float10)65536);
        *(int *)(param_1 + 0xbd28) = (int)ROUND(fVar13);
      }
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if (*(int *)(param_1 + 0xbca4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
    }
    if (((0.0 <= local_20) && (*(float *)(param_1 + 0xbd38) <= 0.0)) &&
       (*(int *)(param_1 + 0xbca4) != 0)) {
      local_138 = 0;
      local_134 = 0;
      local_130 = local_20;
      uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                        (*(int *)(param_1 + 0xbca4),&local_138,0x40400000,0x3f060a92);
      uVar9 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                        (*(int *)(param_1 + 0xbca4) + 0x150,local_1a4,0,uVar9);
      uVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                        (*(uint *)(param_1 + 0xbca4),local_144,uVar9);
      iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0(param_1,uVar9);
      if (iVar6 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        *(uint *)(param_1 + 0x2410) = 0;
      }
    }
    goto LAB_004a93c4;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
      uVar15 = 0x100000001;
    }
    else {
LAB_004a9c4c:
      uVar15 = 0x100000000;
    }
LAB_004a939d:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar15);
  }
  else {
    if (uVar1 < 3) {
      uVar15 = 0x100000011;
      goto LAB_004a939d;
    }
    if (uVar1 != 3) goto LAB_004a9c4c;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
LAB_004a93c4:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0();
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960();
  if (iVar6 != 0) {
    if ((*(int *)(param_1 + 0xbca4) != 0) &&
       (iVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))(),
       iVar6 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(uint *)(param_1 + 0xbca4));
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_cc = *(float *)(param_1 + 0x2420) * param_2;
    local_c8 = *(float *)(param_1 + 0x2424) * param_2;
    local_c4 = param_2 * *(float *)(param_1 + 0x2428);
    local_d8 = local_cc + *(float *)(param_1 + 0x2414);
    local_d4 = local_c8 + *(float *)(param_1 + 0x2418);
    local_d0 = local_c4 + *(float *)(param_1 + 0x241c);
    local_18c = local_d8 + *(float *)(param_1 + 0x23a4);
    local_188 = local_d4 + *(float *)(param_1 + 0x23a8);
    local_184 = local_d0 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_18c);
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0();
  local_b4 = (double)*(float *)(param_1 + 0xbd38);
  if (0.0 < local_b4) {
    local_60 = (float)core_motion_cpp_CMotionController_markerPositionToFrame_FUN_004e1f50
                                (param_1 + 0x150,*(uint *)(param_1 + 0xbd3c),
                                 1.0 - *(float *)(param_1 + 0xbd38));
    fVar3 = 1.0 - *(float *)(param_1 + 0xbd38);
    local_5c = 1.0 - fVar3 * fVar3 * fVar3;
    local_14 = local_60;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (param_1 + 0x150,*(uint *)(param_1 + 0xbd3c),local_60,local_5c,_DAT_01c78c38,
               &LAB_0051b650);
    fVar3 = *(float *)(param_1 + 0xbd38) - param_2 / _DAT_0059e20c;
    *(float *)(param_1 + 0xbd38) = fVar3;
    if (fVar3 < 0.0) {
      *(uint *)(param_1 + 0xbd38) = 0;
    }
  }
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  if (((float)0.01 < ABS(*(float *)(param_1 + 0x2410))) ||
     ((float)0.01 <
      SQRT(*(float *)(param_1 + 0x241c) * *(float *)(param_1 + 0x241c) +
           *(float *)(param_1 + 0x2414) * *(float *)(param_1 + 0x2414) +
           *(float *)(param_1 + 0x2418) * *(float *)(param_1 + 0x2418)))) {
    iVar6 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                      (0x02DC9450,*(uint *)(param_1 + 0xbd24));
    if (iVar6 == 0) {
      _sprintf(local_378,"ghoul-walk-?.wav *%f",(double)*(float *)(param_1 + 0xbc8c));
      uVar9 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,local_378);
      *(uint *)(param_1 + 0xbd24) = uVar9;
    }
  }
  else {
    core_sound_cpp_CSound_killSound_FUN_0052ebb0(0x02DC9450,*(uint *)(param_1 + 0xbd24));
  }
  if (*(int *)(param_1 + 0xbc90) == 0) {
    if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd6c) * 4) == 0) {
      uVar15 = CONCAT44(0x3f000000,_DAT_01c78c3c);
      uVar9 = *(uint *)(param_1 + 0xbd6c);
    }
    else {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbd48),_DAT_01c78c28,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd48) * 4) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(uint *)(param_1 + 0xbd4c),_DAT_01c78c20,0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbd50),_DAT_01c78c2c,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd50) * 4) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(uint *)(param_1 + 0xbd54),_DAT_01c78c24,0x3e4ccccd);
      }
      uVar15 = CONCAT44(0x3f333333,_DAT_01c78c14);
      uVar9 = *(uint *)(param_1 + 0xbd70);
    }
    core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990(param_1,uVar9,uVar15);
    core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0();
  }
  if ((*(int *)(param_1 + 0xbd84) != 0) && (iVar5 == 0x11)) {
    fVar3 = *(float *)(param_1 + 0x20) - *(float *)(param_1 + 0xbd94);
    fVar4 = *(float *)(param_1 + 0x28) - *(float *)(param_1 + 0xbd9c);
    if (param_2 * (float)0.5 <= SQRT(fVar4 * fVar4 + fVar3 * fVar3)) {
      *(uint *)(param_1 + 0xbd90) = 0x3f800000;
    }
    else {
      param_2 = *(float *)(param_1 + 0xbd90) - param_2;
      *(float *)(param_1 + 0xbd90) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0xbd88) = 0x41f00000;
        *(uint *)(param_1 + 0xbd84) = 0;
        *(uint *)(param_1 + 0xbd8c) = 0;
      }
    }
  }
  if ((uint *)(param_1 + 0xbd94) == (uint *)(param_1 + 0x20)) {
    return;
  }
  *(uint *)(param_1 + 0xbd94) = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0xbd98) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0xbd9c) = *(uint *)(param_1 + 0x28);
  return;
}
