// Name: core_beast.cpp_FUN_00414770
// Address: 00414770
// Address Range: [[00414770, 004147f5]]
// Convention: unknown
// Signature: void core_beast_cpp_FUN_00414770(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_beast_cpp_FUN_00414770(CCharacter *param_1,float param_2)

{
  int iVar1;
  float fStack_10;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    fStack_10 = param_2 * *(float *)(param_1 + 1);
    while (0.0 < fStack_10) {
      core_motion_cpp_CMotionController_advance_FUN_00524270
                ((CMotionController *)&param_1->field_0x158,&fStack_10);
    }
    core_charactr_cpp_FUN_0042e160(param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
              ((CDeformableModelInstance *)&param_1->field_0x158);
    core_charactr_cpp_FUN_00433e80(param_1,param_2);
  }
  return;
}
