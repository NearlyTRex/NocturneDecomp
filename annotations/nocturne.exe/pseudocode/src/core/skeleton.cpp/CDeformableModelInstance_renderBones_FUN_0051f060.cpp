// Name: core_skeleton.cpp_CDeformableModelInstance_renderBones_FUN_0051f060
// Address: 0051f060
// Address Range: [[0051f060, 0051f07d]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_0051f060(CDeformableModelInstance *this_ptr)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_renderBones_FUN_0051f060(CDeformableModelInstance *this_ptr)

{
  CDeformableModel *this_ptr_00;
  CMatrix3x4f *bone_matrices;
  
  bone_matrices = (this_ptr->bone_transform).bone_world_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  core_skeleton_cpp_CDeformableModel_renderBones_FUN_00519120(this_ptr_00,bone_matrices);
  return;
}
