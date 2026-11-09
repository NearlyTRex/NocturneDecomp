// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0
// Address: 005472d0
// Address Range: [[005472d0, 00547310]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndLightVertices_FUN_005472d0(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CVector3i *skinned_vertices;
  
  if (lod_index != *(int *)&this_ptr->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(this_ptr,lod_index);
  }
  skinned_vertices = *(CVector3i **)&this_ptr->field_0x2234;
  lod_index_00 = *(int *)&this_ptr->field_0x2230;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_lightVertices_FUN_005419c0
            (this_ptr_00,lod_index_00,skinned_vertices);
  return;
}
