// Name: core_hotdemon.cpp_CHotDemon_processDamage_FUN_004b9720
// Address: 004b9720
// Address Range: [[004b9720, 004b98e0]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(int param_1,int param_2)

#include "nocturne.h"

void core_hotdemon_cpp_CHotDemon_processDamage_FUN_004b9720(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte local_24 [20];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd24));
  if (*(int *)(param_2 + 0x28) == 8) {
    iVar2 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_24,param_2 + 0x1c);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_24,0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar2 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
    iVar3 = *(int *)(iVar3 + 0x24);
    if ((((iVar3 != 4) && (iVar3 != 5)) && (iVar3 != 10)) && (iVar3 != 0xb)) {
      if (iVar3 < 6) {
        uVar4 = 4;
      }
      else {
        uVar4 = 10;
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar2,uVar4,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd28));
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hotdemon-die.wav");
      *(uint *)(param_1 + 0xbd28) = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  else {
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar2);
    if ((*(int *)(iVar2 + 0x24) < 6) || (*(int *)(iVar2 + 0x24) == 0xf)) {
      uVar4 = 3;
    }
    else {
      uVar4 = 9;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar4,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd28));
    if (iVar2 == 0) {
      uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hotdemon-hurt?.wav")
      ;
      *(uint *)(param_1 + 0xbd28) = uVar4;
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
