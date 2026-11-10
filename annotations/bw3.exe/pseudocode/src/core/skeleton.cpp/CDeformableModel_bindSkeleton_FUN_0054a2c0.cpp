// Name: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0
// Address: 0054a2c0
// Address Range: [[0054a2c0, 0054a2e2]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_0054a2c0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

{
  this_ptr->skeleton_ptr = skeleton_ptr;
  core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0054bb60(this_ptr);
  core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0054bd10(this_ptr);
  return;
}
