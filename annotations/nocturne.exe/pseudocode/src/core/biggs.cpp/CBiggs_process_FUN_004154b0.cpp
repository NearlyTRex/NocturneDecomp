// Name: core_biggs.cpp_CBiggs_process_FUN_004154b0
// Address: 004154b0
// Address Range: [[004154b0, 0041575d]]
// Convention: unknown
// Signature: void core_biggs_cpp_CBiggs_process_FUN_004154b0(int param_1,float param_2)

#include "nocturne.h"

void core_biggs_cpp_CBiggs_process_FUN_004154b0(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  iVar3 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_40 = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar3 = param_1 + 0x150;
  while (0.0 < local_40) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar3,&local_40);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
  }
  fVar2 = (float)3.1415926535000001;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar3);
  iVar4 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar4 == 0) goto LAB_0041558b;
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00415560:
      uVar5 = 1;
    }
    else {
LAB_00415744:
      uVar5 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar5,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00415560;
    if (uVar1 != 3) goto LAB_00415744;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar3,0,1);
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
LAB_0041558b:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_00425960(param_1);
  if (iVar3 != 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
    local_3c = *(float *)(param_1 + 0x2420) * param_2;
    local_38 = *(float *)(param_1 + 0x2424) * param_2;
    local_34 = param_2 * *(float *)(param_1 + 0x2428);
    local_24 = local_3c + *(float *)(param_1 + 0x2414);
    local_20 = local_38 + *(float *)(param_1 + 0x2418);
    local_1c = local_34 + *(float *)(param_1 + 0x241c);
    local_30 = local_24 + *(float *)(param_1 + 0x23a4);
    local_2c = local_20 + *(float *)(param_1 + 0x23a8);
    local_28 = local_1c + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&local_30);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0xcad4);
  if (iVar3 != 0) {
    *(uint *)(param_1 + 0xbea4) = 0;
    *(uint *)(param_1 + 0xbea0) = 1;
  }
  if ((*(int *)(param_1 + 0xbea0) != 0) &&
     (param_2 = *(float *)(param_1 + 0xbea4) + param_2, *(float *)(param_1 + 0xbea4) = param_2,
     0x40800000 < param_2)) {
    *(float *)(param_1 + 0xbea4) = 0x40800000;
    return;
  }
  return;
}
