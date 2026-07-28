// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
// Address: 0051da50
// Address Range: [[0051da50, 0051da8c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CMatrix3x4f *bone_matrices;
  CVector3i *output_buffer;
  SPartInstanceData *part_data;
  
  part_data = &this_ptr->part_data;
  output_buffer = this_ptr->skinned_vertices_buffer;
  bone_matrices = (this_ptr->bone_transform).bone_world_matrices;
  lod_index_00 = lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinVertices_FUN_005181a0
            (this_ptr_00,lod_index_00,bone_matrices,&output_buffer->x,part_data);
  this_ptr->cached_skinned_lod_index = lod_index;
  return;
}
