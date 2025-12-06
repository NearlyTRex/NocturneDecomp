// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
// Address: 005a02f0
// Address Range: [[005a02f0, 005a0330]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0(CDeformableModelInstance * this_ptr, int lod_index)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_005a02f0
          (CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  CVector3i *lod_index_00;
  
  if (lod_index != this_ptr->cached_skinned_lod_index) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005a01d0(this_ptr,lod_index);
  }
  lod_index_00 = this_ptr->skinned_vertices_buffer;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(this_ptr_00,(int)lod_index_00);
  return;
}
