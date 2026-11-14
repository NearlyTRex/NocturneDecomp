// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280
// Address: 00547280
// Address Range: [[00547280, 005472c0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_00547280(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CVector3i *input_vertices;
  
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(this_ptr,lod_index);
  }
  input_vertices = this_ptr->skinned_vertices_buffer;
  lod_index_00 = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00541990
            (this_ptr_00,lod_index_00,&input_vertices->x);
  return;
}
