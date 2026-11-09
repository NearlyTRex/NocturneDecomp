// Name: core_skeleton.cpp_CDeformableModelInstance_shatter_FUN_005485c0
// Address: 005485c0
// Address Range: [[005485c0, 0054861c]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005485c0(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_shatter_FUN_005485c0(CDeformableModelInstance *this_ptr,CVector3f *center_position,CVector3f *orientation_vector,int desired_lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index;
  CVector3i *skinned_vertices;
  int *part_visibility_flags;
  int *texture_set_indices;
  
  if (desired_lod_index != *(int *)&this_ptr->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0
              (this_ptr,desired_lod_index);
  }
  texture_set_indices = (int *)&this_ptr->field_0x21b8;
  part_visibility_flags = (int *)&this_ptr->field_0x2140;
  skinned_vertices = *(CVector3i **)&this_ptr->field_0x2234;
  lod_index = *(int *)&this_ptr->field_0x2230;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_shatter_FUN_00543d80
            (this_ptr_00,center_position,orientation_vector,lod_index,skinned_vertices,
             part_visibility_flags,texture_set_indices);
  return;
}
