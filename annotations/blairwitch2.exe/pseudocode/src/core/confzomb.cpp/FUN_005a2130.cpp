// Name: core_confzomb.cpp_FUN_005a2130
// Address: 005a2130
// Address Range: [[005a2130, 005a223a]]
// Convention: unknown
// Signature: void core_confzomb_cpp_FUN_005a2130(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confzomb_cpp_FUN_005a2130(CCharacter *param_1)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,3,1);
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
  fVar3 = *(float *)&param_1->field_0x20 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x20);
  fVar2 = *(float *)&param_1->field_0x28 - *(float *)(*(int *)&param_1[1].field_0x18 + 0x28);
  fVar2 = SQRT(fVar3 * fVar3 + fVar2 * fVar2);
  puVar1 = &param_1[1].field_0x98;
  if (_DAT_005fef90 < fVar2) {
    *(float *)&param_1[1].field_0x934 = _DAT_005fef90;
    unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","BRangeAttack" + 1);
    unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
  }
  else if (_DAT_005fef94 + _DAT_005efe93 < fVar2) {
    *(float *)&param_1[1].field_0x934 = _DAT_005fef94;
    unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
    return;
  }
  return;
}
