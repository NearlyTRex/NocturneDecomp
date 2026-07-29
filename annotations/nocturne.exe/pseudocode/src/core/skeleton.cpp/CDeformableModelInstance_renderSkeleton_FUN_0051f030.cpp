// Name: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030
// Address: 0051f030
// Address Range: [[0051f030, 0051f059]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030(CDeformableModelInstance *this_ptr,int color,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0051f030(CDeformableModelInstance *this_ptr,int color,int render_flags)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (this_ptr->bone_transform).bone_world_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00518f60
            (this_ptr_00,color,bone_matrices,render_flags);
  return;
}
