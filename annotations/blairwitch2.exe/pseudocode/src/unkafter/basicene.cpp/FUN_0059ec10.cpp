// Name: unkafter_basicene.cpp_FUN_0059ec10
// Address: 0059ec10
// Address Range: [[0059ec10, 0059ed47]]
// Convention: unknown
// Signature: void unkafter_basicene_cpp_FUN_0059ec10(CCharacter *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void unkafter_basicene_cpp_FUN_0059ec10(CCharacter *param_1,uint param_2)

{
  int iVar1;
  uint *puVar2;
  byte bVar3;
  uint auStackY_1004 [1012];
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  uint uStack_10;
  
  bVar3 = 0;
  *(uint *)&param_1->field_0x342c = 0;
  (**(code **)(*(int *)&param_1->field_0x2b0 + 0x150))(param_1,param_2);
  iVar1 = *(int *)&param_1[1].field_0x18;
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x114))(iVar1);
    if ((iVar1 == 0) || (*(int *)&param_1[1].field_0x90 == 0)) {
      *(uint *)&param_1[1].field_0xc = 1;
      *(uint *)&param_1[1].field_0x1c = *(uint *)&param_1[1].field_0x918;
      unkaddr_0059d350_cpp_FUN_0059d8e0(&param_1[1].field_0x98,"Chasing");
    }
    else {
      *(uint *)&param_1[1].field_0x90 = 0;
      *(uint *)&param_1[1].field_0x18 = 0;
    }
    return;
  }
  puVar2 = (uint *)((int)param_1 + (uint)bVar3 * -8 + 0x2580);
  uStack_1c = *(uint *)&param_1->field_0x257c;
  (&stack0xffffffe8)[(uint)bVar3 * 0xfffffffe] = *puVar2;
  *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       puVar2[(uint)bVar3 * -2 + 1];
  uStack_10 = *(uint *)&param_1->field_0x2578;
  iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                    (param_1,(CVector3f *)&param_1[1].field_0x900,(CPathMap *)0x0,
                     (CVector3f *)&param_1[1].field_0x9c4,*(float *)&param_1[1].field_0x9cc,
                     0.17453292);
  if (iVar1 != 0) {
    if ((uint *)&param_1->field_0x257c != &stack0xffffffe4) {
      *(uint *)&param_1->field_0x257c = uStack_1c;
      *(uint *)&param_1->field_0x2580 = uStack_18;
      *(uint *)&param_1->field_0x2584 = uStack_14;
    }
    iVar1 = *(int *)&param_1[1].field_0x924;
    *(uint *)&param_1->field_0x2578 = uStack_10;
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
              ((CMotionController *)&param_1->field_0x2b4,iVar1,1);
    return;
  }
  core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
            ((CMotionController *)&param_1->field_0x2b4,*(int *)&param_1[1].field_0x928,1);
  return;
}
