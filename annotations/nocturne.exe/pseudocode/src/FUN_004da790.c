// Name: FUN_004da790
// Address: 004da790
// Address Range: [[004da790, 004db6e3]]
// Convention: unknown
// Signature: void FUN_004da790(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004da790(int param_1,float param_2)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte local_19c [4];
  uint local_198;
  int local_168;
  int local_164;
  byte local_160 [4];
  float local_15c;
  int local_12c;
  int local_128;
  float local_124;
  float local_120;
  float local_11c;
  byte local_118 [12];
  float local_10c;
  float local_108;
  float local_104;
  byte local_100 [12];
  byte local_f4 [4];
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  byte local_dc [12];
  float local_d0;
  float local_cc;
  float local_c8;
  byte local_c4 [12];
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  byte local_94 [12];
  uint local_88;
  uint local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [4];
  float local_6c;
  float local_64;
  uint local_60;
  float local_5c;
  byte local_58 [4];
  float local_54;
  byte local_4c [20];
  float local_38;
  uint local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar4 = FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 0xbd48) != 0) {
      core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(param_1);
      core_charactr_cpp_CCharacter_updateCarriedObjects_FUN_00429220(param_1,param_2);
    }
    return;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf0) * 4) == 0) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_19c);
    local_168 = param_1;
    local_164 = param_1;
    local_198 = 0x4479f99a;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,local_19c);
  }
  if (*(int *)(param_1 + 0xb640) != 0) {
    *(uint *)(param_1 + 0xb644) = 0;
  }
  if (0 < *(int *)(param_1 + 0x2f08)) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbdbc));
    iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
    if (((iVar4 == 0) &&
        (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdc4)),
        iVar4 == 0)) &&
       (iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdb8)),
       iVar4 == 0)) {
      uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"mob-scream?.wav");
      *(uint *)(param_1 + 0xbdc4) = uVar6;
    }
  }
  fVar3 = *(float *)(param_1 + 0xbdf8) - param_2;
  *(float *)(param_1 + 0xbdf8) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0xbdf8) = 0;
  }
  fVar3 = *(float *)(param_1 + 0xbd3c) - param_2;
  *(float *)(param_1 + 0xbd3c) = fVar3;
  if (fVar3 < 0.0) {
    *(uint *)(param_1 + 0xbd3c) = 0;
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdd4) * 4) == 0) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
  }
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdcc) * 4) == 0) {
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
  }
  if ((*(int *)(param_1 + 0xbd50) == 0) &&
     (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1 + 0xbd54), iVar4 != 0)) {
    *(uint *)(param_1 + 0xbd50) = 1;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_38 = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = param_1 + 0x150;
  while (0.0 < local_38) {
    iVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar4,&local_38);
    if (iVar5 == 100) {
      iVar5 = *(int *)(param_1 + 0xbd30);
      if (iVar5 != 0) {
        *(uint *)(param_1 + 0xbd30) = 0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(param_1,1,iVar5,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar5);
    }
  }
  fVar3 = (float)_DAT_0058a339;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c);
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
  uVar6 = *(uint *)(iVar5 + 0x24);
  iVar5 = FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    switch(uVar6) {
    case 0:
      if (*(int *)(param_1 + 0xbd50) == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if (*(int *)(param_1 + 0xbca4) == 0) {
          iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar5 != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
          }
          break;
        }
        iVar5 = *(int *)(param_1 + 0xbd44);
        if (iVar5 != 0) {
          if (*(int *)(param_1 + 0xbd40) == 0) {
            local_d0 = *(float *)(param_1 + 0x20) - *(float *)(iVar5 + 0x20);
            local_cc = *(float *)(param_1 + 0x24) - *(float *)(iVar5 + 0x24);
            local_c8 = *(float *)(param_1 + 0x28) - *(float *)(iVar5 + 0x28);
            if ((float)_DAT_0058a351 <
                SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc)) {
              *(uint *)(param_1 + 0xbd40) = 1;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,8,1);
              break;
            }
          }
          else {
            *(uint *)(param_1 + 0xbd40) = 0;
          }
        }
        if (*(int *)(param_1 + 0xbd48) == 0) {
          iVar4 = *(int *)(param_1 + 0xbca4);
          local_10c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_108 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_104 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          local_20 = SQRT(local_104 * local_104 + local_10c * local_10c + local_108 * local_108);
          local_18 = local_20;
          if (local_20 < 0x40400000 + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_70,&local_10c);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_6c - *(float *)(param_1 + 0x34));
            if ((ABS(local_14) < (float)_DAT_0058a349) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,9,1);
              *(uint *)(param_1 + 0xbca0) = 0x40000000;
            }
          }
          if (local_20 < *(float *)(param_1 + 0xbc9c)) {
            if (_DAT_005a0928 <= local_20) {
              uVar6 = 8;
            }
            else {
              uVar6 = 1;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
          }
          if ((*(int *)(param_1 + 0xbd34) == 0) &&
             (iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f333333), iVar4 != 0)) {
            core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(param_1,1);
            *(uint *)(param_1 + 0xbd34) = 1;
          }
          else {
            *(uint *)(param_1 + 0xbd34) = 1;
          }
          break;
        }
        if (*(float *)(param_1 + 0xbdf4) <= (float)_DAT_0058a341) break;
        iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e800000);
        if (iVar4 != 0) {
          core_mobster_cpp_CMobster_dismountVehicle_FUN_004da670(param_1);
          break;
        }
      }
      else {
        *(uint *)(param_1 + 0xbca4) = *(uint *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
        if (*(float *)(param_1 + 0xbdf4) <= (float)_DAT_0058a341) break;
      }
      core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(param_1);
      break;
    case 1:
    case 8:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar4 = param_1 + 0x150;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar5 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar5 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
        }
      }
      else if (*(int *)(param_1 + 0xbd40) == 0) {
        iVar4 = core_mobster_cpp_CMobster_processWeaponPickup_FUN_004dbce0(param_1,param_2);
        if (iVar4 == 0) {
          local_24 = 0x40400000 + 1.0;
          if (*(int *)(param_1 + 0x24f0) != 0) {
            local_24 = 0x41F00000;
          }
          *(uint *)(param_1 + 0x23ac) = 0;
          *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
          *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
          local_a0 = 0;
          local_28 = 0x40400000;
          local_98 = 0x40400000;
          local_9c = 0;
          uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbca4),&local_a0,0x3f000000,0x3e32b8c2);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
          if (-1 < iVar4) {
            pfVar1 = (float *)(param_1 + 0x20);
            local_64 = *pfVar1 - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
            local_5c = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
            local_30 = SQRT(local_5c * local_5c + local_64 * local_64);
            local_60 = 0;
            local_1c = local_30;
            if ((local_30 <= local_24) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
              if (*(int *)(param_1 + 0x24f0) == 0) {
                iVar4 = *(int *)(param_1 + 0xbca4);
                local_b8 = *(float *)(iVar4 + 0x20) - *pfVar1;
                local_b4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
                local_b0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_f4,&local_b8)
                ;
                local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                            (local_f0 - *(float *)(param_1 + 0x34));
                if (ABS(local_14) < (float)_DAT_0058a349) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (param_1 + 0x150,9,1);
                }
              }
              else if (local_28 + 1.0 <= local_30) {
                if (((float)_DAT_0058a341 < *(float *)(param_1 + 0xbdf4)) &&
                   (*(float *)(param_1 + 0xbdf8) <= 0.0)) {
                  *(uint *)(param_1 + 0xbd3c) = 0;
                  iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e99999a);
                  if (iVar4 != 0) {
                    core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(param_1,2);
                  }
                  if (*(float *)(param_1 + 0xbd3c) <= 0.0) {
                    core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(param_1);
                  }
                  else if (*(int *)(param_1 + 0x24ac) == 0) {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              (param_1 + 0x150,10,1);
                  }
                  else {
                    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                              (param_1 + 0x150,0xb,1);
                  }
                }
              }
              else {
                iVar4 = *(int *)(param_1 + 0xbca4);
                local_e8 = *(float *)(iVar4 + 0x20) - *pfVar1;
                local_e4 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
                local_e0 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_58,&local_e8)
                ;
                local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                            (local_54 - *(float *)(param_1 + 0x34));
                if ((ABS(local_14) < (float)_DAT_0058a349) && (*(float *)(param_1 + 0xbca0) <= 0.0))
                {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                            (param_1 + 0x150,9,1);
                  *(uint *)(param_1 + 0xbca0) = 0x40000000;
                }
              }
              *(uint *)(param_1 + 0xbca0) = 0x3f800000;
            }
            if (*(float *)(param_1 + 0xbc9c) < local_30) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
            }
          }
        }
      }
      else {
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_88 = 0;
        local_80 = 0x40400000;
        local_84 = 0;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbd44) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbd44),&local_88,0x3f000000,0x3e32b8c2);
        iVar5 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbd44) + 0x20,uVar6);
        if (iVar5 < 1) {
          if (iVar5 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
            *(uint *)(param_1 + 0xbd44) = 0;
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
      }
      break;
    case 2:
    case 6:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if (*(int *)(param_1 + 0xbca4) != 0) {
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(param_1 + 0x24f0),_DAT_02ddf9a8);
        if (iVar4 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
          local_34 = *(uint *)(iVar4 + 0x560);
          *(uint *)(iVar4 + 0x560) = 100;
          iVar5 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xe0))(iVar4);
          if (iVar5 != 0) {
            (**(code **)(*(int *)(iVar4 + 0x14c) + 0xdc))(iVar4);
          }
          *(uint *)(iVar4 + 0x560) = local_34;
        }
        iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(param_1 + 0x24ac),_DAT_02ddf9a8);
        local_2c = iVar4;
        if (iVar4 != 0) {
          core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
          uVar6 = *(uint *)(iVar4 + 0x560);
          *(uint *)(iVar4 + 0x560) = 100;
          iVar5 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xe0))(iVar4);
          if (iVar5 == 0) {
            *(uint *)(local_2c + 0x560) = uVar6;
          }
          else {
            (**(code **)(*(int *)(iVar4 + 0x14c) + 0xdc))(iVar4);
            *(uint *)(local_2c + 0x560) = uVar6;
          }
        }
      }
      if ((*(float *)(param_1 + 0xbdf4) < (float)_DAT_0058a341) ||
         (*(float *)(param_1 + 0xbdf8) <= 0.0)) {
        if (*(int *)(param_1 + 0xbd50) == 0) {
          uVar7 = 0x40800000;
          uVar6 = 0x40000000;
        }
        else {
          uVar7 = 0x40a00000;
          uVar6 = 0x40800000;
        }
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(uVar6,uVar7);
        *(float *)(param_1 + 0xbdf8) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e99999a);
        if (iVar4 != 0) {
          core_mobster_cpp_CMobster_playTaunt_FUN_004dc940(param_1,3);
        }
      }
      break;
    case 5:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar4,local_4c,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_c4,uVar6);
        FUN_004b0480(0x01C78C7C,local_c4,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 9:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_160);
      local_15c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      local_12c = param_1;
      local_128 = param_1;
      local_14 = local_15c;
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdcc) * 4) != 0) {
        uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (local_118,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_01ccdbac * 0x30,0x3ecccccd
                           ,local_160);
        uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_100,uVar6);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar6);
      }
      local_15c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      local_14 = local_15c;
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdd4) * 4) != 0) {
        uVar6 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (local_94,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_01ccdbb0 * 0x30,0x3ecccccd,
                           local_160);
        uVar6 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_dc,uVar6);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar6);
      }
      break;
    case 10:
    case 0xb:
      if (*(float *)(param_1 + 0xbd3c) <= 0.0) {
        core_mobster_cpp_CMobster_startFiringAttack_FUN_004dc110(param_1);
      }
    }
    goto switchD_004db6cf_caseD_3;
  }
  uVar2 = *(uint *)(param_1 + 0x25a8);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_004daabc:
      uVar6 = 1;
    }
    else {
LAB_004dacfc:
      uVar6 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
  }
  else {
    if (uVar2 < 3) goto LAB_004daabc;
    if (uVar2 != 3) goto LAB_004dacfc;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_004db6cf_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  if (*(int *)(param_1 + 0xbd48) == 0) {
    iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_1 + 0xbca4);
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xec))(iVar4), iVar4 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (0x01E57284,*(uint *)(param_1 + 0xbca4));
      }
      *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_0058a359;
      local_ac = *(float *)(param_1 + 0x2420) * param_2;
      local_a8 = *(float *)(param_1 + 0x2424) * param_2;
      local_a4 = param_2 * *(float *)(param_1 + 0x2428);
      local_124 = local_ac + *(float *)(param_1 + 0x2414);
      local_120 = local_a8 + *(float *)(param_1 + 0x2418);
      local_11c = local_a4 + *(float *)(param_1 + 0x241c);
      local_7c = local_124 + *(float *)(param_1 + 0x23a4);
      local_78 = local_120 + *(float *)(param_1 + 0x23a8);
      local_74 = local_11c + *(float *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x241c) = 0;
      *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
      *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
      *(uint *)(param_1 + 0x23ac) = 0;
      *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
      *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_7c);
    }
  }
  else {
    core_mobster_cpp_CMobster_positionOnVehicle_FUN_004da5a0(param_1);
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x24f0),_DAT_02ddf9a8);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x14c) + 4))(iVar4,param_2);
  }
  iVar4 = core_actor_cpp_castToClassHash_FUN_0040d890
                    (*(uint *)(param_1 + 0x24ac),_DAT_02ddf9a8);
  if (iVar4 != 0) {
    (**(code **)(*(int *)(iVar4 + 0x14c) + 4))(iVar4,param_2);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (iVar4 == 0) {
    core_mobster_cpp_CMobster_aimTommyGun_FUN_004db6f0(param_1,param_2);
  }
  FUN_0042a150(param_1,param_2);
  return;
}
