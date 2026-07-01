// Name: shape_meshlod.cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
// Address: 00515ec0
// MANUAL RECONSTRUCTION
// Address Range: [[00515ec0, 00515ffe]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int create_if_missing)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int create_if_missing)

{
  CLodEdge *pCVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = vertex_idx_1;
  if (vertex_idx_2 < vertex_idx_1) {
    iVar3 = vertex_idx_2;
    vertex_idx_2 = vertex_idx_1;
  }
  iVar2 = 0;
  if (0 < this_ptr->edge_count) {
    pCVar1 = this_ptr->edges_ptr;
    do {
      if (((pCVar1->deletion_flag == 0) && (iVar3 == pCVar1->vertex_idx_1)) &&
         (vertex_idx_2 == pCVar1->vertex_idx_2)) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < this_ptr->edge_count);
  }
  if (create_if_missing == 0) {
    return -1;
  }
  pCVar1 = (CLodEdge *)shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (this_ptr->edges_ptr,(this_ptr->edge_count + 1) * sizeof(CLodEdge),
                      "..\\shape\\meshlod.cpp",805);
  this_ptr->edges_ptr = pCVar1;
  if (pCVar1 == (CLodEdge *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 806;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  this_ptr->edges_ptr[this_ptr->edge_count].vertex_idx_1 = iVar3;
  this_ptr->edges_ptr[this_ptr->edge_count].vertex_idx_2 = vertex_idx_2;
  this_ptr->edges_ptr[this_ptr->edge_count].deletion_flag = 0;
  this_ptr->edges_ptr[this_ptr->edge_count].adjacent_tri_count = 0;
  shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90
            (this_ptr->vertex_data + iVar3,this_ptr->edge_count);
  shape_meshlod_cpp_CLodVert_addAdjacentEdge_FUN_00515d90
            (this_ptr->vertex_data + vertex_idx_2,this_ptr->edge_count);
  iVar3 = this_ptr->edge_count;
  this_ptr->edge_count = iVar3 + 1;
  return iVar3;
}
