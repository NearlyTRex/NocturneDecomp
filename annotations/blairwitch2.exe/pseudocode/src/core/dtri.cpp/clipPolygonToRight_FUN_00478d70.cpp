// Name: core_dtri.cpp_clipPolygonToRight_FUN_00478d70
// Address: 00478d70
// Address Range: [[00478d70, 00478eba]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00478d70(float x_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00478d70(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01c2200c) {
    point1_ptr = g_CVector3f_ARRAY_01c22010;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c2200c) {
        uVar2 = uVar2 ^ g_INT_01c2200c;
      }
      point2_ptr = g_CVector3f_ARRAY_01c22010 + uVar2;
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0 != point1_ptr) {
          g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point2_ptr,point1_ptr,g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0,1.0,0.0,0.0,
                   (double)-x_max);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0 != point1_ptr) {
          g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c220d4[g_INT_01c220d0].z = point1_ptr->z;
        }
        g_INT_01c220d0 = g_INT_01c220d0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,point2_ptr,g_CVector3f_ARRAY_01c220d4 + g_INT_01c220d0,1.0,0.0,0.0,
                   (double)-x_max);
        break;
      default:
        goto switchD_00478dda_caseD_3;
      }
      g_INT_01c220d0 = g_INT_01c220d0 + 1;
switchD_00478dda_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c2200c);
  }
  return;
}
