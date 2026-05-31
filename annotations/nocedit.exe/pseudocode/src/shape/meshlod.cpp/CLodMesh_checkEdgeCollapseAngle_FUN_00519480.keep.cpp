// Name: shape_meshlod.cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480
// Address: 00519480
// MANUAL RECONSTRUCTION
// Address Range: [[00519480, 0051967b]]
// Convention: __cdecl
// Signature: int __cdecl shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480(CLodMesh *this_ptr,int edge_idx,int vertex_idx)

#include "nocturne.h"

int __cdecl shape_meshlod_cpp_CLodMesh_checkEdgeCollapseAngle_FUN_00519480(CLodMesh *this_ptr,int edge_idx,int vertex_idx)

{
  CLodVert *pCVar2;
  int iVar4;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  CLodEdge *pCVar6;
  int iVar8;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int iVar3;
  CLodVert *pCVar4;
  CLodVert *pCVar1;
  int iVar2;
  float fVar5;
  
  pCVar2 = this_ptr->vertex_data;
  pCVar1 = pCVar2 + vertex_idx;
  iVar4 = this_ptr->edges_ptr[edge_idx].vertex_idx_1;
  iVar2 = this_ptr->edges_ptr[edge_idx].vertex_idx_2;
  fVar6 = pCVar2[iVar4].position.x - pCVar2[iVar2].position.x;
  fVar7 = pCVar2[iVar4].position.y - pCVar2[iVar2].position.y;
  fVar8 = pCVar2[iVar4].position.z - pCVar2[iVar2].position.z;
  fVar5 = SQRT(fVar8 * fVar8 + fVar6 * fVar6 + fVar7 * fVar7);
  if (0.0 < fVar5) {
    fVar9 = 1.0 / fVar5;
    local_24 = fVar6 * fVar9;
    local_20 = fVar7 * fVar9;
    local_1c = fVar8 * fVar9;
  }
  else {
    local_20 = 0.0;
    local_24 = 0.0;
    local_1c = 0.0;
  }
  iVar8 = 0;
  if (0 < pCVar1->adjacent_edge_count) {
    do {
      if (pCVar1->adjacent_edge_indices[iVar8] != edge_idx) {
        pCVar6 = this_ptr->edges_ptr + pCVar1->adjacent_edge_indices[iVar8];
        if ((1 < pCVar6->collapse_viability) || (1 < pCVar6->collapse_curvature)) {
          return 1;
        }
        if ((pCVar6->collapse_viability != 0) || (pCVar6->collapse_curvature != 0)) {
          iVar4 = pCVar6->vertex_idx_2;
          iVar3 = pCVar6->vertex_idx_1;
          pCVar4 = this_ptr->vertex_data;
          fVar6 = pCVar4[iVar3].position.x - pCVar4[iVar4].position.x;
          fVar7 = pCVar4[iVar3].position.y - pCVar4[iVar4].position.y;
          fVar9 = pCVar4[iVar3].position.z - pCVar4[iVar4].position.z;
          fVar8 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar7 * fVar7);
          if (fVar8 <= 0.0) {
            local_2c = 0.0;
            local_30 = 0.0;
            local_28 = 0.0;
          }
          else {
            fVar8 = 1.0 / fVar8;
            local_30 = fVar6 * fVar8;
            local_2c = fVar7 * fVar8;
            local_28 = fVar9 * fVar8;
          }
          if (ABS(local_1c * local_28 + local_24 * local_30 + local_20 * local_2c) <
              (float)0.90000000000000002) {
            return 1;
          }
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < pCVar1->adjacent_edge_count);
  }
  return 0;
}
