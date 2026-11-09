// Name: core_xform.cpp_FUN_005b9170
// Address: 005b9170
// Address Range: [[005b9170, 005b927e]]
// Convention: unknown
// Signature: void core_xform_cpp_FUN_005b9170(int param_1,int param_2)

#include "nocturne.h"

void core_xform_cpp_FUN_005b9170(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  core_xform_cpp_FUN_005b8eb0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (0.0 < fVar1) {
    iVar5 = 1;
    iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar3 + 0xd,iVar5);
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    iVar3 = *(int *)(pSVar2 + 0x24);
    if ((((iVar3 != 0x13) && (iVar3 != 0x10)) && (iVar3 != 0x14)) &&
       (((iVar3 != 0x11 && (iVar3 != 0x15)) && (iVar3 != 0x12)))) {
      iVar5 = 1;
      iVar3 = core_actor_cpp_FUN_0040cc60(0,2);
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar3 + 0x10,iVar5);
      core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)(param_1 + 0xc2b0));
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog-damage?.wav");
      *(uint *)(param_1 + 0xc2b0) = uVar4;
    }
  }
  core_sound_cpp_FUN_0057d9d0(0x02C82A60,*(uint *)(param_1 + 0xc2b0));
  uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"dog-damage?.wav");
  *(uint *)(param_1 + 0xc2b0) = uVar4;
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
