// Name: shape_superopt.cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0
// Address: 005c7dc0
// Address Range: [[005c7dc0, 005c7fac]]
// Convention: __cdecl
// Signature: void __cdecl shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(CComplexPolygon *this_ptr)

#include "nocturne.h"

void __cdecl shape_superopt_cpp_CComplexPolygon_mergeAdjacentEdges_FUN_005c7dc0(CComplexPolygon *this_ptr)

{
  SExpandedEdge *edge_a;
  void *pvVar1;
  bool bVar2;
  int iVar3;
  SExpandedEdge *edge_b;
  uint *puVar4;
  uint *local_38;
  uint *local_34;
  uint local_2c;
  void *local_20;
  uint local_18;
  
  do {
    pvVar1 = this_ptr->expanded_edges;
    local_2c = 0;
    bVar2 = true;
    if (this_ptr->expanded_edge_count != 0) {
      local_38 = (uint *)((int)pvVar1 + 0x10);
      local_34 = (uint *)((int)pvVar1 + 0x28);
      do {
        if (!bVar2) break;
        local_18 = local_2c + 1;
        if (local_18 < (uint)this_ptr->expanded_edge_count) {
          iVar3 = local_18 * 0x60;
          puVar4 = (uint *)(iVar3 + 0x10 + (int)pvVar1);
          edge_b = (SExpandedEdge *)((int)pvVar1 + iVar3);
          local_20 = (void *)(iVar3 + 0x60 + (int)pvVar1);
          edge_a = (SExpandedEdge *)((int)pvVar1 + local_2c * 0x60);
          do {
            if (!bVar2) break;
            iVar3 = shape_superopt_cpp_CComplexPolygon_canMergeEdges_FUN_005c7fb0
                              (this_ptr,edge_a,edge_b);
            if (iVar3 != 0) {
              if ((((edge_a->end_pos).x == (edge_b->start_pos).x) &&
                  ((edge_a->end_pos).y == (edge_b->start_pos).y)) &&
                 ((edge_a->end_pos).z == (edge_b->start_pos).z)) {
                *local_34 = *(uint *)&(edge_b->end_pos).x;
                local_34[1] = *(uint *)((int)&(edge_b->end_pos).x + 4);
                local_34[2] = *(uint *)&(edge_b->end_pos).y;
                local_34[3] = *(uint *)((int)&(edge_b->end_pos).y + 4);
                *(double *)(local_34 + 4) = (edge_b->end_pos).z;
                local_34[10] = *(uint *)edge_b->end_uv;
                local_34[0xb] = *(uint *)((int)edge_b->end_uv + 4);
                local_34[0xc] = *(uint *)(edge_b->end_uv + 1);
                local_34[0xd] = *(uint *)((int)edge_b->end_uv + 0xc);
              }
              else {
                *local_38 = *puVar4;
                local_38[1] = puVar4[1];
                local_38[2] = puVar4[2];
                local_38[3] = puVar4[3];
                local_38[4] = puVar4[4];
                local_38[5] = puVar4[5];
                local_38[0xc] = puVar4[0xc];
                local_38[0xd] = puVar4[0xd];
                local_38[0xe] = puVar4[0xe];
                local_38[0xf] = puVar4[0xf];
              }
              memmove
                        (edge_b,local_20,((this_ptr->expanded_edge_count - local_18) + -1) * 0x60);
              bVar2 = false;
              this_ptr->expanded_edge_count = this_ptr->expanded_edge_count + -1;
            }
            puVar4 = puVar4 + 0x18;
            edge_b = edge_b + 1;
            local_20 = (void *)((int)local_20 + 0x60);
            local_18 = local_18 + 1;
          } while (local_18 < (uint)this_ptr->expanded_edge_count);
        }
        local_38 = local_38 + 0x18;
        local_34 = local_34 + 0x18;
        local_2c = local_2c + 1;
      } while (local_2c < (uint)this_ptr->expanded_edge_count);
    }
    if (bVar2) {
      return;
    }
  } while( true );
}
