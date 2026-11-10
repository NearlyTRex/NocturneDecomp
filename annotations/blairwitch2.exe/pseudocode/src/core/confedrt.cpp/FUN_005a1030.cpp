// Name: core_confedrt.cpp_FUN_005a1030
// Address: 005a1030
// Address Range: [[005a1030, 005a117c]]
// Convention: unknown
// Signature: void core_confedrt_cpp_FUN_005a1030(CCharacter *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_confedrt_cpp_FUN_005a1030(CCharacter *param_1)

{
  byte *puVar1;
  uint uVar2;
  uint uVar3;
  CDemonActor *pCVar4;
  int iVar5;
  
  pCVar4 = (*(param_1->base).vtable._ub[1].getCarrier)(&param_1->base);
  if (pCVar4 != (CDemonActor *)0x0) {
    puVar1 = &param_1[1].base.field_0x98;
    if (*(int *)&param_1[1].model.field_0xb40 == 0) {
      *(uint *)&param_1[1].model.field_0x680 = _DAT_005fedb4;
      *(uint *)&param_1[1].model.field_0x684 = 0;
      unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
      unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
      return;
    }
    iVar5 = core_motion_cpp_FUN_005035c0(&param_1->model);
    uVar3 = _DAT_005fedb4;
    uVar2 = *(uint *)(iVar5 + 0x24);
    if (uVar2 < 3) {
      if (uVar2 != 2) {
LAB_005a1166:
        core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                  ((CMotionController *)&param_1->model,2,1);
        return;
      }
    }
    else {
      if (uVar2 < 4) {
        if (*(float *)&(param_1->model).field_0x8 <= _DAT_005efcbb) {
          return;
        }
        *(uint *)&param_1[1].model.field_0x684 = 0x40a00000;
        *(uint *)&param_1[1].model.field_0x680 = uVar3;
        unkaddr_0059d350_cpp_FUN_0059d7f0(puVar1,"ChaseComplete","MeleeAttack");
        unkaddr_0059d350_cpp_FUN_0059d8e0(puVar1,"Chasing");
        return;
      }
      if (uVar2 != 0xd) goto LAB_005a1166;
    }
    core_charactr_cpp_CCharacter_turnTowardPoint_FUN_00423850
              (param_1,(CVector3f *)(*(int *)(param_1[1].base.actor_name + 0x18) + 0x20));
    if (_DAT_005efcbf < *(float *)&(param_1->model).field_0x8) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&param_1->model,3,1);
      core_confedrt_cpp_FUN_005a14e0(param_1);
      iVar5 = *(int *)&param_1[1].model.field_0xb40;
      *(uint *)&param_1[1].model.field_0xb3c = 0;
      *(int *)&param_1[1].model.field_0xb40 = iVar5 + -1;
      return;
    }
  }
  return;
}
