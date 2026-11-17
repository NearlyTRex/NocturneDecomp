// Name: core_dtri.cpp_clipPolygonToTop_FUN_00478aa0
// Address: 00478aa0
// Address Range: [[00478aa0, 00478bec]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00478aa0(float y_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00478aa0(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01c21e84) {
    point1_ptr = &g_FLOAT_01c21e88;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c21e84) {
        uVar2 = uVar2 ^ g_INT_01c21e84;
      }
      bVar1 = y_max < ((CVector3f *)point1_ptr)->y;
      if (y_max < *(float *)(&DAT_01c21e8c + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48 != (CVector3f *)point1_ptr) {
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].x = ((CVector3f *)point1_ptr)->x;
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].y = ((CVector3f *)point1_ptr)->y;
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].z = ((CVector3f *)point1_ptr)->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)(&g_FLOAT_01c21e88 + uVar2 * 3),(CVector3f *)point1_ptr,
                   g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48,0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48 != (CVector3f *)point1_ptr) {
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].x = ((CVector3f *)point1_ptr)->x;
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].y = ((CVector3f *)point1_ptr)->y;
          g_CVector3f_ARRAY_01c21f4c[g_INT_01c21f48].z = ((CVector3f *)point1_ptr)->z;
        }
        g_INT_01c21f48 = g_INT_01c21f48 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)point1_ptr,(CVector3f *)(&g_FLOAT_01c21e88 + uVar2 * 3),
                   g_CVector3f_ARRAY_01c21f4c + g_INT_01c21f48,0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_00478b0c_caseD_3;
      }
      g_INT_01c21f48 = g_INT_01c21f48 + 1;
switchD_00478b0c_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = (float *)((int)point1_ptr + 0xc);
    } while (iVar3 < g_INT_01c21e84);
  }
  return;
}
