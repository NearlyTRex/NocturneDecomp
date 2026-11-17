// Name: core_dtri.cpp_clipPolygonToBottom_FUN_00478c00
// Address: 00478c00
// Address Range: [[00478c00, 00478d50]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00478c00(float y_min)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00478c00(float y_min)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01c21f48) {
    point1_ptr = g_CVector3f_ARRAY_01c21f4c;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c21f48) {
        uVar2 = uVar2 ^ g_INT_01c21f48;
      }
      bVar1 = point1_ptr->y < y_min;
      if (g_CVector3f_ARRAY_01c21f4c[uVar2].y < y_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c != point1_ptr) {
          g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (g_CVector3f_ARRAY_01c21f4c + uVar2,point1_ptr,
                   g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c,0.0,-1.0,0.0,(double)y_min);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c != point1_ptr) {
          g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c22010[g_INT_01c2200c].z = point1_ptr->z;
        }
        g_INT_01c2200c = g_INT_01c2200c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,g_CVector3f_ARRAY_01c21f4c + uVar2,
                   g_CVector3f_ARRAY_01c22010 + g_INT_01c2200c,0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_00478c74_caseD_3;
      }
      g_INT_01c2200c = g_INT_01c2200c + 1;
switchD_00478c74_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c21f48);
  }
  return;
}
