// Name: core_dcube.cpp_clipPolygonAgainstMinX_FUN_00448a90
// Address: 00448a90
// Address Range: [[00448a90, 00448bde]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinX_FUN_00448a90(float min_x_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinX_FUN_00448a90(float min_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_014b86d8) {
    vertex1 = g_ClipStageMaxXBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_014b86d8) {
        uVar2 = uVar2 ^ g_INT_014b86d8;
      }
      vertex2 = g_ClipStageMaxXBuffer + uVar2;
      bVar1 = vertex1->x < min_x_plane;
      if (vertex2->x < min_x_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinXBuffer + g_INT_014b879c != vertex1) {
          g_ClipStageMinXBuffer[g_INT_014b879c].x = vertex1->x;
          g_ClipStageMinXBuffer[g_INT_014b879c].y = vertex1->y;
          g_ClipStageMinXBuffer[g_INT_014b879c].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex2,vertex1,g_ClipStageMinXBuffer + g_INT_014b879c,-1.0,0.0,0.0,
                   (double)min_x_plane);
        break;
      case 2:
        if (g_ClipStageMinXBuffer + g_INT_014b879c != vertex1) {
          g_ClipStageMinXBuffer[g_INT_014b879c].x = vertex1->x;
          g_ClipStageMinXBuffer[g_INT_014b879c].y = vertex1->y;
          g_ClipStageMinXBuffer[g_INT_014b879c].z = vertex1->z;
        }
        g_INT_014b879c = g_INT_014b879c + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,vertex2,g_ClipStageMinXBuffer + g_INT_014b879c,-1.0,0.0,0.0,
                   (double)min_x_plane);
        break;
      default:
        goto switchD_00448b02_caseD_3;
      }
      g_INT_014b879c = g_INT_014b879c + 1;
switchD_00448b02_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < g_INT_014b86d8);
  }
  return;
}
