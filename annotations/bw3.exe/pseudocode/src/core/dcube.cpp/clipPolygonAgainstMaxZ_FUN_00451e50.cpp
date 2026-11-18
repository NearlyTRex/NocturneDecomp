// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00451e50
// Address: 00451e50
// Address Range: [[00451e50, 00451fa0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00451e50(float max_z_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00451e50(float max_z_plane)

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
        if ((CVector3f *)(&g_FLOAT_01548a98 + g_CubeClippedTriangleCount * 3) != vertex1) {
          ((CVector3f *)(&g_FLOAT_01548a98 + g_CubeClippedTriangleCount * 3))->x = vertex1->x;
          *(float *)(&DAT_01548a9c + g_CubeClippedTriangleCount * 0xc) = vertex1->y;
          (&g_FLOAT_01548aa0)[g_CubeClippedTriangleCount * 3] = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (g_ClipStageMinZBuffer + uVar2,vertex1,
                   (CVector3f *)(&g_FLOAT_01548a98 + g_CubeClippedTriangleCount * 3),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        if ((CVector3f *)(&g_FLOAT_01548a98 + g_CubeClippedTriangleCount * 3) != vertex1) {
          ((CVector3f *)(&g_FLOAT_01548a98 + g_CubeClippedTriangleCount * 3))->x = vertex1->x;
          *(float *)(&DAT_01548a9c + g_CubeClippedTriangleCount * 0xc) = vertex1->y;
          (&g_FLOAT_01548aa0)[g_CubeClippedTriangleCount * 3] = vertex1->z;
        }
        g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,g_ClipStageMinZBuffer + uVar2,
                   (CVector3f *)(&g_FLOAT_01548a98 + g_CubeClippedTriangleCount * 3),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_00451ec4_caseD_3;
      }
      g_CubeClippedTriangleCount = g_CubeClippedTriangleCount + 1;
switchD_00451ec4_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage5Count);
  }
  return;
}
