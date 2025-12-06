// Name: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970
// Address: 00454970
// Address Range: [[00454970, 00454abc]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00454970(float max_y_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)g_CubeInputTriangleCount) {
    vertex1 = g_CubeInputTriangleBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeInputTriangleCount) {
        uVar2 = uVar2 ^ g_CubeInputTriangleCount;
      }
      bVar1 = max_y_plane < vertex1->y;
      if (max_y_plane < g_CubeInputTriangleBuffer[uVar2].y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMaxYBuffer + g_CubeClipStage1Count != vertex1) {
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].x = vertex1->x;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].y = vertex1->y;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_CubeInputTriangleBuffer + uVar2,vertex1,
                   g_ClipStageMaxYBuffer + g_CubeClipStage1Count,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      case 2:
        if (g_ClipStageMaxYBuffer + g_CubeClipStage1Count != vertex1) {
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].x = vertex1->x;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].y = vertex1->y;
          g_ClipStageMaxYBuffer[g_CubeClipStage1Count].z = vertex1->z;
        }
        g_CubeClipStage1Count = g_CubeClipStage1Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_CubeInputTriangleBuffer + uVar2,
                   g_ClipStageMaxYBuffer + g_CubeClipStage1Count,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      default:
        goto switchD_004549dc_caseD_3;
      }
      g_CubeClipStage1Count = g_CubeClipStage1Count + 1;
switchD_004549dc_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeInputTriangleCount);
  }
  return;
}
