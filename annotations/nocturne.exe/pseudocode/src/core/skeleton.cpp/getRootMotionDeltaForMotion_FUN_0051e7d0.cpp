// Name: core_skeleton.cpp_getRootMotionDeltaForMotion_FUN_0051e7d0
// Address: 0051e7d0
// Address Range: [[0051e7d0, 0051e85a]]
// Convention: unknown
// Signature: CVector3f * core_skeleton_cpp_getRootMotionDeltaForMotion_FUN_0051e7d0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CVector3f * core_skeleton_cpp_getRootMotionDeltaForMotion_FUN_0051e7d0(void)

{
  float fVar1;
  CMotionList *pCVar2;
  CDeformableModelInstance *in_stack_00000004;
  CVector3f *in_stack_00000008;
  int in_stack_0000000c;
  float in_stack_00000010;
  float in_stack_00000014;
  
  pCVar2 = core_motion_cpp_CMotionController_getMotionList_FUN_004e1890
                     (&in_stack_00000004->motion_controller);
  if (in_stack_00000010 < 0.0) {
    in_stack_00000010 = 0.0;
  }
  fVar1 = (float)pCVar2->motions[in_stack_0000000c].frame_count;
  if (fVar1 < in_stack_00000014) {
    in_stack_00000014 = fVar1;
  }
  fVar1 = (float)pCVar2->motions[in_stack_0000000c].frame_start;
  core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
            (in_stack_00000004,in_stack_00000008,in_stack_00000010 + fVar1,in_stack_00000014 + fVar1
            );
  return in_stack_00000008;
}
