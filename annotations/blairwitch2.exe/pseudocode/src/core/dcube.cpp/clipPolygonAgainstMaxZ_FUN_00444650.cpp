// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00444650
// Address: 00444650
// Address Range: [[00444650, 004447a0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00444650(float max_z_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00444650(float max_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)g_UINT_01510c20) {
    vertex1 = g_CVector3f_ARRAY_01510c24;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_UINT_01510c20) {
        uVar2 = uVar2 ^ g_UINT_01510c20;
      }
      bVar1 = max_z_plane < vertex1->z;
      if (max_z_plane < g_CVector3f_ARRAY_01510c24[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3) != vertex1) {
          ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3))->x = vertex1->x;
          *(float *)(&DAT_01510cec + g_UINT_01510ce4 * 0xc) = vertex1->y;
          (&g_FLOAT_01510cf0)[g_UINT_01510ce4 * 3] = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (g_CVector3f_ARRAY_01510c24 + uVar2,vertex1,
                   (CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        if ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3) != vertex1) {
          ((CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3))->x = vertex1->x;
          *(float *)(&DAT_01510cec + g_UINT_01510ce4 * 0xc) = vertex1->y;
          (&g_FLOAT_01510cf0)[g_UINT_01510ce4 * 3] = vertex1->z;
        }
        g_UINT_01510ce4 = g_UINT_01510ce4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,g_CVector3f_ARRAY_01510c24 + uVar2,
                   (CVector3f *)(&g_FLOAT_01510ce8 + g_UINT_01510ce4 * 3),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_004446c4_caseD_3;
      }
      g_UINT_01510ce4 = g_UINT_01510ce4 + 1;
switchD_004446c4_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)g_UINT_01510c20);
  }
  return;
}
