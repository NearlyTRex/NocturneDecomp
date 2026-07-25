// Name: core_npc.cpp_CNPC_process_FUN_004eea20
// Address: 004eea20
// Address Range: [[004eea20, 004eecdd]]
// Convention: __cdecl
// Signature: void __cdecl core_npc_cpp_CNPC_process_FUN_004eea20(int param_1,float param_2)

#include "nocturne.h"

void __cdecl core_npc_cpp_CNPC_process_FUN_004eea20(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  byte auStack_48 [12];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  byte auStack_30 [12];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  iVar4 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_processSmoking_FUN_0042abd0(param_1,param_2);
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_58 = param_2;
  while (0.0 < local_58) {
    uVar5 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,&local_58);
    core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,uVar5);
  }
  iVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if ((((1 < iVar4) && (*(int *)(param_1 + 0x70) == 1)) && (*(int *)(param_1 + 0x1f56c) == 0)) &&
     (*(int *)(param_1 + 0xdc) == 0)) {
    uVar5 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
                      (param_1 + 0x150,auStack_48,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,auStack_30,uVar5);
    FUN_004b0480(INT_005b96c4,auStack_30,0);
    *(uint *)(param_1 + 0x1f56c) = 1;
  }
  fVar3 = (float)3.1415926535000001;
  fVar2 = (float)0.5;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar3 * fVar2;
  iVar4 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
  if (iVar4 == 0) goto LAB_004eeb7c;
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004eeb4e:
      pcVar7 = "WALK";
    }
    else {
LAB_004eecd2:
      pcVar7 = "STAND";
    }
    core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740(param_1 + 0x150,pcVar7,1);
  }
  else {
    iVar4 = param_1 + 0x150;
    if (uVar1 < 3) {
      uVar5 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890(iVar4,"RUN",0);
      iVar6 = core_motion_cpp_CMotionList_findStateIndex_FUN_004e10a0(uVar5);
      if (iVar6 < 0) goto LAB_004eeb4e;
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,iVar6,1);
    }
    else {
      if (uVar1 != 3) goto LAB_004eecd2;
      core_motion_cpp_CMotionController_setDesiredStateByName_FUN_004e1740(iVar4,"STAND",1)
      ;
      engine_console_cpp_CConsole_printf_FUN_0043ac60
                (PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
    }
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
LAB_004eeb7c:
  *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)32;
  fStack_3c = *(float *)(param_1 + 0x2420) * param_2;
  fStack_38 = *(float *)(param_1 + 0x2424) * param_2;
  fStack_34 = *(float *)(param_1 + 0x2428) * param_2;
  fStack_24 = fStack_3c + *(float *)(param_1 + 0x2414);
  fStack_20 = fStack_38 + *(float *)(param_1 + 0x2418);
  fStack_1c = fStack_34 + *(float *)(param_1 + 0x241c);
  fStack_54 = fStack_24 + *(float *)(param_1 + 0x23a4);
  fStack_50 = fStack_20 + *(float *)(param_1 + 0x23a8);
  fStack_4c = fStack_1c + *(float *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x241c) = 0;
  *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
  *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
  core_charactr_cpp_CCharacter_moveAndCollide_FUN_00425050(param_1,&fStack_54);
  core_charactr_cpp_CCharacter_preProcess_FUN_004259a0(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
