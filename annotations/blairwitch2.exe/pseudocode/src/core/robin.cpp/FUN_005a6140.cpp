// Name: core_robin.cpp_FUN_005a6140
// Address: 005a6140
// Address Range: [[005a6140, 005a61ed]]
// Convention: unknown
// Signature: void core_robin_cpp_FUN_005a6140(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_robin_cpp_FUN_005a6140(CCharacter *param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte *this_ptr;
  
  iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)&param_1[1].field_0x18;
    fVar1 = *(float *)(iVar3 + 0x20) - *(float *)&param_1->field_0x20;
    fVar2 = *(float *)(iVar3 + 0x28) - *(float *)&param_1->field_0x28;
    if (_DAT_005ffc9c < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      unkaddr_0059d350_cpp_FUN_0059dcb0(&param_1[1].field_0x98,0x3f800000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
      return;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(param_1,(CVector3f *)(iVar3 + 0x20));
    this_ptr = &param_1->field_0x2b4;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,5,1);
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar3 + 0x24) == 5) {
      core_motion_cpp_FUN_00503e60((CMotionController *)this_ptr);
      return;
    }
  }
  return;
}
