// Name: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_00564070
// Address: 00564070
// Address Range: [[00564070, 005640c0]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00564070(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_00564070(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      *(int *)((int)&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->a + iVar1) = g_INT_01c51cac;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < this_ptr->vertex_count[lod_index]);
  }
  return;
}
