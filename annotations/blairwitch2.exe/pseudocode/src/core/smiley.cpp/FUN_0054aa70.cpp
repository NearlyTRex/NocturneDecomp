// Name: core_smiley.cpp_FUN_0054aa70
// Address: 0054aa70
// Address Range: [[0054aa70, 0054ab75]]
// Convention: unknown
// Signature: void core_smiley_cpp_FUN_0054aa70(CSmiley *param_1,SDamageInfo *param_2)

#include "nocturne.h"

void core_smiley_cpp_FUN_0054aa70(CSmiley *param_1,SDamageInfo *param_2)

{
  byte *this_ptr;
  float fVar1;
  int iVar2;
  
  if (*(int *)&param_1->field_0x10b38 != 1) {
    *(uint *)(param_2 + 0x30) = 100;
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  iVar2 = *(int *)(param_2 + 0x30);
  if (iVar2 == 4) {
    *(uint *)(param_2 + 0x30) = 100;
  }
  else if ((iVar2 < 0xc) || (iVar2 == 0x6b)) goto LAB_0054aaa4;
  *(uint *)(param_2 + 4) = 0;
LAB_0054aaa4:
  if (0.0 < *(float *)(param_2 + 4)) {
    core_smiley_cpp_FUN_0054a790(param_1,param_2);
  }
  fVar1 = *(float *)&param_1->field_0x25a8 - *(float *)(param_2 + 4);
  this_ptr = &param_1->field_0x2b4;
  *(float *)&param_1->field_0x25a8 = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)&param_1->field_0x25a8 = 0;
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if ((*(int *)(iVar2 + 0x24) != 8) && (*(int *)(iVar2 + 0x24) != 7)) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,7,1);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x130))(param_1,1,0);
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"@smiley_die??.wav" + 1);
    }
    core_enemy_cpp_FUN_00488890(param_1,param_2);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620((CMotionController *)this_ptr,3,1);
  core_enemy_cpp_FUN_00488890(param_1,param_2);
  return;
}
