// Name: core_mimic.cpp_CMimic_process_FUN_0050f630
// Address: 0050f630
// Address Range: [[0050f630, 0050f7d4]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_CMimic_process_FUN_0050f630(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_CMimic_process_FUN_0050f630(CMimic *this_ptr,float delta_time)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  SMotion *pSVar4;
  
  if (g_CNetGamePtr->connection_type != CONNECTION_NONE) {
    _DAT_01d1d400 = "..\\core\\mimic.cpp";
    _DAT_01d1d404 = 0x130;
    core_main_c_FUN_005030e0("CMimic::setup - can't use mimic in multi-player!");
  }
  iVar3 = _DAT_01d06ab4;
  (this_ptr->base).base.base.scale.x = *(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x108);
  (this_ptr->base).base.base.scale.y = *(int *)(*(int *)(iVar3 * 4 + 0x1d06aa4) + 0x10c);
  fVar1 = this_ptr->morph_blend;
  (this_ptr->base).base.base.scale.z = *(int *)(*(int *)(iVar3 * 4 + 0x1d06aa4) + 0x110);
  if (0.0 <= fVar1) {
    core_mimic_cpp_CMimic_processMorph_FUN_00510c20(this_ptr,delta_time);
    return;
  }
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 != 0) {
    if (this_ptr->attack_mode < 2) {
      if ((this_ptr->attack_mode < 1) &&
         (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                            (0x01C51D80,this_ptr->attack_condition), iVar3 != 0)) {
        this_ptr->attack_mode = 1;
      }
      iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                        (0x01C51D80,this_ptr->mirror_condition);
      if ((iVar3 != 0) &&
         (core_mimic_cpp_CMimic_updatePose_FUN_0050f7e0(this_ptr), this_ptr->attack_mode == 1)) {
        pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158));
        uVar2 = *(uint *)(pSVar4 + 0x24);
        if ((uVar2 < 3) || (uVar2 < 4)) {
LAB_0050f78a:
          core_mimic_cpp_CMimic_setupCloth_FUN_00510530(this_ptr);
          core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80((CCharacter *)this_ptr);
          return;
        }
        if (uVar2 < 0x11) {
          if (uVar2 != 0x10) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80((CCharacter *)this_ptr);
            return;
          }
          goto LAB_0050f78a;
        }
        if (uVar2 < 0x12) goto LAB_0050f78a;
        if (0x13 < uVar2) {
          if ((0x14 < uVar2) && (uVar2 != 0x15)) {
            core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80((CCharacter *)this_ptr);
            return;
          }
          goto LAB_0050f78a;
        }
      }
    }
    else {
      core_mimic_cpp_CMimic_processAnimation_FUN_0050fba0(this_ptr,delta_time);
    }
    core_charactr_cpp_CCharacter_computeBoundingBox_FUN_00432e80((CCharacter *)this_ptr);
  }
  return;
}
