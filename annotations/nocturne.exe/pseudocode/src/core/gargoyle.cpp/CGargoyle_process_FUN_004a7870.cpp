// Name: core_gargoyle.cpp_CGargoyle_process_FUN_004a7870
// Address: 004a7870
// Address Range: [[004a7870, 004a8251]]
// Convention: unknown
// Signature: void core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gargoyle_cpp_CGargoyle_process_FUN_004a7870(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  byte local_104 [4];
  float local_100;
  int local_d0;
  int local_cc;
  byte local_c8 [4];
  float local_c4;
  byte local_bc [12];
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  byte local_8c [12];
  int local_80;
  int local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  byte local_68 [4];
  float local_64;
  float local_5c;
  int local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  float local_30;
  float local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if (*(int *)(iVar3 + 0x24) == 8) {
      return;
    }
    if (*(int *)(iVar3 + 0x24) == 5) {
      return;
    }
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_2c = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar3 = param_1 + 0x150;
  while (0.0 < local_2c) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar3,&local_2c);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar4);
  }
  fVar2 = (float)3.1415926535000001;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
  iVar5 = *(int *)(iVar5 + 0x24);
  local_28 = iVar5;
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar6 == 0) {
    switch(iVar5) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar5 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(param_1);
      if (iVar5 == 0) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
        *(float *)(param_1 + 0xbd7c) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,5,1);
        iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd68));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)(param_1 + 0xbd68) = uVar4;
        }
      }
      else {
        if (*(int *)(param_1 + 0xbd78) == 0) {
          iVar5 = *(int *)(param_1 + 0xbca4);
          if (iVar5 == 0) {
            iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
            if (iVar5 != 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
            }
            break;
          }
          local_a4 = *(float *)(iVar5 + 0x20) - *(float *)(param_1 + 0x20);
          local_a0 = *(float *)(iVar5 + 0x24) - *(float *)(param_1 + 0x24);
          local_9c = *(float *)(iVar5 + 0x28) - *(float *)(param_1 + 0x28);
          local_1c = SQRT(local_9c * local_9c + local_a4 * local_a4 + local_a0 * local_a0);
          local_18 = local_1c;
          if (local_1c < 0x40400000) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_68,&local_a4);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_64 - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)0.52359877558333301) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,3,1);
            }
          }
          if (*(float *)(param_1 + 0xbc9c) <= local_1c) break;
          if (_DAT_0059df48 <= local_1c) {
            iVar3 = core_actor_cpp_randomChance_FUN_0040dea0(0x3dcccccd);
            if (iVar3 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
            }
            break;
          }
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
      }
      break;
    case 1:
    case 2:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar5 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(param_1);
      iVar3 = param_1 + 0x150;
      if (iVar5 == 0) {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000);
        *(float *)(param_1 + 0xbd7c) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,5,1);
        iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd68));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"gargoyle-stone.wav");
          *(uint *)(param_1 + 0xbd68) = uVar4;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0xbd78);
        if (iVar5 == 0) {
          if (*(int *)(param_1 + 0xbca4) == 0) {
            iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
            if (iVar5 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
            }
          }
          else {
            *(uint *)(param_1 + 0x23ac) = 0;
            local_78 = 0x40400000;
            *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
            *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
            local_20 = local_78;
            local_80 = iVar5;
            local_7c = iVar5;
            uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                              (*(int *)(param_1 + 0xbca4),&local_80,0x3f000000,0x3e32b8c2);
            iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                              (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar4);
            if (-1 < iVar6) {
              local_5c = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
              local_54 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
              local_30 = SQRT(local_54 * local_54 + local_5c * local_5c);
              local_58 = iVar5;
              local_24 = local_30;
              if (_DAT_0059df48 < local_30) {
                iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3dcccccd);
                if (iVar5 == 0) {
                  uVar4 = 2;
                }
                else {
                  uVar4 = 4;
                }
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,uVar4,1);
              }
              if ((local_24 <= local_20) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
                iVar3 = *(int *)(param_1 + 0xbca4);
                local_50 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
                local_4c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
                local_48 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_c8,&local_50)
                ;
                local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                            (local_c4 - *(float *)(param_1 + 0x34));
                if (ABS(local_14) < (float)0.52359877558333301) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (param_1 + 0x150,3,1);
                  *(uint *)(param_1 + 0xbca0) = 0x3f800000;
                }
              }
              if (*(float *)(param_1 + 0xbc9c) < local_24) {
                core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
              }
            }
          }
        }
        else {
          *(uint *)(param_1 + 0x23ac) = 0;
          *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
          *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
          local_44 = 0;
          local_40 = 0;
          local_3c = 0;
          uVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbd60) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbd60),&local_44,0x3f000000,0x3e32b8c2);
          core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                    (param_1,*(int *)(param_1 + 0xbd60) + 0x20,uVar4);
        }
      }
      break;
    case 3:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_104);
      local_100 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40400000,0x40a00000);
      local_d0 = param_1;
      local_cc = param_1;
      local_14 = local_100;
      uVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_8c,&DAT_02dd1184,_DAT_01c78b20 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                         local_104);
      uVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_bc,uVar4);
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar4);
      break;
    case 5:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar5 = core_gargoyle_cpp_CGargoyle_shouldMove_FUN_004a7710(param_1);
      if ((iVar5 != 0) &&
         (fVar2 = *(float *)(param_1 + 0xbd7c) - param_2, *(float *)(param_1 + 0xbd7c) = fVar2,
         fVar2 < 0.0)) {
        *(uint *)(param_1 + 0xbd7c) = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
        iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd68));
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"gargoyle-alive?.wav");
          *(uint *)(param_1 + 0xbd68) = uVar4;
        }
      }
    }
    goto switchD_004a818f_caseD_4;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004a7972:
      uVar4 = 1;
    }
    else {
LAB_004a7bc7:
      uVar4 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar4,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004a7972;
    if (uVar1 != 3) goto LAB_004a7bc7;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_004a818f_caseD_4:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar3 != 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_98 = *(float *)(param_1 + 0x2420) * param_2;
    local_94 = *(float *)(param_1 + 0x2424) * param_2;
    local_90 = param_2 * *(float *)(param_1 + 0x2428);
    local_74 = local_98 + *(float *)(param_1 + 0x2414);
    local_70 = local_94 + *(float *)(param_1 + 0x2418);
    local_6c = local_90 + *(float *)(param_1 + 0x241c);
    local_b0 = local_74 + *(float *)(param_1 + 0x23a4);
    local_ac = local_70 + *(float *)(param_1 + 0x23a8);
    local_a8 = local_6c + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_b0);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  iVar3 = local_28;
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  if (iVar3 == 5) {
    *(int *)(param_1 + 0xbd6c) = *(int *)(param_1 + 0xbd54) << 8;
    *(int *)(param_1 + 0xbd70) = *(int *)(param_1 + 0xbd58) << 8;
    *(int *)(param_1 + 0xbd74) = *(int *)(param_1 + 0xbd5c) << 8;
  }
  else {
    *(uint *)(param_1 + 0xbd70) = 0xffff;
    *(uint *)(param_1 + 0xbd74) = 0xffff;
    *(uint *)(param_1 + 0xbd6c) = 0xffff;
  }
  if (*(int *)(param_1 + 0x108) < *(int *)(param_1 + 0xbd6c)) {
    iVar3 = *(int *)(param_1 + 0x108) + _DAT_01bd1d80;
    *(int *)(param_1 + 0x108) = iVar3;
    if (*(int *)(param_1 + 0xbd6c) < iVar3) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xbd6c);
    }
  }
  else if (*(int *)(param_1 + 0xbd6c) < *(int *)(param_1 + 0x108)) {
    iVar3 = *(int *)(param_1 + 0x108) - _DAT_01bd1d80;
    *(int *)(param_1 + 0x108) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xbd6c)) {
      *(int *)(param_1 + 0x108) = *(int *)(param_1 + 0xbd6c);
    }
  }
  if (*(int *)(param_1 + 0x10c) < *(int *)(param_1 + 0xbd70)) {
    iVar3 = *(int *)(param_1 + 0x10c) + _DAT_01bd1d80;
    *(int *)(param_1 + 0x10c) = iVar3;
    if (*(int *)(param_1 + 0xbd70) < iVar3) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0xbd70);
    }
  }
  else if (*(int *)(param_1 + 0xbd70) < *(int *)(param_1 + 0x10c)) {
    iVar3 = *(int *)(param_1 + 0x10c) - _DAT_01bd1d80;
    *(int *)(param_1 + 0x10c) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xbd70)) {
      *(int *)(param_1 + 0x10c) = *(int *)(param_1 + 0xbd70);
    }
  }
  if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0xbd74)) {
    iVar3 = *(int *)(param_1 + 0x110) + _DAT_01bd1d80;
    *(int *)(param_1 + 0x110) = iVar3;
    if (*(int *)(param_1 + 0xbd74) < iVar3) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xbd74);
      return;
    }
  }
  else if (*(int *)(param_1 + 0xbd74) < *(int *)(param_1 + 0x110)) {
    iVar3 = *(int *)(param_1 + 0x110) - _DAT_01bd1d80;
    *(int *)(param_1 + 0x110) = iVar3;
    if (iVar3 < *(int *)(param_1 + 0xbd74)) {
      *(int *)(param_1 + 0x110) = *(int *)(param_1 + 0xbd74);
      return;
    }
  }
  return;
}
