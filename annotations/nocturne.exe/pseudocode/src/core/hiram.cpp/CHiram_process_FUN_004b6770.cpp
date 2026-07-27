// Name: core_hiram.cpp_CHiram_process_FUN_004b6770
// Address: 004b6770
// Address Range: [[004b6770, 004b68ad]]
// Convention: unknown
// Signature: void core_hiram_cpp_CHiram_process_FUN_004b6770(int param_1,float param_2)

#include "nocturne.h"

void core_hiram_cpp_CHiram_process_FUN_004b6770(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float local_18 [2];
  
  iVar1 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
  if (*(int *)(iVar1 + 0x24) != 1) {
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0x1f570)
    ;
    if (iVar1 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,1,1);
      uVar3 = core_mission_cpp_CDemonMission_findActorByName_FUN_004d90a0
                        (0x01CC9450,"GlassHiram",g_CGlassActorType_01c78c40.name_hash);
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890(uVar3);
      if (iVar1 != 0) {
        core_glass_cpp_FUN_004ada20(iVar1,iVar1 + 0x20);
      }
    }
  }
  local_18[0] = param_2;
  *(uint *)(param_1 + 0x23ac) = 0;
  iVar1 = param_1 + 0x150;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  while (0.0 < local_18[0]) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004e11c0(iVar1,local_18);
    if (iVar2 == 0x29a) {
      core_mission_cpp_FUN_004d9110(0x01CC9450,param_1,1);
    }
    else {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042add0(param_1,iVar2);
    }
  }
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iVar1);
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000(param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(iVar1);
  core_charactr_cpp_FUN_0042a150(param_1,param_2);
  return;
}
