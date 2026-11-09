// Name: core_hotdemon.cpp_FUN_004f05b0
// Address: 004f05b0
// Address Range: [[004f05b0, 004f0777]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004f05b0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004f05b0(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  byte bVar4;
  uint auStackY_1010 [1009];
  int iVar5;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc268));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005e5212;
    core_actor_cpp_FUN_00408b40(param_1,param_2 + 0x1c);
    iVar5 = 0;
    CStack_28._0_4_ = CStack_1c._0_4_;
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    do {
      iVar5 = iVar5 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004b59e0
                (0x01C57074,&CStack_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar5 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    iVar5 = *(int *)(pSVar2 + 0x24);
    if ((((iVar5 != 4) && (iVar5 != 5)) && (iVar5 != 10)) && (iVar5 != 0xb)) {
      if (iVar5 < 6) {
        iVar5 = 4;
      }
      else {
        iVar5 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(this_ptr,iVar5,1);
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)(param_1 + 0xc26c));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hotdemon-die.wav");
      *(uint *)(param_1 + 0xc26c) = uVar3;
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  else {
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(this_ptr);
    if ((*(int *)(pSVar2 + 0x24) < 6) || (*(int *)(pSVar2 + 0x24) == 0xf)) {
      iVar5 = 3;
    }
    else {
      iVar5 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)(param_1 + 0x158),iVar5,1);
    iVar5 = sound_sndmain_cpp_FUN_005735a0(*(uint *)(param_1 + 0xc26c));
    if (iVar5 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hotdemon-hurt?.wav");
      *(uint *)(param_1 + 0xc26c) = uVar3;
      core_enemy_cpp_FUN_004a0f00(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
