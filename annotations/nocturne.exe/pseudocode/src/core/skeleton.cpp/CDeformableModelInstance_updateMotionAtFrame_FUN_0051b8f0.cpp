// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0
// Address: 0051b8f0
// Address Range: [[0051b8f0, 0051b917]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0051b8f0(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0051b920
            (this_ptr,motion_index,frame_number,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0051d3c0(this_ptr);
  return;
}
