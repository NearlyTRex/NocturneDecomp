// Name: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00454da0
// Address: 00454da0
// Address Range: [[00454da0, 00454eee]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinX_FUN_00454da0(float min_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage3Count) {
    vertex1 = g_ClipStageMaxXBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage3Count) {
        uVar2 = uVar2 ^ g_CubeClipStage3Count;
      }
      vertex2 = g_ClipStageMaxXBuffer + uVar2;
      bVar1 = vertex1->x < min_x_plane;
      if (vertex2->x < min_x_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinXBuffer + g_CubeClipStage4Count != vertex1) {
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].x = vertex1->x;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].y = vertex1->y;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex2,vertex1,g_ClipStageMinXBuffer + g_CubeClipStage4Count,-1.0,0.0,0.0,
                   (double)min_x_plane);
        break;
      case 2:
        if (g_ClipStageMinXBuffer + g_CubeClipStage4Count != vertex1) {
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].x = vertex1->x;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].y = vertex1->y;
          g_ClipStageMinXBuffer[g_CubeClipStage4Count].z = vertex1->z;
        }
        g_CubeClipStage4Count = g_CubeClipStage4Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,vertex2,g_ClipStageMinXBuffer + g_CubeClipStage4Count,-1.0,0.0,0.0,
                   (double)min_x_plane);
        break;
      default:
        goto switchD_00454e12_caseD_3;
      }
      g_CubeClipStage4Count = g_CubeClipStage4Count + 1;
switchD_00454e12_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage3Count);
  }
  return;
}
