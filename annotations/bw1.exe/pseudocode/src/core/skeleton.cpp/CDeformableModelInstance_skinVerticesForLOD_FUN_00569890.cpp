// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890
// Address: 00569890
// Address Range: [[00569890, 005698cc]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CMatrix3x4f *bone_matrices;
  CVector3i *output_buffer;
  SPartInstanceData *part_data;
  
  part_data = (SPartInstanceData *)&this_ptr->field_0x2140;
  output_buffer = this_ptr->skinned_vertices_buffer;
  bone_matrices = (CMatrix3x4f *)&this_ptr->field_0xe80;
  lod_index_00 = lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  core_skeleton_cpp_FUN_00563cb0(this_ptr_00,lod_index_00,bone_matrices,&output_buffer->x,part_data)
  ;
  this_ptr->cached_skinned_lod_index = lod_index;
  return;
}
