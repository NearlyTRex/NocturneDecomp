// Name: core_dog.cpp_CZombieDog_processDamage_FUN_00454e30
// Address: 00454e30
// Address Range: [[00454e30, 00454ede]]
// Convention: unknown
// Signature: void core_dog_cpp_CZombieDog_processDamage_FUN_00454e30(int param_1,int param_2)

#include "nocturne.h"

void core_dog_cpp_CZombieDog_processDamage_FUN_00454e30(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar2 + 0x24) == 7) || (*(int *)(iVar2 + 0x24) == 6)) goto LAB_00454e65;
    uVar3 = 6;
  }
  else {
    uVar3 = 5;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar3,1);
LAB_00454e65:
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                    (0x02DC9450,*(uint *)(param_1 + 0xbd2c));
  if (iVar2 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"dog2.wav");
  *(uint *)(param_1 + 0xbd2c) = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
