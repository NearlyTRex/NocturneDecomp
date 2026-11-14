// Name: core_dcube.cpp_clipPolygonAgainstMaxZ_FUN_00444650
// Address: 00444650
// Address Range: [[00444650, 004447a0]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00444650(float max_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxZ_FUN_00444650(float max_z_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01510c20) {
    vertex1 = (CVector3f *)&DAT_01510c24;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01510c20) {
        uVar2 = uVar2 ^ _DAT_01510c20;
      }
      bVar1 = max_z_plane < vertex1->z;
      if (max_z_plane < *(float *)(&DAT_01510c2c + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01510ce4 * 0xc;
        if ((CVector3f *)(&DAT_01510ce8 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_01510ce8 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_01510cec + iVar3) = vertex1->y;
          *(float *)(&DAT_01510cf0 + iVar3) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&DAT_01510c24 + uVar2 * 0xc),vertex1,
                   (CVector3f *)(&DAT_01510ce8 + _DAT_01510ce4 * 0xc),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      case 2:
        iVar3 = _DAT_01510ce4 * 0xc;
        if ((CVector3f *)(&DAT_01510ce8 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_01510ce8 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_01510cec + iVar3) = vertex1->y;
          *(float *)(&DAT_01510cf0 + iVar3) = vertex1->z;
        }
        _DAT_01510ce4 = _DAT_01510ce4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,(CVector3f *)(&DAT_01510c24 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01510ce8 + _DAT_01510ce4 * 0xc),0.0,0.0,-1.0,
                   (double)max_z_plane);
        break;
      default:
        goto switchD_004446c4_caseD_3;
      }
      _DAT_01510ce4 = _DAT_01510ce4 + 1;
switchD_004446c4_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_01510c20);
  }
  return;
}
