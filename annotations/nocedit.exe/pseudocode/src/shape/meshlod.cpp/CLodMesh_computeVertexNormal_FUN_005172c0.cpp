// Name: shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0
// Address: 005172c0
// Address Range: [[005172c0, 005173ea]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0(CLodMesh * this_ptr, CVector3f * out_normal, int vertex_index)

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_computeVertexNormal_FUN_005172c0
          (CLodMesh *this_ptr,CVector3f *out_normal,int vertex_index)

{
  CLodEdge *pCVar1;
  int iVar2;
  CLodFace *pCVar3;
  float fVar4;
  CLodVert *pCVar5;
  CLodEdge *pCVar6;
  int iVar7;
  CLodVert *local_1c;
  int local_18;
  
  pCVar5 = this_ptr->vertex_data;
  out_normal->x = 0.0;
  out_normal->y = 0.0;
  pCVar5 = pCVar5 + vertex_index;
  out_normal->z = 0.0;
  local_18 = 0;
  local_1c = pCVar5;
  if (0 < pCVar5->adjacent_edge_count) {
    do {
      pCVar1 = this_ptr->edges_ptr + local_1c->adjacent_edge_indices[0];
      iVar7 = 0;
      pCVar6 = pCVar1;
      if (0 < pCVar1->adjacent_tri_count) {
        do {
          iVar2 = pCVar6->adjacent_tri_indices[0];
          pCVar3 = this_ptr->tri_data;
          out_normal->x = pCVar3[iVar2].normal.x + out_normal->x;
          out_normal->y = pCVar3[iVar2].normal.y + out_normal->y;
          iVar7 = iVar7 + 1;
          out_normal->z = pCVar3[iVar2].normal.z + out_normal->z;
          pCVar6 = (CLodEdge *)&pCVar6->vertex_idx_2;
        } while (iVar7 < pCVar1->adjacent_tri_count);
      }
      local_18 = local_18 + 1;
      local_1c = (CLodVert *)&(local_1c->position).y;
    } while (local_18 < pCVar5->adjacent_edge_count);
  }
  fVar4 = SQRT(out_normal->z * out_normal->z +
               out_normal->x * out_normal->x + out_normal->y * out_normal->y);
  if (fVar4 <= 0.0) {
    out_normal->z = 0.0;
    out_normal->y = out_normal->z;
    out_normal->x = out_normal->y;
    return out_normal;
  }
  fVar4 = 1.0 / fVar4;
  out_normal->x = out_normal->x * fVar4;
  out_normal->y = out_normal->y * fVar4;
  out_normal->z = out_normal->z * fVar4;
  return out_normal;
}
