// Name: core_hand.cpp_FUN_005a9ed0
// Address: 005a9ed0
// Address Range: [[005a9ed0, 005a9fe5]]
// Convention: unknown
// Signature: void core_hand_cpp_FUN_005a9ed0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hand_cpp_FUN_005a9ed0(CCharacter *param_1)

{
  float fVar1;
  int iVar2;
  float fVar3;
  
  iVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
            (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
  iVar2 = *(int *)&param_1[1].field_0x18;
  if ((iVar2 != 0) &&
     (fVar3 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20),
     fVar1 = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28),
     _DAT_0060088c < SQRT(fVar1 * fVar1 + fVar3 * fVar3))) {
    unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Sleeping");
    return;
  }
  if (*(int *)&param_1[1].field_0xdfc == 0) {
    iVar2 = 3;
  }
  else {
    if (*(int *)&param_1[1].field_0xdfc != 1) goto LAB_005a9f63;
    iVar2 = 4;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,iVar2,1);
LAB_005a9f63:
  iVar2 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iVar2 = *(int *)(iVar2 + 0x24);
  fVar3 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
  if ((iVar2 != 3) && (iVar2 != 4)) {
    return;
  }
  if (fVar3 <= (float)_DAT_005f0a53) {
    return;
  }
  iVar2 = core_actor_cpp_FUN_0040cfc0(0,1);
  *(int *)&param_1[1].field_0xdfc = iVar2;
  return;
}
