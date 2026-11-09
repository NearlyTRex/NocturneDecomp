// Name: core_cow.cpp_FUN_00439b30
// Address: 00439b30
// Address Range: [[00439b30, 00439be3]]
// Convention: unknown
// Signature: void core_cow_cpp_FUN_00439b30(CZombieCow *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_cow_cpp_FUN_00439b30(CZombieCow *param_1,SDamageInfo *param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  core_cow_cpp_CZombieCow_processDismemberment_FUN_004398b0(param_1,param_2);
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar3 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    if ((*(int *)(iVar3 + 0x24) == 5) || (*(int *)(iVar3 + 0x24) == 4)) goto LAB_00439b70;
    iVar3 = 4;
  }
  else {
    iVar3 = 3;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,iVar3,1);
LAB_00439b70:
  iVar3 = core_sound_cpp_FUN_0055af70(0x0264B290,*(uint *)&param_1->field_0x10b00);
  if (iVar3 != 0) {
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
  uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"cow?.wav");
  *(uint *)&param_1->field_0x10b00 = uVar2;
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
