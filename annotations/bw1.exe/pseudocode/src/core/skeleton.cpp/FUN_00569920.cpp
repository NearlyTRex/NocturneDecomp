// Name: core_skeleton.cpp_FUN_00569920
// Address: 00569920
// Address Range: [[00569920, 00569960]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_FUN_00569920(CDeformableModelInstance *this_ptr,int lod_index)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_FUN_00569920(CDeformableModelInstance *this_ptr,int lod_index)

{
  CDeformableModel *this_ptr_00;
  int lod_index_00;
  int *input_vertices;
  
  if (lod_index != *(int *)&this_ptr->field_0x2320) {
    core_skeleton_cpp_FUN_00569890(this_ptr,lod_index);
  }
  input_vertices = *(int **)&this_ptr->field_0x2324;
  lod_index_00 = *(int *)&this_ptr->field_0x2320;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(this_ptr);
  core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00564000
            (this_ptr_00,lod_index_00,input_vertices);
  return;
}
