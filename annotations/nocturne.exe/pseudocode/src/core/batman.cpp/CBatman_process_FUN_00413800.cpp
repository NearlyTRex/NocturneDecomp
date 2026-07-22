// Name: core_batman.cpp_CBatman_process_FUN_00413800
// Address: 00413800
// Address Range: [[00413800, 0041433b]]
// Convention: unknown
// Signature: void core_batman_cpp_CBatman_process_FUN_00413800(int param_1,float param_2)

#include "nocturne.h"

void core_batman_cpp_CBatman_process_FUN_00413800(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  byte local_188 [4];
  float local_184;
  int local_154;
  int local_150;
  byte local_14c [12];
  float local_140;
  float local_13c;
  float local_138;
  byte local_134 [12];
  byte local_128 [12];
  byte local_11c [12];
  uint local_110;
  uint local_10c;
  float local_108;
  byte local_104 [12];
  byte local_f8 [12];
  byte local_ec [12];
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  byte local_b0 [12];
  float local_a4;
  float local_a0;
  float local_9c;
  byte local_98 [4];
  float local_94;
  float local_8c;
  uint local_88;
  float local_84;
  byte local_80 [4];
  float local_7c;
  byte local_74 [12];
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_3c = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_3c) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_3c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar7);
  }
  fVar2 = (float)3.1415926535000001;
  iVar3 = param_1 + 0x150;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  local_28 = iVar4;
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
        }
      }
      else {
        iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e800000);
        if ((iVar3 != 0) &&
           (iVar3 = core_actor_cpp_isOfClass_FUN_0040d7e0
                              (*(uint *)(param_1 + 0xbca4),"CHero"), iVar3 != 0)) {
          iVar4 = 0;
          iVar3 = 0;
          while ((iVar3 < *(int *)(0x01E57284 + 0x150bf4) &&
                 ((iVar5 = core_actor_cpp_castToClassHash_FUN_0040d890
                                     (*(uint *)(iVar4 + 0x150bf8 + 0x01E57284),DAT_00764670)
                  , iVar5 == 0 || (*(int *)(iVar5 + 0xbdc0) == 0))))) {
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 4;
          }
          if (iVar3 == *(int *)(0x01E57284 + 0x150bf4)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xd,1);
            iVar3 = *(int *)(param_1 + 0xbca4);
            *(uint *)(param_1 + 0xbdc0) = 1;
            if ((uint *)(param_1 + 0xbdc8) != (uint *)(iVar3 + 0x20)) {
              *(uint *)(param_1 + 0xbdc8) = *(uint *)(iVar3 + 0x20);
              *(uint *)(param_1 + 0xbdcc) = *(uint *)(iVar3 + 0x24);
              *(uint *)(param_1 + 0xbdd0) = *(uint *)(iVar3 + 0x28);
            }
            *(uint *)(param_1 + 0xbdc4) = 0;
            local_28 = 0xd;
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"batman-disappear.wav")
            ;
            break;
          }
        }
        iVar3 = *(int *)(param_1 + 0xbca4);
        local_c8 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
        local_c4 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
        local_c0 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
        if (SQRT(local_c0 * local_c0 + local_c8 * local_c8 + local_c4 * local_c4) < 0x40600000) {
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_80,&local_c8);
          local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      (local_7c - *(float *)(param_1 + 0x34));
          if (ABS(local_14) < (float)0.52359877558333301) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
          }
        }
        core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(param_1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      fVar2 = 0x40600000;
      iVar3 = param_1 + 0x150;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
        }
      }
      else {
        local_2c = 0x40600000;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_110 = 0;
        local_108 = fVar2;
        local_10c = 0;
        uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbca4),&local_110,0x3f000000,0x3e32b8c2);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar7);
        if (-1 < iVar4) {
          local_8c = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
          local_84 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
          local_88 = 0;
          local_38 = SQRT(local_84 * local_84 + local_8c * local_8c);
          local_34 = local_38;
          if ((local_38 <= local_2c) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
            iVar4 = *(int *)(param_1 + 0xbca4);
            local_5c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            local_58 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            local_54 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_98,&local_5c);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_94 - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,3,1);
              *(uint *)(param_1 + 0xbca0) = 0x3f800000;
              iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdd8))
              ;
              if ((iVar3 == 0) &&
                 (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                    (*(uint *)(param_1 + 0xbddc)), iVar3 == 0)) {
                uVar7 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0xbddc) = uVar7;
              }
            }
          }
          if (*(float *)(param_1 + 0xbc9c) < local_34) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          }
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_188);
      local_184 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      local_154 = param_1;
      local_150 = param_1;
      local_14 = local_184;
      uVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_104,&DAT_02dd1184,DAT_00764610 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                         local_188);
      uVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_f8,uVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar7);
      break;
    case 8:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar3,local_ec,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_74,uVar7);
        FUN_004b0480(0x01C78C7C,local_74,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 9:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if ((*(int *)(param_1 + 0xbca4) != 0) ||
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                            (0x01C03A10,param_1 + 0xbd24), iVar3 != 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xb,1);
        iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdd8));
        if ((iVar3 == 0) &&
           ((iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbddc)),
            iVar3 == 0 &&
            (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdd4)),
            iVar3 == 0)))) {
          uVar7 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"batman-alert.wav");
          *(uint *)(param_1 + 0xbdd4) = uVar7;
        }
      }
      break;
    case 0xb:
      if (*(float *)(param_1 + 0x24) < *(float *)(param_1 + 0x240c) + 1.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0xc,1);
      }
      break;
    case 0xd:
      switch(*(uint *)(param_1 + 0xbdc0)) {
      case 0:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
        break;
      case 1:
        fVar2 = *(float *)(param_1 + 0xbdc4) + param_2;
        *(float *)(param_1 + 0xbdc4) = fVar2;
        if (0x3F800000 < fVar2) {
          *(uint *)(param_1 + 0xbdc0) = 2;
          *(float *)(param_1 + 0xbdc4) = 0x3F800000;
        }
        iVar3 = 0;
        local_bc = 0;
        local_b8 = 0x40400000;
        local_b4 = 0;
        local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0
                             (param_1 + 0x150);
        if (0 < *(int *)(local_20 + 0x28558)) {
          do {
            uVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (param_1 + 0x150,local_11c,iVar3);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_14c,uVar7);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                      (0x01C08D04,local_14c,0x3f000000,&local_bc,0xffff);
            iVar3 = iVar3 + 1;
          } while (iVar3 < *(int *)(local_20 + 0x28558));
        }
        break;
      case 2:
        local_30 = 1;
        local_1c = 0;
        for (local_18 = 0; fVar2 = 0x3F800000, local_18 < *(int *)(0x01E57284 + 0x14ecb0);
            local_18 = local_18 + 1) {
          iVar3 = *(int *)(0x01E57284 + local_1c + 0x14ecb4);
          if (((iVar3 != 0) && (iVar3 != param_1)) &&
             (iVar4 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x104))(iVar3), iVar4 < 1)) {
            local_50 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0xbdc8);
            local_4c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0xbdcc);
            local_48 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0xbdd0);
            if (SQRT(local_48 * local_48 + local_50 * local_50 + local_4c * local_4c) <
                (float)5) goto switchD_00413d82_default;
          }
          local_1c = local_1c + 4;
        }
        if (local_30 != 0) {
          *(uint *)(param_1 + 0xbdc0) = 3;
          *(float *)(param_1 + 0xbdc4) = fVar2;
          *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0xbdc8);
          *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xbdcc);
          *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0xbdd0);
          iVar3 = *(int *)(param_1 + 0xbca4);
          if (iVar3 != 0) {
            local_a4 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            local_a0 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            local_9c = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            puVar6 = (uint *)
                     core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                               (local_b0,&local_a4);
            if ((uint *)(param_1 + 0x30) != puVar6) {
              *(uint *)(param_1 + 0x30) = *puVar6;
              *(uint *)(param_1 + 0x34) = puVar6[1];
              *(uint *)(param_1 + 0x38) = puVar6[2];
            }
            *(uint *)(param_1 + 0x38) = 0;
            *(uint *)(param_1 + 0x30) = 0;
          }
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"batman-disappear.wav");
        }
        break;
      case 3:
        iVar4 = 0;
        local_68 = 0;
        local_64 = 0x40400000;
        local_60 = 0;
        local_24 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar3);
        if (0 < *(int *)(local_24 + 0x28558)) {
          do {
            uVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                              (iVar3,local_128,iVar4);
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_134,uVar7);
            core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                      (0x01C08D04,local_134,0x3f000000,&local_68,0xffff);
            iVar4 = iVar4 + 1;
          } while (iVar4 < *(int *)(local_24 + 0x28558));
        }
        fVar2 = *(float *)(param_1 + 0xbdc4) - param_2;
        *(float *)(param_1 + 0xbdc4) = fVar2;
        if (fVar2 < 0.0) {
          *(uint *)(param_1 + 0xbdc4) = 0;
          *(uint *)(param_1 + 0xbdc0) = 0;
          core_batman_cpp_CBatman_pickRandomMovementState_FUN_00413780(param_1);
        }
      }
    }
    goto switchD_00413d82_default;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004138d3:
      uVar7 = 1;
    }
    else {
LAB_00413a93:
      uVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar7,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004138d3;
    if (uVar1 != 3) goto LAB_00413a93;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_00413d82_default:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if ((iVar3 != 0) && (local_28 != 9)) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_e0 = *(float *)(param_1 + 0x2420) * param_2;
    local_dc = *(float *)(param_1 + 0x2424) * param_2;
    local_d8 = param_2 * *(float *)(param_1 + 0x2428);
    local_140 = local_e0 + *(float *)(param_1 + 0x2414);
    local_13c = local_dc + *(float *)(param_1 + 0x2418);
    local_138 = local_d8 + *(float *)(param_1 + 0x241c);
    local_d4 = local_140 + *(float *)(param_1 + 0x23a4);
    local_d0 = local_13c + *(float *)(param_1 + 0x23a8);
    local_cc = local_138 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_d4);
  }
  if (local_28 != 0xd) {
    *(uint *)(param_1 + 0xbdc0) = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
