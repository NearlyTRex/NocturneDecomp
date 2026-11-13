// Name: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_0056af90
// Address: 0056af90
// Address Range: [[0056af90, 0056afb9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0056af90(CDeformableModelInstance *this_ptr,int color,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_0056af90(CDeformableModelInstance *this_ptr,int color,int render_flags)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (this_ptr->bone_transform).bone_model_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_00564b20
            (this_ptr_00,color,bone_matrices,render_flags);
  return;
}
