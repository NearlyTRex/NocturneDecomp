// Name: core_schngeis.cpp_FUN_005a3280
// Address: 005a3280
// Address Range: [[005a3280, 005a33a7]]
// Convention: unknown
// Signature: void core_schngeis_cpp_FUN_005a3280(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_schngeis_cpp_FUN_005a3280(CCharacter *param_1)

{
  byte *this_ptr;
  float fVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar3 != 0) {
    fVar1 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x20);
    fVar2 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x28);
    this_ptr = &param_1->field_0x2b4;
    iVar3 = core_motion_cpp_FUN_005035c0(this_ptr);
    iVar3 = *(int *)(iVar3 + 0x24);
    if (_DAT_005ff350 < SQRT(fVar2 * fVar2 + fVar1 * fVar1)) {
      *(float *)&param_1[1].field_0x934 = _DAT_005ff350;
      unkaddr_0059d350_cpp_FUN_0059dcb0(&param_1[1].field_0x98,0x3f000000);
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
      if (iVar3 == 10) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,0,1);
        return;
      }
    }
    else {
      if (iVar3 == 10) {
        iVar3 = core_actor_cpp_FUN_0040cfc0(0,1);
        *(int *)&param_1[1].field_0xe0c = iVar3;
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,0,1);
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
      if (*(int *)&param_1[1].field_0xe0c == 0) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,3,1);
        return;
      }
      if (*(int *)&param_1[1].field_0xe0c == 1) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)this_ptr,4,1);
        return;
      }
    }
  }
  return;
}
