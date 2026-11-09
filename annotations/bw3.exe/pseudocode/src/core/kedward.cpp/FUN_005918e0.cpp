// Name: core_kedward.cpp_FUN_005918e0
// Address: 005918e0
// Address Range: [[005918e0, 00591999]]
// Convention: unknown
// Signature: void core_kedward_cpp_FUN_005918e0(int param_1,int param_2)

#include "nocturne.h"

void core_kedward_cpp_FUN_005918e0(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  
  fVar1 = *(float *)(param_2 + 4);
  *(uint *)(param_1 + 0xcde0) = 0x3f99999a;
  fVar1 = *(float *)(param_1 + 0x2538) - fVar1;
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    iVar3 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar3 != 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,6,1);
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2540) = 0;
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    if ((*(int *)(pSVar2 + 0x24) != 8) && (*(int *)(pSVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,7,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
