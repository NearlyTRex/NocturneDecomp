// Name: core_skeleton.cpp_FUN_0054e500
// Address: 0054e500
// Address Range: [[0054e500, 0054e540]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054e500(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054e500(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CVector3i *skinned_vertices;
  
  if (lod_index != *(int *)&this_ptr->field_0x2320) {
    core_skeleton_cpp_FUN_0054e420(this_ptr,lod_index);
  }
  skinned_vertices = *(CVector3i **)&this_ptr->field_0x2324;
  lod_index_00 = *(int *)&this_ptr->field_0x2320;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  core_skeleton_cpp_CDeformableModel_lightVertices_FUN_00548bd0
            (this_ptr_00,lod_index_00,skinned_vertices);
  return;
}
