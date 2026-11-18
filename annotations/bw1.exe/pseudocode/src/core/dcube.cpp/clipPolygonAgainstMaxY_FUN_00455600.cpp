// Name: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00455600
// Address: 00455600
// Address Range: [[00455600, 0045574c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00455600(float max_y_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00455600(float max_y_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *vertex1;
  
  iVar3 = 0;
  if (0 < g_INT_0152bd4c) {
    vertex1 = &g_FLOAT_0152bd50;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_0152bd4c) {
        uVar2 = uVar2 ^ g_INT_0152bd4c;
      }
      bVar1 = max_y_plane < ((CVector3f *)vertex1)->y;
      if (max_y_plane < *(float *)(&DAT_0152bd54 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipStageMaxYBuffer + g_INT_0152be10 != (CVector3f *)vertex1) {
          g_ClipStageMaxYBuffer[g_INT_0152be10].x = ((CVector3f *)vertex1)->x;
          g_ClipStageMaxYBuffer[g_INT_0152be10].y = ((CVector3f *)vertex1)->y;
          g_ClipStageMaxYBuffer[g_INT_0152be10].z = ((CVector3f *)vertex1)->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)(&g_FLOAT_0152bd50 + uVar2 * 3),(CVector3f *)vertex1,
                   g_ClipStageMaxYBuffer + g_INT_0152be10,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      case 2:
        if (g_ClipStageMaxYBuffer + g_INT_0152be10 != (CVector3f *)vertex1) {
          g_ClipStageMaxYBuffer[g_INT_0152be10].x = ((CVector3f *)vertex1)->x;
          g_ClipStageMaxYBuffer[g_INT_0152be10].y = ((CVector3f *)vertex1)->y;
          g_ClipStageMaxYBuffer[g_INT_0152be10].z = ((CVector3f *)vertex1)->z;
        }
        g_INT_0152be10 = g_INT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)vertex1,(CVector3f *)(&g_FLOAT_0152bd50 + uVar2 * 3),
                   g_ClipStageMaxYBuffer + g_INT_0152be10,0.0,1.0,0.0,(double)-max_y_plane);
        break;
      default:
        goto switchD_0045566c_caseD_3;
      }
      g_INT_0152be10 = g_INT_0152be10 + 1;
switchD_0045566c_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = (float *)((int)vertex1 + 0xc);
    } while (iVar3 < g_INT_0152bd4c);
  }
  return;
}
