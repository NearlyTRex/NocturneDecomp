// Name: core_hotdemon.cpp_FUN_004d4390
// Address: 004d4390
// Address Range: [[004d4390, 004d4557]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d4390(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004d4390(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  uint auStackY_1010 [1009];
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  bVar4 = 0;
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10af8));
  if (*(int *)(param_2 + 0x28) == 8) {
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_005da6b1;
    core_actor_cpp_FUN_00408d70(param_1,param_2 + 0x1c);
    iVar2 = 0;
    CStack_28._0_4_ = CStack_1c._0_4_;
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4) =
         *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
         *(uint *)((int)&CStack_1c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_FUN_0049d090(0x01C3DEB4,&CStack_28,(CVector3f *)0x0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x2b4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    iVar2 = *(int *)(iVar2 + 0x24);
    if ((((iVar2 != 4) && (iVar2 != 5)) && (iVar2 != 10)) && (iVar2 != 0xb)) {
      if (iVar2 < 6) {
        iVar2 = 4;
      }
      else {
        iVar2 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,iVar2,1);
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10afc));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotdemon-die.wav");
      *(uint *)(param_1 + 0x10afc) = uVar3;
      core_enemy_cpp_FUN_00488890(param_1,param_2);
      return;
    }
  }
  else {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar2 + 0x24) < 6) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      iVar2 = 3;
    }
    else {
      iVar2 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)(param_1 + 0x2b4),iVar2,1);
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x10afc));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hotdemon-hurt?.wav");
      *(uint *)(param_1 + 0x10afc) = uVar3;
      core_enemy_cpp_FUN_00488890(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
