// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500
// Address: 0054e500
// Address Range: [[0054e500, 0054e540]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_0054e500(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CVector3i *skinned_vertices;
  
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_0054e420(this_ptr,lod_index);
  }
  skinned_vertices = this_ptr->skinned_vertices_buffer;
  lod_index_00 = this_ptr->cached_skinned_lod_index;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00548bd0
            (this_ptr_00,lod_index_00,skinned_vertices);
  return;
}
