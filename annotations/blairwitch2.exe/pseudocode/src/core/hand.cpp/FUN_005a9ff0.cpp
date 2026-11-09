// Name: core_hand.cpp_FUN_005a9ff0
// Address: 005a9ff0
// Address Range: [[005a9ff0, 005aa190]]
// Convention: unknown
// Signature: void core_hand_cpp_FUN_005a9ff0(CCharacter *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hand_cpp_FUN_005a9ff0(CCharacter *param_1,float param_2)

{
  byte *this_ptr;
  float fVar1;
  float fVar2;
  int iVar3;
  
  this_ptr = &param_1->field_0x2b4;
  iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (*(float *)&param_1[1].field_0xe04 <= 0.0) {
    (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
    if (*(int *)&param_1[1].field_0x18 == 0) {
      if (iVar3 != 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,2,1);
        param_2 = *(float *)&param_1[1].field_0xe08 - param_2;
        *(float *)&param_1[1].field_0xe08 = param_2;
        if (param_2 <= 0.0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                    ((CMotionController *)this_ptr,0,1);
          return;
        }
      }
    }
    else {
      *(uint *)&param_1[1].field_0xe08 = 0x40a00000;
      iVar3 = (**(code **)(*(int *)(*(int *)&param_1[1].field_0x18 + 0x2b0) + 0x114))
                        (*(int *)&param_1[1].field_0x18);
      if ((iVar3 != 0) && (*(int *)&param_1[1].field_0x90 != 0)) {
        *(uint *)&param_1[1].field_0x90 = 0;
        *(uint *)&param_1[1].field_0x18 = 0;
        return;
      }
      iVar3 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
      if (*(int *)(iVar3 + 0x24) == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,2,1);
        return;
      }
      if (*(int *)(iVar3 + 0x24) != 2) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,2,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
      fVar1 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x20);
      fVar2 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x28);
      if (SQRT(fVar2 * fVar2 + fVar1 * fVar1) < _DAT_0060088c) {
        unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"?MeleeAttack" + 1);
        return;
      }
    }
  }
  else {
    param_2 = *(float *)&param_1[1].field_0xe04 - param_2;
    *(float *)&param_1[1].field_0xe04 = param_2;
    if (param_2 < 0.0) {
      *(uint *)&param_1[1].field_0xe04 = 0;
    }
  }
  return;
}
