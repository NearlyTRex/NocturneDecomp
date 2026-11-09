// Name: core_biggs.cpp_FUN_00414fc0
// Address: 00414fc0
// Address Range: [[00414fc0, 00415062]]
// Convention: unknown
// Signature: void core_biggs_cpp_FUN_00414fc0(int param_1,int param_2)

#include "nocturne.h"

void core_biggs_cpp_FUN_00414fc0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    return;
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    iVar2 = 7;
    *(uint *)(param_1 + 0x2538) = 0;
  }
  else {
    iVar2 = core_actor_cpp_FUN_0040cc60(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),4,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),5,1);
    }
    if (iVar2 != 2) goto LAB_00415044;
    iVar2 = 6;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)(param_1 + 0x158),iVar2,1);
LAB_00415044:
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
