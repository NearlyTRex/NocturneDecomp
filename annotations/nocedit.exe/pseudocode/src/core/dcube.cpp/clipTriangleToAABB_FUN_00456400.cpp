// Name: core_dcube.cpp_clipTriangleToAABB_FUN_00456400
// Address: 00456400
// Address Range: [[00456400, 004566d0]]
// Convention: __cdecl
// Signature: uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00456400(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

#include "nocturne.h"

uint __cdecl core_dcube_cpp_clipTriangleToAABB_FUN_00456400(CVector3f **triangle_vertices,CVector3f *aabb_min,CVector3f *aabb_max)

{
  CVector3f *pCVar1;
  byte bVar1;
  CVector3f *pCVar2;
  int iVar3;
  uint local_18;
  uint local_14;
  
  g_CubeInputTriangleCount = 3;
  pCVar1 = *triangle_vertices;
  if (pCVar1 != g_CubeInputTriangleBuffer) {
    g_CubeInputTriangleBuffer[0].x = pCVar1->x;
    g_CubeInputTriangleBuffer[0].z = pCVar1->z;
    g_CubeInputTriangleBuffer[0].y = pCVar1->y;
  }
  pCVar1 = triangle_vertices[1];
  if (pCVar1 != g_CubeInputTriangleBuffer + 1) {
    g_CubeInputTriangleBuffer[1].x = pCVar1->x;
    g_CubeInputTriangleBuffer[1].z = pCVar1->z;
    g_CubeInputTriangleBuffer[1].y = pCVar1->y;
  }
  pCVar1 = triangle_vertices[2];
  if (pCVar1 != g_CubeInputTriangleBuffer + 2) {
    g_CubeInputTriangleBuffer[2].x = pCVar1->x;
    g_CubeInputTriangleBuffer[2].z = pCVar1->z;
    g_CubeInputTriangleBuffer[2].y = pCVar1->y;
  }
  iVar3 = 0;
  local_18 = 0;
  local_14 = 0xffffffff;
  pCVar2 = g_CubeInputTriangleBuffer;
  do {
    bVar1 = aabb_max->x < pCVar2->x;
    if (aabb_max->y < pCVar2->y) {
      bVar1 = bVar1 | 2;
    }
    if (aabb_max->z < pCVar2->z) {
      bVar1 = bVar1 | 4;
    }
    if (pCVar2->x < aabb_min->x) {
      bVar1 = bVar1 | 8;
    }
    if (pCVar2->y < aabb_min->y) {
      bVar1 = bVar1 | 0x10;
    }
    if (pCVar2->z < aabb_min->z) {
      bVar1 = bVar1 | 0x20;
    }
    pCVar2 = pCVar2 + 1;
    iVar3 = iVar3 + 1;
    local_14 = local_14 & bVar1;
    local_18 = local_18 | bVar1;
  } while (iVar3 < 3);
  if (local_18 == 0) {
    pCVar1 = *triangle_vertices;
    g_CubeClippedTriangleCount = 3;
    if (pCVar1 != g_CubeClippedTriangleBuffer) {
      g_CubeClippedTriangleBuffer[0].x = pCVar1->x;
      g_CubeClippedTriangleBuffer[0].z = pCVar1->z;
      g_CubeClippedTriangleBuffer[0].y = pCVar1->y;
    }
    pCVar1 = triangle_vertices[1];
    if (pCVar1 != g_CubeClippedTriangleBuffer + 1) {
      g_CubeClippedTriangleBuffer[1].x = pCVar1->x;
      g_CubeClippedTriangleBuffer[1].z = pCVar1->z;
      g_CubeClippedTriangleBuffer[1].y = pCVar1->y;
    }
    pCVar1 = triangle_vertices[2];
    if (pCVar1 != g_CubeClippedTriangleBuffer + 2) {
      g_CubeClippedTriangleBuffer[2].x = pCVar1->x;
      g_CubeClippedTriangleBuffer[2].z = pCVar1->z;
      g_CubeClippedTriangleBuffer[2].y = pCVar1->y;
    }
  }
  else {
    if (local_14 != 0) {
      return 0;
    }
    g_CubeClipStage1Count = local_14;
    g_CubeClipStage2Count = local_14;
    g_CubeClipStage3Count = local_14;
    g_CubeClipStage4Count = local_14;
    g_CubeClipStage5Count = local_14;
    g_CubeClippedTriangleCount = local_14;
    core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970(aabb_max->y);
    if ((int)g_CubeClipStage1Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0(aabb_min->y);
    if ((int)g_CubeClipStage2Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40(aabb_max->x);
    if ((int)g_CubeClipStage3Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(aabb_min->x);
    if ((int)g_CubeClipStage4Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00(aabb_min->z);
    if ((int)g_CubeClipStage5Count < 3) {
      return 0;
    }
    core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070(aabb_max->z);
    if ((int)g_CubeClippedTriangleCount < 3) {
      return 0;
    }
  }
  return 1;
}
