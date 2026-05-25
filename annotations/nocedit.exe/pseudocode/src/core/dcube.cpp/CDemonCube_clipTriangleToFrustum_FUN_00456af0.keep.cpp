// Name: core_dcube.cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0
// Address: 00456af0
// MANUAL RECONSTRUCTION
// Address Range: [[00456af0, 00456ec2]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCube *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,uchar texture_id)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_clipTriangleToFrustum_FUN_00456af0(CDemonCube *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,uchar texture_id)

{
  uint uVar2;
  byte bVar6;
  uint uVar7;
  CVector3f *pCVar8;
  int iVar9;
  int iVar10;
  uint local_14;
  uint uVar1;
  int iVar5;
  int iVar4;
  
  g_CubeInputTriangleCount = 3;
  if (vertex1 != g_CubeInputTriangleBuffer) {
    g_CubeInputTriangleBuffer[0] = *vertex1;
  }
  if (vertex2 != g_CubeInputTriangleBuffer + 1) {
    g_CubeInputTriangleBuffer[1] = *vertex2;
  }
  if (vertex3 != g_CubeInputTriangleBuffer + 2) {
    g_CubeInputTriangleBuffer[2] = *vertex3;
  }
  uVar7 = 0xffffffff;
  iVar10 = 0;
  local_14 = 0;
  pCVar8 = g_CubeInputTriangleBuffer;
  do {
    bVar6 = (this_ptr->max_bounds).x < pCVar8->x;
    if ((this_ptr->max_bounds).y < pCVar8->y) {
      bVar6 = bVar6 | 2;
    }
    if ((this_ptr->max_bounds).z < pCVar8->z) {
      bVar6 = bVar6 | 4;
    }
    if (pCVar8->x < (this_ptr->min_bounds).x) {
      bVar6 = bVar6 | 8;
    }
    if (pCVar8->y < (this_ptr->min_bounds).y) {
      bVar6 = bVar6 | 0x10;
    }
    if (pCVar8->z < (this_ptr->min_bounds).z) {
      bVar6 = bVar6 | 0x20;
    }
    pCVar8 = pCVar8 + 1;
    iVar10 = iVar10 + 1;
    local_14 = local_14 | bVar6;
    uVar7 = uVar7 & bVar6;
  } while (iVar10 < 3);
  if (local_14 == 0) {
    g_CubeClippedTriangleCount = 3;
    if (vertex1 != g_CubeClippedTriangleBuffer) {
      g_CubeClippedTriangleBuffer[0] = *vertex1;
    }
    if (vertex2 != g_CubeClippedTriangleBuffer + 1) {
      g_CubeClippedTriangleBuffer[1] = *vertex2;
    }
    if (vertex3 != g_CubeClippedTriangleBuffer + 2) {
      g_CubeClippedTriangleBuffer[2] = *vertex3;
    }
  }
  else {
    if (uVar7 != 0) {
      g_CubeInputTriangleCount = 3;
      return;
    }
    g_CubeClipStage1Count = uVar7;
    g_CubeClipStage2Count = uVar7;
    g_CubeClipStage3Count = uVar7;
    g_CubeClipStage4Count = uVar7;
    g_CubeClipStage5Count = uVar7;
    g_CubeClippedTriangleCount = uVar7;
    core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970((this_ptr->max_bounds).y);
    if ((int)g_CubeClipStage1Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0((this_ptr->min_bounds).y);
    if ((int)g_CubeClipStage2Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40((this_ptr->max_bounds).x);
    if ((int)g_CubeClipStage3Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0((this_ptr->min_bounds).x);
    if ((int)g_CubeClipStage4Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00((this_ptr->min_bounds).z);
    if ((int)g_CubeClipStage5Count < 3) {
      return;
    }
    core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070((this_ptr->max_bounds).z);
    if ((int)g_CubeClippedTriangleCount < 3) {
      return;
    }
  }
  if (2 < (int)g_CubeClippedTriangleCount) {
    for (iVar9 = 0; iVar4 = g_VertexCount, iVar9 < (int)(g_CubeClippedTriangleCount - 2);
        iVar9 = iVar9 + 1) {
      uVar2 = iVar4 + 1;
      uVar1 = iVar4 + 2;
      g_LoadedVertices[iVar4].vertex = g_CubeClippedTriangleBuffer[0];
      g_LoadedVertices[uVar2].vertex = g_CubeClippedTriangleBuffer[iVar9 + 1];
      g_LoadedVertices[uVar1].vertex = g_CubeClippedTriangleBuffer[iVar9 + 2];
      iVar5 = g_PolygonCount;
      g_ModelPolygonData[iVar5].vertex_indices[0] = iVar4;
      g_ModelPolygonData[iVar5].vertex_indices[1] = uVar2;
      g_ModelPolygonData[iVar5].vertex_indices[2] = uVar1;
      g_ModelPolygonData[iVar5].uv_u[0] = 0.0;
      g_ModelPolygonData[iVar5].uv_v[0] = 0.0;
      g_ModelPolygonData[iVar5].uv_u[1] = 0.0;
      g_ModelPolygonData[iVar5].uv_v[1] = 0.0;
      g_ModelPolygonData[iVar5].uv_u[2] = 0.0;
      g_ModelPolygonData[iVar5].uv_v[2] = 0.0;
      g_ModelPolygonData[iVar5].lightmap_name[0] = '\0';
      g_ModelPolygonData[iVar5].vertex_indices_count = 3;
      g_ModelPolygonData[iVar5].polygon_type = 1;
      _sprintf(g_ModelPolygonData[iVar5].texture_name,"%d",(uint)texture_id);
      g_ModelPolygonData[g_PolygonCount].part_assignment = 0;
      g_PolygonCount = g_PolygonCount + 1;
      g_VertexCount = g_VertexCount + 3;
    }
  }
  return;
}
