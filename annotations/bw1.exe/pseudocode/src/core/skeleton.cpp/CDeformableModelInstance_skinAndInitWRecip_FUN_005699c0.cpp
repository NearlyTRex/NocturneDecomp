// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0
// Address: 005699c0
// Address Range: [[005699c0, 00569a00]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005699c0(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CVector3i *lod_vertices;
  
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_00569890(this_ptr,lod_index);
  }
  lod_vertices = this_ptr->skinned_vertices_buffer;
  lod_index_00 = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00564070
            (this_ptr_00,lod_index_00,lod_vertices);
  return;
}
