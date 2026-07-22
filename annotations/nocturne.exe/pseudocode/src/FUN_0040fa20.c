// Name: FUN_0040fa20
// Address: 0040fa20
// Address Range: [[0040fa20, 0040fb5e]]
// Convention: unknown
// Signature: void FUN_0040fa20(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void FUN_0040fa20(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  float local_20 [4];
  
  iVar2 = core_charactr_cpp_FUN_004259f0(param_1,param_2);
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    local_20[0] = param_2 * *(float *)(param_1 + 0xbc8c);
    while (0.0 < local_20[0]) {
      core_motion_cpp_CMotionController_advance_FUN_004e11c0(param_1 + 0x150,local_20);
    }
    fVar1 = (float)3.1415926535000001;
    *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x2430) = param_2 * fVar1 * *(float *)(param_1 + 0xbc8c);
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    iVar2 = core_charactr_cpp_FUN_00428c00(param_1,param_2);
    if (iVar2 != 0) {
      *(uint *)(param_1 + 0x23ac) = 0;
      *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
      *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0051b8a0(param_1 + 0x150);
    core_charactr_cpp_FUN_0042a150(param_1,param_2);
    iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0047dc30(0x01C03A10,param_1 + 0xbd24);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"armour.wav");
      local_20[1] = 0.0;
      local_20[2] = 0.0;
      local_20[3] = 5.0;
      core_charactr_cpp_CCharacter_dismember_FUN_00427b60(param_1,local_20 + 1,0xbf800000,1);
      return;
    }
  }
  return;
}
