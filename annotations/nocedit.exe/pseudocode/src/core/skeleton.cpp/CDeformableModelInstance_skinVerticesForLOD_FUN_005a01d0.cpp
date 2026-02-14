// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a020c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CMatrix3x4f *bone_matrices;
  CVector3i *output_buffer;
  
  output_buffer = this_ptr->skinned_vertices_buffer;
  bone_matrices = (this_ptr->bone_transform).bone_world_matrices;
  lod_index_00 = lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880
            (this_ptr_00,lod_index_00,bone_matrices,&output_buffer->x);
  this_ptr->cached_skinned_lod_index = lod_index;
  return;
}
