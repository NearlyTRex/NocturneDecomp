// Name: core_armour.cpp_FUN_0040ef00
// Address: 0040ef00
// Address Range: [[0040ef00, 0040f03f]]
// Convention: unknown
// Signature: void core_armour_cpp_FUN_0040ef00(CCharacter *param_1,float param_2)

#include "nocturne.h"

void core_armour_cpp_FUN_0040ef00(CCharacter *param_1,float param_2)

{
  int iVar1;
  float fStack_20;
  CVector3f CStack_1c;
  
  iVar1 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0(param_1,param_2);
  if (iVar1 != 0) {
    *(uint *)&param_1->field_0x2510 = 0;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    fStack_20 = param_2 * *(float *)(param_1 + 1);
    while (0.0 < fStack_20) {
      core_motion_cpp_CMotionController_advance_FUN_005030c0
                ((CMotionController *)&param_1->field_0x2b4,&fStack_20);
    }
    *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
    core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 1));
    core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    iVar1 = core_charactr_cpp_FUN_004287f0(param_1,param_2);
    if (iVar1 != 0) {
      *(uint *)&param_1->field_0x2510 = 0;
      *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
      *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
    }
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
              ((CDeformableModelInstance *)&param_1->field_0x2b4);
    core_charactr_cpp_FUN_00429e90(param_1,param_2);
    iVar1 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                      (0x01C38BC0,&param_1[1].field_0x98);
    if (iVar1 != 0) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x34))(param_1,"armour.wav");
      CStack_1c._0_4_ = 0;
      CStack_1c._4_4_ = 0;
      CStack_1c._8_4_ = 0x40a00000;
      core_charactr_cpp_CCharacter_dismember_FUN_00427360(param_1,&CStack_1c,-1.0,1);
      return;
    }
  }
  return;
}
