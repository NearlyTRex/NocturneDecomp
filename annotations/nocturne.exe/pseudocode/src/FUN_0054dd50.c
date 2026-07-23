// Name: FUN_0054dd50
// Address: 0054dd50
// Address Range: [[0054dd50, 0054df8e]]
// Convention: unknown
// Signature: void FUN_0054dd50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0054dd50(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte local_24 [20];
  
  if (*(int *)(param_2 + 0x28) == 7) {
    iVar2 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_24,param_2 + 0x1c);
    do {
      iVar2 = iVar2 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_24,0,0x4000,0x4000,0,0xffff);
    } while (iVar2 < 5);
  }
  if (*(int *)(param_1 + 0xbe168) == 0) {
    if ((*(int *)(param_2 + 0x28) == 1) &&
       (iVar2 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(param_2 + 0x34),_DAT_01cc56dc), iVar2 != 0)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,10,1);
      iVar3 = (**(code **)(*(int *)(iVar2 + 0x14c) + 0x8c))(iVar2);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(iVar3 + 0x14c) + 0x88))(iVar3,iVar2,0);
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890(iVar3,_DAT_01cae124);
        if (iVar3 != 0) {
          iVar4 = core_inv_cpp_CInventory_findItemByName_FUN_004c0710(iVar3 + 0x1f5a0,iVar2);
          if (iVar4 == iVar2) {
            core_inv_cpp_CInventory_removeItem_FUN_004c07b0(iVar3 + 0x1f5a0,iVar2,0);
            core_mission_cpp_CDemonMission_addActorToList_FUN_004d8c60(0x01CC9450,iVar2);
          }
        }
      }
      core_charactr_cpp_CCharacter_pickupObjectNow_FUN_00428f40(param_1,0,iVar2,0x3e4ccccd);
      core_event_cpp_CEventList_executeCommands_FUN_0047ab70
                (0x01C03A10,"VampireBossBitesIt");
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbeda8));
      core_sound_cpp_CSound_playSound_FUN_0052ea40
                (0x02DC9450,param_1,"voicudeath.wav @ 2.5");
      *(uint *)(param_1 + 0x2434) = 0;
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 0xbe168) != 2) {
      *(uint *)(param_2 + 4) = 0;
      return;
    }
    fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2434) = fVar1;
    if (fVar1 < (float)25) {
      *(uint *)(param_1 + 0x2434) = 0x41c7fdf4;
    }
    iVar2 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar2 == 0) {
      uVar5 = 3;
    }
    else if (iVar2 == 1) {
      uVar5 = 4;
    }
    else {
      uVar5 = 5;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0xbd24,uVar5,1);
    iVar2 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbeda8));
    if (iVar2 == 0) {
      uVar5 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"voicuhurt.wav");
      *(uint *)(param_1 + 0xbeda8) = uVar5;
      return;
    }
  }
  return;
}
