// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_00455b90
// Address: 00455b90
// Address Range: [[00455b90, 00455ce0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00455b90(float min_z_plane)

#include "nocturne.h"

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_00455b90(float min_z_plane)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_0152c05c) {
    vertex1 = g_CVector3f_ARRAY_0152c060;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == g_INT_0152c05c) {
        uVar2 = uVar2 ^ g_INT_0152c05c;
      }
      bVar1 = vertex1->z < min_z_plane;
      if (g_CVector3f_ARRAY_0152c060[uVar2].z < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120 != vertex1) {
          g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].x = vertex1->x;
          g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].y = vertex1->y;
          g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (g_CVector3f_ARRAY_0152c060 + uVar2,vertex1,
                   g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      case 2:
        if (g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120 != vertex1) {
          g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].x = vertex1->x;
          g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].y = vertex1->y;
          g_CVector3f_ARRAY_0152c124[g_UINT_0152c120].z = vertex1->z;
        }
        g_UINT_0152c120 = g_UINT_0152c120 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex1,g_CVector3f_ARRAY_0152c060 + uVar2,
                   g_CVector3f_ARRAY_0152c124 + g_UINT_0152c120,0.0,0.0,-1.0,(double)min_z_plane);
        break;
      default:
        goto switchD_00455c04_caseD_3;
      }
      g_UINT_0152c120 = g_UINT_0152c120 + 1;
switchD_00455c04_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < g_INT_0152c05c);
  }
  return;
}
