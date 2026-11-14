// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00451e50
// Address: 00451e50
// Address Range: [[00451e50, 00451fa0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00451e50(float max_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00451e50(float max_z_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_015489d0) {
    vertex1 = (CVector3f *)0x15489d4;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_015489d0) {
        uVar2 = uVar2 ^ _DAT_015489d0;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x15489d4);
      bVar1 = max_z_plane < vertex1->z;
      if (max_z_plane < *(float *)(uVar2 * 0xc + 0x15489dc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01548a94 * 0xc;
        if ((CVector3f *)(&DAT_01548a98 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_01548a98 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_01548a9c + iVar3) = vertex1->y;
          *(float *)(&DAT_01548aa0 + iVar3) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex2,vertex1,(CVector3f *)(&DAT_01548a98 + _DAT_01548a94 * 0xc),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        iVar3 = _DAT_01548a94 * 0xc;
        if ((CVector3f *)(&DAT_01548a98 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_01548a98 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_01548a9c + iVar3) = vertex1->y;
          *(float *)(&DAT_01548aa0 + iVar3) = vertex1->z;
        }
        _DAT_01548a94 = _DAT_01548a94 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,vertex2,(CVector3f *)(&DAT_01548a98 + _DAT_01548a94 * 0xc),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_00451ec4_caseD_3;
      }
      _DAT_01548a94 = _DAT_01548a94 + 1;
switchD_00451ec4_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_015489d0);
  }
  return;
}
