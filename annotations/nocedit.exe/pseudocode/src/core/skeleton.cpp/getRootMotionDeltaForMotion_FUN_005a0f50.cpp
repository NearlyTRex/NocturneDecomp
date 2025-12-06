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
  float in_stack_00000018;
  
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_0052dce0(motion_controller);
  if (end_frame < 0.0) {
    end_frame = 0.0;
  }
  fVar1 = (float)pCVar2->motions[(int)start_frame].frame_count;
  if (fVar1 < in_stack_00000018) {
    in_stack_00000018 = fVar1;
  }
  fVar1 = (float)pCVar2->motions[(int)start_frame].frame_start;
  core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
            (deformable_model,(CVector3f *)deformable_model,end_frame + fVar1,
             in_stack_00000018 + fVar1);
  return deformable_model;
}
