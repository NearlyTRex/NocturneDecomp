// Name: core_hag.cpp_FUN_005aab50
// Address: 005aab50
// Address Range: [[005aab50, 005aac97]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005aab50(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hag_cpp_FUN_005aab50(CCharacter *param_1)

{
  float fVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar2 == 0) {
    return;
  }
  iVar2 = *(int *)&param_1[1].field_0x18;
  fVar4 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
  fVar1 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
  fVar4 = SQRT(fVar1 * fVar1 + fVar4 * fVar4);
  if (_DAT_00600a6c < fVar4) {
    *(float *)&param_1[1].field_0x934 = _DAT_00600a6c;
    unkaddr_0059d350_cpp_FUN_0059dcb0(&param_1[1].field_0x98,0x3f000000);
    unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850(param_1,(CVector3f *)(iVar2 + 0x20));
  if (_DAT_00600a70 < fVar4) {
    if (_DAT_00600a6c < fVar4) {
      iVar2 = 0;
    }
    else {
      iVar2 = 4;
    }
  }
  else {
    iVar2 = 5;
  }
  iVar3 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iVar3 = *(int *)(iVar3 + 0x24);
  if (iVar3 != 0) {
    if ((iVar3 == 5) || (iVar3 == 4)) goto LAB_005aabe3;
    iVar2 = 0;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
LAB_005aabe3:
  if ((iVar3 == 4) &&
     (fVar4 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4),
     (float)_DAT_005f0bde < fVar4)) {
    *(float *)&param_1[1].field_0x934 = _DAT_00600a70;
    unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
    return;
  }
  return;
}
