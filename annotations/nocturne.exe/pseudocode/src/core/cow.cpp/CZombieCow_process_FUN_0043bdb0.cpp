// Name: core_cow.cpp_CZombieCow_process_FUN_0043bdb0
// Address: 0043bdb0
// Address Range: [[0043bdb0, 0043c2d3]]
// Convention: unknown
// Signature: void core_cow_cpp_CZombieCow_process_FUN_0043bdb0(int param_1,float param_2)

#include "nocturne.h"

void core_cow_cpp_CZombieCow_process_FUN_0043bdb0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_c0 [4];
  uint local_bc;
  int local_8c;
  int local_88;
  byte local_84 [12];
  byte local_78 [12];
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  byte local_30 [20];
  float local_1c;
  uint local_18;
  uint local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_1c = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = param_1 + 0x150;
  while (0.0 < local_1c) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar4,&local_1c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar6);
  }
  fVar3 = (float)3.1415926535000001;
  fVar2 = (float)0.25;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c) * fVar2;
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
  uVar6 = *(uint *)(iVar5 + 0x24);
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    switch(uVar6) {
    case 0:
      iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar5 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if (*(int *)(param_1 + 0xbca4) != 0) {
          iVar4 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                            (0x02DC9450,*(uint *)(param_1 + 0xbd2c));
          if (iVar4 == 0) {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"cow?.wav");
            *(uint *)(param_1 + 0xbd2c) = uVar6;
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      uVar6 = 0x40900000;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
      }
      else {
        local_18 = 0x40900000;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_54 = 0;
        local_50 = 0;
        local_4c = uVar6;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbca4),&local_54,0x3f000000,0x3e32b8c2);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
        if (iVar5 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
        else if ((0 < iVar5) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,2,1);
          *(uint *)(param_1 + 0xbca0) = 0x40200000;
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_c0);
      local_bc = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      local_8c = param_1;
      local_88 = param_1;
      local_14 = local_bc;
      uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_3c,&DAT_02dd1184,param_1 + 0xfd0 + *(int *)(param_1 + 0xbd28) * 0x30,
                         0x3f333333,local_c0);
      uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_30,uVar6);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar6);
      break;
    case 5:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar4,local_78,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_84,uVar6);
        FUN_004b0480(0x01C78C7C,local_84,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
    }
    goto switchD_0043c2cd_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0043be80:
      uVar6 = 1;
    }
    else {
LAB_0043c040:
      uVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_0043be80;
    if (uVar1 != 3) goto LAB_0043c040;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_0043c2cd_caseD_3:
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
    local_48 = *(float *)(param_1 + 0x2420) * param_2;
    local_44 = *(float *)(param_1 + 0x2424) * param_2;
    local_40 = param_2 * *(float *)(param_1 + 0x2428);
    local_60 = local_48 + *(float *)(param_1 + 0x2414);
    local_5c = local_44 + *(float *)(param_1 + 0x2418);
    local_58 = local_40 + *(float *)(param_1 + 0x241c);
    local_6c = local_60 + *(float *)(param_1 + 0x23a4);
    local_68 = local_5c + *(float *)(param_1 + 0x23a8);
    local_64 = local_58 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_6c);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
