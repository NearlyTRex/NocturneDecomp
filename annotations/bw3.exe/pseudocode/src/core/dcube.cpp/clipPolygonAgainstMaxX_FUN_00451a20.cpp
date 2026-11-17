// Name: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00451a20
// Address: 00451a20
// Address Range: [[00451a20, 00451b6a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00451a20(float max_x_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00451a20(float max_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)g_UINT_01548784) {
    vertex1 = g_CVector3f_ARRAY_01548788;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_UINT_01548784) {
        uVar2 = uVar2 ^ g_UINT_01548784;
      }
      vertex2 = g_CVector3f_ARRAY_01548788 + uVar2;
      bVar1 = max_x_plane < vertex1->x;
      if (max_x_plane < vertex2->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_0154884c + g_UINT_01548848 != vertex1) {
          g_CVector3f_ARRAY_0154884c[g_UINT_01548848].x = vertex1->x;
          g_CVector3f_ARRAY_0154884c[g_UINT_01548848].y = vertex1->y;
          g_CVector3f_ARRAY_0154884c[g_UINT_01548848].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex2,vertex1,g_CVector3f_ARRAY_0154884c + g_UINT_01548848,1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      case 2:
        if (g_CVector3f_ARRAY_0154884c + g_UINT_01548848 != vertex1) {
          g_CVector3f_ARRAY_0154884c[g_UINT_01548848].x = vertex1->x;
          g_CVector3f_ARRAY_0154884c[g_UINT_01548848].y = vertex1->y;
          g_CVector3f_ARRAY_0154884c[g_UINT_01548848].z = vertex1->z;
        }
        g_UINT_01548848 = g_UINT_01548848 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,vertex2,g_CVector3f_ARRAY_0154884c + g_UINT_01548848,1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      default:
        goto switchD_00451a8a_caseD_3;
      }
      g_UINT_01548848 = g_UINT_01548848 + 1;
switchD_00451a8a_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_UINT_01548784);
  }
  return;
}
