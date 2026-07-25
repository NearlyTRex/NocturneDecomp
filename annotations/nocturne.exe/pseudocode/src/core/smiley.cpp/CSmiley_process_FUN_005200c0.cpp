// Name: core_smiley.cpp_CSmiley_process_FUN_005200c0
// Address: 005200c0
// Address Range: [[005200c0, 00520a19]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_process_FUN_005200c0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_smiley_cpp_CSmiley_process_FUN_005200c0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  uint uVar7;
  byte local_1cc [4];
  uint local_1c8;
  uint local_19c;
  int local_198;
  int local_194;
  byte local_190 [4];
  float local_18c;
  int local_15c;
  int local_158;
  byte local_154 [4];
  float local_150;
  int local_120;
  int local_11c;
  byte local_118 [48];
  uint local_e8;
  byte local_dc [12];
  byte local_d0 [12];
  byte local_c4 [4];
  float local_c0;
  byte local_b8 [12];
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  uint local_94;
  uint local_90;
  float local_8c;
  byte local_88 [12];
  float local_7c;
  float local_78;
  float local_74;
  byte local_70 [12];
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [12];
  byte local_40 [24];
  float local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  fVar1 = *(float *)(param_1 + 0xbd60) - param_2;
  *(float *)(param_1 + 0xbd60) = fVar1;
  if (fVar1 < 0.0) {
    *(uint *)(param_1 + 0xbd60) = 0;
  }
  if ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbd54) * 4) == 0) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1), iVar2 == 0)) {
    core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_1cc);
    local_19c = 0;
    local_198 = param_1;
    local_194 = param_1;
    local_1c8 = 0x461c3f9a;
    (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,local_1cc);
  }
  iVar2 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_28 = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar2 = param_1 + 0x150;
  while (0.0 < local_28) {
    uVar3 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar2,&local_28);
    if (uVar3 < 0x66) {
      if (uVar3 == 0x65) {
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
        }
        else {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0xe4))(iVar4,param_1,0);
          if (iVar4 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
          }
        }
      }
      else {
        core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar3);
      }
    }
    else if (uVar3 < 0x67) {
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 != 0) {
        (**(code **)(*(int *)(iVar4 + 0x14c) + 0xe8))(iVar4);
      }
    }
    else if (uVar3 == 0x67) {
      iVar4 = *(int *)(param_1 + 0xbd58) + 1;
      *(int *)(param_1 + 0xbd58) = iVar4;
      if (2 < iVar4) {
        if (*(int *)(param_1 + 0xbca4) == 0) {
          (**(code **)(iRam0000014c + 0xe8))(0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
        }
        else {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_118);
          local_e8 = 4;
          (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x100))
                    (*(int *)(param_1 + 0xbca4),local_118);
        }
      }
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar3);
    }
  }
  fVar1 = (float)3.1415926535000001;
  iVar2 = param_1 + 0x150;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar1 * *(float *)(param_1 + 0xbc8c);
  iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
  iVar4 = *(int *)(iVar4 + 0x24);
  local_24 = iVar4;
  iVar5 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 1:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 != 0) {
          local_58 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
          local_54 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
          local_50 = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
          local_20 = SQRT(local_50 * local_50 + local_58 * local_58 + local_54 * local_54);
          local_18 = local_20;
          if (local_20 < 2.5f + 1.0) {
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_c4,&local_58);
            local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00
                                        (local_c0 - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)0.52359877558333301) {
              *(uint *)(param_1 + 0xbd58) = 0;
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,9,1);
            }
          }
          if (local_20 < *(float *)(param_1 + 0xbd28)) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,2,1);
          }
        }
      }
      break;
    case 2:
      iVar4 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,"Capture");
      if (iVar4 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        iVar4 = *(int *)(param_1 + 0xbca4);
        if (iVar4 != 0) {
          if (param_1 == *(int *)(iVar4 + 0x2590)) {
            (**(code **)(*(int *)(iVar4 + 0x14c) + 0xe8))(iVar4);
          }
          local_8c = 2.5f;
          local_1c = 2.5f;
          *(uint *)(param_1 + 0x23ac) = 0;
          *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
          *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
          local_94 = 0;
          local_90 = 0;
          uVar7 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                            (*(int *)(param_1 + 0xbca4),&local_94,0x3f000000,0x3e32b8c2);
          iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                            (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar7);
          if ((-1 < iVar2) && (0 < iVar2)) {
            iVar2 = *(int *)(param_1 + 0xbca4);
            local_a0 = *(float *)(iVar2 + 0x20) - *(float *)(param_1 + 0x20);
            local_9c = *(float *)(iVar2 + 0x24) - *(float *)(param_1 + 0x24);
            local_98 = *(float *)(iVar2 + 0x28) - *(float *)(param_1 + 0x28);
            if ((SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c) <
                 local_1c + 1.0) && (*(float *)(param_1 + 0xbd24) <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
              *(uint *)(param_1 + 0xbd24) = 0x3f800000;
            }
          }
          break;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
      break;
    case 6:
      if (*(int *)(param_1 + 0xbca4) == 0) {
        (**(code **)(iRam0000014c + 0xe8))(0);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
      }
      else {
        core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_190);
        local_18c = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                     (0x40e00000,0x41700000);
        local_15c = param_1;
        local_158 = param_1;
        local_14 = local_18c;
        uVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                          (local_b8,&DAT_02dd1184,_DAT_02da8a7c * 0x30 + param_1 + 0xfd0,0x3f800000,
                           local_190);
        uVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_dc,uVar7);
        core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar7);
      }
      break;
    case 8:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                          (iVar2,local_40,0);
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_4c,uVar7);
        FUN_004b0480(INT_005b96c4,local_4c,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 9:
      iVar4 = *(int *)(param_1 + 0xbca4);
      if ((iVar4 == 0) || (*(int *)(iVar4 + 0x2590) == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
      }
      else {
        iVar4 = (**(code **)(*(int *)(iVar4 + 0x14c) + 0x104))(iVar4);
        if (iVar4 == 0) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_00423ed0(local_154);
          local_150 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0
                                       (0x40e00000,0x41700000);
          local_120 = param_1;
          local_11c = param_1;
          local_14 = local_150;
          uVar7 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                            (local_88,&DAT_02dd1184,param_1 + 0xfd0 + _DAT_02da8a7c * 0x30,
                             0x3f800000,local_154);
          uVar7 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_d0,uVar7);
          core_enemy_cpp_CEnemy_testAttackRadius_FUN_004798e0(param_1,uVar7);
        }
        else {
          (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))
                    (*(int *)(param_1 + 0xbca4));
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
        }
      }
      break;
    case 10:
      iVar4 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0x104))
                        (*(int *)(param_1 + 0xbca4));
      if (iVar4 != 0) {
        (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xe8))
                  (*(int *)(param_1 + 0xbca4));
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,1,1);
      }
    }
    goto switchD_00520915_caseD_3;
  }
  uVar3 = *(uint *)(param_1 + 0x25a8);
  if (uVar3 < 2) {
    if (uVar3 == 1) {
LAB_00520350:
      uVar7 = 2;
    }
    else {
LAB_0052044e:
      uVar7 = 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar7,1);
  }
  else {
    if (uVar3 < 3) goto LAB_00520350;
    if (uVar3 != 3) goto LAB_0052044e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_00520915_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xbd24)) {
    *(float *)(param_1 + 0xbd24) = *(float *)(param_1 + 0xbd24) - param_2;
  }
  if (local_24 == 0xb) {
    pfVar6 = (float *)core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
                                (param_1,local_70,(uint *)(param_1 + 0x23a4));
    *(float *)(param_1 + 0x20) = *pfVar6 + *(float *)(param_1 + 0x20);
    *(float *)(param_1 + 0x24) = pfVar6[1] + *(float *)(param_1 + 0x24);
    *(float *)(param_1 + 0x28) = pfVar6[2] + *(float *)(param_1 + 0x28);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  }
  else {
    iVar2 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
    if (iVar2 != 0) {
      iVar2 = *(int *)(param_1 + 0xbca4);
      if ((iVar2 != 0) &&
         (iVar2 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0xec))(iVar2), iVar2 == param_1)) {
        core_setcolid_cpp_CDemonSet_ignore_FUN_00511780
                  (0x01E57284,*(uint *)(param_1 + 0xbca4));
      }
      *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32
      ;
      local_64 = *(float *)(param_1 + 0x2420) * param_2;
      local_60 = *(float *)(param_1 + 0x2424) * param_2;
      local_5c = param_2 * *(float *)(param_1 + 0x2428);
      local_7c = local_64 + *(float *)(param_1 + 0x2414);
      local_78 = local_60 + *(float *)(param_1 + 0x2418);
      local_74 = local_5c + *(float *)(param_1 + 0x241c);
      local_ac = local_7c + *(float *)(param_1 + 0x23a4);
      local_a8 = local_78 + *(float *)(param_1 + 0x23a8);
      local_a4 = local_74 + *(float *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x241c) = 0;
      *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
      *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
      *(uint *)(param_1 + 0x23ac) = 0;
      *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
      *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
      core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_ac);
    }
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
