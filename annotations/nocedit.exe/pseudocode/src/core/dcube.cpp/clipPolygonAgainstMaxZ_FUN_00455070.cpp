// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070
// Address: 00455070
// Address Range: [[00455070, 004551c0]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00455070(float max_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage5Count) {
    vertex1 = g_ClipStageMinZBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage5Count) {
        uVar2 = uVar2 ^ g_CubeClipStage5Count;
      }
      bVar1 = max_z_plane < vertex1->z;
      if (max_z_plane < g_ClipStageMinZBuffer[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount != vertex1) {
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].x = vertex1->x;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].y = vertex1->y;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_ClipStageMinZBuffer + uVar2,vertex1,
                   g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount,0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        if (g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount != vertex1) {
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].x = vertex1->x;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].y = vertex1->y;
          g_CubeClippedTriangleBuffer[g_CubeClippedTriangleCount].z = vertex1->z;
        }
        g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_ClipStageMinZBuffer + uVar2,
                   g_CubeClippedTriangleBuffer + g_CubeClippedTriangleCount,0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_004550e4_caseD_3;
      }
      g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
switchD_004550e4_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage5Count);
  }
  return;
}
