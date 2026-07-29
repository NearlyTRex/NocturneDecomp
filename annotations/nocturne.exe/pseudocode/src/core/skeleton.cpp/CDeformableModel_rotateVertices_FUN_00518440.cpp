// Name: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00518440
// Address: 00518440
// Address Range: [[00518440, 00518469]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00518440(CDeformableModel *this_ptr,int lod_index,int *input_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00518440(CDeformableModel *this_ptr,int lod_index,int *input_vertices)

{
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,this_ptr->vertex_count[lod_index],(CVector3i *)input_vertices);
  return;
}
