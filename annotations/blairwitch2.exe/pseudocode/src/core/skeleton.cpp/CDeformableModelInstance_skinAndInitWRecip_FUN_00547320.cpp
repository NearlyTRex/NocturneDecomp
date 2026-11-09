// Name: core_skeleton.cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320
// Address: 00547320
// Address Range: [[00547320, 00547360]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModelInstance_skinAndInitWRecip_FUN_00547320(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  CVector3i *lod_vertices;
  
  if (lod_index != *(int *)&this_ptr->field_0x2230) {
    core_skeleton_cpp_CDeformableModelInstance_skinVerticesForLOD_FUN_005471f0(this_ptr,lod_index);
  }
  lod_vertices = *(CVector3i **)&this_ptr->field_0x2234;
  lod_index_00 = *(int *)&this_ptr->field_0x2230;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(this_ptr);
  core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00541a00
            (this_ptr_00,lod_index_00,lod_vertices);
  return;
}
