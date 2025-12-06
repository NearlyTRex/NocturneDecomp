// Name: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0
// Address: 005a14b0
// Address Range: [[005a14b0, 005a150c]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005a14b0(CDeformableModelInstance * this_ptr, CVector3f * center_position, CVector3f * orientation_vector, int desired_lod_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005a14b0
          (CDeformableModelInstance *this_ptr,CVector3f *center_position,
          CVector3f *orientation_vector,int desired_lod_index)

{
  CDeformableModel *this_ptr_00;
  int unaff_ESI;
  int *unaff_EDI;
  CVector3f *orientation_vector_00;
  CVector3i *lod_index;
  CVector3i *skinned_vertices;
  int *part_visibility_flags;
  
  if (desired_lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
              (this_ptr,desired_lod_index);
  }
  part_visibility_flags = this_ptr->texture_set_indices;
  skinned_vertices = (CVector3i *)this_ptr->part_visibility_flags;
  lod_index = this_ptr->skinned_vertices_buffer;
  orientation_vector_00 = (CVector3f *)this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_shatter_FUN_0059cec0
            (this_ptr_00,(CVector3f *)desired_lod_index,orientation_vector_00,(int)lod_index,
             skinned_vertices,part_visibility_flags,unaff_EDI,unaff_ESI);
  return;
}
