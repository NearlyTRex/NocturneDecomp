// Name: core_dcube.cpp_clipPolygonAgainstMinY_FUN_004440b0
// Address: 004440b0
// Address Range: [[004440b0, 00444200]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004440b0(float min_y_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMinY_FUN_004440b0(float min_y_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01510910) {
    vertex1 = (CVector3f *)0x1510914;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01510910) {
        uVar2 = uVar2 ^ _DAT_01510910;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x1510914);
      bVar1 = vertex1->y < min_y_plane;
      if (*(float *)(uVar2 * 0xc + 0x1510918) < min_y_plane) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_015109d4 * 0xc;
        if ((CVector3f *)(iVar3 + 0x15109d8) != vertex1) {
          ((CVector3f *)(iVar3 + 0x15109d8))->x = vertex1->x;
          *(float *)(iVar3 + 0x15109dc) = vertex1->y;
          *(float *)(iVar3 + 0x15109e0) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex2,vertex1,(CVector3f *)(_DAT_015109d4 * 0xc + 0x15109d8),0.0,-1.0,0.0,
                   (double)min_y_plane);
        break;
      case 2:
        iVar3 = _DAT_015109d4 * 0xc;
        if ((CVector3f *)(iVar3 + 0x15109d8) != vertex1) {
          ((CVector3f *)(iVar3 + 0x15109d8))->x = vertex1->x;
          *(float *)(iVar3 + 0x15109dc) = vertex1->y;
          *(float *)(iVar3 + 0x15109e0) = vertex1->z;
        }
        _DAT_015109d4 = _DAT_015109d4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,vertex2,(CVector3f *)(_DAT_015109d4 * 0xc + 0x15109d8),0.0,-1.0,0.0,
                   (double)min_y_plane);
        break;
      default:
        goto switchD_00444124_caseD_3;
      }
      _DAT_015109d4 = _DAT_015109d4 + 1;
switchD_00444124_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_01510910);
  }
  return;
}
