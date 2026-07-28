// Name: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_0051f060
// Address: 0051f060
// Address Range: [[0051f060, 0051f07d]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_0051f060(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_0051f060(void)

{
  CDeformableModel *this_ptr;
  CDeformableModelInstance *in_stack_00000004;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (in_stack_00000004->bone_transform).bone_world_matrices;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(in_stack_00000004);
  core_skeleton_cpp_CDeformableModel_renderBones_FUN_00519120(this_ptr,bone_matrices);
  return;
}
