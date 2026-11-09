// Name: core_sentinel.cpp_FUN_00532270
// Address: 00532270
// Address Range: [[00532270, 00532369]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_00532270(int param_1,int param_2)

#include "nocturne.h"

void core_sentinel_cpp_FUN_00532270(int param_1,int param_2)

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
    iVar4 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    if (iVar4 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,5,1);
    }
    if (iVar4 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),6,1);
    }
    if (iVar4 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),7,1);
    }
    iVar4 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 0xd054));
    if (iVar4 != 0) goto LAB_005322ed;
    pcVar5 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    if ((*(int *)(pSVar2 + 0x24) == 8) || (*(int *)(pSVar2 + 0x24) == 9)) goto LAB_005322ed;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,8,1);
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd054));
    pcVar5 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,pcVar5);
  *(uint *)(param_1 + 0xd054) = uVar3;
LAB_005322ed:
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
