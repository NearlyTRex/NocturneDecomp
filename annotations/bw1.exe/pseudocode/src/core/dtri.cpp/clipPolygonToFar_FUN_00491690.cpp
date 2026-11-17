// Name: core_dtri.cpp_clipPolygonToFar_FUN_00491690
// Address: 00491690
// Address Range: [[00491690, 004917e0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_00491690(float z_far)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_00491690(float z_far)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01c3d814) {
    point1_ptr = g_CVector3f_ARRAY_01c3d818;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c3d814) {
        uVar2 = uVar2 ^ g_INT_01c3d814;
      }
      bVar1 = z_far < point1_ptr->z;
      if (z_far < g_CVector3f_ARRAY_01c3d818[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3) != point1_ptr) {
          ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d8e0 + g_INT_01c3d8d8 * 0xc) = point1_ptr->y;
          (&g_FLOAT_01c3d8e4)[g_INT_01c3d8d8 * 3] = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (g_CVector3f_ARRAY_01c3d818 + uVar2,point1_ptr,
                   (CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3),0.0,0.0,-1.0,(double)z_far)
        ;
        break;
      case 2:
        if ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3) != point1_ptr) {
          ((CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d8e0 + g_INT_01c3d8d8 * 0xc) = point1_ptr->y;
          (&g_FLOAT_01c3d8e4)[g_INT_01c3d8d8 * 3] = point1_ptr->z;
        }
        g_INT_01c3d8d8 = g_INT_01c3d8d8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,g_CVector3f_ARRAY_01c3d818 + uVar2,
                   (CVector3f *)(&g_FLOAT_01c3d8dc + g_INT_01c3d8d8 * 3),0.0,0.0,-1.0,(double)z_far)
        ;
        break;
      default:
        goto switchD_00491704_caseD_3;
      }
      g_INT_01c3d8d8 = g_INT_01c3d8d8 + 1;
switchD_00491704_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c3d814);
  }
  return;
}
