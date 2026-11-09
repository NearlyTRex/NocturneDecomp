// Name: core_cow.cpp_FUN_00448df0
// Address: 00448df0
// Address Range: [[00448df0, 00448ea3]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_00448df0(CZombieCow *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_cow_cpp_FUN_00448df0(CZombieCow *param_1,SDamageInfo *param_2)

{
  float fVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  
  core_cow_cpp_FUN_00448b70(param_1,param_2);
  fVar1 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x2538 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)&param_1->field_0x158);
    if ((*(int *)(pSVar2 + 0x24) == 5) || (*(int *)(pSVar2 + 0x24) == 4)) goto LAB_00448e30;
    iVar4 = 4;
  }
  else {
    iVar4 = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
            ((CMotionController *)&param_1->field_0x158,iVar4,1);
LAB_00448e30:
  iVar4 = core_sound_cpp_FUN_0057d9c0(0x02C82A60,*(uint *)&param_1->field_0xc270);
  if (iVar4 != 0) {
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
    return;
  }
  uVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"cow?.wav");
  *(uint *)&param_1->field_0xc270 = uVar3;
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
