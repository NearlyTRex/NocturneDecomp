// Name: core_union.cpp_FUN_005a4e90
// Address: 005a4e90
// Address Range: [[005a4e90, 005a4fd1]]
// Convention: unknown
// Signature: void core_union_cpp_FUN_005a4e90(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_union_cpp_FUN_005a4e90(CCharacter *param_1)

{
  byte *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x17c))(param_1);
  if (iVar4 != 0) {
    puVar1 = &param_1[1].field_0x98;
    if (*(int *)&param_1[1].field_0xdf4 == 0) {
      *(uint *)&param_1[1].field_0x934 = _DAT_005ff8f4;
      *(uint *)&param_1[1].field_0x938 = 0;
      unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
      unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
      return;
    }
    iVar4 = core_motion_cpp_FUN_005035c0(&param_1->field_0x2b4);
    uVar3 = _DAT_005ff8f4;
    uVar2 = *(uint *)(iVar4 + 0x24);
    if (uVar2 < 2) {
LAB_005a4fbb:
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->field_0x2b4,2,1);
      return;
    }
    if (uVar2 < 3) {
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
      if (_DAT_005f0556 < *(float *)&param_1->field_0x2bc) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->field_0x2b4,3,1);
        core_union_cpp_FUN_005a5460(param_1);
        *(uint *)&param_1[1].field_0xdf0 = 0;
        *(int *)&param_1[1].field_0xdf4 = *(int *)&param_1[1].field_0xdf4 + -1;
        return;
      }
    }
    else {
      if (uVar2 != 3) goto LAB_005a4fbb;
      if (_DAT_005f0552 < *(float *)&param_1->field_0x2bc) {
        *(uint *)&param_1[1].field_0x938 = 0;
        *(uint *)&param_1[1].field_0x934 = uVar3;
        unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
        unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
        return;
      }
    }
  }
  return;
}
