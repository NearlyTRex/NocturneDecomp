// Name: core_dtri.cpp_clipPolygonToRight_FUN_00491260
// Address: 00491260
// Address Range: [[00491260, 004913aa]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01c3d5c8) {
    point1_ptr = g_CVector3f_ARRAY_01c3d5cc;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c3d5c8) {
        uVar2 = uVar2 ^ g_INT_01c3d5c8;
      }
      point2_ptr = g_CVector3f_ARRAY_01c3d5cc + uVar2;
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c != point1_ptr) {
          g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point2_ptr,point1_ptr,g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c,1.0,0.0,0.0,
                   (double)-x_max);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c != point1_ptr) {
          g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c3d690[g_INT_01c3d68c].z = point1_ptr->z;
        }
        g_INT_01c3d68c = g_INT_01c3d68c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,point2_ptr,g_CVector3f_ARRAY_01c3d690 + g_INT_01c3d68c,1.0,0.0,0.0,
                   (double)-x_max);
        break;
      default:
        goto switchD_004912ca_caseD_3;
      }
      g_INT_01c3d68c = g_INT_01c3d68c + 1;
switchD_004912ca_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c3d5c8);
  }
  return;
}
