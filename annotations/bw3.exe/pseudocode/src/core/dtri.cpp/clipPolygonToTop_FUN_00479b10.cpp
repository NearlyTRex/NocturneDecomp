// Name: core_dtri.cpp_clipPolygonToTop_FUN_00479b10
// Address: 00479b10
// Address Range: [[00479b10, 00479c5c]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00479b10(float y_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00479b10(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01c599dc) {
    point1_ptr = &g_FLOAT_01c599e0;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c599dc) {
        uVar2 = uVar2 ^ g_INT_01c599dc;
      }
      bVar1 = y_max < ((CVector3f *)point1_ptr)->y;
      if (y_max < *(float *)(&DAT_01c599e4 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_ClipBuffer1Vertices + g_INT_01c59aa0 != (CVector3f *)point1_ptr) {
          g_ClipBuffer1Vertices[g_INT_01c59aa0].x = ((CVector3f *)point1_ptr)->x;
          g_ClipBuffer1Vertices[g_INT_01c59aa0].y = ((CVector3f *)point1_ptr)->y;
          g_ClipBuffer1Vertices[g_INT_01c59aa0].z = ((CVector3f *)point1_ptr)->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)(&g_FLOAT_01c599e0 + uVar2 * 3),(CVector3f *)point1_ptr,
                   g_ClipBuffer1Vertices + g_INT_01c59aa0,0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        if (g_ClipBuffer1Vertices + g_INT_01c59aa0 != (CVector3f *)point1_ptr) {
          g_ClipBuffer1Vertices[g_INT_01c59aa0].x = ((CVector3f *)point1_ptr)->x;
          g_ClipBuffer1Vertices[g_INT_01c59aa0].y = ((CVector3f *)point1_ptr)->y;
          g_ClipBuffer1Vertices[g_INT_01c59aa0].z = ((CVector3f *)point1_ptr)->z;
        }
        g_INT_01c59aa0 = g_INT_01c59aa0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)point1_ptr,(CVector3f *)(&g_FLOAT_01c599e0 + uVar2 * 3),
                   g_ClipBuffer1Vertices + g_INT_01c59aa0,0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_00479b7c_caseD_3;
      }
      g_INT_01c59aa0 = g_INT_01c59aa0 + 1;
switchD_00479b7c_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = (float *)((int)point1_ptr + 0xc);
    } while (iVar3 < g_INT_01c599dc);
  }
  return;
}
