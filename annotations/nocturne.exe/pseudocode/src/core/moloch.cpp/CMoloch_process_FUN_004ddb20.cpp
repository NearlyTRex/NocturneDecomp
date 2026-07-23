// Name: core_moloch.cpp_CMoloch_process_FUN_004ddb20
// Address: 004ddb20
// Address Range: [[004ddb20, 004de1a1]]
// Convention: unknown
// Signature: void core_moloch_cpp_CMoloch_process_FUN_004ddb20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_moloch_cpp_CMoloch_process_FUN_004ddb20(int param_1,float param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  float local_1b18;
  float local_1b14;
  byte auStack_1b10 [6812];
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  byte local_5c [12];
  byte local_50 [12];
  byte local_44 [12];
  float local_38;
  float local_34;
  float local_30;
  uint uStack_24;
  char *pcStack_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (*(int *)(param_1 + 0x1fa38) == 4) {
    return;
  }
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  fVar2 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_1b14 = param_2;
  while (iVar3 = 0x01C775EC, 0.0 < local_1b14) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_1b14);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar4);
  }
  fVar2 = (float)12.566370614;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2;
  if (*(int *)(iVar3 + 0x228) != 0) {
    *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)0.33333333333333298;
  }
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0xbc90) == 2) {
      core_moloch_cpp_CMoloch_processAI_FUN_004de1b0(param_1,param_2);
    }
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    uVar6 = *(uint *)(iVar3 + 0x24);
    if ((((uVar6 == 0) || (uVar6 < 2)) || (uVar6 == 2)) && (*(int *)(param_1 + 0x2408) != 0)) {
      uVar6 = (uint)(*(int *)(param_1 + 0xbc94) != 0);
      if (*(int *)(param_1 + 0xbc98) != 0) {
        uVar6 = 2;
      }
      if (*(int *)(param_1 + 0xbcac) != 0) {
        if (*(int *)(param_1 + 0x21cf4) == 0) {
          core_moloch_cpp_CMoloch_startMorph_FUN_004de700(param_1);
        }
        *(uint *)(param_1 + 0xbcac) = 0;
      }
      *(float *)(param_1 + 0x2410) = *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
      iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      if (uVar6 != *(uint *)(iVar3 + 0x24)) goto LAB_004ddc32;
    }
  }
  else {
    uVar6 = *(uint *)(param_1 + 0x25a8);
    if (uVar6 < 2) {
      if (uVar6 == 1) goto LAB_004ddc31;
LAB_004dde3e:
      uVar6 = 0;
    }
    else {
      if (2 < uVar6) {
        if (uVar6 == 3) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
          engine_console_cpp_CConsole_printf_FUN_0043ac60
                    (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
          goto LAB_004ddc3a;
        }
        goto LAB_004dde3e;
      }
LAB_004ddc31:
      uVar6 = 1;
    }
LAB_004ddc32:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar6,1);
  }
LAB_004ddc3a:
  if (*(int *)(param_1 + 0x2590) == 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_38 = *(float *)(param_1 + 0x2420) * param_2;
    local_34 = *(float *)(param_1 + 0x2424) * param_2;
    local_30 = param_2 * *(float *)(param_1 + 0x2428);
    local_74 = *(float *)(param_1 + 0x23a4) + *(float *)(param_1 + 0x2414);
    local_70 = *(float *)(param_1 + 0x23a8) + *(float *)(param_1 + 0x2418);
    local_68 = local_74 + local_38;
    local_6c = *(float *)(param_1 + 0x23ac) + *(float *)(param_1 + 0x241c);
    local_64 = local_70 + local_34;
    local_60 = local_6c + local_30;
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_68);
  }
  else {
    if (*(int *)(param_1 + 0x2594) == 0) {
      uVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                        (param_1,local_5c,*(int *)(param_1 + 0x2590) + 0x20);
      iVar3 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_0054e4a0(local_50,uVar4);
      local_14 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040df00(*(uint *)(iVar3 + 4));
      local_1b18 = local_14;
      if (local_14 < (float)-1.57079632675) {
        local_1b18 = local_14 + 3.141593f;
      }
      if ((float)1.57079632675 < local_1b18) {
        local_1b18 = local_1b18 + 1.5938625219265179e-314._0_4_;
      }
      local_18 = param_2 * (float)3.1415926535000001;
      local_1c = -local_18;
      if (local_1b18 < local_1c) {
        local_1b18 = local_1c;
      }
      if (local_18 < local_1b18) {
        local_1b18 = local_18;
      }
      *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x34) + local_1b18;
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
    }
    iVar3 = *(int *)(param_1 + 0x2590);
    local_14 = *(float *)(iVar3 + 0x14c);
    uVar4 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                      (param_1 + 0x150,local_44,0);
    iVar3 = (**(code **)((int)local_14 + 0x108))(iVar3,param_1,uVar4);
    if (iVar3 == 0) {
      *(uint *)(param_1 + 0x2590) = 0;
    }
    else if ((*(int *)(param_1 + 0x2590) != 0) && (*(int *)(param_1 + 0xbca0) == 0))
    goto LAB_004ddd8e;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
  }
LAB_004ddd8e:
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  if (*(int *)(param_1 + 0x21cf4) == 0) {
    if (*(int *)(param_1 + 0x21cf0) == 0) {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1 + 0x21d60);
      if (iVar3 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_004de700(param_1);
        return;
      }
    }
    else {
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30
                        (0x01C03A10,param_1 + 0x21cfc);
      if (iVar3 != 0) {
        core_moloch_cpp_CMoloch_startMorph_FUN_004de700(param_1);
        return;
      }
    }
  }
  else {
    uVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960
              (param_1 + 0x1fa3c,uVar4,*(uint *)(param_1 + 0x158));
    core_skeleton_cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0051b880
              (param_1 + 0x1fa3c);
    param_2 = *(float *)(param_1 + 0x21cf8) + param_2;
    *(float *)(param_1 + 0x21cf8) = param_2;
    if (_DAT_005a0ab8 < param_2) {
      if (*(int *)(param_1 + 0x21cf0) == 0) {
        pcVar5 = "moloch_h.dfm";
        *(uint *)(param_1 + 0x21cf0) = 1;
        pcStack_20 = "moloch_d.dfm";
      }
      else {
        pcVar5 = "moloch_d.dfm";
        *(uint *)(param_1 + 0x21cf0) = 0;
        pcStack_20 = "moloch_h.dfm";
      }
      iVar3 = param_1 + 0x1fa3c;
      *(uint *)(param_1 + 0x21cf4) = 0;
      *(uint *)(param_1 + 0x21cf8) = 0;
      core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90(iVar3,auStack_1b10);
      local_14 = (float)core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
      iVar1 = param_1 + 0x150;
      uStack_24 = *(uint *)(param_1 + 0x1fa44);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar1,pcVar5);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar1);
      core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004e1960(iVar1,local_14,uStack_24);
      core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0(iVar3,pcStack_20);
      core_skeleton_cpp_CDeformableModelInstance_preCache_FUN_0051dcd0(iVar3);
      param_1 = param_1 + 0x21dc4;
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(param_1,0,iVar1);
      core_morph_cpp_CMorph_setupModelFromDeformable_FUN_004e0170(param_1,1,iVar3);
      core_morph_cpp_CMorph_getReady_FUN_004e03c0(param_1);
      return;
    }
  }
  return;
}
