// Name: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0
// Address: 005a14b0
// Address Range: [[005a14b0, 005a150c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0 (CDeformableModelInstance *this_ptr,CVector3f *center_position, CVector3f *orientation_vector,int desired_lod_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0
          (CDeformableModelInstance *this_ptr,CVector3f *center_position,
          CVector3f *orientation_vector,int desired_lod_index)

{
  CDeformableModel *this_ptr_00;
  int unaff_EBP;
  int lod_index;
  CVector3i *skinned_vertices;
  int *part_visibility_flags;
  int *texture_set_indices;
  
  if (desired_lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
              (this_ptr,desired_lod_index);
  }
  texture_set_indices = this_ptr->texture_set_indices;
  part_visibility_flags = this_ptr->part_visibility_flags;
  skinned_vertices = this_ptr->skinned_vertices_buffer;
  lod_index = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0
            (this_ptr_00,center_position,orientation_vector,lod_index,skinned_vertices,
             part_visibility_flags,texture_set_indices,unaff_EBP);
  return;
}
