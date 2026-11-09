// Name: core_mimic.cpp_FUN_004f08a0
// Address: 004f08a0
// Address Range: [[004f08a0, 004f0a44]]
// Convention: unknown
// Signature: void core_mimic_cpp_FUN_004f08a0(CMimic *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_mimic_cpp_FUN_004f08a0(CMimic *param_1,float param_2)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)g_CNetGamePtr != 0) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x130;
    core_main_c_FUN_004e4500("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar2 = _DAT_01cedef4;
  *(uint *)&param_1->field_0x108 =
       *(uint *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x108);
  *(uint *)&param_1->field_0x10c = *(uint *)(*(int *)(iVar2 * 4 + 0x1cedee4) + 0x10c);
  *(uint *)&param_1->field_0x110 = *(uint *)(*(int *)(iVar2 * 4 + 0x1cedee4) + 0x110);
  if (0.0 <= *(float *)&param_1->field_0x4c34c) {
    core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(param_1,param_2);
    return;
  }
  iVar2 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0((CCharacter *)param_1,param_2);
  if (iVar2 != 0) {
    if (*(int *)&param_1->field_0x4b6f0 < 2) {
      if ((*(int *)&param_1->field_0x4b6f0 < 1) &&
         (iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                            (0x01C38BC0,&param_1->field_0x10b5c), iVar2 != 0)) {
        *(uint *)&param_1->field_0x4b6f0 = 1;
      }
      iVar2 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,&param_1->field_0x10af8);
      if ((iVar2 != 0) &&
         (core_mimic_cpp_FUN_004f0a50(param_1), *(int *)&param_1->field_0x4b6f0 == 1)) {
        iVar2 = core_motion_cpp_FUN_005035c0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4);
        uVar1 = *(uint *)(iVar2 + 0x24);
        if ((uVar1 < 3) || (uVar1 < 4)) {
LAB_004f09fa:
          core_mimic_cpp_FUN_004f17a0(param_1);
          core_charactr_cpp_FUN_00429390((CCharacter *)param_1);
          return;
        }
        if (uVar1 < 0x11) {
          if (uVar1 != 0x10) {
            core_charactr_cpp_FUN_00429390((CCharacter *)param_1);
            return;
          }
          goto LAB_004f09fa;
        }
        if (uVar1 < 0x12) goto LAB_004f09fa;
        if (0x13 < uVar1) {
          if ((0x14 < uVar1) && (uVar1 != 0x15)) {
            core_charactr_cpp_FUN_00429390((CCharacter *)param_1);
            return;
          }
          goto LAB_004f09fa;
        }
      }
    }
    else {
      core_mimic_cpp_FUN_004f0e10(param_1,param_2);
    }
    core_charactr_cpp_FUN_00429390((CCharacter *)param_1);
  }
  return;
}
