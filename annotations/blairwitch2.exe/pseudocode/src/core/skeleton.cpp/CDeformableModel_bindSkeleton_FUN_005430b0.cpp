// Name: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_005430b0
// Address: 005430b0
// Address Range: [[005430b0, 005430d2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_005430b0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_005430b0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

{
  this_ptr->skeleton_ptr = skeleton_ptr;
  core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00544930(this_ptr);
  core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_00544ae0(this_ptr);
  return;
}
