// Name: core_cow.cpp_CZombieCow_processDamage_FUN_0043c5e0
// Address: 0043c5e0
// Address Range: [[0043c5e0, 0043c693]]
// Convention: unknown
// Signature: void core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(int param_1,int param_2)

#include "nocturne.h"

void core_cow_cpp_CZombieCow_processDamage_FUN_0043c5e0(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  core_cow_cpp_CZombieCow_processDismemberment_FUN_0043c360(param_1,param_2);
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(param_1 + 0x150);
    if ((*(int *)(iVar2 + 0x24) == 5) || (*(int *)(iVar2 + 0x24) == 4)) goto LAB_0043c620;
    uVar3 = 4;
  }
  else {
    uVar3 = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(param_1 + 0x150,uVar3,1);
LAB_0043c620:
  iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_0052eba0
                    (0x02DC9450,*(uint *)(param_1 + 0xbd2c));
  if (iVar2 != 0) {
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"cow?.wav");
  *(uint *)(param_1 + 0xbd2c) = uVar3;
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
