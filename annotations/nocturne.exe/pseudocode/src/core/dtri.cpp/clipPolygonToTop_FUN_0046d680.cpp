// Name: core_dtri.cpp_clipPolygonToTop_FUN_0046d680
// Address: 0046d680
// Address Range: [[0046d680, 0046d7cc]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0046d680(float y_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_0046d680(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01bc996c) {
    point1_ptr = g_CVector3f_ARRAY_01bc9970;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01bc996c) {
        uVar2 = uVar2 ^ g_INT_01bc996c;
      }
      bVar1 = y_max < point1_ptr->y;
      if (y_max < g_CVector3f_ARRAY_01bc9970[uVar2].y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30 != point1_ptr) {
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (g_CVector3f_ARRAY_01bc9970 + uVar2,point1_ptr,
                   g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30,0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30 != point1_ptr) {
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9a34[g_INT_01bc9a30].z = point1_ptr->z;
        }
        g_INT_01bc9a30 = g_INT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,g_CVector3f_ARRAY_01bc9970 + uVar2,
                   g_CVector3f_ARRAY_01bc9a34 + g_INT_01bc9a30,0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_0046d6ec_caseD_3;
      }
      g_INT_01bc9a30 = g_INT_01bc9a30 + 1;
switchD_0046d6ec_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01bc996c);
  }
  return;
}
