// Name: unkafter_basicene.cpp_FUN_0059e7d0
// Address: 0059e7d0
// Address Range: [[0059e7d0, 0059e87a]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059e7d0(CCharacter *param_1,float param_2)

#include "nocturne.h"

void unkafter_basicene_cpp_FUN_0059e7d0(CCharacter *param_1,float param_2)

{
  float fVar1;
  int bone_index;
  float afStack_18 [2];
  
  *(uint *)&param_1->field_0x2510 = 0;
  *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
  *(uint *)&param_1->field_0x2508 = *(uint *)&param_1->field_0x250c;
  afStack_18[0] = param_2 * *(float *)(param_1 + 1);
  while (0.0 < afStack_18[0]) {
    bone_index = core_motion_cpp_CMotionController_advance_FUN_005030c0
                           ((CMotionController *)&param_1->field_0x2b4,afStack_18);
    if (bone_index < 100) {
      core_charactr_cpp_CCharacter_processMotion_FUN_0042aa00(param_1,bone_index);
    }
    if (100 < bone_index) {
      (**(code **)(*(int *)&param_1->field_0x2b0 + 0x168))(param_1,bone_index);
    }
  }
  fVar1 = *(float *)&param_1[1].field_0x8ec;
  *(uint *)&param_1->field_0x2594 = *(uint *)&param_1->field_0x2510;
  core_charactr_cpp_FUN_0042b2a0(param_1,param_2 * *(float *)(param_1 + 1) * fVar1);
  return;
}
