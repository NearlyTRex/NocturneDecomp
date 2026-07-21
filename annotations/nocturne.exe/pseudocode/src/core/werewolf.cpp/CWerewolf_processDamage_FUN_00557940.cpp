// Name: core_werewolf.cpp_CWerewolf_processDamage_FUN_00557940
// Address: 00557940
// Address Range: [[00557940, 00557c24]]
// Convention: unknown
// Signature: void core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_werewolf_cpp_CWerewolf_processDamage_FUN_00557940(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte local_28 [24];
  
  sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd40));
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    core_werewolf_cpp_CWerewolf_playHowl_FUN_00557060(param_1);
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x16,1);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  if (*(int *)(param_2 + 0x28) == 3) {
    iVar4 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)_DAT_00597ed9;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_28,param_2 + 0x1c);
    do {
      iVar4 = iVar4 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_28,0,0x4000,0x4000,0,0xffff);
    } while (iVar4 < 5);
  }
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar4 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
    if ((*(int *)(iVar2 + 0x24) != 0xd) && (*(int *)(iVar2 + 0x24) != 0xc)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar4,0xc,1);
      if ((*(int *)(param_1 + 0xbd24) == 0) && (*(int *)(0x01E57284 + 0x15aa60) != 0)) {
        if (*(float *)(param_1 + 0x20) <= (float)_DAT_00597ee1) {
          if ((double)*(float *)(param_1 + 0x20) < _DAT_00597ee9) {
            *(uint *)(param_1 + 0x34) = 0x3fc90fdb;
          }
        }
        else {
          *(uint *)(param_1 + 0x34) = 0xbfc90fdb;
        }
      }
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbd48));
      uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"werewolf-die?.wav");
      *(uint *)(param_1 + 0xbd48) = uVar3;
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
    }
    goto LAB_00557a49;
  }
  if (*(int *)(param_1 + 0xbd24) != 2) {
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar4);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((iVar4 == 0xe) || (iVar4 == 0xf)) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,9,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,10,1);
      }
      if (iVar4 == 2) {
        uVar3 = 0xb;
LAB_00557b5d:
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar3,1);
      }
    }
    else if ((((iVar4 == 0) || (iVar4 == 1)) || (iVar4 == 2)) ||
            (((iVar4 == 0x13 || (iVar4 == 3)) || (iVar4 == 4)))) {
      iVar4 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
      if (iVar4 == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x10,1);
      }
      if (iVar4 == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,0x11,1);
      }
      if (iVar4 == 2) {
        uVar3 = 0x12;
        goto LAB_00557b5d;
      }
    }
  }
  iVar4 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbd48));
  if (iVar4 == 0) {
    uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"werewolf-hurt?.wav");
    *(uint *)(param_1 + 0xbd48) = uVar3;
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
LAB_00557a49:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
