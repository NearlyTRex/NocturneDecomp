// Name: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0
// Address: 0059c1f0
// Address Range: [[0059c1f0, 0059c212]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0(CDeformableModel * this_ptr, CSkeleton * skeleton_ptr)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_0059c1f0
          (CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

{
  this_ptr->skeleton_ptr = skeleton_ptr;
  core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0059d9e0(this_ptr);
  core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0059dbe0(this_ptr);
  return;
}
