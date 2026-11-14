// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0
// Address: 005675f0
// Address Range: [[005675f0, 00567617]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_005675f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00567620
            (this_ptr,motion_index,frame_number,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00569180(this_ptr);
  return;
}
