// Name: core_smiley.cpp_FUN_0056d0f0
// Address: 0056d0f0
// Address Range: [[0056d0f0, 0056d1f5]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_0056d0f0(CSmiley *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_smiley_cpp_FUN_0056d0f0(CSmiley *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  int iVar1;
  float fVar2;
  SMotion *pSVar3;
  
  if (*(int *)&param_1->field_0xc2a8 != 1) {
    *(uint *)(param_2 + 0x30) = 100;
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  iVar1 = *(int *)(param_2 + 0x30);
  if (iVar1 == 4) {
    *(uint *)(param_2 + 0x30) = 100;
  }
  else if ((iVar1 < 0xc) || (iVar1 == 0x6b)) goto LAB_0056d124;
  *(uint *)(param_2 + 4) = 0;
LAB_0056d124:
  if (0.0 < *(float *)(param_2 + 4)) {
    core_smiley_cpp_FUN_0056ce10(param_1,param_2);
  }
  fVar2 = *(float *)&param_1->field_0x2538 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x158;
  *(float *)&param_1->field_0x2538 = fVar2;
  if (fVar2 <= 0.0) {
    *(uint *)&param_1->field_0x2538 = 0;
    pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                       ((CMotionController *)this_ptr);
    if ((*(int *)(pSVar3 + 0x24) != 8) && (*(int *)(pSVar3 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)this_ptr,7,1);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x128))(param_1,1,0);
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"@smiley_die??.wav" + 1);
    }
    core_enemy_cpp_FUN_004a0f00(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0((CMotionController *)this_ptr,3,1);
  core_enemy_cpp_FUN_004a0f00(param_1,param_2);
  return;
}
