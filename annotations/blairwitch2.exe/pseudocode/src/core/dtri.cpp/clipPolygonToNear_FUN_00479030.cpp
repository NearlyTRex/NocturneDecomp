// Name: core_dtri.cpp_clipPolygonToNear_FUN_00479030
// Address: 00479030
// Address Range: [[00479030, 00479180]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_00479030(float z_near)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_00479030(float z_near)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01c22194) {
    point1_ptr = g_CVector3f_ARRAY_01c22198;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c22194) {
        uVar2 = uVar2 ^ g_INT_01c22194;
      }
      bVar1 = point1_ptr->z < z_near;
      if (g_CVector3f_ARRAY_01c22198[uVar2].z < z_near) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c2225c + g_INT_01c22258 != point1_ptr) {
          g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (g_CVector3f_ARRAY_01c22198 + uVar2,point1_ptr,
                   g_CVector3f_ARRAY_01c2225c + g_INT_01c22258,0.0,0.0,-1.0,(double)z_near);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c2225c + g_INT_01c22258 != point1_ptr) {
          g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c2225c[g_INT_01c22258].z = point1_ptr->z;
        }
        g_INT_01c22258 = g_INT_01c22258 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,g_CVector3f_ARRAY_01c22198 + uVar2,
                   g_CVector3f_ARRAY_01c2225c + g_INT_01c22258,0.0,0.0,-1.0,(double)z_near);
        break;
      default:
        goto switchD_004790a4_caseD_3;
      }
      g_INT_01c22258 = g_INT_01c22258 + 1;
switchD_004790a4_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c22194);
  }
  return;
}
