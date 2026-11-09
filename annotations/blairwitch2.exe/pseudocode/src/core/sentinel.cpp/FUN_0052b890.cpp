// Name: core_sentinel.cpp_FUN_0052b890
// Address: 0052b890
// Address Range: [[0052b890, 0052b989]]
// Convention: unknown
// Signature: void core_sentinel_cpp_FUN_0052b890(int param_1,int param_2)

#include "nocturne.h"

void core_sentinel_cpp_FUN_0052b890(int param_1,int param_2)

{
  CMotionController *this_ptr;
  float fVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  this_ptr = (CMotionController *)(param_1 + 0x2b4);
  *(float *)(param_1 + 0x25a8) = fVar1;
  if (0.0 < fVar1) {
    iVar2 = core_actor_cpp_FUN_0040cfc0(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,5,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),6,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)(param_1 + 0x2b4),7,1);
    }
    iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x10af8));
    if (iVar2 != 0) goto LAB_0052b90d;
    pcVar4 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(iVar2 + 0x24) == 9)) goto LAB_0052b90d;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(this_ptr,8,1);
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x10af8));
    pcVar4 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,pcVar4);
  *(uint *)(param_1 + 0x10af8) = uVar3;
LAB_0052b90d:
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
