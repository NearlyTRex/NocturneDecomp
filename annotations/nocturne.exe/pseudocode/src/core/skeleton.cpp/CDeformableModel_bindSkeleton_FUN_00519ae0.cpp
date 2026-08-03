// Name: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0
// Address: 00519ae0
// Address Range: [[00519ae0, 00519b02]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel *this_ptr,CSkeleton *skeleton_ptr)

{
  this_ptr->skeleton_ptr = skeleton_ptr;
  core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(this_ptr);
  core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480(this_ptr);
  return;
}
