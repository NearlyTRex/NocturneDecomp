// Name: core_dog.cpp_CZombieDog_process_FUN_00454750
// Address: 00454750
// Address Range: [[00454750, 00454db9]]
// Convention: unknown
// Signature: void core_dog_cpp_CZombieDog_process_FUN_00454750(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dog_cpp_CZombieDog_process_FUN_00454750(int param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_e0 [4];
  float local_dc;
  int local_ac;
  int local_a8;
  uint local_a4;
  uint local_a0;
  float local_9c;
  byte local_98 [12];
  byte local_8c [12];
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_20 = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_20) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_20);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar6);
  }
  iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  fVar3 = (float)3.1415926535000001;
  iVar4 = *(int *)(iVar4 + 0x24);
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c);
  if (iVar4 == 2) {
    *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)2;
  }
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 != 0) {
          local_74 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_70 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_6c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          local_24 = local_6c * local_6c + local_74 * local_74 + local_70 * local_70;
          local_18 = (float)(((int)local_24 >> 1) + _DAT_01c7070c);
          if (local_18 < _DAT_0059c0e4) {
            uVar6 = 1;
          }
          else {
            uVar6 = 2;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
          iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                            (0x02DC9450,*(uint *)(param_1 + 0xbd2c));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"dog5.wav");
            *(uint *)(param_1 + 0xbd2c) = uVar6;
          }
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar2 = *(int *)(param_1 + 0xbca4);
      iVar5 = param_1 + 0x150;
      if (iVar2 == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,1,1);
        }
      }
      else {
        local_5c = *(float *)(param_1 + 0x20) - *(float *)(iVar2 + 0x20);
        local_58 = *(float *)(param_1 + 0x24) - *(float *)(iVar2 + 0x24);
        local_54 = *(float *)(param_1 + 0x28) - *(float *)(iVar2 + 0x28);
        if ((_DAT_0059c0e4 < SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58))
           && (iVar4 == 1)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,2,1);
        }
        local_9c = 3.0f;
        local_1c = 3.0f;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_a4 = 0;
        local_a0 = 0;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbca4),&local_a4,0x3f000000,0x3e32b8c2);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
        if (iVar4 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
        else if ((0 < iVar4) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
          if ((float)0.5 < local_14) {
            uVar6 = 3;
          }
          else {
            uVar6 = 4;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
          *(uint *)(param_1 + 0xbca0) = 0x40200000;
        }
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_e0);
      local_dc = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      local_ac = param_1;
      local_a8 = param_1;
      local_14 = local_dc;
      uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_98,&DAT_02dd1184,*(int *)(param_1 + 0xbd28) * 0x30 + param_1 + 0xfd0,
                         0x3f333333,local_e0);
      uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_8c,uVar6);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar6);
      iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                        (0x02DC9450,*(uint *)(param_1 + 0xbd2c));
      if (iVar4 == 0) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"dog5.wav");
        *(uint *)(param_1 + 0xbd2c) = uVar6;
      }
      break;
    case 7:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (param_1 + 0x150,local_50,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_44,uVar6);
        FUN_004b0480(0x01C78C7C,local_44,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
    }
    goto switchD_00454db3_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00454837:
      uVar6 = 1;
    }
    else {
LAB_004549fd:
      uVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00454837;
    if (uVar1 != 3) goto LAB_004549fd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_00454db3_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0xbca4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xec))(iVar4), iVar4 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(uint *)(param_1 + 0xbca4));
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_68 = *(float *)(param_1 + 0x2420) * param_2;
    local_64 = *(float *)(param_1 + 0x2424) * param_2;
    local_60 = param_2 * *(float *)(param_1 + 0x2428);
    local_38 = local_68 + *(float *)(param_1 + 0x2414);
    local_34 = local_64 + *(float *)(param_1 + 0x2418);
    local_30 = local_60 + *(float *)(param_1 + 0x241c);
    local_80 = local_38 + *(float *)(param_1 + 0x23a4);
    local_7c = local_34 + *(float *)(param_1 + 0x23a8);
    local_78 = local_30 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_80);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
