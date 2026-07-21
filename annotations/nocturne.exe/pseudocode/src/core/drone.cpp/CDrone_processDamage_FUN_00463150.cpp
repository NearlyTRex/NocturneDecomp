// Name: core_drone.cpp_CDrone_processDamage_FUN_00463150
// Address: 00463150
// Address Range: [[00463150, 004632b7]]
// Convention: unknown
// Signature: void core_drone_cpp_CDrone_processDamage_FUN_00463150(int param_1,int param_2)

#include "nocturne.h"

void core_drone_cpp_CDrone_processDamage_FUN_00463150(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd38));
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd34));
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (0.0 < fVar1) {
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd34));
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd30));
    if (iVar2 == 0) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"drone-hurt?.wav");
      *(uint *)(param_1 + 0xbd30) = uVar3;
    }
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,3,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,5,1);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,7,1);
    }
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd30));
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd34));
    uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"drone-die?.wav");
    *(uint *)(param_1 + 0xbd30) = uVar3;
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
