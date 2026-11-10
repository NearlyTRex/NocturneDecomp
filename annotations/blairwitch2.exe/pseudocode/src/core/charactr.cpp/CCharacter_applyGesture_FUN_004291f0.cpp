// Name: core_charactr.cpp_CCharacter_applyGesture_FUN_004291f0
// Address: 004291f0
// Address Range: [[004291f0, 0042931b]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_004291f0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_004291f0(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  CSkeleton *this_ptr_00;
  CMotionList *pCVar3;
  int iVar4;
  char *bone_name;
  int iVar5;
  float local_c;
  
  if (-1 < this_ptr->gesture_motion_index) {
    if (this_ptr->gesture_branch_root < -1) {
      _DAT_01d046a0 = "..\\core\\charactr.cpp";
      _DAT_01d046a4 = 0xf08;
      core_main_c_FUN_004e4500("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",this_ptr);
    }
    iVar5 = 0;
    bone_name = "Bip01 spine1";
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                            (&this_ptr->model);
    iVar5 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name,iVar5);
    iVar4 = this_ptr->gesture_motion_index * 0x118;
    this_ptr->gesture_branch_root = iVar5;
    pCVar3 = core_motion_cpp_CMotionController_getMotionList_FUN_00503860
                       ((CMotionController *)&this_ptr->model);
    fVar1 = 1.0 / (*(float *)(pCVar3 + iVar4 + 0x1c48) * _DAT_005cd06a);
    fVar2 = this_ptr->gesture_frame * fVar1;
    fVar1 = ((float)*(int *)(pCVar3 + iVar4 + 0x1c8c) - this_ptr->gesture_frame) * fVar1;
    local_c = 0.85;
    if (fVar2 < _DAT_005cd06e) {
      local_c = fVar2;
    }
    if (fVar1 < local_c) {
      local_c = fVar1;
    }
    core_skeleton_cpp_FUN_00545a60
              (&this_ptr->model,this_ptr->gesture_motion_index,this_ptr->gesture_frame,local_c,
               this_ptr->gesture_branch_root,core_skeleton_cpp_FUN_00544cc0);
  }
  return;
}
