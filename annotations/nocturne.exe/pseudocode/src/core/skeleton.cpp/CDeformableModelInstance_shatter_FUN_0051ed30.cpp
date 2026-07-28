// Name: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_0051ed30
// Address: 0051ed30
// Address Range: [[0051ed30, 0051ed8c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_0051ed30(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index;
  CVector3i *skinned_vertices;
  SPartInstanceData *part_visibility_flags;
  int *texture_set_indices;
  
  if (desired_lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0051da50
              (this_ptr,desired_lod_index);
  }
  texture_set_indices = (this_ptr->part_data).texture_set_indices;
  part_visibility_flags = &this_ptr->part_data;
  skinned_vertices = this_ptr->skinned_vertices_buffer;
  lod_index = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0051e020(this_ptr);
  core_skeleton_cpp_CDeformableModel_shatter_FUN_0051a780
            (this_ptr_00,center_position,orientation_vector,lod_index,skinned_vertices,
             part_visibility_flags->visibility_flags,texture_set_indices);
  return;
}
