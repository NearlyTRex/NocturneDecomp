// Name: core_dtri.cpp_clipPolygonToRight_FUN_00479de0
// Address: 00479de0
// Address Range: [[00479de0, 00479f2a]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00479de0(float x_max)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00479de0(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < g_INT_01c59b64) {
    point1_ptr = g_CVector3f_ARRAY_01c59b68;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c59b64) {
        uVar2 = uVar2 ^ g_INT_01c59b64;
      }
      point2_ptr = g_CVector3f_ARRAY_01c59b68 + uVar2;
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28 != point1_ptr) {
          g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point2_ptr,point1_ptr,g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28,1.0,0.0,0.0,
                   (double)-x_max);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28 != point1_ptr) {
          g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c59c2c[g_INT_01c59c28].z = point1_ptr->z;
        }
        g_INT_01c59c28 = g_INT_01c59c28 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,point2_ptr,g_CVector3f_ARRAY_01c59c2c + g_INT_01c59c28,1.0,0.0,0.0,
                   (double)-x_max);
        break;
      default:
        goto switchD_00479e4a_caseD_3;
      }
      g_INT_01c59c28 = g_INT_01c59c28 + 1;
switchD_00479e4a_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c59b64);
  }
  return;
}
