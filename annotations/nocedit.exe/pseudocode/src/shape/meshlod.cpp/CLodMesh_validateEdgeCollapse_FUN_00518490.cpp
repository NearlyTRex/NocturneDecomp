// Name: shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
// Address: 00518490
// Address Range: [[00518490, 00518734]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490(CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2)

{
  int iVar2;
  int iVar3;
  int iVar1;
  int iVar4;
  int iVar5;
  int iVar7;
  CLodEdge *pCVar5;
  int iVar6;
  CLodFace *pCVar7;
  int iVar8;
  CLodEdge *pCVar9;
  int local_1c;
  CLodFace *pCVar1;
  
  iVar2 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                    (this_ptr,vertex_idx_1,vertex_idx_2,0);
  if (iVar2 < 0) {
    return -1;
  }
  pCVar5 = this_ptr->edges_ptr + iVar2;
  if (pCVar5->deletion_flag != 0) {
    return -1;
  }
  if (pCVar5->adjacent_tri_count < 2) {
    return -1;
  }
  for (local_1c = 0; local_1c < this_ptr->vertex_data[vertex_idx_1].adjacent_edge_count;
      local_1c = local_1c + 1) {
    iVar3 = shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
                      (this_ptr,vertex_idx_1,local_1c);
    if ((iVar3 != vertex_idx_2) &&
       (iVar1 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                          (this_ptr,iVar3,vertex_idx_2,0), -1 < iVar1)) {
      iVar6 = 0;
      iVar8 = 0;
      while( true ) {
        if (this_ptr->edges_ptr[iVar1].adjacent_tri_count <= iVar6) {
          return -1;
        }
        iVar4 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                          (this_ptr->tri_data +
                           *(int *)((int)this_ptr->edges_ptr[iVar1].adjacent_tri_indices + iVar8),
                           vertex_idx_1);
        if (-1 < iVar4) break;
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 4;
      }
    }
  }
  iVar1 = shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(this_ptr,vertex_idx_1);
  if (((iVar1 != 0) &&
      (iVar1 = shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(this_ptr,vertex_idx_2),
      iVar1 != 0)) && (1 < this_ptr->edges_ptr[iVar2].adjacent_tri_count)) {
    return -1;
  }
  if (g_LodReplayMode != 0) {
    return iVar2;
  }
  iVar1 = 0;
  if (0 < pCVar5->adjacent_tri_count) {
    pCVar9 = pCVar5;
    do {
      pCVar7 = this_ptr->tri_data + pCVar9->adjacent_tri_indices[0];
      iVar5 = 0;
      iVar7 = pCVar7->edge_idx_0;
      pCVar1 = pCVar7;
      while (iVar7 != iVar2) {
        iVar5 = iVar5 + 1;
        if (2 < iVar5) goto LAB_0051865b;
        iVar7 = pCVar1->edge_idx_1;
        pCVar1 = (CLodFace *)(pCVar1->attribute_indices + 1);
      }
      iVar7 = iVar5 + -1;
      if (iVar7 < 0) {
        iVar7 = 2;
      }
      iVar5 = iVar5 + 1;
      if (2 < iVar5) {
        iVar5 = 0;
      }
      if ((this_ptr->edges_ptr[*(int *)((int)(pCVar7->uv_coords + 3) + iVar7 * 4)].
           collapse_viability != 0) &&
         (this_ptr->edges_ptr[*(int *)((int)(pCVar7->uv_coords + 3) + iVar5 * 4)].collapse_viability
          != 0)) {
        return -1;
      }
      if (1 < this_ptr->edges_ptr[*(int *)((int)(pCVar7->uv_coords + 3) + iVar7 * 4)].
              collapse_viability) {
        return -1;
      }
      if (1 < this_ptr->edges_ptr[*(int *)((int)(pCVar7->uv_coords + 3) + iVar5 * 4)].
              collapse_viability) {
        return -1;
      }
LAB_0051865b:
      iVar1 = iVar1 + 1;
      pCVar9 = (CLodEdge *)&pCVar9->vertex_idx_2;
    } while (iVar1 < pCVar5->adjacent_tri_count);
  }
  iVar1 = shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
                    (this_ptr,vertex_idx_1);
  iVar7 = shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
                    (this_ptr,vertex_idx_2);
  if (pCVar5->collapse_viability == 0) {
    if (iVar7 < 1) {
      return iVar2;
    }
    if (iVar1 < 1) {
      return iVar2;
    }
  }
  else if (((iVar1 < 3) || (iVar7 < 3)) && ((iVar1 != 1 || (iVar7 == 2)))) {
    if (iVar7 != 1) {
      return iVar2;
    }
    if (iVar1 == 2) {
      return iVar2;
    }
    return -1;
  }
  return -1;
}
