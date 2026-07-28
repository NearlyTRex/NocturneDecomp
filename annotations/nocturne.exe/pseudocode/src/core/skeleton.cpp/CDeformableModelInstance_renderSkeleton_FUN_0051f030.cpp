// Name: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030
// Address: 0051f030
// Address Range: [[0051f030, 0051f059]]
// Convention: unknown
// Signature: void core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030(void)

{
  CDeformableModel *this_ptr;
  CDeformableModelInstance *in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (in_stack_00000004->bone_transform).bone_world_matrices;
  this_ptr = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(in_stack_00000004);
  core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60
            (this_ptr,in_stack_00000008,bone_matrices,in_stack_0000000c);
  return;
}
