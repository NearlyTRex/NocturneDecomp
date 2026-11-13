// Name: core_charactr.cpp_CCharacter_applyGesture_FUN_004320d0
// Address: 004320d0
// Address Range: [[004320d0, 00432212]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_004320d0(CCharacter *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_004320d0(CCharacter *this_ptr)

{
  float fVar1;
  float fVar2;
  CSkeleton *this_ptr_00;
  int iVar3;
  CMotionList *pCVar4;
  char *bone_name;
  int iVar5;
  float local_c;
  
  if (-1 < this_ptr->gesture_motion_index) {
    if (this_ptr->gesture_branch_root < -1) {
      _DAT_01d71de0 = "..\\core\\charactr.cpp";
      _DAT_01d71de4 = 0xff7;
      core_main_c_FUN_004e4330("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",this_ptr);
    }
    iVar5 = 0;
    bone_name = "Bip01 spine1";
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_0054eac0
                            (&this_ptr->model);
    iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00548090(this_ptr_00,bone_name,iVar5);
    iVar5 = this_ptr->gesture_motion_index;
    this_ptr->gesture_branch_root = iVar3;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004fc310(&(this_ptr->model).base);
    local_c = 0.85;
    if (this_ptr->gesture_looping == 1) {
      local_c = 1.0;
    }
    else {
      fVar1 = 1.0 / (pCVar4->motions[iVar5].fps * _DAT_005b863e);
      fVar2 = this_ptr->gesture_frame * fVar1;
      fVar1 = ((float)pCVar4->motions[iVar5].frame_count - this_ptr->gesture_frame) * fVar1;
      if (fVar2 < _DAT_005b8642) {
        local_c = fVar2;
      }
      if (fVar1 < local_c) {
        local_c = fVar1;
      }
    }
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0054cc90
              (&this_ptr->model,this_ptr->gesture_motion_index,this_ptr->gesture_frame,local_c,
               this_ptr->gesture_branch_root,core_skeleton_cpp_blendWeightCallback_FUN_0054bef0);
  }
  return;
}
