// Name: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40
// Address: 00454c40
// Address Range: [[00454c40, 00454d8a]]
// Convention: __cdecl
// Signature: void core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00454c40(float max_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage2Count) {
    vertex1 = g_ClipStageMinYBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage2Count) {
        uVar2 = uVar2 ^ g_CubeClipStage2Count;
      }
      vertex2 = g_ClipStageMinYBuffer + uVar2;
      bVar1 = max_x_plane < vertex1->x;
      if (max_x_plane < vertex2->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMaxXBuffer + g_CubeClipStage3Count != vertex1) {
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].x = vertex1->x;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].y = vertex1->y;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex2,vertex1,g_ClipStageMaxXBuffer + g_CubeClipStage3Count,1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      case 2:
        if (g_ClipStageMaxXBuffer + g_CubeClipStage3Count != vertex1) {
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].x = vertex1->x;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].y = vertex1->y;
          g_ClipStageMaxXBuffer[g_CubeClipStage3Count].z = vertex1->z;
        }
        g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,vertex2,g_ClipStageMaxXBuffer + g_CubeClipStage3Count,1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      default:
        goto switchD_00454caa_caseD_3;
      }
      g_CubeClipStage3Count = g_CubeClipStage3Count + 1;
switchD_00454caa_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage2Count);
  }
  return;
}
