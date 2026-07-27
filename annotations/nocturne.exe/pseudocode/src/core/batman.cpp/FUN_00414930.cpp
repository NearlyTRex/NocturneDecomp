// Name: core_batman.cpp_FUN_00414930
// Address: 00414930
// Address Range: [[00414930, 00414b3c]]
// Convention: unknown
// Signature: void core_batman_cpp_FUN_00414930(int param_1,int param_2)

#include "nocturne.h"

void core_batman_cpp_FUN_00414930(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [20];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbddc));
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbdd4));
  if (*(int *)(param_2 + 0x28) == 7) {
    iVar4 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_30,param_2 + 0x1c);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_30,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    uVar2 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                      (param_1 + 0x150,local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_24,uVar2);
    core_charactr_cpp_FUN_00427730(param_1,local_24,0,0,0x41200000,0);
  }
  core_batman_cpp_CBatman_processDismemberment_FUN_004145f0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
    if ((*(int *)(iVar3 + 0x24) != 7) && (*(int *)(iVar3 + 0x24) != 8)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,7,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbdd8));
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"batman-die.wav");
      *(uint *)(param_1 + 0xbdd8) = uVar2;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  else {
    iVar3 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar3 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,4,1);
    }
    if (iVar3 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,5,1);
    }
    if (iVar3 == 2) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,6,1);
    }
    iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbdd8));
    if (iVar4 == 0) {
      uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"batman-hurt?.wav");
      *(uint *)(param_1 + 0xbdd8) = uVar2;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
