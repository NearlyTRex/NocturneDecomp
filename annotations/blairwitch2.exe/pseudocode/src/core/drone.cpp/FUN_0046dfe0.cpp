// Name: core_drone.cpp_FUN_0046dfe0
// Address: 0046dfe0
// Address Range: [[0046dfe0, 0046e147]]
// Convention: unknown
// Signature: void core_drone_cpp_FUN_0046dfe0(int param_1,int param_2)

#include "nocturne.h"

void core_drone_cpp_FUN_0046dfe0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b0c));
  sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b08));
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b08));
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x10b04));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"drone-hurt?.wav");
      *(uint *)(param_1 + 0x10b04) = uVar3;
    }
    iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),3,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),4,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),5,1);
      core_enemy_cpp_FUN_00488890(param_1,param_2);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = core_motion_cpp_FUN_005035c0((CMotionController *)(param_1 + 0x2b4));
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b04));
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10b08));
    uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"drone-die?.wav");
    *(uint *)(param_1 + 0x10b04) = uVar3;
  }
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
