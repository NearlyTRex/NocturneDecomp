// Name: core_dracbrid.cpp_CDraculaBride_processDamage_FUN_0045a6f0
// Address: 0045a6f0
// Address Range: [[0045a6f0, 0045a96c]]
// Convention: unknown
// Signature: void core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0045a6f0(int param_1,int param_2)

#include "nocturne.h"

void core_dracbrid_cpp_CDraculaBride_processDamage_FUN_0045a6f0(int param_1,int param_2)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [20];
  
  bVar2 = false;
  if (*(int *)(param_2 + 0x28) == 7) {
    iVar5 = 0;
    *(float *)(param_2 + 4) = *(float *)(param_2 + 4) * (float)2;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_30,param_2 + 0x1c);
    do {
      iVar5 = iVar5 + 1;
      core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                (0x01C08D04,local_30,0,0x4000,0x4000,0,0xffff);
    } while (iVar5 < 5);
    bVar2 = true;
  }
  if (*(int *)(param_2 + 0x30) == 0x68) {
    bVar2 = true;
  }
  if (*(int *)(param_2 + 0x30) == 0x6c) {
    uVar3 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
                      (param_1 + 0x150,local_3c,0);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_24,uVar3);
    core_charactr_cpp_FUN_00427730(param_1,local_24,0,0,0x41200000,0);
  }
  core_dracbrid_cpp_CDraculaBride_checkHeartShot_FUN_0045a6a0(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar5 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar5);
    iVar4 = *(int *)(iVar4 + 0x24);
    if ((((iVar4 != 0x11) && (iVar4 != 0x10)) && (iVar4 != 10)) && (iVar4 != 7)) {
      if (bVar2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,7,1);
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,"bride-launch.wav");
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar5,10,1);
      }
    }
    iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3ecccccd);
    if (iVar5 != 0) {
      core_dracbrid_cpp_FUN_0045ab40(param_1,"bride-die?.wav",0x40000000);
      core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
      return;
    }
    goto LAB_0045a7ee;
  }
  iVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar5);
  iVar5 = *(int *)(iVar5 + 0x24);
  if (((iVar5 == 8) || (iVar5 == 9)) || (iVar5 == 2)) {
    uVar3 = 1;
LAB_0045a8a5:
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar3,1);
  }
  else if (((iVar5 == 0) || (iVar5 == 0xe)) ||
          (((iVar5 == 0x13 || (((iVar5 == 0xc || (iVar5 == 0x12)) || (iVar5 == 0x14)))) ||
           (iVar5 == 0x15)))) {
    iVar5 = core_actor_cpp_getRandomInt_FUN_0040de00(0,2);
    if (iVar5 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
    }
    if (iVar5 == 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,5,1);
    }
    if (iVar5 == 2) {
      uVar3 = 6;
      goto LAB_0045a8a5;
    }
  }
  iVar5 = core_actor_cpp_randomChance_FUN_0040dea0(0x3ecccccd);
  if (iVar5 != 0) {
    core_dracbrid_cpp_FUN_0045ab40(param_1,"bride-hurt?.wav",0x40000000);
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
LAB_0045a7ee:
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
