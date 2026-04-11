// Name: shape_superopt.cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20
// Address: 005c7b20
// MANUAL RECONSTRUCTION
// Address Range: [[005c7b20, 005c7db3]]
// Convention: __cdecl
// Signature: int __cdecl shape_superopt_cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20(CComplexPolygon *this_ptr)

#include "nocturne.h"

int __cdecl shape_superopt_cpp_CComplexPolygon_buildEdgeList_FUN_005c7b20(CComplexPolygon *this_ptr)

{
  SExpandedEdge *edges;
  int iVar4;
  uint local_14;
  CVert *verts;
  CPoly *poly;

  if ((this_ptr->polygon_count != 0) && (this_ptr->polygon_list != (CPoly **)0x0)) {
    this_ptr->expanded_edge_count = this_ptr->polygon_count * 3;
    edges = (SExpandedEdge *)shape_memdbg_cpp_malloc_FUN_006021da(this_ptr->polygon_count * 0x120);
    this_ptr->expanded_edges = edges;
    if (edges != (SExpandedEdge *)0x0) {
      local_14 = 0;
      verts = (*this_ptr->polygon_list)->parent_obj->vertex_data;
      if (this_ptr->polygon_count != 0) {
        do {
          poly = this_ptr->polygon_list[local_14];
          // Edge 0: vertex_idx_0 → vertex_idx_1
          edges[0].start_vertex_index = poly->vertex_idx_0;
          edges[0].end_vertex_index = poly->vertex_idx_1;
          edges[0].start_pos = verts[poly->vertex_idx_0].position;
          edges[0].end_pos = verts[poly->vertex_idx_1].position;
          edges[0].start_uv[0] = poly->uv_coords[0].impl.x;
          edges[0].start_uv[1] = poly->uv_coords[0].impl.y;
          edges[0].end_uv[0] = poly->uv_coords[1].impl.x;
          edges[0].end_uv[1] = poly->uv_coords[1].impl.y;
          // Edge 1: vertex_idx_1 → vertex_idx_2
          edges[1].start_vertex_index = poly->vertex_idx_1;
          edges[1].end_vertex_index = poly->vertex_idx_2;
          edges[1].start_pos = verts[poly->vertex_idx_1].position;
          edges[1].end_pos = verts[poly->vertex_idx_2].position;
          edges[1].start_uv[0] = poly->uv_coords[1].impl.x;
          edges[1].start_uv[1] = poly->uv_coords[1].impl.y;
          edges[1].end_uv[0] = poly->uv_coords[2].impl.x;
          edges[1].end_uv[1] = poly->uv_coords[2].impl.y;
          // Edge 2: vertex_idx_2 → vertex_idx_0
          edges[2].start_vertex_index = poly->vertex_idx_2;
          edges[2].end_vertex_index = poly->vertex_idx_0;
          edges[2].start_pos = verts[poly->vertex_idx_2].position;
          edges[2].end_pos = verts[poly->vertex_idx_0].position;
          edges[2].start_uv[0] = poly->uv_coords[2].impl.x;
          edges[2].start_uv[1] = poly->uv_coords[2].impl.y;
          edges[2].end_uv[0] = poly->uv_coords[0].impl.x;
          edges[2].end_uv[1] = poly->uv_coords[0].impl.y;
          local_14 = local_14 + 1;
          edges = edges + 3;
        } while (local_14 < (uint)this_ptr->polygon_count);
      }
      shape_superopt_cpp_CComplexPolygon_removedSharedEdges_FUN_005c8160(this_ptr);
      shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(this_ptr);
      iVar4 = shape_superopt_cpp_CComplexPolygon_orderEdgesIntoChain_FUN_005c8280
                        (this_ptr,this_ptr->expanded_edges,this_ptr->expanded_edge_count);
      if (iVar4 == 0) {
        shape_memdbg_cpp_free_FUN_005fe659(this_ptr->expanded_edges);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}
