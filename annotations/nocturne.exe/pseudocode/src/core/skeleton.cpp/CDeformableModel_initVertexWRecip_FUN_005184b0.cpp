// Name: core_skeleton.cpp_CDeformableModel_initVertexWRecip_FUN_005184b0
// Address: 005184b0
// Address Range: [[005184b0, 00518500]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_005184b0(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CDeformableModel_initVertexWRecip_FUN_005184b0(CDeformableModel *this_ptr,int lod_index,CVector3i *lod_vertices)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < this_ptr->vertex_count[lod_index]) {
    do {
      *(int *)((int)&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->a + iVar1) = g_INT_01c038f4;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x30;
    } while (iVar2 < this_ptr->vertex_count[lod_index]);
  }
  return;
}
