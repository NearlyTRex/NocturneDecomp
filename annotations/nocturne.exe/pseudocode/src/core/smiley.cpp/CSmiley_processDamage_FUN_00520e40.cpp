// Name: core_smiley.cpp_CSmiley_processDamage_FUN_00520e40
// Address: 00520e40
// Address Range: [[00520e40, 00520f45]]
// Convention: unknown
// Signature: void core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(int param_1,int param_2)

#include "nocturne.h"

void core_smiley_cpp_CSmiley_processDamage_FUN_00520e40(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xbd64) != 1) {
    *(uint *)(param_2 + 0x30) = 100;
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 4) {
    *(uint *)(param_2 + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_00520e74;
  *(uint *)(param_2 + 4) = 0;
LAB_00520e74:
  if (0.0 < *(float *)(param_2 + 4)) {
    core_smiley_cpp_CSmiley_processDismemberment_FUN_00520b60(param_1,param_2);
  }
  fVar2 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  iVar1 = param_1 + 0x150;
  *(float *)(param_1 + 0x2434) = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    iVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004e1660(iVar1);
    if ((*(int *)(iVar3 + 0x24) != 8) && (*(int *)(iVar3 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,7,1);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,1,0);
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"smiley_die??.wav");
    }
    core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_004e16b0(iVar1,3,1);
  core_enemy_cpp_CEnemy_processDamage_FUN_00479f70(param_1,param_2);
  return;
}
