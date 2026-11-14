// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180
// Address: 0054c180
// Address Range: [[0054c180, 0054c1a7]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0054c180(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0054c1b0
            (this_ptr,motion_index,frame_number,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0054dd10(this_ptr);
  return;
}
