// Name: core_drone.cpp_FUN_004864e0
// Address: 004864e0
// Address Range: [[004864e0, 00486647]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_004864e0(int param_1,int param_2)

#include "nocturne.h"

void core_drone_cpp_FUN_004864e0(int param_1,int param_2)

{
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc27c));
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc278));
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc278));
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc274));
    if (iVar4 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"drone-hurt?.wav");
      *(uint *)(param_1 + 0xc274) = uVar3;
    }
    iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),3,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),4,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),5,1);
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    if ((*(int *)(pSVar2 + 0x24) != 8) && (*(int *)(pSVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc274));
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc278));
    uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"drone-die?.wav");
    *(uint *)(param_1 + 0xc274) = uVar3;
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
