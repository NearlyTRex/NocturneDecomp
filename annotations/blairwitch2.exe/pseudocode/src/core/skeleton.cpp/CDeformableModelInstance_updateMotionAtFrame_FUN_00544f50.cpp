// Name: core_skeleton.cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50
// Address: 00544f50
// Address Range: [[00544f50, 00544f77]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_updateMotionAtFrame_FUN_00544f50(CDeformableModelInstance *this_ptr,int motion_index,float frame_number)

{
  core_skeleton_cpp_CDeformableModelInstance_updateMotion_FUN_00544f80
            (this_ptr,motion_index,frame_number,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0(this_ptr);
  return;
}
