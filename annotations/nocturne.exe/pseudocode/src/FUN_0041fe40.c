// Name: FUN_0041fe40
// Address: 0041fe40
// Address Range: [[0041fe40, 00420969]]
// Convention: unknown
// Signature: void FUN_0041fe40(int param_1,float param_2)

#include "nocturne.h"

void FUN_0041fe40(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte local_1f4 [4];
  float local_1f0;
  int local_1c0;
  int local_1bc;
  byte local_1b8 [4];
  float local_1b4;
  int local_184;
  int local_180;
  byte local_17c [4];
  float local_178;
  int local_148;
  int local_144;
  byte local_140 [4];
  float local_13c;
  int local_10c;
  int local_108;
  uint local_104;
  uint local_100;
  float local_fc;
  byte local_f8 [12];
  float local_ec;
  float local_e8;
  float local_e4;
  byte local_e0 [12];
  byte local_d4 [12];
  byte local_c8 [12];
  float local_bc;
  float local_b8;
  float local_b4;
  byte local_b0 [12];
  byte local_a4 [12];
  byte local_98 [12];
  uint local_8c;
  uint local_88;
  float local_84;
  byte local_80 [12];
  byte local_74 [12];
  byte local_68 [12];
  double local_5c;
  double local_54;
  double local_4c;
  double local_44;
  double local_34;
  double local_2c;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 != 0) {
    if (0.0 <= *(float *)(param_1 + 0xbd48)) {
      *(float *)(param_1 + 0xbd48) = *(float *)(param_1 + 0xbd48) - param_2;
    }
    iVar3 = param_1 + 0x150;
    local_18 = -1.0;
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
    uVar1 = *(uint *)(iVar4 + 0x24);
    if (uVar1 < 5) {
      if (uVar1 == 0) {
        iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
          if (*(int *)(param_1 + 0xbca4) != 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd4c));
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (*(uint *)(param_1 + 0xbd50)), iVar3 == 0)) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                (param_1,"ub-attack?.wav");
              *(uint *)(param_1 + 0xbd50) = uVar5;
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        }
      }
      else if (uVar1 == 1) {
        if (*(float *)(param_1 + 0xbd48) <= 0.0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x41200000,0x41a00000);
          *(float *)(param_1 + 0xbd48) = local_14;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,3,1);
          iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd4c));
          if ((iVar3 == 0) &&
             (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd50))
             , iVar3 == 0)) {
            uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"ub-howl?.wav");
            *(uint *)(param_1 + 0xbd50) = uVar5;
          }
        }
        fVar2 = (float)1.57079632675;
        iVar3 = param_1 + 0x150;
        *(float *)(param_1 + 0x242c) =
             *(float *)(param_1 + 0xbc8c) * (float)3 * param_2;
        *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0xbc8c) * fVar2 * param_2;
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if (*(int *)(param_1 + 0xbca4) == 0) {
          iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
          }
        }
        else {
          local_104 = 0;
          local_fc = 2.5f;
          local_100 = 0;
          uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbca4),&local_104,0x3f800000,0x3e32b8c2);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar5);
          if (iVar4 < 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
          }
          else if (((0 < iVar4) && (*(float *)(param_1 + 0xbca0) <= 0.0)) &&
                  (iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xec))
                                     (*(int *)(param_1 + 0xbca4)), iVar4 == 0)) {
            iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3f000000);
            if (iVar4 == 0) {
              uVar5 = 6;
            }
            else {
              uVar5 = 5;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,uVar5,1);
            iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd4c));
            if ((iVar3 == 0) &&
               (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50
                                  (*(uint *)(param_1 + 0xbd50)), iVar3 == 0)) {
              uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                (param_1,"ub-attack?.wav");
              *(uint *)(param_1 + 0xbd50) = uVar5;
            }
          }
        }
      }
    }
    else if (uVar1 < 6) {
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xec))(iVar4);
        if (iVar4 == 0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xbca0) = local_14;
          local_20 = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                      (iVar3);
          local_4c = (double)local_20;
          local_14 = local_20;
          if (local_20 <= (float)3) {
            local_18 = 2.5f;
            if ((local_4c < 1.0) || (2 < local_4c)) {
              local_44 = (double)local_20;
              if (((float)3 <= local_20) &&
                 ((local_44 <= 4 &&
                  (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd28) * 4) != 0)))) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_140);
                local_13c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                             (0x40e00000,0x41700000);
                local_10c = param_1;
                local_108 = param_1;
                local_14 = local_13c;
                uVar5 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (local_a4,&DAT_00764ae4,DAT_00764b30 * 0x30 + param_1 + 0xfd0,
                                   0x3ecccccd,local_140);
                uVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (param_1,local_68,uVar5);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar5);
              }
            }
            else if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd30) * 4) != 0) {
              core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1f4);
              local_1f0 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                           (0x40e00000,0x41700000);
              local_1c0 = param_1;
              local_1bc = param_1;
              local_14 = local_1f0;
              uVar5 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                (local_e0,&DAT_00764ae4,param_1 + 0xfd0 + DAT_00764b34 * 0x30,
                                 0x3ecccccd,local_1f4);
              uVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                (param_1,local_f8,uVar5);
              core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar5);
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
        }
      }
    }
    else if (uVar1 < 7) {
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xec))(iVar4);
        if (iVar4 == 0) {
          local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                      (0x3e4ccccd,0x3f000000);
          *(float *)(param_1 + 0xbca0) = local_14;
          local_1c = (float)core_motion_cpp_CMotionController_frameToMarkerPosition_FUN_004e1e60
                                      (iVar3);
          local_54 = (double)local_1c;
          local_14 = local_1c;
          if (local_1c <= (float)8) {
            local_18 = 2.5f;
            if (((1.0 <= local_54) && (local_54 <= 2)) ||
               ((local_2c = (double)local_1c, (float)5 <= local_1c &&
                (local_2c <= 6)))) {
              if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd30) * 4) != 0) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_17c);
                local_178 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                             (0x40e00000,0x41700000);
                local_148 = param_1;
                local_144 = param_1;
                local_14 = local_178;
                uVar5 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (local_80,&DAT_00764ae4,param_1 + 0xfd0 + DAT_00764b34 * 0x30,
                                   0x3ecccccd,local_17c);
                uVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (param_1,local_b0,uVar5);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar5);
              }
            }
            else {
              local_5c = (double)local_1c;
              if (((((float)3 <= local_1c) && (local_5c <= 4)) ||
                  ((local_34 = (double)local_1c, (float)7 <= local_1c &&
                   (local_34 <= 8)))) &&
                 (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd28) * 4) != 0)) {
                core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1b8);
                local_1b4 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                             (0x40e00000,0x41700000);
                local_184 = param_1;
                local_180 = param_1;
                local_14 = local_1b4;
                uVar5 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                                  (local_98,&DAT_00764ae4,param_1 + 0xfd0 + DAT_00764b30 * 0x30,
                                   0x3ecccccd,local_1b8);
                uVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                  (param_1,local_74,uVar5);
                core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar5);
              }
            }
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,1,1);
        }
      }
    }
    else if ((uVar1 == 0xe) && (*(int *)(param_1 + 0xbc90) == 0)) {
      uVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                        (iVar3,local_c8,0);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_d4,uVar5);
      FUN_004b0480(INT_005b96c4,local_d4,0);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
      *(uint *)(param_1 + 0xbc90) = 1;
    }
    if ((*(int *)(param_1 + 0xbca4) != 0) && (0.0 <= local_18)) {
      fVar2 = (float)2.5;
      *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0xbc8c) * (float)1.57079632675 * param_2
      ;
      *(float *)(param_1 + 0x242c) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
      local_8c = 0;
      local_84 = local_18;
      local_88 = 0;
      uVar5 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                        (*(int *)(param_1 + 0xbca4),&local_8c,0x40400000,0x3f060a92);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar5);
      if (iVar3 != 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        *(uint *)(param_1 + 0x2410) = 0;
      }
    }
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    local_24 = param_2 * *(float *)(param_1 + 0xbc8c);
    while (0.0 < local_24) {
      iVar3 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_24);
      if (iVar3 != 0x11) {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar3);
      }
    }
    if (0.0 < *(float *)(param_1 + 0xbca0)) {
      *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
    }
    *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x2410) + *(float *)(param_1 + 0x34);
    core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
    if (iVar3 != 0) {
      *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32
      ;
      local_bc = *(float *)(param_1 + 0x2420) * param_2;
      local_b8 = *(float *)(param_1 + 0x2424) * param_2;
      local_b4 = param_2 * *(float *)(param_1 + 0x2428);
      local_ec = local_bc + *(float *)(param_1 + 0x2414);
      local_e8 = local_b8 + *(float *)(param_1 + 0x2418);
      local_e4 = local_b4 + *(float *)(param_1 + 0x241c);
      iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      if (*(int *)(iVar3 + 0x24) != 1) {
        local_ec = local_ec + *(float *)(param_1 + 0x23a4);
        local_e8 = local_e8 + *(float *)(param_1 + 0x23a8);
        local_e4 = local_e4 + *(float *)(param_1 + 0x23ac);
      }
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_ec);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
    core_charactr_cpp_FUN_0042a150(param_1,param_2);
    if (*(int *)(param_1 + 0xbc90) == 0) {
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbd24),DAT_00764b40,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd24) * 4) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(uint *)(param_1 + 0xbd28),DAT_00764b38,0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                (param_1,*(uint *)(param_1 + 0xbd2c),DAT_00764b44,0x3e4ccccd);
      if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd2c) * 4) != 0) {
        core_charactr_cpp_CCharacter_spawnGoreAtBone_FUN_004278e0
                  (param_1,*(uint *)(param_1 + 0xbd30),DAT_00764b3c,0x3e4ccccd);
      }
      core_charactr_cpp_CCharacter_spawnBloodAtBone_FUN_00427990
                (param_1,*(uint *)(param_1 + 0xbd44),DAT_00764b2c,0x3f333333);
      core_charactr_cpp_CCharacter_processDamageDecals_FUN_004277f0(param_1);
    }
  }
  return;
}
