// Name: FUN_00540f50
// Address: 00540f50
// Address Range: [[00540f50, 00541636]]
// Convention: unknown
// Signature: void FUN_00540f50(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005415cb) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00540f50(int param_1,float param_2)

{
  char cVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  uint uVar10;
  uint local_68;
  uint local_64;
  uint local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  uint local_14;
  
  iVar6 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar6 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_24 = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_24) {
    uVar10 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_24);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar10);
  }
  *(uint *)(param_1 + 0xdf80) = 0;
  *(uint *)(param_1 + 0xdf7c) = *(uint *)(param_1 + 0xdf80);
  *(uint *)(param_1 + 0xdf78) = *(uint *)(param_1 + 0xdf7c);
  local_24 = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_24) {
    core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0xbd24,&local_24);
  }
  fVar3 = (float)_DAT_005961bc;
  iVar6 = param_1 + 0x150;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * *(float *)(param_1 + 0xbc8c);
  iVar7 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar6);
  uVar2 = *(uint *)(iVar7 + 0x24);
  iVar7 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar7 == 0) {
    if (uVar2 == 0) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar7 = *(int *)(param_1 + 0xbca4);
      if (iVar7 == 0) {
        iVar7 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar7 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar6,1,1);
        }
      }
      else {
        local_38 = *(float *)(param_1 + 0x20) - *(float *)(iVar7 + 0x20);
        local_34 = *(float *)(param_1 + 0x24) - *(float *)(iVar7 + 0x24);
        local_30 = *(float *)(param_1 + 0x28) - *(float *)(iVar7 + 0x28);
        if (SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) <
            *(float *)(param_1 + 0xbc9c)) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar6,1,1);
        }
      }
    }
    else if ((uVar2 < 2) || (uVar2 == 2)) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar6 = core_enemy_cpp_CEnemy_updatePatrol_FUN_0047a030(param_1,param_2);
        if (iVar6 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
        }
      }
      else {
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_68 = 0;
        local_60 = 0x3FC00000;
        local_64 = 0;
        uVar10 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                           (*(int *)(param_1 + 0xbca4),&local_68,0x3f000000,0x3e32b8c2);
        iVar6 = core_charactr_cpp_CCharacter_walkToPoint_FUN_004247f0
                          (param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar10);
        if (((-1 < iVar6) &&
            (iVar6 = *(int *)(param_1 + 0xbca4),
            fVar3 = *(float *)(iVar6 + 0x20) - *(float *)(param_1 + 0x20),
            fVar4 = *(float *)(iVar6 + 0x24) - *(float *)(param_1 + 0x24),
            fVar5 = *(float *)(iVar6 + 0x28) - *(float *)(param_1 + 0x28),
            SQRT(fVar5 * fVar5 + fVar3 * fVar3 + fVar4 * fVar4) < _DAT_005a28d4)) &&
           (*(int *)(param_1 + 0xe19c) == 0)) {
          *(uint *)(param_1 + 0xe19c) = 1;
          *(uint *)(param_1 + 0xe1a0) = 0;
          sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xe194));
          *(uint *)(param_1 + 0xe198) = 0x461c3f9a;
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,"succubus-morph.wav");
        }
      }
    }
    goto LAB_00541090;
  }
  uVar2 = *(uint *)(param_1 + 0x25a8);
  if (uVar2 < 2) {
    if (uVar2 == 1) {
LAB_00541065:
      uVar10 = 1;
    }
    else {
LAB_005413d0:
      uVar10 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar10,1);
  }
  else {
    if (uVar2 < 3) goto LAB_00541065;
    if (uVar2 != 3) goto LAB_005413d0;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar6,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,">%s confused while walking to scriptDest!\n" + 1,param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
LAB_00541090:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar6 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar6 != 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_005961c4;
    local_5c = *(float *)(param_1 + 0x2420) * param_2;
    local_58 = *(float *)(param_1 + 0x2424) * param_2;
    local_54 = param_2 * *(float *)(param_1 + 0x2428);
    local_50 = local_5c + *(float *)(param_1 + 0x2414);
    local_4c = local_58 + *(float *)(param_1 + 0x2418);
    local_48 = local_54 + *(float *)(param_1 + 0x241c);
    local_44 = local_50 + *(float *)(param_1 + 0x23a4);
    local_40 = local_4c + *(float *)(param_1 + 0x23a8);
    local_3c = local_48 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_44);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  local_20 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  local_1c = *(uint *)(param_1 + 0x158);
  core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
            (param_1 + 0xbd24,local_20,local_1c);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
            (param_1 + 0xbd24);
  if ((*(int *)(param_1 + 0xe19c) != 0) &&
     (fVar3 = *(float *)(param_1 + 0xe1a0) + param_2, *(float *)(param_1 + 0xe1a0) = fVar3,
     _DAT_005a28d8 < fVar3)) {
    iVar7 = FUN_0056497c(0xbd58);
    iVar6 = 0;
    if (iVar7 != 0) {
      iVar6 = core_hotdemon_cpp_CHotDemon_ctor_FUN_004b8ca0(iVar7);
    }
    uVar10 = 0x01CC9450;
    local_18 = iVar6;
    if (iVar6 != 0) {
      *(uint *)(param_1 + 0x70) = 2;
      core_mission_cpp_CDemonMission_generateActorName_FUN_004d9720(uVar10,iVar6);
      *(uint *)(iVar6 + 0x20) = *(uint *)(param_1 + 0x20);
      *(uint *)(iVar6 + 0x24) = *(uint *)(param_1 + 0x24);
      *(uint *)(iVar6 + 0x28) = *(uint *)(param_1 + 0x28);
      *(uint *)(iVar6 + 0x2c) = *(uint *)(param_1 + 0x2c);
      if ((uint *)(iVar6 + 0x30) != (uint *)(param_1 + 0x30)) {
        *(uint *)(iVar6 + 0x30) = *(uint *)(param_1 + 0x30);
        *(uint *)(iVar6 + 0x34) = *(uint *)(param_1 + 0x34);
        *(uint *)(iVar6 + 0x38) = *(uint *)(param_1 + 0x38);
      }
      pcVar8 = "hdwing.cth";
      pcVar9 = (char *)(local_18 + 0x2a90);
      *(uint *)(local_18 + 0x2a8c) = 1;
      do {
        cVar1 = *pcVar8;
        *pcVar9 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar8 + 2;
        pcVar9[1] = cVar1;
        pcVar9 = pcVar9 + 2;
      } while (cVar1 != '\0');
      (*(code *)**(uint **)(local_18 + 0x14c))(local_18);
      iVar7 = local_18 + 0x150;
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(iVar7,local_20,local_1c);
      iVar6 = local_18;
      core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880(iVar7);
      *(uint *)(iVar6 + 0x108) = *(uint *)(param_1 + 0x108);
      *(uint *)(iVar6 + 0x10c) = *(uint *)(param_1 + 0x10c);
      uVar10 = 0x01CC9450;
      *(uint *)(iVar6 + 0x110) = *(uint *)(param_1 + 0x110);
      core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(uVar10,iVar6);
      uVar10 = *(uint *)(param_1 + 0xe16c);
      *(uint *)(param_1 + 0xe16c) = *(uint *)(local_18 + 0x2c20);
      *(uint *)(local_18 + 0x2c20) = uVar10;
    }
  }
  if (*(int *)(param_1 + 0x2618) != 0) {
    core_cloth_cpp_CClothList_process_FUN_00438550
              (param_1 + 0xdfd8,param_1 + 0x20,param_1 + 0x30,param_2,
               *(uint *)(param_1 + 0x240c),param_1 + 0xbd24);
  }
  iVar6 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                    (0x01C03A10,"succubusShutUp");
  if (iVar6 == 0) {
    iVar6 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xe194));
    if ((iVar6 == 0) &&
       (param_2 = *(float *)(param_1 + 0xe198) - param_2, *(float *)(param_1 + 0xe198) = param_2,
       param_2 < 0.0)) {
      local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x40a00000,0x41200000);
      *(uint *)(param_1 + 0xe198) = local_14;
      uVar10 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                         (param_1,"succubus-horny-?.wav");
      *(uint *)(param_1 + 0xe194) = uVar10;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xe194));
  return;
}
