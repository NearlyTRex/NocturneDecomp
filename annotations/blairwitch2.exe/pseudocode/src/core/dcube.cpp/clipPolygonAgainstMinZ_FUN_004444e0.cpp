// Name: core_dcube.cpp_clipPolygonAgainstMinZ_FUN_004444e0
// Address: 004444e0
// Address Range: [[004444e0, 00444630]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_004444e0(float min_z_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMinZ_FUN_004444e0(float min_z_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01510b5c) {
    vertex1 = (CVector3f *)0x1510b60;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01510b5c) {
        uVar2 = uVar2 ^ _DAT_01510b5c;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x1510b60);
      bVar1 = vertex1->z < min_z_plane;
      if (*(float *)(uVar2 * 0xc + 0x1510b68) < min_z_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01510c20 * 0xc;
        if ((CVector3f *)(&DAT_01510c24 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_01510c24 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_01510c28 + iVar3) = vertex1->y;
          *(float *)(&DAT_01510c2c + iVar3) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex2,vertex1,(CVector3f *)(&DAT_01510c24 + _DAT_01510c20 * 0xc),0.0,0.0,-1.0,
                   (double)min_z_plane);
        break;
      case 2:
        iVar3 = _DAT_01510c20 * 0xc;
        if ((CVector3f *)(&DAT_01510c24 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_01510c24 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_01510c28 + iVar3) = vertex1->y;
          *(float *)(&DAT_01510c2c + iVar3) = vertex1->z;
        }
        _DAT_01510c20 = _DAT_01510c20 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,vertex2,(CVector3f *)(&DAT_01510c24 + _DAT_01510c20 * 0xc),0.0,0.0,-1.0,
                   (double)min_z_plane);
        break;
      default:
        goto switchD_00444554_caseD_3;
      }
      _DAT_01510c20 = _DAT_01510c20 + 1;
switchD_00444554_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_01510b5c);
  }
  return;
}
