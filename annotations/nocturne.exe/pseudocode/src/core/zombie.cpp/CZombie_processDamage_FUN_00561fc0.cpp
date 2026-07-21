// Name: core_zombie.cpp_CZombie_processDamage_FUN_00561fc0
// Address: 00561fc0
// Address Range: [[00561fc0, 005621d6]]
// Convention: unknown
// Signature: void core_zombie_cpp_CZombie_processDamage_FUN_00561fc0(int param_1,int param_2)

#include "nocturne.h"

void core_zombie_cpp_CZombie_processDamage_FUN_00561fc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  
  core_zombie_cpp_CZombie_processDismemberment_FUN_00561cf0(param_1,param_2);
  (**(code **)(*(int *)(param_1 + 0x14c) + 0xf0))(param_1);
  *(float *)(param_1 + 0x2434) = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  if (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) == 0) {
    *(uint *)(param_1 + 0x2434) = 0;
  }
  *(uint *)(param_1 + 0xbca0) = 0x3f99999a;
  if (0.0 < *(float *)(param_1 + 0x2434)) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,4,1);
    if (*(float *)(param_1 + 0xbdfc) <= 0.0) {
      *(uint *)(param_1 + 0xbdfc) = 0x40000000;
      iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00526c50(*(uint *)(param_1 + 0xbe04));
      if (iVar1 == 0) {
        if (*(int *)(param_1 + 0xbdb0) != 0) {
          uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                            (param_1,"f-zombie-hit?.wav");
          *(uint *)(param_1 + 0xbe04) = uVar3;
          core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
          return;
        }
        uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"zom-s0?.wav");
        *(uint *)(param_1 + 0xbe04) = uVar3;
        core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
        return;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar1 + 0x24) != 8) && (*(int *)(iVar1 + 0x24) != 7)) {
      core_zombie_cpp_CZombie_dropAndClearTarget_FUN_005618c0(param_1);
      uVar3 = 6;
      if ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbdf8) * 4) == 0) &&
         ((*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde8) * 4) != 0 ||
          (*(int *)(param_1 + 0x2290 + *(int *)(param_1 + 0xbde0) * 4) != 0)))) {
        uVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                          (param_1 + 0x150,"@lookForHead" + 1,0);
        iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_004e1010(uVar2);
        if (-1 < iVar1) {
          uVar3 = 9;
        }
      }
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar3,1);
      sound_sndmain_cpp_killSfx_FUN_00527230(*(uint *)(param_1 + 0xbe04));
      if (*(int *)(param_1 + 0xbdb0) == 0) {
        pcVar4 = "zom-d0?.wav";
      }
      else {
        pcVar4 = "f-zombie-die?.wav";
      }
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar4);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0xa0))(param_1,0x32,0x41c80000);
    }
  }
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
