// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
// Address: 0059e070
// Address Range: [[0059e070, 0059e097]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070 (CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_0059e070
          (CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_0059e0a0
            (this_ptr,motion_index,frame_number,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr);
  return;
}
