// Name: core_sentinel.cpp_FUN_0054cb80
// Address: 0054cb80
// Address Range: [[0054cb80, 0054cc79]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_0054cb80(int param_1,int param_2)

#include "nocturne.h"

void core_sentinel_cpp_FUN_0054cb80(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    iVar4 = core_actor_cpp_FUN_0040cc60(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)(param_1 + 0x158),7,1);
    }
    iVar4 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc268));
    if (iVar4 != 0) goto LAB_0054cbfd;
    pcVar5 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    if ((*(int *)(pSVar2 + 0x24) == 8) || (*(int *)(pSVar2 + 0x24) == 9)) goto LAB_0054cbfd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,8,1);
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc268));
    pcVar5 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar5);
  *(uint *)(param_1 + 0xc268) = uVar3;
LAB_0054cbfd:
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
