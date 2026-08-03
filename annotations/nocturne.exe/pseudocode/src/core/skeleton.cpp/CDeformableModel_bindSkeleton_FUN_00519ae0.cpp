// Name: core_skeleton.cpp_CDeformableModel_bindSkeleton_FUN_00519ae0
// Address: 00519ae0
// Address Range: [[00519ae0, 00519b02]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel *param_1,CSkeleton *param_2)

#include "nocturne.h"

void core_skeleton_cpp_CDeformableModel_bindSkeleton_FUN_00519ae0(CDeformableModel *param_1,CSkeleton *param_2)

{
  param_1->skeleton_ptr = param_2;
  core_skeleton_cpp_CDeformableModel_computeBoneBoundsAndFlags_FUN_0051b280(param_1);
  core_skeleton_cpp_CDeformableModel_computeFarthestChildBones_FUN_0051b480(param_1);
  return;
}
