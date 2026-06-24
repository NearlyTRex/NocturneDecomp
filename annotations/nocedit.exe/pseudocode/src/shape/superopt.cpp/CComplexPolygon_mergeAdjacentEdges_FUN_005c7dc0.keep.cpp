// Name: shape_superopt.cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0
// Address: 005c7dc0
// MANUAL RECONSTRUCTION
// Address Range: [[005c7dc0, 005c7fac]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(CComplexPolygon *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(CComplexPolygon *this_ptr)

{
  int iVar1;
  SExpandedEdge *edge_b;
  uint local_2c;
  uint local_18;
  SExpandedEdge *edge_a;
  bool bVar2;
  
  do {
    local_2c = 0;
    bVar2 = true;
    if (this_ptr->expanded_edge_count != 0) {
      do {
        if (!bVar2) break;
        local_18 = local_2c + 1;
        if (local_18 < (uint)this_ptr->expanded_edge_count) {
          edge_b = this_ptr->expanded_edges + local_18;
          edge_a = this_ptr->expanded_edges + local_2c;
          do {
            if (!bVar2) break;
            iVar1 = shape_superopt_cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0
                              (this_ptr,edge_a,edge_b);
            if (iVar1 != 0) {
              if ((((edge_a->end_pos).x == (edge_b->start_pos).x) &&
                  ((edge_a->end_pos).y == (edge_b->start_pos).y)) &&
                 ((edge_a->end_pos).z == (edge_b->start_pos).z)) {
                edge_a->end_pos = edge_b->end_pos;
                edge_a->end_uv[0] = edge_b->end_uv[0];
                edge_a->end_uv[1] = edge_b->end_uv[1];
              }
              else {
                edge_a->start_pos = edge_b->start_pos;
                edge_a->start_uv[0] = edge_b->start_uv[0];
                edge_a->start_uv[1] = edge_b->start_uv[1];
              }
              memmove
                        (edge_b,edge_b + 1,
                         (this_ptr->expanded_edge_count - local_18 - 1) * sizeof(SExpandedEdge));
              bVar2 = false;
              this_ptr->expanded_edge_count = this_ptr->expanded_edge_count + -1;
            }
            edge_b = edge_b + 1;
            local_18 = local_18 + 1;
          } while (local_18 < (uint)this_ptr->expanded_edge_count);
        }
        local_2c = local_2c + 1;
      } while (local_2c < (uint)this_ptr->expanded_edge_count);
    }
    if (bVar2) {
      return;
    }
  } while( true );
}
