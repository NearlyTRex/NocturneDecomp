// Name: shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
// Address: 00519480
// Address Range: [[00519480, 0051967b]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480 (CLodMesh *this_ptr,int edge_idx,int vertex_idx)

#include "nocturne.h"

int __cdecl
shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
          (CLodMesh *this_ptr,int edge_idx,int vertex_idx)

{
  CLodVert *pCVar1;
  int iVar2;
  int iVar3;
  CLodVert *pCVar4;
  float fVar5;
  CLodEdge *pCVar6;
  CLodVert *pCVar7;
  int iVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  pCVar7 = this_ptr->vertex_data;
  pCVar1 = pCVar7 + vertex_idx;
  iVar8 = this_ptr->edges_ptr[edge_idx].vertex_idx_1;
  iVar2 = this_ptr->edges_ptr[edge_idx].vertex_idx_2;
  local_24 = pCVar7[iVar8].position.x - pCVar7[iVar2].position.x;
  local_20 = pCVar7[iVar8].position.y - pCVar7[iVar2].position.y;
  local_1c = pCVar7[iVar8].position.z - pCVar7[iVar2].position.z;
  fVar5 = SQRT(local_1c * local_1c + local_24 * local_24 + local_20 * local_20);
  if (0.0 < fVar5) {
    fVar5 = 1.0 / fVar5;
    local_24 = local_24 * fVar5;
    local_20 = local_20 * fVar5;
    local_1c = local_1c * fVar5;
  }
  else {
    local_20 = 0.0;
    local_24 = 0.0;
    local_1c = 0.0;
  }
  iVar8 = 0;
  pCVar7 = pCVar1;
  if (0 < pCVar1->adjacent_edge_count) {
    do {
      if (pCVar7->adjacent_edge_indices[0] != edge_idx) {
        pCVar6 = this_ptr->edges_ptr + pCVar7->adjacent_edge_indices[0];
        if ((1 < pCVar6->collapse_viability) || (1 < pCVar6->collapse_curvature)) {
          return 1;
        }
        if ((pCVar6->collapse_viability != 0) || (pCVar6->collapse_curvature != 0)) {
          iVar2 = pCVar6->vertex_idx_2;
          iVar3 = pCVar6->vertex_idx_1;
          pCVar4 = this_ptr->vertex_data;
          local_30 = pCVar4[iVar3].position.x - pCVar4[iVar2].position.x;
          local_2c = pCVar4[iVar3].position.y - pCVar4[iVar2].position.y;
          local_28 = pCVar4[iVar3].position.z - pCVar4[iVar2].position.z;
          fVar5 = SQRT(local_28 * local_28 + local_30 * local_30 + local_2c * local_2c);
          if (fVar5 <= 0.0) {
            local_2c = 0.0;
            local_30 = 0.0;
            local_28 = 0.0;
          }
          else {
            fVar5 = 1.0 / fVar5;
            local_30 = local_30 * fVar5;
            local_2c = local_2c * fVar5;
            local_28 = local_28 * fVar5;
          }
          if (ABS(local_1c * local_28 + local_24 * local_30 + local_20 * local_2c) <
              (float)0.90000000000000002) {
            return 1;
          }
        }
      }
      iVar8 = iVar8 + 1;
      pCVar7 = (CLodVert *)&(pCVar7->position).y;
    } while (iVar8 < pCVar1->adjacent_edge_count);
  }
  return 0;
}
