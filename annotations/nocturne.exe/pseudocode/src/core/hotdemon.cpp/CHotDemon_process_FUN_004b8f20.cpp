// Name: core_hotdemon.cpp_CHotDemon_process_FUN_004b8f20
// Address: 004b8f20
// Address Range: [[004b8f20, 004b965a]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_CHotDemon_process_FUN_004b8f20(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_10c [4];
  float local_108;
  int local_d8;
  int local_d4;
  byte local_d0 [12];
  float local_c4;
  float local_c0;
  float local_bc;
  byte local_b8 [12];
  byte local_ac [12];
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  uint local_90;
  float local_8c;
  byte local_88 [4];
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [12];
  byte local_40 [4];
  float local_3c;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_2c = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar3 = param_1 + 0x150;
  while (0.0 < local_2c) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar3,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar6);
  }
  fVar2 = (float)3.1415926535000001;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 != 0) {
    uVar1 = *(uint *)(param_1 + 0x25a8);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_004b8fec:
        uVar6 = 1;
      }
      else {
LAB_004b9178:
        uVar6 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
    }
    else {
      if (uVar1 < 3) goto LAB_004b8fec;
      if (uVar1 != 3) goto LAB_004b9178;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    goto switchD_004b9654_caseD_3;
  }
  switch(iVar4) {
  case 0:
  case 6:
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
    iVar3 = *(int *)(param_1 + 0xbca4);
    if (iVar3 != 0) {
      local_c4 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
      local_c0 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
      local_bc = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
      local_28 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0);
      local_24 = local_28;
      if (local_28 < 0x40000000) {
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_40,&local_c4);
        local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                    (local_3c - *(float *)(param_1 + 0x34));
        if (ABS(local_14) < (float)0.52359877558333301) {
          if (iVar4 == 0) {
            uVar6 = 2;
          }
          else {
            uVar6 = 8;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd24));
          if (iVar3 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                              (param_1,"hotdemon-attack.wav");
            *(uint *)(param_1 + 0xbd24) = uVar6;
          }
        }
      }
      if (local_24 < *(float *)(param_1 + 0xbc9c)) {
        if (_DAT_0059f0c8 <= local_24) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,7,1);
          *(uint *)(param_1 + 0xbca0) = 0;
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
          *(uint *)(param_1 + 0xbca0) = 0;
        }
      }
      break;
    }
    iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
    if (iVar3 == 0) break;
    goto LAB_004b93d5;
  case 1:
  case 7:
  case 0xf:
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
    fVar2 = 0x40000000;
    iVar3 = param_1 + 0x150;
    if (*(int *)(param_1 + 0xbca4) != 0) {
      local_1c = 0x40000000;
      *(uint *)(param_1 + 0x23ac) = 0;
      *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
      local_64 = 0;
      local_5c = fVar2;
      local_60 = 0;
      uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                        (*(int *)(param_1 + 0xbca4),&local_64,0x3f000000,0x3e32b8c2);
      iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
      if (-1 < iVar5) {
        local_94 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
        local_8c = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
        local_90 = 0;
        local_20 = SQRT(local_8c * local_8c + local_94 * local_94);
        local_18 = local_20;
        if ((_DAT_0059f0c8 < local_20) && (iVar4 != 7)) {
          *(uint *)(param_1 + 0xbca0) = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,7,1);
        }
        if ((local_20 <= local_1c) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
          iVar3 = *(int *)(param_1 + 0xbca4);
          local_70 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          local_6c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          local_68 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_88,&local_70);
          local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                      (local_84 - *(float *)(param_1 + 0x34));
          if (ABS(local_14) < (float)0.52359877558333301) {
            if (iVar4 == 7) {
              uVar6 = 8;
            }
            else {
              uVar6 = 2;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd24));
            if (iVar3 == 0) {
              uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 0xbd24) = uVar6;
            }
            *(uint *)(param_1 + 0xbca0) = 0x40000000;
          }
        }
        if (*(float *)(param_1 + 0xbc9c) < local_20) {
          if (iVar4 == 7) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
            *(uint *)(param_1 + 0xbca0) = 0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
            *(uint *)(param_1 + 0xbca0) = 0;
          }
        }
      }
      break;
    }
    iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
    if (iVar5 == 0) {
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,6,1);
      }
      break;
    }
LAB_004b93d5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
    break;
  case 2:
  case 8:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_10c);
    local_108 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    local_d8 = param_1;
    local_d4 = param_1;
    local_14 = local_108;
    uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                      (local_4c,&DAT_02dd1184,_DAT_01cae1e8 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                       local_10c);
    uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_d0,uVar6);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar6);
    break;
  case 5:
  case 0xb:
    if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
      uVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                        (param_1 + 0x150,local_ac,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_b8,uVar6);
      FUN_004b0480(0x01C78C7C,local_b8,0);
      *(uint *)(param_1 + 0xbc90) = 1;
    }
  }
switchD_004b9654_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar3 != 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_58 = *(float *)(param_1 + 0x2420) * param_2;
    local_54 = *(float *)(param_1 + 0x2424) * param_2;
    local_50 = param_2 * *(float *)(param_1 + 0x2428);
    local_7c = local_58 + *(float *)(param_1 + 0x2414);
    local_78 = local_54 + *(float *)(param_1 + 0x2418);
    local_74 = local_50 + *(float *)(param_1 + 0x241c);
    local_a0 = local_7c + *(float *)(param_1 + 0x23a4);
    local_9c = local_78 + *(float *)(param_1 + 0x23a8);
    local_98 = local_74 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_a0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
