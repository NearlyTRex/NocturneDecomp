// Name: core_dcube.cpp_clipPolygonAgainstMinY_FUN_004518b0
// Address: 004518b0
// Address Range: [[004518b0, 00451a00]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004518b0(float min_y_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004518b0(float min_y_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_015486c0) {
    vertex1 = g_CVector3f_ARRAY_015486c4;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_015486c0) {
        uVar2 = uVar2 ^ g_INT_015486c0;
      }
      bVar1 = vertex1->y < min_y_plane;
      if (g_CVector3f_ARRAY_015486c4[uVar2].y < min_y_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01548788 + g_UINT_01548784 != vertex1) {
          g_CVector3f_ARRAY_01548788[g_UINT_01548784].x = vertex1->x;
          g_CVector3f_ARRAY_01548788[g_UINT_01548784].y = vertex1->y;
          g_CVector3f_ARRAY_01548788[g_UINT_01548784].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (g_CVector3f_ARRAY_015486c4 + uVar2,vertex1,
                   g_CVector3f_ARRAY_01548788 + g_UINT_01548784,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01548788 + g_UINT_01548784 != vertex1) {
          g_CVector3f_ARRAY_01548788[g_UINT_01548784].x = vertex1->x;
          g_CVector3f_ARRAY_01548788[g_UINT_01548784].y = vertex1->y;
          g_CVector3f_ARRAY_01548788[g_UINT_01548784].z = vertex1->z;
        }
        g_UINT_01548784 = g_UINT_01548784 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,g_CVector3f_ARRAY_015486c4 + uVar2,
                   g_CVector3f_ARRAY_01548788 + g_UINT_01548784,0.0,-1.0,0.0,(double)min_y_plane);
        break;
      default:
        goto switchD_00451924_caseD_3;
      }
      g_UINT_01548784 = g_UINT_01548784 + 1;
switchD_00451924_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < g_INT_015486c0);
  }
  return;
}
