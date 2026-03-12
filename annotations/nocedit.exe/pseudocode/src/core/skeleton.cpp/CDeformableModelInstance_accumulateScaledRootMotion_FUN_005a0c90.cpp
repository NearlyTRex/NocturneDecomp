// Name: core_skeleton.cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90
// Address: 005a0c90
// Address Range: [[005a0c90, 005a0d02]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_accumulateScaledRootMotion_FUN_005a0c90(CDeformableModelInstance *this_ptr,float start_frame,float end_frame,float scale_factor)

{
  CVector3f *pCVar3;
  CVector3f local_c;
  float fVar1;
  float fVar2;
  
  pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getRootMotionDelta_FUN_005a0d10
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
