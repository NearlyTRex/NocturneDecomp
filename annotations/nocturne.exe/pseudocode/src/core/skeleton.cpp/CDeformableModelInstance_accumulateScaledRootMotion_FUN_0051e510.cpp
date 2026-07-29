// Name: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510
// Address: 0051e510
// Address Range: [[0051e510, 0051e582]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_0051e510(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  CVector3f local_c;
  
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_0051e590
                     (this_ptr,&local_c,start_frame,end_frame);
  fVar1 = pCVar3->y;
  fVar2 = pCVar3->z;
  (this_ptr->accumulated_root_motion).x =
       (this_ptr->accumulated_root_motion).x + pCVar3->x * scale_factor;
  (this_ptr->accumulated_root_motion).y =
       (this_ptr->accumulated_root_motion).y + fVar1 * scale_factor;
  (this_ptr->accumulated_root_motion).z =
       (this_ptr->accumulated_root_motion).z + scale_factor * fVar2;
  return;
}
