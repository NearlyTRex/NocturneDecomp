// Name: core_hotdemon.cpp_FUN_004d5fd0
// Address: 004d5fd0
// Address Range: [[004d5fd0, 004d61b2]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d5fd0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004d5fd0(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  SMotion *pSVar3;
  uint uVar4;
  byte bVar5;
  uint auStackY_1010 [1009];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar5 = 0;
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd054));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005c5421;
    core_actor_cpp_FUN_00408b80(param_1,param_2 + 0x1c);
    iVar2 = 0;
    CStack_28._0_4_ = CStack_1c._0_4_;
    *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&CStack_1c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                (0x01C73654,&CStack_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x158);
  *(float *)(param_1 + 0x2538) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2538) = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
    iVar2 = *(int *)(pSVar3 + 0x24);
    if ((((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 10)) && (iVar2 != 0xb)) {
      if (iVar2 < 6) {
        iVar2 = 4;
      }
      else {
        iVar2 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(this_ptr,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)(param_1 + 0xd058));
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hotdemon-die.wav");
      *(uint *)(param_1 + 0xd058) = uVar4;
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  else {
    iVar2 = unkafter_enemy_cpp_FUN_0048a1b0(param_1,*(uint *)(param_2 + 4));
    if (iVar2 != 0) {
      pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(this_ptr);
      if ((*(int *)(pSVar3 + 0x24) < 6) || (*(int *)(pSVar3 + 0x24) == 0xf)) {
        iVar2 = 3;
      }
      else {
        iVar2 = 9;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                ((CMotionController *)(param_1 + 0x158),iVar2,1);
    }
    iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 0xd058));
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hotdemon-hurt?.wav");
      *(uint *)(param_1 + 0xd058) = uVar4;
      core_enemy_cpp_FUN_00489b80(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_FUN_00489b80(param_1,param_2);
  return;
}
