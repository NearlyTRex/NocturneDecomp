// Name: core_skeleton.cpp_FUN_0054e4b0
// Address: 0054e4b0
// Address Range: [[0054e4b0, 0054e4f0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_0054e4b0(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_0054e4b0(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  int *input_vertices;
  
  if (lod_index != *(int *)&this_ptr->field_0x2320) {
    core_skeleton_cpp_FUN_0054e420(this_ptr,lod_index);
  }
  input_vertices = *(int **)&this_ptr->field_0x2324;
  lod_index_00 = *(int *)&this_ptr->field_0x2320;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_0054ea40(this_ptr);
  core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00548ba0
            (this_ptr_00,lod_index_00,input_vertices);
  return;
}
