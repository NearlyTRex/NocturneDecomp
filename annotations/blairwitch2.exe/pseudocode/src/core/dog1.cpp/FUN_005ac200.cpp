// Name: core_dog1.cpp_FUN_005ac200
// Address: 005ac200
// Address Range: [[005ac200, 005ac2e3]]
// Convention: unknown
// Signature: void core_dog1_cpp_FUN_005ac200(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dog1_cpp_FUN_005ac200(CCharacter *param_1)

{
  int iVar1;
  float fVar2;
  
  iVar1 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar1 == 0) {
    return;
  }
  iVar1 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
  iVar1 = *(int *)(iVar1 + 0x24);
  fVar2 = core_motion_cpp_FUN_00503e60((CMotionController *)&param_1->field_0x2b4);
  if ((iVar1 == 3) && (fVar2 < (float)_DAT_005f0df6)) {
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
  }
  if (iVar1 != 7) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,3,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,0,1);
  *(uint *)&param_1[1].field_0x934 = _DAT_00600c50;
  unkaddr_0059d350_cpp_FUN_0059d7f0
            (&param_1[1].field_0x98,"ChaseComplete","MeleeAttack");
  unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
  return;
}
