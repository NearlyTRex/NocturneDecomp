// Name: core_dcube.cpp_clipPolygonAgainstMinY_FUN_004440b0
// Address: 004440b0
// Address Range: [[004440b0, 00444200]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004440b0(float min_y_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004440b0(float min_y_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01510910) {
    vertex1 = g_ClipStageMaxYBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01510910) {
        uVar2 = uVar2 ^ g_INT_01510910;
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
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
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
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,g_ClipStageMaxYBuffer + uVar2,
                   g_ClipStageMinYBuffer + g_CubeClipStage2Count,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      default:
        goto switchD_00444124_caseD_3;
      }
      g_CubeClipStage2Count = g_CubeClipStage2Count + 1;
switchD_00444124_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < g_INT_01510910);
  }
  return;
}
