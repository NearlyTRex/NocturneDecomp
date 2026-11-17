// Name: core_dtri.cpp_clipPolygonToNear_FUN_0047a0a0
// Address: 0047a0a0
// Address Range: [[0047a0a0, 0047a1f0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0047a0a0(float z_near)

#include "nocturne.h"

void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_0047a0a0(float z_near)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01c59cec) {
    point1_ptr = g_CVector3f_ARRAY_01c59cf0;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01c59cec) {
        uVar2 = uVar2 ^ g_INT_01c59cec;
      }
      bVar1 = point1_ptr->z < z_near;
      if (g_CVector3f_ARRAY_01c59cf0[uVar2].z < z_near) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0 != point1_ptr) {
          g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (g_CVector3f_ARRAY_01c59cf0 + uVar2,point1_ptr,
                   g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0,0.0,0.0,-1.0,(double)z_near);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0 != point1_ptr) {
          g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].x = point1_ptr->x;
          g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].y = point1_ptr->y;
          g_CVector3f_ARRAY_01c59db4[g_INT_01c59db0].z = point1_ptr->z;
        }
        g_INT_01c59db0 = g_INT_01c59db0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,g_CVector3f_ARRAY_01c59cf0 + uVar2,
                   g_CVector3f_ARRAY_01c59db4 + g_INT_01c59db0,0.0,0.0,-1.0,(double)z_near);
        break;
      default:
        goto switchD_0047a114_caseD_3;
      }
      g_INT_01c59db0 = g_INT_01c59db0 + 1;
switchD_0047a114_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < g_INT_01c59cec);
  }
  return;
}
