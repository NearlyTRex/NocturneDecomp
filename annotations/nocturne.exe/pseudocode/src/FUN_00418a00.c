// Name: FUN_00418a00
// Address: 00418a00
// Address Range: [[00418a00, 004194ac]]
// Convention: unknown
// Signature: void FUN_00418a00(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00418a00(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  float afStackY_1908 [1483];
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  byte *puVar12;
  byte local_1bc [4];
  uint local_1b8;
  uint local_188;
  int local_184;
  byte local_180 [4];
  uint local_17c;
  int local_14c;
  int local_148;
  float local_144;
  float local_140;
  float local_13c;
  float local_138;
  float local_134;
  float local_130;
  uint local_12c;
  float afStack_128 [7];
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_dc;
  float local_d8;
  float local_d4;
  uint local_d0;
  uint local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  byte local_a0 [24];
  float local_88;
  uint local_84;
  uint local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  byte local_58 [20];
  float local_44;
  float local_38;
  int local_34;
  float local_30;
  int local_2c;
  int local_28;
  float *local_24;
  int local_20;
  int local_1c;
  float *local_18;
  float local_14;
  
  bVar8 = 0;
  iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0xbd38);
  if (iVar4 != 0) {
    *(uint *)(param_1 + 0x2434) = 0;
    *(uint *)(param_1 + 0xbc90) = 1;
    *(uint *)(param_1 + 0xc348) = 0;
    if (*(int *)(param_1 + 0xc344) == 0) {
      core_boneguy_cpp_CBoneGuy_explode_FUN_0041a0f0(param_1);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004e1990(param_1 + 0x150,5,0);
  }
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) goto LAB_00418c90;
  if ((*(int *)(param_1 + 0xc344) == 1) && (0.0 < *(float *)(param_1 + 0x2434))) {
    fVar2 = *(float *)(param_1 + 0xc348) + param_2;
    *(float *)(param_1 + 0xc348) = fVar2;
    if (fVar2 <= *(float *)(param_1 + 0xbd9c)) {
      return;
    }
    core_boneguy_cpp_CBoneGuy_beginRecombine_FUN_0041a310(param_1);
  }
  if (*(int *)(param_1 + 0xc344) == 2) {
    fVar2 = param_2 / _DAT_0059a8a8 + *(float *)(param_1 + 0xc348);
    *(float *)(param_1 + 0xc348) = fVar2;
    if (fVar2 < 1.0) {
      local_1c = 0;
      if (*(int *)(param_1 + 0xbda0) < 1) {
        return;
      }
      local_2c = param_1 + 0xbda4;
      local_24 = (float *)(param_1 + 0xc348);
      local_28 = param_1 + 0xbdbc;
      local_20 = param_1 + 0xbdcc;
      local_18 = (float *)(param_1 + 0xbddc);
      do {
        pfVar5 = (float *)(local_1c * 0x48 + local_2c);
        local_44 = pfVar5[0x11];
        local_70 = *pfVar5 - *local_18;
        local_6c = pfVar5[1] - local_18[1];
        local_68 = pfVar5[2] - local_18[2];
        local_b8 = local_70 * *local_24;
        local_b4 = local_6c * *local_24;
        local_b0 = local_68 * *local_24;
        local_ac = *local_18 + local_b8;
        local_a8 = local_18[1] + local_b4;
        local_a4 = local_18[2] + local_b0;
        core_xform_cpp_slerpQuaternion_FUN_0055d2d0
                  (local_28,local_20,*(uint *)(param_1 + 0xc348));
        puVar11 = &local_12c;
        pfVar5 = &local_88;
        local_12c = afStack_128[3];
        afStack_128[(uint)bVar8 * -2] = afStack_128[(uint)bVar8 * -2 + 4];
        afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_128[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
        (afStack_128 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 1)[(uint)bVar8 * -2 + 1] =
             (afStack_128 + (uint)bVar8 * -2 + (uint)bVar8 * -2 + 5)[(uint)bVar8 * -2 + 1];
        core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(pfVar5,puVar11);
        local_88 = *(float *)(param_1 + 0xc348) * (float)6.2831853070000001 + local_88;
        *(float *)((int)local_44 + 0x20) = local_ac;
        *(float *)((int)local_44 + 0x24) = local_a8;
        *(float *)((int)local_44 + 0x28) = local_a4;
        if ((float *)((int)local_44 + 0x30) != &local_88) {
          *(float *)((int)local_44 + 0x30) = local_88;
          *(uint *)((int)local_44 + 0x34) = local_84;
          *(uint *)((int)local_44 + 0x38) = local_80;
        }
        if ((float *)((int)local_44 + 0xcb4) != &local_ac) {
          *(float *)((int)local_44 + 0xcb4) = local_ac;
          *(float *)((int)local_44 + 0xcb8) = local_a8;
          *(float *)((int)local_44 + 0xcbc) = local_a4;
        }
        if ((float *)((int)local_44 + 0xcc0) != &local_88) {
          *(float *)((int)local_44 + 0xcc0) = local_88;
          *(uint *)((int)local_44 + 0xcc4) = local_84;
          *(uint *)((int)local_44 + 0xcc8) = local_80;
        }
        local_28 = local_28 + 0x48;
        local_20 = local_20 + 0x48;
        local_18 = local_18 + 0x12;
        local_1c = local_1c + 1;
      } while (local_1c < *(int *)(param_1 + 0xbda0));
      return;
    }
    iVar7 = 0;
    core_skeleton_cpp_CDeformableModelInstance_showAllParts_FUN_0051dc90(param_1 + 0x150);
    iVar4 = param_1;
    if (0 < *(int *)(param_1 + 0xbda0)) {
      do {
        FUN_004d9110(0x01CC9450,*(uint *)(iVar4 + 0xbde8),1);
        *(uint *)(iVar4 + 0xbde8) = 0;
        iVar7 = iVar7 + 1;
        iVar4 = iVar4 + 0x48;
      } while (iVar7 < *(int *)(param_1 + 0xbda0));
    }
    *(uint *)(param_1 + 0xc344) = 0;
    fVar2 = *(float *)(param_1 + 0xbd9c) * (float)0.5;
    *(uint *)(param_1 + 0x2434) = 0x42c80000;
    *(float *)(param_1 + 0xbd9c) = fVar2;
    if (fVar2 <= (float)2.5) {
      *(uint *)(param_1 + 0xbd9c) = 0x40200000;
    }
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_38 = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = param_1 + 0x150;
  while (0.0 < local_38) {
    iVar7 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar4,&local_38);
    if (iVar7 == 100) {
      iVar7 = *(int *)(param_1 + 0xbd30);
      if (iVar7 != 0) {
        *(uint *)(param_1 + 0xbd30) = 0;
        core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(param_1,1,iVar7,0x3e4ccccd);
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar7);
    }
  }
  fVar3 = (float)3.1415926535000001;
  fVar2 = (float)0.25;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c) * fVar2;
  iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
  iVar7 = *(int *)(iVar7 + 0x24);
  local_34 = iVar7;
  iVar6 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar6 == 0) {
    switch(iVar7) {
    case 0:
      iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar7 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if (*(int *)(param_1 + 0xbca4) != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar7 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
        }
      }
      else {
        iVar4 = FUN_004196b0(param_1,param_2);
        if (iVar4 == 0) {
          local_30 = 2.0f;
          if (*(int *)(param_1 + 0x24f0) != 0) {
            local_30 = 3.0f;
          }
          local_d0 = 0;
          local_c8 = local_30;
          local_cc = 0;
          uVar9 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbca4),&local_d0,0x3f000000,0x3e32b8c2);
          iVar4 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar9);
          if (iVar4 < 0) {
            engine_console_cpp_CConsole_printf_FUN_0043ac60
                      (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          }
          else {
            fVar2 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
            fVar3 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
            if ((SQRT(fVar3 * fVar3 + fVar2 * fVar2) <= local_30 + (float)0.5) &&
               (*(float *)(param_1 + 0xbca0) <= 0.0)) {
              if (*(int *)(param_1 + 0x24f0) == 0) {
                uVar9 = 2;
              }
              else {
                uVar9 = 6;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0
                        (param_1 + 0x150,uVar9,1);
              sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd34));
              (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"boneguy-swing?.wav");
              *(uint *)(param_1 + 0xbca0) = 0x3f800000;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_180);
      local_17c = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
      puVar12 = local_180;
      local_14c = param_1;
      local_148 = param_1;
      uVar10 = 0x3ecccccd;
      local_14 = (float)local_17c;
      core_xform_cpp_transformVector3x4_FUN_0055a8b0();
      uVar9 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240();
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar9,uVar10,puVar12);
      break;
    case 5:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 6:
      iVar4 = *(int *)(param_1 + 0x24f0);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 0x14))(iVar4,&local_144);
        local_10c = local_144 + local_138;
        local_c4 = local_10c * 5.2220990168285998e-315._0_4_;
        local_108 = local_140 + local_134;
        local_104 = local_13c + local_130;
        local_c0 = local_108 * 5.2220990168285998e-315._0_4_;
        local_bc = local_104 * 5.2220990168285998e-315._0_4_;
        if (&local_f4 != &local_c4) {
          local_f4 = local_c4;
          local_f0 = local_c0;
        }
        if (&local_100 != &local_f4) {
          local_100 = local_f4;
          local_fc = local_f0;
        }
        local_f8 = local_13c;
        local_ec = local_130;
        pfVar5 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                    (*(uint *)(param_1 + 0x24f0),local_a0,&local_100);
        if (&local_100 != pfVar5) {
          local_100 = *pfVar5;
          local_fc = pfVar5[1];
          local_f8 = pfVar5[2];
        }
        pfVar5 = (float *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                                    (*(uint *)(param_1 + 0x24f0),local_58,&local_f4);
        if (&local_f4 != pfVar5) {
          local_f4 = *pfVar5;
          local_f0 = pfVar5[1];
          local_ec = pfVar5[2];
        }
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1bc);
        local_1b8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x41700000,0x41c80000);
        local_188 = *(uint *)(param_1 + 0x24f0);
        local_184 = param_1;
        local_14 = (float)local_1b8;
        core_enemy_cpp_CEnemy_testAttackLine_FUN_00479990(param_1,&local_100,&local_f4,local_1bc);
      }
    }
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x25a8);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_00418e39:
        uVar9 = 1;
      }
      else {
LAB_0041907c:
        uVar9 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar9,1);
    }
    else {
      if (uVar1 < 3) goto LAB_00418e39;
      if (uVar1 != 3) goto LAB_0041907c;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
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
  iVar4 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar4 != 0) {
    iVar4 = *(int *)(param_1 + 0xbca4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xec))(iVar4), iVar4 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(uint *)(param_1 + 0xbca4));
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_64 = *(float *)(param_1 + 0x2420) * param_2;
    local_60 = *(float *)(param_1 + 0x2424) * param_2;
    local_5c = param_2 * *(float *)(param_1 + 0x2428);
    local_7c = local_64 + *(float *)(param_1 + 0x2414);
    local_78 = local_60 + *(float *)(param_1 + 0x2418);
    local_74 = local_5c + *(float *)(param_1 + 0x241c);
    local_dc = local_7c + *(float *)(param_1 + 0x23a4);
    local_d8 = local_78 + *(float *)(param_1 + 0x23a8);
    local_d4 = local_74 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_dc);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  if ((local_34 == 1) &&
     (iVar4 = sound_sndmain_cpp_isWithinListenerRadius_FUN_00527880
                        ((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                         (double)*(float *)(param_1 + 0x28),0,0x40590000), iVar4 != 0)) {
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd34));
    if (iVar4 != 0) {
      return;
    }
    sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0,0x3f800000,2);
    sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005262d0((double)local_14);
    uVar9 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,"boneGuy-walkloop.wav")
    ;
    *(uint *)(param_1 + 0xbd34) = uVar9;
    sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
    return;
  }
LAB_00418c90:
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd34));
  return;
}
