// Name: core_dtri.cpp_clipPolygonToBottom_FUN_004910f0
// Address: 004910f0
// Address Range: [[004910f0, 00491240]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_004910f0(float y_min)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_004910f0(float y_min)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01c3d504) {
    point1_ptr = g_CVector3f_ARRAY_01c3d508;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c3d504) {
        uVar2 = uVar2 ^ g_INT_01c3d504;
      }
      bVar1 = point1_ptr->y < y_min;
      if (g_CVector3f_ARRAY_01c3d508[uVar2].y < y_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8 != point1_ptr) {
          g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (g_CVector3f_ARRAY_01c3d508 + uVar2,point1_ptr,
                   g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8,0.0,-1.0,0.0,(double)y_min);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8 != point1_ptr) {
          g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c3d5cc[g_INT_01c3d5c8].z = point1_ptr->z;
        }
        g_INT_01c3d5c8 = g_INT_01c3d5c8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,g_CVector3f_ARRAY_01c3d508 + uVar2,
                   g_CVector3f_ARRAY_01c3d5cc + g_INT_01c3d5c8,0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_00491164_caseD_3;
      }
      g_INT_01c3d5c8 = g_INT_01c3d5c8 + 1;
switchD_00491164_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c3d504);
  }
  return;
}
