// Name: core_sentinel.cpp_CSentinel_process_FUN_00505ba0
// Address: 00505ba0
// Address Range: [[00505ba0, 005066db]]
// Convention: unknown
// Signature: void core_sentinel_cpp_CSentinel_process_FUN_00505ba0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_sentinel_cpp_CSentinel_process_FUN_00505ba0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte local_1a0 [4];
  float local_19c;
  int local_16c;
  int local_168;
  byte local_164 [4];
  float local_160;
  byte local_128 [12];
  float local_11c;
  float local_118;
  float local_114;
  uint local_110;
  uint local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  uint local_dc;
  float local_d8;
  byte local_d4 [4];
  uint local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  byte local_b0 [12];
  byte local_a4 [12];
  uint local_98;
  uint local_94;
  float local_90;
  byte local_8c [12];
  uint local_80;
  uint local_7c;
  float local_78;
  byte local_74 [4];
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  byte local_50 [12];
  byte local_44 [24];
  float local_2c [2];
  float local_24;
  float local_20;
  int local_1c;
  float local_18;
  float local_14;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_2c[0] = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = param_1 + 0x150;
LAB_00505bf9:
  if (0.0 < local_2c[0]) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar4,local_2c);
    switch(uVar7) {
    case 100:
      iVar5 = *(int *)(param_1 + 0xbca4);
      if ((((iVar5 != 0) &&
           (iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0x104))(iVar5), iVar5 == 0)) &&
          (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                             (*(int *)(param_1 + 0xbca4)), iVar5 == 0)) &&
         (iVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe0))
                            (*(int *)(param_1 + 0xbca4),param_1,0), iVar5 != 0)) {
        local_108 = 4.0f;
        local_110 = 0;
        local_10c = 0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_c8,&local_110);
        fVar2 = local_c8 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
        fVar3 = local_c0 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
        fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
        fVar3 = (float)0.80000000000000004;
        iVar5 = *(int *)(param_1 + 0xbca4);
        if (ABS(local_c4 - *(float *)(iVar5 + 0x24)) <= (float)4) {
          if ((fVar3 < fVar2) ||
             (iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0xe4))(iVar5,param_1,0), iVar5 != 0)) {
            if (fVar3 < fVar2) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
      break;
    case 0x65:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
      break;
    case 0x66:
      if (*(int *)(param_1 + 0xbca4) != 0) {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_164);
        local_160 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                     (0x3f800000,0x40a00000);
        local_14 = local_160;
        (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                  (*(int *)(param_1 + 0xbca4),local_164);
      }
      break;
    case 0x67:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"wing?.wav");
      break;
    case 0x68:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"sentinel-fall.wav");
      break;
    default:
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar7);
    }
    goto LAB_00505bf9;
  }
  fVar2 = (float)3.1415926535000001;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
  iVar5 = *(int *)(iVar5 + 0x24);
  local_1c = iVar5;
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar6 == 0) {
    if ((iVar5 == 10) || (iVar5 == 0xb)) {
      *(uint *)(param_1 + 0x2dd8) = 0x3f000000;
    }
    else {
      *(uint *)(param_1 + 0x2dd8) = 0x40000000;
    }
    switch(local_1c) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
        }
      }
      else {
        local_5c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        local_58 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        local_54 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        if (SQRT(local_54 * local_54 + local_5c * local_5c + local_58 * local_58) <= 12.0f)
        {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
        }
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if (*(int *)(param_1 + 0xbca4) != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
      break;
    case 2:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      fVar2 = 4.0f;
      if (*(int *)(param_1 + 0xbca4) != 0) {
        local_20 = 4.0f;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_98 = 0;
        local_90 = fVar2;
        local_94 = 0;
        uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbca4),&local_98,0x3f000000,0x3e32b8c2);
        iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar7);
        if (-1 < iVar4) {
          local_e0 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
          local_d8 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
          local_24 = SQRT(local_d8 * local_d8 + local_e0 * local_e0);
          local_dc = 0;
          local_18 = local_24;
          if (12.0f < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
          }
          if ((local_24 <= local_20) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
            iVar4 = *(int *)(param_1 + 0xbca4);
            local_bc = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            local_b8 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            local_b4 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_74,&local_bc);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_70 - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)0.52359877558333301) {
              iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
              if (iVar4 == 0) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,10,1)
                ;
                *(uint *)(param_1 + 0xbd28) = 0x40a00000;
              }
              else {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
              }
              *(uint *)(param_1 + 0xbca0) = 0x3f800000;
            }
          }
          if (*(float *)(param_1 + 0xbc9c) < local_24) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          }
        }
        break;
      }
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        break;
      }
LAB_005062ff:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
      break;
    case 3:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar4 = param_1 + 0x150;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        break;
      }
      *(uint *)(param_1 + 0x23ac) = 0;
      *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
      local_80 = 0;
      local_78 = 4.0f;
      local_7c = 0;
      uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                        (*(int *)(param_1 + 0xbca4),&local_80,0x3f000000,0x3e32b8c2);
      core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar7);
      iVar5 = *(int *)(param_1 + 0xbca4);
      local_11c = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
      local_118 = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
      local_114 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
      if (12.0f <=
          SQRT(local_114 * local_114 + local_11c * local_11c + local_118 * local_118)) {
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3dcccccd);
        if (iVar5 == 0) break;
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0xe,1);
          break;
        }
      }
      else {
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
        if (iVar5 == 0) {
          iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,4,1);
            break;
          }
          goto LAB_005062ff;
        }
        iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
        if (iVar5 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0xe,1);
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0xf,1);
      break;
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1a0);
      local_19c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      local_16c = param_1;
      local_168 = param_1;
      local_14 = local_19c;
      uVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_b0,&DAT_02dd1184,_DAT_01e57220 * 0x30 + param_1 + 0xfd0,0x3f800000,
                         local_1a0);
      uVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_a4,uVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar7);
      local_19c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41700000,0x41f00000);
      local_16c = param_1;
      local_168 = param_1;
      local_14 = local_19c;
      uVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_50,&DAT_02dd1184,_DAT_01e57218 * 0x30 + param_1 + 0xfd0,0x3f800000,
                         local_1a0);
      uVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_8c,uVar7);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar7);
      break;
    case 9:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (param_1 + 0x150,local_44,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_128,uVar7);
        FUN_004b0480(INT_005b96c4,local_128,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 10:
      fVar2 = *(float *)(param_1 + 0xbd28) - param_2;
      *(float *)(param_1 + 0xbd28) = fVar2;
      if (fVar2 < 0.0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xb,1);
      }
      break;
    case 0xe:
    case 0xf:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      }
      else {
        local_f8 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
        local_f4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
        local_f0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_d4,&local_f8);
        *(uint *)(param_1 + 0x34) = local_d0;
      }
    }
    goto switchD_00505ff7_caseD_5;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00505c6d:
      uVar7 = 2;
    }
    else {
LAB_00505fcd:
      uVar7 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar7,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00505c6d;
    if (uVar1 != 3) goto LAB_00505fcd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_00505ff7_caseD_5:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar4 != 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_104 = *(float *)(param_1 + 0x2420) * param_2;
    local_100 = *(float *)(param_1 + 0x2424) * param_2;
    local_fc = param_2 * *(float *)(param_1 + 0x2428);
    local_ec = local_104 + *(float *)(param_1 + 0x2414);
    local_e8 = local_100 + *(float *)(param_1 + 0x2418);
    local_e4 = local_fc + *(float *)(param_1 + 0x241c);
    local_68 = local_ec + *(float *)(param_1 + 0x23a4);
    local_64 = local_e8 + *(float *)(param_1 + 0x23a8);
    local_60 = local_e4 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_68);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
