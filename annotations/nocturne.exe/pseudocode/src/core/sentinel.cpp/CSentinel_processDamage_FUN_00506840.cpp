// Name: core_sentinel.cpp_CSentinel_processDamage_FUN_00506840
// Address: 00506840
// Address Range: [[00506840, 00506939]]
// Convention: unknown
// Signature: void core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(int param_1,int param_2)

#include "nocturne.h"

void core_sentinel_cpp_CSentinel_processDamage_FUN_00506840(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (0.0 < fVar1) {
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,5,1);
    }
    if (iVar2 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
    }
    if (iVar2 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,7,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd24));
    if (iVar4 != 0) goto LAB_005068bd;
    pcVar5 = "sentinel-hurt?.wav";
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
    if ((*(int *)(iVar2 + 0x24) == 8) || (*(int *)(iVar2 + 0x24) == 9)) goto LAB_005068bd;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,8,1);
    sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd24));
    pcVar5 = "sentinel-die.wav";
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar5);
  *(uint *)(param_1 + 0xbd24) = uVar3;
LAB_005068bd:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
