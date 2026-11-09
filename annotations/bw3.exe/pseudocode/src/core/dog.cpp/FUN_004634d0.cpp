// Name: core_dog.cpp_FUN_004634d0
// Address: 004634d0
// Address Range: [[004634d0, 004635d6]]
// Convention: unknown
// Signature: void core_dog_cpp_FUN_004634d0(int param_1,int param_2)

#include "nocturne.h"

void core_dog_cpp_FUN_004634d0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)(param_1 + 0x158));
    if (0xf < *(int *)(pSVar3 + 0x24)) goto LAB_0046352b;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar2 < 0x21) {
      iVar2 = 0x10;
    }
    else if (iVar2 < 0x42) {
      iVar2 = 0x11;
    }
    else {
      iVar2 = 0x12;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar2 == 0) goto LAB_0046352b;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
    if (iVar2 < 0x21) {
      iVar2 = 0xd;
    }
    else if (iVar2 < 0x42) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 0xf;
    }
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),iVar2,1);
LAB_0046352b:
  iVar2 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd05c));
  if (iVar2 != 0) {
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0xd05c) = uVar4;
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
