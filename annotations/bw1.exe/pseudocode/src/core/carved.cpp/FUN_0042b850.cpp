// Name: core_carved.cpp_FUN_0042b850
// Address: 0042b850
// Address Range: [[0042b850, 0042ba27]]
// Convention: unknown
// Signature: void core_carved_cpp_FUN_0042b850(int param_1,int param_2)

#include "nocturne.h"

void core_carved_cpp_FUN_0042b850(int param_1,int param_2)

{
  SMotion *pSVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x27b0) != 0) {
    core_event_cpp_CEventList_executeCommands_FUN_004a1b70
              (0x01C51D80,"@ShotInvulnerable" + 1);
    return;
  }
  core_carved_cpp_FUN_0042b580(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x154) + 0xf8))(param_1);
  *(float *)(param_1 + 0x2538) = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2298 + *(int *)(param_1 + 0xc2d0) * 4) == 0) {
    *(uint *)(param_1 + 0x2538) = 0;
  }
  *(uint *)(param_1 + 0xc1e4) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2538)) {
    iVar2 = core_actor_cpp_FUN_0040cc60(0,5);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),iVar2 + 0xd,1);
    if (*(float *)(param_1 + 0xc2d4) <= 0.0) {
      *(uint *)(param_1 + 0xc2d4) = 0x40000000;
      iVar2 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc2dc));
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))
                          (param_1,"carved-damage?.wav");
        *(uint *)(param_1 + 0xc2dc) = uVar3;
        core_enemy_cpp_FUN_004a0f00(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)(param_1 + 0x158));
    iVar2 = *(int *)(pSVar1 + 0x24);
    if (((iVar2 == 0x16) || (iVar2 == 0x13)) && ((iVar2 == 0x17 || (iVar2 == 0x14)))) {
      if (iVar2 == 0x18) goto LAB_0042b956;
      if (iVar2 == 0x15) {
        core_enemy_cpp_FUN_004a0f00(param_1,param_2);
        return;
      }
    }
    core_carved_cpp_FUN_0042b370(param_1);
    iVar2 = core_actor_cpp_FUN_0040cc60(0,2);
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),iVar2 + 0x13,1);
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc2dc));
    (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"carved-die?.wav");
    (**(code **)(*(int *)(param_1 + 0x154) + 0xa8))(param_1,0x32,0x41c80000);
  }
LAB_0042b956:
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
