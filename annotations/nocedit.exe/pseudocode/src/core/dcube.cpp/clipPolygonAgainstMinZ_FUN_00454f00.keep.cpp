// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00454f00
// Address: 00454f00
// MANUAL RECONSTRUCTION
// Address Range: [[00454f00, 00455050]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00454f00(float min_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_CubeClipStage4Count) {
    vertex1 = g_ClipStageMinXBuffer;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_CubeClipStage4Count) {
        uVar2 = uVar2 ^ g_CubeClipStage4Count;
      }
      bVar1 = vertex1->z < min_z_plane;
      if (g_ClipStageMinXBuffer[uVar2].z < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMinZBuffer + g_CubeClipStage5Count != vertex1) {
          g_ClipStageMinZBuffer[g_CubeClipStage5Count] = *vertex1;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (g_ClipStageMinXBuffer + uVar2,vertex1,
                   g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      case 2:
        if (g_ClipStageMinZBuffer + g_CubeClipStage5Count != vertex1) {
          g_ClipStageMinZBuffer[g_CubeClipStage5Count] = *vertex1;
        }
        g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004547d0
                  (vertex1,g_ClipStageMinXBuffer + uVar2,
                   g_ClipStageMinZBuffer + g_CubeClipStage5Count,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      default:
        goto switchD_00454f74_caseD_3;
      }
      g_CubeClipStage5Count = g_CubeClipStage5Count + 1;
switchD_00454f74_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_CubeClipStage4Count);
  }
  return;
}
