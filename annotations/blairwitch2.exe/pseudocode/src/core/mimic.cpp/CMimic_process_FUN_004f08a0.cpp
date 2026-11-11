// Name: core_mimic.cpp_CMimic_process_FUN_004f08a0
// Address: 004f08a0
// Address Range: [[004f08a0, 004f0a44]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_process_FUN_004f08a0(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_process_FUN_004f08a0(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
    _DAT_01d046a0 = "..\\core\\mimic.cpp";
    _DAT_01d046a4 = 0x130;
    core_main_c_FUN_004e4500("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar3 = _DAT_01cedef4;
  (this_ptr->base).base.base.scale.x = *(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x108);
  (this_ptr->base).base.base.scale.y = *(int *)(*(int *)(iVar3 * 4 + 0x1cedee4) + 0x10c);
  fVar1 = this_ptr->morph_blend;
  (this_ptr->base).base.base.scale.z = *(int *)(*(int *)(iVar3 * 4 + 0x1cedee4) + 0x110);
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_004f1e90(this_ptr,delta_time);
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_004244b0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    if (this_ptr->attack_mode < 2) {
      if ((this_ptr->attack_mode < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                            (0x01C38BC0,this_ptr->attack_condition), iVar3 != 0)) {
        this_ptr->attack_mode = 1;
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_0048e340
                        (0x01C38BC0,this_ptr->mirror_condition);
      if ((iVar3 != 0) &&
         (core_mimic_cpp_CMimic_updatePose_FUN_004f0a50(this_ptr), this_ptr->attack_mode == 1)) {
        iVar3 = core_motion_cpp_FUN_005035c0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4);
        uVar2 = *(uint *)(iVar3 + 0x24);
        if ((uVar2 < 3) || (uVar2 < 4)) {
LAB_004f09fa:
          core_mimic_cpp_CMimic_setupCloth_FUN_004f17a0(this_ptr);
          core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390((CCharacter *)this_ptr);
          return;
        }
        if (uVar2 < 0x11) {
          if (uVar2 != 0x10) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390((CCharacter *)this_ptr);
            return;
          }
          goto LAB_004f09fa;
        }
        if (uVar2 < 0x12) goto LAB_004f09fa;
        if (0x13 < uVar2) {
          if ((0x14 < uVar2) && (uVar2 != 0x15)) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390((CCharacter *)this_ptr);
            return;
          }
          goto LAB_004f09fa;
        }
      }
    }
    else {
      core_mimic_cpp_CMimic_processAnimation_FUN_004f0e10(this_ptr,delta_time);
    }
    core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00429390((CCharacter *)this_ptr);
  }
  return;
}
