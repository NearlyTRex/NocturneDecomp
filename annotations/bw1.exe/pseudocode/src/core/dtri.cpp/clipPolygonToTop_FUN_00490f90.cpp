// Name: core_dtri.cpp_clipPolygonToTop_FUN_00490f90
// Address: 00490f90
// Address Range: [[00490f90, 004910dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00490f90(float y_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00490f90(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01c3d440) {
    point1_ptr = &g_FLOAT_01c3d444;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c3d440) {
        uVar2 = uVar2 ^ g_INT_01c3d440;
      }
      bVar1 = y_max < ((CVector3f *)point1_ptr)->y;
      if (y_max < *(float *)(&DAT_01c3d448 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504 != (CVector3f *)point1_ptr) {
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].x = ((CVector3f *)point1_ptr)->x;
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].y = ((CVector3f *)point1_ptr)->y;
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].z = ((CVector3f *)point1_ptr)->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&g_FLOAT_01c3d444 + uVar2 * 3),(CVector3f *)point1_ptr,
                   g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504,0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504 != (CVector3f *)point1_ptr) {
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].x = ((CVector3f *)point1_ptr)->x;
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].y = ((CVector3f *)point1_ptr)->y;
          g_CVector3f_ARRAY_01c3d508[g_INT_01c3d504].z = ((CVector3f *)point1_ptr)->z;
        }
        g_INT_01c3d504 = g_INT_01c3d504 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)point1_ptr,(CVector3f *)(&g_FLOAT_01c3d444 + uVar2 * 3),
                   g_CVector3f_ARRAY_01c3d508 + g_INT_01c3d504,0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_00490ffc_caseD_3;
      }
      g_INT_01c3d504 = g_INT_01c3d504 + 1;
switchD_00490ffc_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = (float *)((int)point1_ptr + 0xc);
    } while (iVar3 < g_INT_01c3d440);
  }
  return;
}
