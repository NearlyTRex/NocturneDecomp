// Name: core_mimic.cpp_FUN_0050f630
// Address: 0050f630
// Address Range: [[0050f630, 0050f7d4]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_0050f630(CMimic *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_0050f630(CMimic *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  
  if (*(int *)g_CNetGamePtr != 0) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x130;
    core_main_c_FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar2 = _DAT_01d06ab4;
  *(uint *)&param_1->field_0x108 =
       *(uint *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x108);
  *(uint *)&param_1->field_0x10c = *(uint *)(*(int *)(iVar2 * 4 + 0x1d06aa4) + 0x10c);
  *(uint *)&param_1->field_0x110 = *(uint *)(*(int *)(iVar2 * 4 + 0x1d06aa4) + 0x110);
  if (0.0 <= *(float *)&param_1->field_0x47abc) {
    core_mimic_cpp_CMimic_processMorph_FUN_00510c20(param_1,param_2);
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0((CCharacter *)param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)&param_1->field_0x46e60 < 2) {
      if ((*(int *)&param_1->field_0x46e60 < 1) &&
         (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                            (0x01C51D80,&param_1->field_0xc2cc), iVar2 != 0)) {
        *(uint *)&param_1->field_0x46e60 = 1;
      }
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,&param_1->field_0xc268);
      if ((iVar2 != 0) &&
         (core_mimic_cpp_FUN_0050f7e0(param_1), *(int *)&param_1->field_0x46e60 == 1)) {
        pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158));
        uVar1 = *(uint *)(pSVar3 + 0x24);
        if ((uVar1 < 3) || (uVar1 < 4)) {
LAB_0050f78a:
          core_mimic_cpp_FUN_00510530(param_1);
          core_charactr_cpp_FUN_00432e80((CCharacter *)param_1);
          return;
        }
        if (uVar1 < 0x11) {
          if (uVar1 != 0x10) {
            core_charactr_cpp_FUN_00432e80((CCharacter *)param_1);
            return;
          }
          goto LAB_0050f78a;
        }
        if (uVar1 < 0x12) goto LAB_0050f78a;
        if (0x13 < uVar1) {
          if ((0x14 < uVar1) && (uVar1 != 0x15)) {
            core_charactr_cpp_FUN_00432e80((CCharacter *)param_1);
            return;
          }
          goto LAB_0050f78a;
        }
      }
    }
    else {
      core_mimic_cpp_FUN_0050fba0(param_1,param_2);
    }
    core_charactr_cpp_FUN_00432e80((CCharacter *)param_1);
  }
  return;
}
