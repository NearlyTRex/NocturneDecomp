// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00448bf0
// Address: 00448bf0
// Address Range: [[00448bf0, 00448d40]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00448bf0(float min_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00448bf0(float min_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_014b879c) {
    vertex1 = g_CVector3f_ARRAY_014b87a0;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_014b879c) {
        uVar2 = uVar2 ^ _DAT_014b879c;
      }
      bVar1 = vertex1->z < min_z_plane;
      if (g_CVector3f_ARRAY_014b87a0[uVar2].z < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_014b8864 + _DAT_014b8860 != vertex1) {
          g_CVector3f_ARRAY_014b8864[_DAT_014b8860].x = vertex1->x;
          g_CVector3f_ARRAY_014b8864[_DAT_014b8860].y = vertex1->y;
          g_CVector3f_ARRAY_014b8864[_DAT_014b8860].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (g_CVector3f_ARRAY_014b87a0 + uVar2,vertex1,
                   g_CVector3f_ARRAY_014b8864 + _DAT_014b8860,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      case 2:
        if (g_CVector3f_ARRAY_014b8864 + _DAT_014b8860 != vertex1) {
          g_CVector3f_ARRAY_014b8864[_DAT_014b8860].x = vertex1->x;
          g_CVector3f_ARRAY_014b8864[_DAT_014b8860].y = vertex1->y;
          g_CVector3f_ARRAY_014b8864[_DAT_014b8860].z = vertex1->z;
        }
        _DAT_014b8860 = _DAT_014b8860 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,g_CVector3f_ARRAY_014b87a0 + uVar2,
                   g_CVector3f_ARRAY_014b8864 + _DAT_014b8860,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      default:
        goto switchD_00448c64_caseD_3;
      }
      _DAT_014b8860 = _DAT_014b8860 + 1;
switchD_00448c64_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)_DAT_014b879c);
  }
  return;
}
