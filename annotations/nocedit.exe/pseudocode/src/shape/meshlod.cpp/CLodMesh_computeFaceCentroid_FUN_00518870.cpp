// Name: shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870
// Address: 00518870
// Address Range: [[00518870, 0051890e]]
// Convention: __cdecl
// Signature: CVector3f * shape_meshlod.cpp_CLodMesh_computeFaceCentroid_FUN_00518870(CLodMesh * this_ptr, CVector3f * out_centroid, CLodFace * face)

#include "nocturne.h"

CVector3f * __cdecl
shape_meshlod_cpp_CLodMesh_computeFaceCentroid_FUN_00518870
          (CLodMesh *this_ptr,CVector3f *out_centroid,CLodFace *face)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  CLodVert *pCVar10;
  float fVar11;
  
  iVar7 = face->vertex_idx_2;
  iVar8 = face->vertex_idx_0;
  iVar9 = face->vertex_idx_1;
  pCVar10 = this_ptr->vertex_data;
  fVar1 = pCVar10[iVar8].position.y;
  fVar2 = pCVar10[iVar9].position.y;
  fVar3 = pCVar10[iVar8].position.z;
  fVar4 = pCVar10[iVar9].position.z;
  fVar5 = pCVar10[iVar7].position.y;
  fVar6 = pCVar10[iVar7].position.z;
  out_centroid->x =
       (pCVar10[iVar8].position.x + pCVar10[iVar9].position.x + pCVar10[iVar7].position.x) /
       3f;
  fVar11 = 0.3333333f;
  out_centroid->y = (fVar1 + fVar2 + fVar5) * 0.3333333f;
  out_centroid->z = fVar11 * (fVar3 + fVar4 + fVar6);
  return out_centroid;
}
