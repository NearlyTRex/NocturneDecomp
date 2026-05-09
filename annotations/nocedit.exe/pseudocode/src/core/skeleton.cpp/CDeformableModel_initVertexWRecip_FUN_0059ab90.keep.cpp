// Name: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90
// Address: 0059ab90
// MANUAL RECONSTRUCTION
// Address Range: [[0059ab90, 0059abe0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_0059ab90(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

{
  int iVar2;

  iVar2 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      g_CDemonRendererPtr2->vertex_buffer_ptr[iVar2].a = g_PerspectiveReciprocal;
      iVar2 = iVar2 + 1;
    } while (iVar2 < this_ptr->vertex_count[lod_index]);
  }
  return;
}
