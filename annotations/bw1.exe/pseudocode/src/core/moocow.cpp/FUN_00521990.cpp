// Name: core_moocow.cpp_FUN_00521990
// Address: 00521990
// Address Range: [[00521990, 00521a54]]
// Convention: unknown
// Signature: void core_moocow_cpp_FUN_00521990(int param_1,int param_2)

#include "nocturne.h"

void core_moocow_cpp_FUN_00521990(int param_1,int param_2)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  
  core_moocow_cpp_FUN_00521810(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    if ((*(int *)(pSVar2 + 0x24) != 7) && (*(int *)(pSVar2 + 0x24) != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),6,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  iVar3 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)(param_1 + 0xc1d8));
  if (iVar3 != 0) {
    core_charactr_cpp_FUN_004319e0(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xc1d8) = uVar4;
  core_charactr_cpp_FUN_004319e0(param_1,param_2);
  return;
}
