// Name: core_skeleton.cpp_CDeformableModel_rotateVertices_FUN_00541990
// Address: 00541990
// Address Range: [[00541990, 005419b9]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00541990(CDeformableModel *this_ptr,int lod_index,int *input_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_rotateVertices_FUN_00541990(CDeformableModel *this_ptr,int lod_index,int *input_vertices)

{
  core_set_cpp_CDemonSet_rotateVerticies_FUN_00531e90
            (g_CDemonSetPtr,this_ptr->vertex_count[lod_index],(CVector3i *)input_vertices);
  return;
}
