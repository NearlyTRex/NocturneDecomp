// Name: core_union.cpp_FUN_005a5130
// Address: 005a5130
// Address Range: [[005a5130, 005a5276]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a5130(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_union_cpp_FUN_005a5130(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  this_ptr = &param_1->field_0x2b4;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar2 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,*(int *)&param_1[1].field_0x924,1);
    return;
  }
  iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
  uVar1 = *(uint *)(iVar2 + 0x24);
  if (uVar1 < 2) {
    if (uVar1 != 0) {
LAB_005a5261:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,0,1);
      return;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
    param_2 = *(float *)&param_1[1].field_0xdf0 - param_2;
    *(float *)&param_1[1].field_0xdf0 = param_2;
    if (param_2 <= 0.0) {
      *(uint *)&param_1[1].field_0xdf0 = 0;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,2,1);
      return;
    }
  }
  else if (uVar1 < 3) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
    if (_DAT_005f056e < *(float *)&param_1->field_0x2bc) {
      *(uint *)&param_1[1].field_0xdf0 = 0x40a00000;
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,3,1);
      core_union_cpp_FUN_005a5460(param_1);
      *(int *)&param_1[1].field_0xdf4 = *(int *)&param_1[1].field_0xdf4 + -1;
      return;
    }
  }
  else {
    if (uVar1 != 3) goto LAB_005a5261;
    if (_DAT_005f056a < *(float *)&param_1->field_0x2bc) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)this_ptr,0,1);
      return;
    }
  }
  return;
}
