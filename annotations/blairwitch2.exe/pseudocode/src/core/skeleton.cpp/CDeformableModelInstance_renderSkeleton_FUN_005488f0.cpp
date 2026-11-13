// Name: core_skeleton.cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0
// Address: 005488f0
// Address Range: [[005488f0, 00548919]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0(CDeformableModelInstance *this_ptr,int color,int render_flags)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderSkeleton_FUN_005488f0(CDeformableModelInstance *this_ptr,int color,int render_flags)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (this_ptr->bone_transform).bone_model_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderSkeleton_FUN_005424b0
            (this_ptr_00,color,bone_matrices,render_flags);
  return;
}
