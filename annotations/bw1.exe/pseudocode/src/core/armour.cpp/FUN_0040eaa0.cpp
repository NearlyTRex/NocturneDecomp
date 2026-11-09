// Name: core_armour.cpp_FUN_0040eaa0
// Address: 0040eaa0
// Address Range: [[0040eaa0, 0040ebdf]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040eaa0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_armour_cpp_FUN_0040eaa0(CCharacter *param_1,float param_2)

{
  int iVar1;
  float fStack_20;
  CVector3f CStack_1c;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    fStack_20 = param_2 * *(float *)(param_1 + 1);
    while (0.0 < fStack_20) {
      core_motion_cpp_CMotionController_advance_FUN_00524270
                ((CMotionController *)&param_1->field_0x158,&fStack_20);
    }
    *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_00435320(param_1,param_2 * *(float *)(param_1 + 1));
    core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
              ((CMotionController *)&param_1->field_0x158);
    iVar1 = core_charactr_cpp_FUN_00432240(param_1,param_2);
    if (iVar1 != 0) {
      *(uint *)&param_1->field_0x24a4 = 0;
      *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
      *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433e80(param_1,param_2);
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                      (0x01C51D80,&param_1[1].field_0x98);
    if (iVar1 != 0) {
      (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))(param_1,"armour.wav");
      CStack_1c._0_4_ = 0;
      CStack_1c._4_4_ = 0;
      CStack_1c._8_4_ = 0x40a00000;
      core_charactr_cpp_CCharacter_dismember_FUN_00430d90(param_1,&CStack_1c,-1.0,1);
      return;
    }
  }
  return;
}
