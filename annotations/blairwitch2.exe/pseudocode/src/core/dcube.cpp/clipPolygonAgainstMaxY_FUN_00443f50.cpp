// Name: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00443f50
// Address: 00443f50
// Address Range: [[00443f50, 0044409c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00443f50(float max_y_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00443f50(float max_y_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *vertex1;
  
  iVar3 = 0;
  if (0 < g_INT_0151084c) {
    vertex1 = &g_FLOAT_01510850;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_0151084c) {
        uVar2 = uVar2 ^ g_INT_0151084c;
      }
      bVar1 = max_y_plane < ((CVector3f *)vertex1)->y;
      if (max_y_plane < *(float *)(&DAT_01510854 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMaxYBuffer + g_INT_01510910 != (CVector3f *)vertex1) {
          g_ClipStageMaxYBuffer[g_INT_01510910].x = ((CVector3f *)vertex1)->x;
          g_ClipStageMaxYBuffer[g_INT_01510910].y = ((CVector3f *)vertex1)->y;
          g_ClipStageMaxYBuffer[g_INT_01510910].z = ((CVector3f *)vertex1)->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&g_FLOAT_01510850 + uVar2 * 3),(CVector3f *)vertex1,
                   g_ClipStageMaxYBuffer + g_INT_01510910,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      case 2:
        if (g_ClipStageMaxYBuffer + g_INT_01510910 != (CVector3f *)vertex1) {
          g_ClipStageMaxYBuffer[g_INT_01510910].x = ((CVector3f *)vertex1)->x;
          g_ClipStageMaxYBuffer[g_INT_01510910].y = ((CVector3f *)vertex1)->y;
          g_ClipStageMaxYBuffer[g_INT_01510910].z = ((CVector3f *)vertex1)->z;
        }
        g_INT_01510910 = g_INT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)vertex1,(CVector3f *)(&g_FLOAT_01510850 + uVar2 * 3),
                   g_ClipStageMaxYBuffer + g_INT_01510910,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      default:
        goto switchD_00443fbc_caseD_3;
      }
      g_INT_01510910 = g_INT_01510910 + 1;
switchD_00443fbc_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = (float *)((int)vertex1 + 0xc);
    } while (iVar3 < g_INT_0151084c);
  }
  return;
}
