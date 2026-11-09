// Name: core_beast.cpp_FUN_00414a80
// Address: 00414a80
// Address Range: [[00414a80, 00414b05]]
// Convention: unknown
// Signature: void core_beast_cpp_FUN_00414a80(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_beast_cpp_FUN_00414a80(CCharacter *param_1,float param_2)

{
  int iVar1;
  float fStack_10;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    fStack_10 = param_2 * *(float *)(param_1 + 1);
    while (0.0 < fStack_10) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)&param_1->field_0x2b4,&fStack_10);
    }
    core_charactr_cpp_FUN_00424470(param_1);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              ((CDeformableModelInstance *)&param_1->field_0x2b4);
    core_charactr_cpp_FUN_00429e90(param_1,param_2);
  }
  return;
}
