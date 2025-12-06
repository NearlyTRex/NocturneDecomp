// Name: core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0
// Address: 00454ad0
// Address Range: [[00454ad0, 00454c20]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_00454ad0(float min_y_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage1Count) {
    vertex1 = g_ClipStageMaxYBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage1Count) {
        uVar2 = uVar2 ^ g_CubeClipStage1Count;
      }
      bVar1 = vertex1->y < min_y_plane;
      if (g_ClipStageMaxYBuffer[uVar2].y < min_y_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinYBuffer + g_CubeClipStage2Count != vertex1) {
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].x = vertex1->x;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].y = vertex1->y;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_ClipStageMaxYBuffer + uVar2,vertex1,
                   g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      case 2:
        if (g_ClipStageMinYBuffer + g_CubeClipStage2Count != vertex1) {
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].x = vertex1->x;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].y = vertex1->y;
          g_ClipStageMinYBuffer[g_CubeClipStage2Count].z = vertex1->z;
        }
        g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_ClipStageMaxYBuffer + uVar2,
                   g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      default:
        goto switchD_00454b44_caseD_3;
      }
      g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
switchD_00454b44_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage1Count);
  }
  return;
}
