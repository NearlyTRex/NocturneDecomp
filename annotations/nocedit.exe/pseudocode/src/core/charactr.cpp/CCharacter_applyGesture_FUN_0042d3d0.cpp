// Name: core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0
// Address: 0042d3d0
// Address Range: [[0042d3d0, 0042d4cd]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_applyGesture_FUN_0042d3d0(CCharacter *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  CMotionList *pCVar4;
  float local_8;
  
  if (-1 < *(int *)(this_ptr->unk2 + 0x28)) {
    if (*(int *)(this_ptr->unk2 + 0x24) < -1) {
      g_CurrentFilename = "..\\core\\charactr.cpp";
      g_CurrentLineNumber = 0xcc7;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CCharacter::applyGesture - never set gestureBranchRoot for actor %s",this_ptr);
    }
    iVar1 = *(int *)(this_ptr->unk2 + 0x28);
    pCVar4 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0
                       (&(this_ptr->model).motion_controller);
    fVar2 = 1.0 / (pCVar4->motions[iVar1].fps * 0.3f);
    fVar3 = *(float *)(this_ptr->unk2 + 0x2c) * fVar2;
    fVar2 = ((float)pCVar4->motions[iVar1].frame_count - *(float *)(this_ptr->unk2 + 0x2c)) * fVar2;
    local_8 = 0.85;
    if (fVar3 < 0.85f) {
      local_8 = fVar3;
    }
    if (fVar2 < local_8) {
      local_8 = fVar2;
    }
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (&this_ptr->model,*(int *)(this_ptr->unk2 + 0x28),*(float *)(this_ptr->unk2 + 0x2c),
               local_8,*(int *)(this_ptr->unk2 + 0x24),
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
  }
  return;
}
