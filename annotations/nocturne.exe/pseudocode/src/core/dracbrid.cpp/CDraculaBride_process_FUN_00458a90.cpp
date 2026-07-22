// Name: core_dracbrid.cpp_CDraculaBride_process_FUN_00458a90
// Address: 00458a90
// Address Range: [[00458a90, 00459f65]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dracbrid_cpp_CDraculaBride_process_FUN_00458a90(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  uint uVar10;
  uint local_494 [25];
  byte local_430 [100];
  byte local_3cc [100];
  byte local_368 [100];
  byte local_304 [4];
  float local_300;
  int local_2d0;
  int local_2cc;
  byte local_2c8 [4];
  float local_2c4;
  int local_294;
  int local_290;
  byte local_28c [4];
  float local_288;
  int local_258;
  int local_254;
  byte local_250 [4];
  float local_24c;
  int local_21c;
  int local_218;
  byte local_214 [4];
  float local_210;
  int local_1e0;
  int local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  byte local_1cc [12];
  byte local_1c0 [12];
  byte local_1b4 [12];
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  byte local_190 [12];
  byte local_184 [12];
  uint local_178;
  uint local_174;
  uint local_170;
  byte local_16c [12];
  float local_160;
  float local_15c;
  float local_158;
  byte local_154 [12];
  uint local_148;
  uint local_144;
  uint local_140;
  byte local_13c [12];
  byte local_130 [12];
  float local_124;
  float local_120;
  float local_11c;
  byte local_118 [12];
  byte local_10c [12];
  byte local_100 [12];
  byte local_f4 [12];
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  byte local_d0 [12];
  uint local_c4;
  uint local_c0;
  uint local_bc;
  byte local_b8 [12];
  byte local_ac [12];
  float local_a0;
  uint local_9c;
  uint local_98;
  byte local_94 [12];
  byte local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [4];
  float local_6c;
  byte local_64 [12];
  uint local_58;
  uint local_54;
  uint local_50;
  byte local_4c [20];
  float local_38;
  uint local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0xbe4c) != 0) {
    fVar2 = *(float *)(param_1 + 0xbe50) - param_2;
    *(float *)(param_1 + 0xbe50) = fVar2;
    if (0.0 <= fVar2) {
      iVar4 = 0;
      if (0 < *(int *)(param_1 + 0xbdd0)) {
        fVar7 = (float10)_DAT_0059c40c;
        fVar8 = (float10)65535;
        iVar3 = param_1;
        do {
          iVar6 = *(int *)(iVar3 + 0xbdd4);
          *(uint *)(iVar6 + 0xfc) = 1;
          *(uint *)(iVar6 + 0xc9c) = 1;
          iVar4 = iVar4 + 1;
          local_494[0] = 0x458c6e;
          fVar9 = (float10)round
                                     (((float10)*(float *)(param_1 + 0xbe50) * fVar8) / fVar7);
          *(int *)(iVar6 + 0xca8) = (int)ROUND(fVar9);
          iVar3 = iVar3 + 4;
        } while (iVar4 < *(int *)(param_1 + 0xbdd0));
      }
    }
    else {
      *(uint *)(param_1 + 0xbe4c) = 0;
      *(uint *)(param_1 + 0x70) = 2;
      *(uint *)(param_1 + 0xbe50) = 0;
      iVar3 = 0;
      iVar4 = param_1;
      if (0 < *(int *)(param_1 + 0xbdd0)) {
        do {
          *(uint *)(*(int *)(iVar4 + 0xbdd4) + 0x70) = 2;
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < *(int *)(param_1 + 0xbdd0));
      }
    }
  }
  core_dracbrid_cpp_CDraculaBride_updateFreakySounds_FUN_0045b020(param_1,param_2);
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (0.0 <= *(float *)(param_1 + 0xbdbc)) {
    *(float *)(param_1 + 0xbdbc) = *(float *)(param_1 + 0xbdbc) - param_2;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_38 = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_38) {
    iVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_38);
    if (iVar4 == 0x29a) {
      *(uint *)(param_1 + 0x2dec) = 0;
      local_178 = 0;
      local_174 = 0x41a00000;
      local_170 = 0x41a00000;
      core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_ac,&local_178);
      core_dracbrid_cpp_CDraculaBride_explode_FUN_00459f70(param_1,local_ac,0xbf800000,1);
      fVar2 = _DAT_0059c40c;
      *(uint *)(param_1 + 0xbe4c) = 1;
      *(float *)(param_1 + 0xbe50) = fVar2;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,"brideexplosion.wav");
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar4);
    }
  }
  iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  iVar4 = *(int *)(iVar4 + 0x24);
  if (iVar4 == 9) {
    fVar2 = _DAT_0059c400 * param_2;
    *(float *)(param_1 + 0x2430) = _DAT_0059c404 * param_2 * *(float *)(param_1 + 0xbc8c);
    *(float *)(param_1 + 0x242c) = *(float *)(param_1 + 0xbc8c) * fVar2;
  }
  else {
    fVar2 = _DAT_0059c3fc * param_2;
    *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x2430) = fVar2 * *(float *)(param_1 + 0xbc8c);
  }
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar3 != 0) {
    uVar1 = *(uint *)(param_1 + 0x25a8);
    if (uVar1 < 2) {
      if (uVar1 == 1) {
LAB_00458d26:
        uVar10 = 0xe;
      }
      else {
LAB_00458f79:
        uVar10 = 0;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar10,1);
    }
    else {
      if (uVar1 < 3) goto LAB_00458d26;
      if (uVar1 != 3) goto LAB_00458f79;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    goto switchD_00458fa0_default;
  }
  switch(iVar4) {
  case 0:
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
    if (*(int *)(param_1 + 0xbca4) == 0) {
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xe,1);
      }
      break;
    }
    iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e800000);
    if ((iVar4 != 0) &&
       (iVar4 = core_actor_cpp_isOfClass_FUN_0040d7e0
                          (*(uint *)(param_1 + 0xbca4),"CHero"), iVar4 != 0)) {
      iVar3 = 0;
      iVar4 = 0;
      while ((iVar3 < *(int *)(0x01E57284 + 0x150bf4) &&
             ((iVar6 = core_actor_cpp_castToClassHash_FUN_0040d890
                                 (*(uint *)(iVar4 + 0x150bf8 + 0x01E57284),_DAT_01b4d25c),
              iVar6 == 0 || (*(int *)(iVar6 + 0xbdb0) == 0))))) {
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      }
      if (iVar3 == *(int *)(0x01E57284 + 0x150bf4)) {
        _sprintf(local_430,"bride-%d?.wav",*(uint *)(param_1 + 0xbdac));
        FUN_0045ab40(param_1,local_430,0x3f800000);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x17,1);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hotbride-disappear.wav");
        iVar4 = *(int *)(param_1 + 0xbca4);
        *(uint *)(param_1 + 0xbdb0) = 1;
        if ((uint *)(param_1 + 0xbdc0) != (uint *)(iVar4 + 0x20)) {
          *(uint *)(param_1 + 0xbdc0) = *(uint *)(iVar4 + 0x20);
          *(uint *)(param_1 + 0xbdc4) = *(uint *)(iVar4 + 0x24);
          *(uint *)(param_1 + 0xbdc8) = *(uint *)(iVar4 + 0x28);
        }
        *(uint *)(param_1 + 0xbdb4) = 0;
        break;
      }
    }
    if (*(float *)(param_1 + 0xbdbc) < 0.0) {
      local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000);
      *(float *)(param_1 + 0xbdbc) = local_14;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xd,1);
      break;
    }
    goto LAB_00459978;
  case 2:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_28c);
    local_288 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    local_258 = param_1;
    local_254 = param_1;
    local_14 = local_288;
    uVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (local_b8,&DAT_02dd1184,_DAT_01b4d260 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                        local_28c);
    uVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_100,uVar10);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar10);
    *(uint *)(param_1 + 0xbdcc) = 1;
    break;
  case 3:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_304);
    local_300 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    local_2d0 = param_1;
    local_2cc = param_1;
    local_14 = local_300;
    uVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (local_184,&DAT_02dd1184,_DAT_01b4d260 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                        local_304);
    uVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_4c,uVar10);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar10);
    break;
  case 7:
    if (*(int *)(param_1 + 0xbe4c) == 0) {
      uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                         (param_1 + 0x150,local_d0,_DAT_01b4d27c);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_f4,uVar10);
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0
                (0x01C08D04,local_f4,param_1 + 0x30,1,0);
      local_9c = *(uint *)(param_1 + 0x34);
      local_98 = *(uint *)(param_1 + 0x38);
      local_a0 = *(float *)(param_1 + 0x30) + 1.5897179988972888e-314._0_4_;
      core_fire_cpp_CFireEffect_createGunFlames_FUN_0048c3c0(0x01C08D04,local_f4,&local_a0,1,0);
    }
    break;
  case 8:
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
    if (*(int *)(param_1 + 0xbca4) == 0) {
      iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar4 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xe,1);
      }
    }
    else {
      if ((*(float *)(param_1 + 0x2434) < _DAT_0059c3f8) || (*(float *)(param_1 + 0xbdbc) < 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000)
        ;
        *(float *)(param_1 + 0xbdbc) = local_14;
      }
      if (*(int *)(param_1 + 0xbdcc) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,9,1);
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x19,1);
        *(uint *)(param_1 + 0xbdcc) = 0;
      }
    }
    break;
  case 9:
    if (*(float *)(param_1 + 0xbdb8) <= 0.0) {
      _sprintf(local_3cc,"bride-%d?.wav",*(uint *)(param_1 + 0xbdac));
      FUN_0045ab40(param_1,local_3cc,0x3f800000);
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e4ccccd);
      if (iVar4 != 0) {
        FUN_0045ab40(param_1,local_3cc,0x3f800000);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
    iVar4 = param_1 + 0x150;
    if (*(int *)(param_1 + 0xbca4) != 0) {
      if (0.0 <= *(float *)(param_1 + 0xbdbc)) {
        local_58 = 0;
        local_50 = 0x40000000;
        local_54 = 0;
        uVar10 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                           (*(int *)(param_1 + 0xbca4),&local_58,0x3f000000,0x3db2b8c2);
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar10);
        if (iVar3 < 0) {
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,8,1);
        }
        else if (iVar3 < 1) {
          iVar4 = *(int *)(param_1 + 0xbca4);
          local_124 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_120 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_11c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          if (&local_7c != &local_124) {
            local_7c = local_124;
            local_78 = local_120;
            local_74 = local_11c;
          }
          if ((float)10 <
              SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78)) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_70,&local_7c);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_6c - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)0.39269908168750001) {
              local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                          (0xbf490fdb,0x3f490fdb);
              *(float *)(param_1 + 0x34) = local_14 + *(float *)(param_1 + 0x34);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
            }
          }
        }
        else if (*(float *)(param_1 + 0xbca0) <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,2,1);
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hotbride-bite?.wav");
          *(uint *)(param_1 + 0xbca0) = 0x3f800000;
        }
      }
      else {
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000)
        ;
        *(float *)(param_1 + 0xbdbc) = local_14;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
      }
      break;
    }
    iVar4 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
    if (iVar4 == 0) break;
LAB_00459978:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xe,1);
    break;
  case 0xc:
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,param_1 + 0xbd48), iVar4 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xd,1);
    }
    break;
  case 0xe:
    if (*(float *)(param_1 + 0xbdb8) <= 0.0) {
      _sprintf(local_368,"bride-%d?.wav",*(uint *)(param_1 + 0xbdac));
      FUN_0045ab40(param_1,local_368,0x3f800000);
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e4ccccd);
      if (iVar4 != 0) {
        FUN_0045ab40(param_1,local_368,0x3f800000);
      }
    }
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
    uVar10 = 0x3FC00000;
    iVar4 = param_1 + 0x150;
    if (*(int *)(param_1 + 0xbca4) == 0) {
      iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
      if (iVar3 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
      }
    }
    else {
      local_34 = 0x3FC00000;
      *(uint *)(param_1 + 0x23ac) = 0;
      *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
      local_1a8 = 0;
      local_1a4 = 0;
      local_1a0 = uVar10;
      uVar10 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                         (*(int *)(param_1 + 0xbca4),&local_1a8,0x3f000000,0x3db2b8c2);
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                        (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar10);
      if (iVar3 < 0) {
        engine_console_cpp_CConsole_printf_FUN_0043ac60
                  (PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0,1);
      }
      else if ((0 < iVar3) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
        iVar3 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0x13,1);
        }
        if (iVar3 == 1) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x14,1);
        }
        if (iVar3 == 2) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x15,1);
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hotbride-swipe?.wav");
        }
        *(uint *)(param_1 + 0xbca0) = 0x3f800000;
      }
    }
    break;
  case 0xf:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0xbd48);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xb,1);
    }
    break;
  case 0x10:
    goto switchD_00459f4d_caseD_10;
  case 0x11:
    if ((*(int *)(param_1 + 0xbc90) != 0) || (*(int *)(param_1 + 0xdc) != 0)) break;
    uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                       (param_1 + 0x150,local_1b4,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_1cc,uVar10);
    FUN_004b0480(0x01C78C7C,local_1cc,0);
    goto switchD_00459f4d_caseD_10;
  case 0x12:
    iVar4 = *(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8);
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
    if ((iVar4 == 0) &&
       (iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                          (0x01C03A10,param_1 + 0xbd48), iVar4 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0xd,1);
    }
    break;
  case 0x13:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_2c8);
    local_2c4 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    local_294 = param_1;
    local_290 = param_1;
    local_14 = local_2c4;
    uVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (local_13c,&DAT_02dd1184,_DAT_01b4d260 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                        local_2c8);
    uVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_94,uVar10);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar10);
    *(uint *)(param_1 + 0xbdcc) = 1;
    break;
  case 0x14:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_214);
    local_210 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    local_1e0 = param_1;
    local_1dc = param_1;
    local_14 = local_210;
    uVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (local_88,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_01b4d260 * 0x30,0x3ecccccd,
                        local_214);
    uVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_16c,uVar10);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar10);
    *(uint *)(param_1 + 0xbdcc) = 1;
    break;
  case 0x15:
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_250);
    local_24c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40e00000,0x41700000);
    local_21c = param_1;
    local_218 = param_1;
    local_14 = local_24c;
    uVar10 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                       (local_1c0,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_01b4d268 * 0x30,0x3ecccccd,
                        local_250);
    uVar10 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_154,uVar10);
    core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar10);
    break;
  case 0x17:
    if (*(float *)(param_1 + 0xbdb8) <= 0.0) {
      _sprintf(local_494,"bride-%d?.wav",*(uint *)(param_1 + 0xbdac));
      FUN_0045ab40(param_1,local_494,0x3f800000);
      iVar4 = core_actor_cpp_randomChance_FUN_0040dea0(0x3e4ccccd);
      if (iVar4 != 0) {
        FUN_0045ab40(param_1,local_494,0x3f800000);
      }
    }
    switch(*(uint *)(param_1 + 0xbdb0)) {
    case 0:
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      break;
    case 1:
      fVar2 = *(float *)(param_1 + 0xbdb4) + param_2;
      *(float *)(param_1 + 0xbdb4) = fVar2;
      if (0x3F800000 < fVar2) {
        *(uint *)(param_1 + 0xbdb0) = 2;
        *(float *)(param_1 + 0xbdb4) = 0x3F800000;
      }
      local_2c = param_1 + 0x150;
      iVar3 = 0;
      local_148 = 0;
      local_144 = 0x40400000;
      local_140 = 0;
      iVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(local_2c);
      if (0 < *(int *)(iVar4 + 0x28558)) {
        local_24 = local_2c;
        do {
          uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                             (local_24,local_64,iVar3);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_118,uVar10);
          iVar3 = iVar3 + 1;
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,local_118,0x3f000000,&local_148,0xffff);
        } while (iVar3 < *(int *)(iVar4 + 0x28558));
      }
      break;
    case 2:
      local_30 = 1;
      local_1c = 0;
      for (local_18 = 0; fVar2 = 0x3F800000, local_18 < *(int *)(0x01E57284 + 0x14ecb0);
          local_18 = local_18 + 1) {
        iVar4 = *(int *)(0x01E57284 + local_1c + 0x14ecb4);
        if (((iVar4 != 0) && (iVar4 != param_1)) &&
           (iVar3 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4), iVar3 < 1)) {
          local_19c = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0xbdc0);
          local_198 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0xbdc4);
          local_194 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0xbdc8);
          if (SQRT(local_194 * local_194 + local_19c * local_19c + local_198 * local_198) <
              (float)5) goto switchD_00458fa0_default;
        }
        local_1c = local_1c + 4;
      }
      if (local_30 != 0) {
        *(uint *)(param_1 + 0xbdb0) = 3;
        *(float *)(param_1 + 0xbdb4) = fVar2;
        *(float *)(param_1 + 0x20) = *(float *)(param_1 + 0xbdc0);
        *(uint *)(param_1 + 0x24) = *(uint *)(param_1 + 0xbdc4);
        *(uint *)(param_1 + 0x28) = *(uint *)(param_1 + 0xbdc8);
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 != 0) {
          local_dc = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_d8 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_d4 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          puVar5 = (uint *)
                   core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0
                             (local_190,&local_dc);
          if ((uint *)(param_1 + 0x30) != puVar5) {
            *(uint *)(param_1 + 0x30) = *puVar5;
            *(uint *)(param_1 + 0x34) = puVar5[1];
            *(uint *)(param_1 + 0x38) = puVar5[2];
          }
          *(uint *)(param_1 + 0x38) = 0;
          *(uint *)(param_1 + 0x30) = 0;
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hotbride-disappear.wav");
      }
      break;
    case 3:
      local_c4 = 0;
      local_bc = 0;
      iVar4 = param_1 + 0x150;
      iVar3 = 0;
      local_c0 = 0x40400000;
      local_20 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0051e0a0(iVar4);
      if (0 < *(int *)(local_20 + 0x28558)) {
        do {
          uVar10 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                             (iVar4,local_10c,iVar3);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_130,uVar10);
          core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
                    (0x01C08D04,local_130,0x3f000000,&local_c4,0xffff);
          iVar3 = iVar3 + 1;
        } while (iVar3 < *(int *)(local_20 + 0x28558));
      }
      fVar2 = *(float *)(param_1 + 0xbdb4) - param_2;
      *(float *)(param_1 + 0xbdb4) = fVar2;
      if (fVar2 < 0.0) {
        *(uint *)(param_1 + 0xbdb4) = 0;
        *(uint *)(param_1 + 0xbdb0) = 0;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0xe,1);
        local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40000000,0x41a00000)
        ;
        *(float *)(param_1 + 0xbdbc) = local_14;
      }
    }
    break;
  case 0x1a:
    iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0xbd48);
    if (iVar4 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
    }
  }
switchD_00458fa0_default:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  local_28 = *(int *)(iVar4 + 0x24);
  if ((((local_28 != 0x11) && (local_28 != 0x10)) && (local_28 != 0xf)) ||
     (*(int *)(param_1 + 0xdc) != 0)) {
    if (local_28 == 3) {
      *(float *)(param_1 + 0x23ac) = *(float *)(param_1 + 0x23ac) * (float)2;
    }
    iVar4 = *(int *)(param_1 + 0xbca4);
    if ((iVar4 != 0) &&
       (iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xec))(iVar4), iVar4 == param_1)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                (0x01E57284,*(uint *)(param_1 + 0xbca4));
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_160 = *(float *)(param_1 + 0x2420) * param_2;
    local_15c = *(float *)(param_1 + 0x2424) * param_2;
    local_158 = param_2 * *(float *)(param_1 + 0x2428);
    local_1d8 = local_160 + *(float *)(param_1 + 0x2414);
    local_1d4 = local_15c + *(float *)(param_1 + 0x2418);
    local_1d0 = local_158 + *(float *)(param_1 + 0x241c);
    local_e8 = local_1d8 + *(float *)(param_1 + 0x23a4);
    local_e4 = local_1d4 + *(float *)(param_1 + 0x23a8);
    local_e0 = local_1d0 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_e8);
  }
  if (local_28 != 0x17) {
    *(uint *)(param_1 + 0xbdb0) = 0;
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
switchD_00459f4d_caseD_10:
  *(uint *)(param_1 + 0xbc90) = 1;
  goto switchD_00458fa0_default;
}
