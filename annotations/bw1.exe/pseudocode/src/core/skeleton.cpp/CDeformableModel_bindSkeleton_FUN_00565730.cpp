// Name: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00565730
// Address: 00565730
// Address Range: [[00565730, 00565752]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00565730(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00565730(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

{
  this_ptr->skeleton_ptr = skeleton_ptr;
  core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_00566fd0(this_ptr);
  core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_00567180(this_ptr);
  return;
}
