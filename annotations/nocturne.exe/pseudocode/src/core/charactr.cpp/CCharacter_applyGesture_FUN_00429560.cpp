// Name: core_charactr.cpp_CCharacter_applyGesture_FUN_00429560
// Address: 00429560
// Address Range: [[00429560, 0042965d]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(CCharacter *this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_00429560(CCharacter *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CMotionList *pCVar4;
  float local_8;
  
  if (-1 < this_ptr->gesture_motion_index) {
    if (this_ptr->gesture_branch_root < -1) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 3291;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CCharacter::applyGesture - never set gestureBranchRoot for actor %s");
    }
    iVar1 = this_ptr->gesture_motion_index;
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                       (&(this_ptr->model).motion_controller);
    fVar2 = 1.0 / (pCVar4->motions[iVar1].fps * 0.3f);
    fVar3 = this_ptr->gesture_frame * fVar2;
    fVar2 = ((float)pCVar4->motions[iVar1].frame_count - this_ptr->gesture_frame) * fVar2;
    local_8 = 0.85;
    if (fVar3 < 0.85f) {
      local_8 = fVar3;
    }
    if (fVar2 < local_8) {
      local_8 = fVar2;
    }
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (&this_ptr->model,this_ptr->gesture_motion_index,this_ptr->gesture_frame,local_8,
               this_ptr->gesture_branch_root,core_skeleton_cpp_motionBlendWeightFunc_FUN_0051b650);
  }
  return;
}
