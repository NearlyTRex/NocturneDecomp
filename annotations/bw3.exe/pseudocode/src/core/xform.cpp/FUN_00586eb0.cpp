// Name: core_xform.cpp_FUN_00586eb0
// Address: 00586eb0
// Address Range: [[00586eb0, 00586f8d]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_00586eb0(int param_1,int param_2)

#include "nocturne.h"

void core_xform_cpp_FUN_00586eb0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  int force_immediate;
  
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                       ((CMotionController *)(param_1 + 0x158));
    iVar2 = *(int *)(pSVar3 + 0x24);
    if ((((iVar2 == 0x13) || (iVar2 == 0x10)) || (iVar2 == 0x14)) ||
       (((iVar2 == 0x11 || (iVar2 == 0x15)) || (iVar2 == 0x12)))) goto LAB_00586ef3;
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    iVar2 = iVar2 + 0x10;
  }
  else {
    force_immediate = 1;
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    iVar2 = iVar2 + 0xd;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
            ((CMotionController *)(param_1 + 0x158),iVar2,force_immediate);
LAB_00586ef3:
  iVar2 = core_sound_cpp_FUN_00560af0(0x02CF5680,*(uint *)(param_1 + 0xd070));
  if (iVar2 != 0) {
    core_enemy_cpp_FUN_00489b80(param_1,param_2);
    return;
  }
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0xd070) = uVar4;
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
