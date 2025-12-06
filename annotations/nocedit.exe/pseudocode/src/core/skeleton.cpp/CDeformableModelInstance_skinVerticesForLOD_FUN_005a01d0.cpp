// Name: core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
// Address: 005a01d0
// Address Range: [[005a01d0, 005a020c]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(CDeformableModelInstance * this_ptr, int lod_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0
          (CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int in_stack_00000010;
  CMatrix3x4f *lod_index_00;
  CVector3i *bone_matrices;
  int *output_buffer;
  
  output_buffer = this_ptr->part_visibility_flags;
  bone_matrices = this_ptr->skinned_vertices_buffer;
  lod_index_00 = (this_ptr->bone_transform).bone_world_matrices;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880
            (this_ptr_00,(int)lod_index_00,(CMatrix3x4f *)bone_matrices,output_buffer);
  this_ptr->cached_skinned_lod_index = in_stack_00000010;
  return;
}
