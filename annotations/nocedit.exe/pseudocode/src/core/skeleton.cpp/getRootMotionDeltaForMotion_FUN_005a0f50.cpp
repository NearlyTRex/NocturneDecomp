// Name: core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_005a0f50
// Address: 005a0f50
// Address Range: [[005a0f50, 005a0fda]]
// Convention: __cdecl
// Signature: CDeformableModelInstance * core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_005a0f50(CMotionController * motion_controller, CDeformableModelInstance * deformable_model, int motion_index, float start_frame, float end_frame)

#include "nocturne.h"

CDeformableModelInstance * __cdecl
core_skeleton_cpp_getRootMotionDeltaForMotion_FUN_005a0f50
          (CMotionController *motion_controller,CDeformableModelInstance *deformable_model,
          int motion_index,float start_frame,float end_frame)

{
  float fVar1;
  CMotionList *pCVar2;
  
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(motion_controller);
  if (start_frame < 0.0) {
    start_frame = 0.0;
  }
  fVar1 = (float)pCVar2->motions[motion_index].frame_count;
  if (fVar1 < end_frame) {
    end_frame = fVar1;
  }
  fVar1 = (float)pCVar2->motions[motion_index].frame_start;
  core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
            ((CDeformableModelInstance *)motion_controller,(CVector3f *)deformable_model,
             start_frame + fVar1,end_frame + fVar1);
  return deformable_model;
}
