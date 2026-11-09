// Name: core_unionzom.cpp_FUN_005a40f0
// Address: 005a40f0
// Address Range: [[005a40f0, 005a4211]]
// Convention: unknown
// Signature: void core_unionzom_cpp_FUN_005a40f0(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_unionzom_cpp_FUN_005a40f0(CCharacter *param_1)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)&param_1[1].field_0xdf8;
  this_ptr = &param_1->field_0x2b4;
  if (uVar1 == 0) {
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)this_ptr,4,1);
    unkafter_basicene_cpp_FUN_005a01a0(param_1,*(uint *)&param_1[1].field_0x964,0,0x3f99999a);
    unkafter_basicene_cpp_FUN_0059f570(param_1);
    *(uint *)&param_1[1].field_0xdf8 = 1;
    return;
  }
  if (uVar1 < 2) {
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar2 + 0x24) == 4) {
      if (_DAT_005f02de <= *(float *)&param_1->field_0x2bc) {
        unkafter_basicene_cpp_FUN_005a01a0
                  (param_1,*(uint *)&param_1[1].field_0x964,0x3f800000,0x3f400000);
        unkafter_basicene_cpp_FUN_0059f570(param_1);
        *(uint *)&param_1[1].field_0xdf8 = 2;
        return;
      }
      core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
                (param_1,(CVector3f *)(*(int *)&param_1[1].field_0x18 + 0x20));
      return;
    }
  }
  else {
    if (uVar1 != 2) {
      return;
    }
    iVar2 = core_motion_cpp_FUN_005035c0(this_ptr);
    if (*(int *)(iVar2 + 0x24) == 3) {
      *(uint *)&param_1[1].field_0x934 = _DAT_005ff544;
      unkaddr_0059d350_cpp_FUN_0059d7f0
                (&param_1[1].field_0x98,"ChaseComplete","MeleeAttack");
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"MeleeAttack");
      *(uint *)&param_1[1].field_0xdf8 = 0;
      return;
    }
  }
  return;
}
