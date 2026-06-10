// Name: shape_meshlod.cpp_CLodMesh_computeVertexNormal_FUN_005172c0
// Address: 005172c0
// MANUAL RECONSTRUCTION
// Address Range: [[005172c0, 005173ea]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexNormal_FUN_005172c0(CLodMesh *this_ptr,CVector3f *out_normal,int vertex_index)

#include "nocturne.h"

CVector3f * __cdecl shape_meshlod_cpp_CLodMesh_computeVertexNormal_FUN_005172c0(CLodMesh *this_ptr,CVector3f *out_normal,int vertex_index)

{
  CLodVert *pCVar2;
  float fVar3;
  CLodVert *pCVar5;
  int iVar7;
  int local_18;
  CLodFace *pCVar3;
  float fVar4;
  CLodEdge *pCVar1;
  int iVar2;

  pCVar2 = this_ptr->vertex_data;
  out_normal->x = 0.0;
  out_normal->y = 0.0;
  pCVar5 = pCVar2 + vertex_index;
  out_normal->z = 0.0;
  local_18 = 0;
  if (0 < pCVar5->adjacent_edge_count) {
    do {
      pCVar1 = this_ptr->edges_ptr + pCVar5->adjacent_edge_indices[local_18];
      iVar7 = 0;
      if (0 < pCVar1->adjacent_tri_count) {
        do {
          iVar2 = pCVar1->adjacent_tri_indices[iVar7];
          pCVar3 = this_ptr->tri_data;
          out_normal->x = pCVar3[iVar2].normal.x + out_normal->x;
          out_normal->y = pCVar3[iVar2].normal.y + out_normal->y;
          iVar7 = iVar7 + 1;
          out_normal->z = pCVar3[iVar2].normal.z + out_normal->z;
        } while (iVar7 < pCVar1->adjacent_tri_count);
      }
      local_18 = local_18 + 1;
    } while (local_18 < pCVar5->adjacent_edge_count);
  }
  fVar4 = SQRT(out_normal->z * out_normal->z +
               out_normal->x * out_normal->x + out_normal->y * out_normal->y);
  if (fVar4 <= 0.0) {
    out_normal->x = 0.0;
    out_normal->y = 0.0;
    out_normal->z = 0.0;
    return out_normal;
  }
  fVar3 = 1.0 / fVar4;
  out_normal->x = out_normal->x * fVar3;
  out_normal->y = out_normal->y * fVar3;
  out_normal->z = out_normal->z * fVar3;
  return out_normal;
}
