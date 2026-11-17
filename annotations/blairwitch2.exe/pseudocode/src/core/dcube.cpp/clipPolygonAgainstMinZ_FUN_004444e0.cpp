// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_004444e0
// Address: 004444e0
// Address Range: [[004444e0, 00444630]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_004444e0(float min_z_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_004444e0(float min_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_01510b5c) {
    vertex1 = g_CVector3f_ARRAY_01510b60;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_01510b5c) {
        uVar2 = uVar2 ^ g_INT_01510b5c;
      }
      bVar1 = vertex1->z < min_z_plane;
      if (g_CVector3f_ARRAY_01510b60[uVar2].z < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20 != vertex1) {
          g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].x = vertex1->x;
          g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].y = vertex1->y;
          g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (g_CVector3f_ARRAY_01510b60 + uVar2,vertex1,
                   g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20 != vertex1) {
          g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].x = vertex1->x;
          g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].y = vertex1->y;
          g_CVector3f_ARRAY_01510c24[g_UINT_01510c20].z = vertex1->z;
        }
        g_UINT_01510c20 = g_UINT_01510c20 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,g_CVector3f_ARRAY_01510b60 + uVar2,
                   g_CVector3f_ARRAY_01510c24 + g_UINT_01510c20,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      default:
        goto switchD_00444554_caseD_3;
      }
      g_UINT_01510c20 = g_UINT_01510c20 + 1;
switchD_00444554_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < g_INT_01510b5c);
  }
  return;
}
