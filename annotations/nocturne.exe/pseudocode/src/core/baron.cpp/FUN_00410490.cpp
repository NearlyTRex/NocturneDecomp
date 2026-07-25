// Name: core_baron.cpp_FUN_00410490
// Address: 00410490
// Address Range: [[00410490, 00410a73]]
// Convention: unknown
// Signature: void core_baron_cpp_FUN_00410490(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void core_baron_cpp_FUN_00410490(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  uint auStackY_1880 [1519];
  uint local_a4;
  uint local_94;
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
  byte local_48 [12];
  float local_3c;
  float local_38;
  float local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  byte local_24 [20];
  float local_10;
  
  bVar7 = 0;
  if (*(int *)(param_1 + 0x1fb34) == 0) {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x1fa3c)
    ;
    if (iVar3 != 0) {
      *(uint *)(param_1 + 0x1fb34) = 1;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
      *(uint *)(param_1 + 0x1fb38) = 1;
    }
  }
  else {
    iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x1faa0)
    ;
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,7,1);
    }
  }
  if (((*(int *)(param_1 + 0x1fb34) == 0) && (*(int *)(param_1 + 0xbc90) == 2)) ||
     (iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2), iVar3 == 0)) {
    return;
  }
  if (*(int *)(param_1 + 0xbc90) == 2) {
    core_baron_cpp_CBaron_updateMountedPosition_FUN_00410bf0(param_1,param_2);
  }
  iVar3 = 0x01C775EC;
  *(float *)(param_1 + 0x2430) = param_2 * (float)12.566370614;
  if (*(int *)(iVar3 + 0x228) != 0) {
    *(float *)(param_1 + 0x2430) = *(float *)(param_1 + 0x2430) * (float)0.33333333333333298;
  }
  fVar2 = *(float *)(param_1 + 0xbc8c) - param_2;
  *(float *)(param_1 + 0xbc8c) = fVar2;
  if (fVar2 < 0.0) {
    *(uint *)(param_1 + 0xbc8c) = 0;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  core_baron_cpp_CBaron_advanceMotion_FUN_00411010(param_1,param_2);
  if (*(int *)(param_1 + 0x1fb34) == 0) {
    return;
  }
  iVar3 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar3 == 0) {
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    switch(*(uint *)(iVar3 + 0x24)) {
    case 0:
    case 1:
    case 2:
    case 3:
      iVar3 = 0;
      if (*(int *)(param_1 + 0xbc94) != 0) {
        if (*(int *)(param_1 + 0xbc9c) == 0) {
          iVar3 = 1;
        }
        else {
          iVar3 = 3;
        }
      }
      if (*(int *)(param_1 + 0xbc98) != 0) {
        iVar3 = 2;
      }
      if (*(int *)(param_1 + 0xbca0) != 0) {
        *(uint *)(param_1 + 0x1fb18) = 1;
        iVar3 = 4;
        *(uint *)(param_1 + 0xbca0) = 0;
      }
      *(float *)(param_1 + 0x2410) = *(float *)(param_1 + 0xbcb8) * *(float *)(param_1 + 0x2430);
      iVar6 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
      if (iVar3 == *(int *)(iVar6 + 0x24)) break;
      goto LAB_0041061c;
    case 4:
      uVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_84,&DAT_02dd1184,DAT_0076431c * 0x30 + param_1 + 0xfd0);
      puVar5 = (uint *)
               core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_48,uVar4);
      if (&local_30 != puVar5) {
        local_30 = *puVar5;
        local_2c = puVar5[1];
        local_28 = puVar5[2];
      }
      uVar4 = core_xform_cpp_transformVector3x4_FUN_0055a8b0
                        (local_24,&DAT_02dd1184,DAT_00764320 * 0x30 + param_1 + 0xfd0);
      puVar5 = (uint *)
               core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_78,uVar4);
      if (&local_54 != puVar5) {
        local_54 = *puVar5;
        local_50 = puVar5[1];
        local_4c = puVar5[2];
      }
      if (*(int *)(param_1 + 0x1fb18) == 0) {
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
                  (0x01C08D04,&local_30,param_1 + 0x1fb1c,0x40000000,0x3f000000,0x3f000000,
                   &DAT_005acf40);
        core_fire_cpp_CFireEffect_createTrailFromPoints_FUN_0048c590
                  (0x01C08D04,&local_54,param_1 + 0x1fb28,0x40000000,0x3f000000,0x3f000000,
                   &DAT_005acf40);
      }
      if ((uint *)(param_1 + 0x1fb1c) != &local_30) {
        *(uint *)(param_1 + 0x1fb1c) = local_30;
        *(uint *)(param_1 + 0x1fb20) = local_2c;
        *(uint *)(param_1 + 0x1fb24) = local_28;
      }
      if ((uint *)(param_1 + 0x1fb28) != &local_54) {
        *(uint *)(param_1 + 0x1fb28) = local_54;
        *(uint *)(param_1 + 0x1fb2c) = local_50;
        *(uint *)(param_1 + 0x1fb30) = local_4c;
      }
      *(uint *)(param_1 + 0x1fb18) = 0;
    }
    goto switchD_00410a6d_default;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 != 1) goto LAB_00410847;
    iVar3 = 1;
  }
  else if (uVar1 < 3) {
    iVar3 = 3;
  }
  else {
    if (uVar1 == 3) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0,1);
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
      goto switchD_00410a6d_default;
    }
LAB_00410847:
    iVar3 = 0;
  }
LAB_0041061c:
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,iVar3,1);
switchD_00410a6d_default:
  fVar2 = (float)32;
  local_6c = *(float *)(param_1 + 0x23a4);
  local_68 = *(float *)(param_1 + 0x23a8);
  local_64 = *(float *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
  *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * fVar2;
  local_3c = *(float *)(param_1 + 0x2420) * param_2;
  local_38 = *(float *)(param_1 + 0x2424) * param_2;
  local_34 = *(float *)(param_1 + 0x2428) * param_2;
  local_6c = local_6c + local_3c;
  local_68 = local_68 + local_38;
  local_64 = local_64 + local_34;
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  iVar3 = param_1 + 0x150;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iVar3);
  core_xform_cpp_FUN_0055d610
            (param_1 + 0x1fb04,*(uint *)(param_1 + 0x1fb10),DAT_007642e8,FUN_0051b650);
  puVar5 = &stack0xffffff6c;
  local_94 = local_a4;
  *(uint *)((int)&stack0xffffff70 + (uint)bVar7 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffff60 + (uint)bVar7 * -8);
  *(uint *)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
       *(uint *)(&stack0xffffff64 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  *(uint *)
   ((int)(&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4) =
       *(uint *)
        ((int)(&stack0xffffff64 + (uint)bVar7 * -8 + (uint)bVar7 * -8) + ((uint)bVar7 * -2 + 1) * 4)
  ;
  core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0051cfd0(iVar3,puVar5);
  iVar3 = 0;
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  do {
    local_60 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0000000,0x40000000);
    iVar3 = iVar3 + 1;
    local_5c = 2.0;
    local_10 = local_60;
    local_10 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0xc0000000,0x40000000);
    local_60 = local_60 + *(float *)(param_1 + 0x20);
    local_5c = local_5c + *(float *)(param_1 + 0x24);
    local_58 = local_10 + *(float *)(param_1 + 0x28);
    core_fire_cpp_CFireEffect_createSmokeParticle_FUN_0048afe0
              (0x01C08D04,&local_60,0x40000000,0,0xffff);
  } while (iVar3 < 2);
  DAT_0076432c = DAT_0076432c + param_2;
  return;
}
