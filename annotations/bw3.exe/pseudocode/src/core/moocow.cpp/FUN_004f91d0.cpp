// Name: core_moocow.cpp_FUN_004f91d0
// Address: 004f91d0
// Address Range: [[004f91d0, 004f9294]]
// Convention: unknown
// Signature: void core_moocow_cpp_FUN_004f91d0(int param_1,int param_2)

#include "nocturne.h"

void core_moocow_cpp_FUN_004f91d0(int param_1,int param_2)

{
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  
  core_moocow_cpp_FUN_004f9050(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)(param_1 + 0x158));
    if ((*(int *)(pSVar2 + 0x24) != 7) && (*(int *)(pSVar2 + 0x24) != 6)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),6,1);
      (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
    }
  }
  iVar3 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xcdd4));
  if (iVar3 != 0) {
    core_charactr_cpp_FUN_00430d60(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xcdd4) = uVar4;
  core_charactr_cpp_FUN_00430d60(param_1,param_2);
  return;
}
