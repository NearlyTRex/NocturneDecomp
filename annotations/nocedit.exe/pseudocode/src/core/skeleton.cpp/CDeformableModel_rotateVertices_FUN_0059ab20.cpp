// Name: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_0059ab20
// Address: 0059ab20
// Address Range: [[0059ab20, 0059ab49]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_0059ab20 (CDeformableModel *this_ptr,int lod_index,int *input_vertices)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_0059ab20
          (CDeformableModel *this_ptr,int lod_index,int *input_vertices)

{
  core_set_cpp_CDemonSet_rotateVertices_FUN_0056e7c0
            (g_CDemonSetPtr,this_ptr->vertex_count[lod_index],input_vertices);
  return;
}
