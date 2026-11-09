// Name: core_unionzom.cpp_FUN_005a4220
// Address: 005a4220
// Address Range: [[005a4220, 005a432a]]
// Convention: unknown
// Signature: void core_unionzom_cpp_FUN_005a4220(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_unionzom_cpp_FUN_005a4220(CCharacter *param_1)

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
  if (_DAT_005ff540 < fVar2) {
    *(float *)&param_1[1].field_0x934 = _DAT_005ff540;
    unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete"," BVanishAttack" + 2);
    unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
  }
  else if (_DAT_005ff544 + _DAT_005f030e < fVar2) {
    *(float *)&param_1[1].field_0x934 = _DAT_005ff544;
    unkaddr_0059d350_cpp_FUN_0059dcb0(puVar1,0x3dcccccd);
    unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
    return;
  }
  return;
}
