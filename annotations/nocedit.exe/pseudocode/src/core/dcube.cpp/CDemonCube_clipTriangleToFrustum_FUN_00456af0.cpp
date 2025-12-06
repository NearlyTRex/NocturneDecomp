// Name: core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
// Address: 00456af0
// Address Range: [[00456af0, 00456ec2]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCubeFrustum * frustum, CVector3f * vertex1, CVector3f * vertex2, CVector3f * vertex3, uchar texture_id)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
          (CDemonCubeFrustum *frustum,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,
          uchar texture_id)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  CVector3f *pCVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  g_CubeInputTriangleCount = 3;
  if (vertex1 != g_CubeInputTriangleBuffer) {
    g_CubeInputTriangleBuffer[0].x = vertex1->x;
    g_CubeInputTriangleBuffer[0].z = vertex1->z;
    g_CubeInputTriangleBuffer[0].y = vertex1->y;
  }
  if (vertex2 != g_CubeInputTriangleBuffer + 1) {
    g_CubeInputTriangleBuffer[1].x = vertex2->x;
    g_CubeInputTriangleBuffer[1].z = vertex2->z;
    g_CubeInputTriangleBuffer[1].y = vertex2->y;
  }
  if (vertex3 != g_CubeInputTriangleBuffer + 2) {
    g_CubeInputTriangleBuffer[2].x = vertex3->x;
    g_CubeInputTriangleBuffer[2].z = vertex3->z;
    g_CubeInputTriangleBuffer[2].y = vertex3->y;
  }
  uVar6 = 0xffffffff;
  iVar9 = 0;
  uVar10 = 0;
  pCVar7 = g_CubeInputTriangleBuffer;
  do {
    bVar5 = (frustum->max).x < pCVar7->x;
    if ((frustum->max).y < pCVar7->y) {
      bVar5 = bVar5 | 2;
    }
    if ((frustum->max).z < pCVar7->z) {
      bVar5 = bVar5 | 4;
    }
    if (pCVar7->x < (frustum->min).x) {
      bVar5 = bVar5 | 8;
    }
    if (pCVar7->y < (frustum->min).y) {
      bVar5 = bVar5 | 0x10;
    }
    if (pCVar7->z < (frustum->min).z) {
      bVar5 = bVar5 | 0x20;
    }
    pCVar7 = pCVar7 + 1;
    iVar9 = iVar9 + 1;
    uVar10 = uVar10 | bVar5;
    uVar6 = uVar6 & bVar5;
  } while (iVar9 < 3);
  if (uVar10 == 0) {
    g_CubeClippedTriangleCount = 3;
    if (vertex1 != g_CubeClippedTriangleBuffer) {
      g_CubeClippedTriangleBuffer[0].x = vertex1->x;
      g_CubeClippedTriangleBuffer[0].z = vertex1->z;
      g_CubeClippedTriangleBuffer[0].y = vertex1->y;
    }
    if (vertex2 != g_CubeClippedTriangleBuffer + 1) {
      g_CubeClippedTriangleBuffer[1].x = vertex2->x;
      g_CubeClippedTriangleBuffer[1].z = vertex2->z;
      g_CubeClippedTriangleBuffer[1].y = vertex2->y;
    }
    if (vertex3 != g_CubeClippedTriangleBuffer + 2) {
      g_CubeClippedTriangleBuffer[2].x = vertex3->x;
      g_CubeClippedTriangleBuffer[2].z = vertex3->z;
      g_CubeClippedTriangleBuffer[2].y = vertex3->y;
    }
  }
  else {
    if (uVar6 != 0) {
      g_CubeInputTriangleCount = 3;
      return;
    }
    g_CubeClipStage1Count = uVar6;
    g_CubeClipStage2Count = uVar6;
    g_CubeClipStage3Count = uVar6;
    g_CubeClipStage4Count = uVar6;
    g_CubeClipStage5Count = uVar6;
    g_CubeClippedTriangleCount = uVar6;
    core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970((frustum->max).y);
    if ((int)g_CubeClipStage1Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0((frustum->min).y);
    if ((int)g_CubeClipStage2Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40((frustum->max).x);
    if ((int)g_CubeClipStage3Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0((frustum->min).x);
    if ((int)g_CubeClipStage4Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00((frustum->min).z);
    if ((int)g_CubeClipStage5Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070((frustum->max).z);
    if ((int)g_CubeClippedTriangleCount < 3) {
      return;
    }
  }
  if (2 < (int)g_CubeClippedTriangleCount) {
    iVar9 = 0xc;
    for (iVar8 = 0; iVar3 = g_VertexCount, fVar2 = g_CubeClippedTriangleBuffer[0].z,
        fVar1 = g_CubeClippedTriangleBuffer[0].y, iVar8 < (int)(g_CubeClippedTriangleCount - 2);
        iVar8 = iVar8 + 1) {
      g_LoadedVertices[g_VertexCount].vertex.x = g_CubeClippedTriangleBuffer[0].x;
      g_LoadedVertices[iVar3].vertex.y = fVar1;
      uVar10 = iVar3 + 1;
      g_LoadedVertices[iVar3].vertex.z = fVar2;
      fVar1 = *(float *)((int)&g_CubeClippedTriangleBuffer[0].y + iVar9);
      fVar2 = *(float *)((int)&g_CubeClippedTriangleBuffer[0].z + iVar9);
      uVar6 = iVar3 + 2;
      g_LoadedVertices[uVar10].vertex.x = *(float *)((int)&g_CubeClippedTriangleBuffer[0].x + iVar9)
      ;
      g_LoadedVertices[uVar10].vertex.y = fVar1;
      g_LoadedVertices[uVar10].vertex.z = fVar2;
      iVar4 = g_PolygonCount;
      fVar1 = *(float *)((int)&g_CubeClippedTriangleBuffer[1].y + iVar9);
      fVar2 = *(float *)((int)&g_CubeClippedTriangleBuffer[1].z + iVar9);
      g_LoadedVertices[uVar6].vertex.x = *(float *)((int)&g_CubeClippedTriangleBuffer[1].x + iVar9);
      g_LoadedVertices[uVar6].vertex.y = fVar1;
      g_LoadedVertices[uVar6].vertex.z = fVar2;
      g_ModelPolygonData[iVar4].vertex_indices[0] = iVar3;
      g_ModelPolygonData[iVar4].vertex_indices[1] = uVar10;
      g_ModelPolygonData[iVar4].vertex_indices[2] = uVar6;
      g_ModelPolygonData[iVar4].uv_u[0] = 0.0;
      g_ModelPolygonData[iVar4].uv_v[0] = 0.0;
      g_ModelPolygonData[iVar4].uv_u[1] = 0.0;
      g_ModelPolygonData[iVar4].uv_v[1] = 0.0;
      g_ModelPolygonData[iVar4].uv_u[2] = 0.0;
      g_ModelPolygonData[iVar4].uv_v[2] = 0.0;
      g_ModelPolygonData[iVar4].lightmap_name[0] = '\0';
      g_ModelPolygonData[iVar4].vertex_indices_count = 3;
      g_ModelPolygonData[iVar4].polygon_type = 1;
      crt_stdio_c_sprintf_FUN_005fdbd0(g_ModelPolygonData[iVar4].texture_name,"%d");
      iVar9 = iVar9 + 0xc;
      g_ModelPolygonData[g_PolygonCount].part_assignment = 0;
      g_PolygonCount = g_PolygonCount + 1;
      g_VertexCount = g_VertexCount + 3;
    }
  }
  return;
}
