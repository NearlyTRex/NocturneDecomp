// Name: shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
// Address: 00518490
// Address Range: [[00518490, 00518734]]
// Convention: __cdecl
// Signature: int shape_meshlod.cpp_CLodMesh_validateEdgeCollapse_FUN_00518490(CLodMesh * this_ptr, int vertex_idx_1, int vertex_idx_2, int vertex_idx_3)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_validateEdgeCollapse_FUN_00518490
          (CLodMesh *this_ptr,int vertex_idx_1,int vertex_idx_2,int vertex_idx_3)

{
  CLodFace *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CLodFace *pCVar5;
  int unaff_ESI;
  int iVar6;
  int in_stack_00000014;
  int local_2c;
  int local_18;
  
  iVar2 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                    (this_ptr,vertex_idx_1,vertex_idx_2,0);
  if (iVar2 < 0) {
    return -1;
  }
  if (this_ptr->edges_ptr[iVar2].deletion_flag != 0) {
    return -1;
  }
  if (this_ptr->edges_ptr[iVar2].adjacent_tri_count < 2) {
    return -1;
  }
  for (local_18 = 0; local_18 < this_ptr->vertex_data[vertex_idx_1].adjacent_edge_count;
      local_18 = local_18 + 1) {
    iVar2 = shape_meshlod_cpp_CLodMesh_getOtherVertexOnEdge_FUN_0051a980
                      (this_ptr,vertex_idx_1,local_18);
    if ((iVar2 != in_stack_00000014) &&
       (iVar2 = shape_meshlod_cpp_CLodMesh_findOrCreateEdge_FUN_00515ec0
                          (this_ptr,iVar2,in_stack_00000014,0), -1 < iVar2)) {
      iVar4 = 0;
      iVar6 = 0;
      while( true ) {
        if (this_ptr->edges_ptr[iVar2].adjacent_tri_count <= iVar4) {
          return -1;
        }
        iVar3 = shape_meshlod_cpp_CLodFace_findVertexIndex_FUN_00515e90
                          (this_ptr->tri_data +
                           *(int *)((int)this_ptr->edges_ptr[iVar2].adjacent_tri_indices + iVar6),
                           vertex_idx_1);
        if (-1 < iVar3) break;
        iVar4 = iVar4 + 1;
        iVar6 = iVar6 + 4;
      }
    }
  }
  iVar2 = shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740(this_ptr,vertex_idx_1);
  if (((iVar2 != 0) &&
      (iVar2 = shape_meshlod_cpp_CLodMesh_hasVertexBoundaryEdge_FUN_00518740
                         (this_ptr,in_stack_00000014), iVar2 != 0)) &&
     (1 < this_ptr->edges_ptr[unaff_ESI].adjacent_tri_count)) {
    return -1;
  }
  if (g_LodReplayMode != 0) {
    return unaff_ESI;
  }
  iVar2 = 0;
  if (0 < *(int *)(local_18 + 0x24)) {
    iVar4 = local_18;
    do {
      pCVar5 = this_ptr->tri_data + *(int *)(iVar4 + 0x28);
      iVar3 = 0;
      iVar6 = pCVar5->edge_idx_0;
      pCVar1 = pCVar5;
      while (iVar6 != unaff_ESI) {
        iVar3 = iVar3 + 1;
        if (2 < iVar3) goto LAB_0051865b;
        iVar6 = pCVar1->edge_idx_1;
        pCVar1 = (CLodFace *)(pCVar1->attribute_indices + 1);
      }
      iVar6 = iVar3 + -1;
      if (iVar6 < 0) {
        iVar6 = 2;
      }
      iVar6 = *(int *)((int)(pCVar5->uv_coords + 3) + iVar6 * 4);
      local_2c = iVar6 * 0xf0;
      iVar3 = iVar3 + 1;
      if (2 < iVar3) {
        iVar3 = 0;
      }
      if ((this_ptr->edges_ptr[iVar6].collapse_viability != 0) &&
         (this_ptr->edges_ptr[*(int *)((int)(pCVar5->uv_coords + 3) + iVar3 * 4)].collapse_viability
          != 0)) {
        return -1;
      }
      if (1 < this_ptr->edges_ptr[iVar6].collapse_viability) {
        return -1;
      }
      if (1 < this_ptr->edges_ptr[*(int *)((int)(pCVar5->uv_coords + 3) + iVar3 * 4)].
              collapse_viability) {
        return -1;
      }
LAB_0051865b:
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(local_18 + 0x24));
  }
  iVar2 = shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
                    (this_ptr,vertex_idx_1);
  iVar4 = shape_meshlod_cpp_CLodMesh_countNonCollapsibleEdgesForVertex_FUN_00516420
                    (this_ptr,local_2c);
  if (*(int *)(local_18 + 0x18) == 0) {
    if (iVar4 < 1) {
      return unaff_ESI;
    }
    if (iVar2 < 1) {
      return unaff_ESI;
    }
  }
  else if (((iVar2 < 3) || (iVar4 < 3)) && ((iVar2 != 1 || (iVar4 == 2)))) {
    if (iVar4 != 1) {
      return unaff_ESI;
    }
    if (iVar2 == 2) {
      return unaff_ESI;
    }
    return -1;
  }
  return -1;
}
