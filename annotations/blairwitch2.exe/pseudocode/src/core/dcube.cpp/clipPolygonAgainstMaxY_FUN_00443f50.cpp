// Name: core_dcube.cpp_clipPolygonAgainstMaxY_FUN_00443f50
// Address: 00443f50
// Address Range: [[00443f50, 0044409c]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00443f50(float max_y_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxY_FUN_00443f50(float max_y_plane)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *vertex1;
  
  iVar4 = 0;
  if (0 < (int)_DAT_0151084c) {
    vertex1 = (CVector3f *)&DAT_01510850;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_0151084c) {
        uVar2 = uVar2 ^ _DAT_0151084c;
      }
      bVar1 = max_y_plane < vertex1->y;
      if (max_y_plane < *(float *)(&DAT_01510854 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01510910 * 0xc;
        if ((CVector3f *)(iVar3 + 0x1510914) != vertex1) {
          ((CVector3f *)(iVar3 + 0x1510914))->x = vertex1->x;
          *(float *)(iVar3 + 0x1510918) = vertex1->y;
          *(float *)(iVar3 + 0x151091c) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  ((CVector3f *)(&DAT_01510850 + uVar2 * 0xc),vertex1,
                   (CVector3f *)(_DAT_01510910 * 0xc + 0x1510914),0.0,1.0,0.0,(double)-max_y_plane);
        break;
      case 2:
        iVar3 = _DAT_01510910 * 0xc;
        if ((CVector3f *)(iVar3 + 0x1510914) != vertex1) {
          ((CVector3f *)(iVar3 + 0x1510914))->x = vertex1->x;
          *(float *)(iVar3 + 0x1510918) = vertex1->y;
          *(float *)(iVar3 + 0x151091c) = vertex1->z;
        }
        _DAT_01510910 = _DAT_01510910 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00443db0
                  (vertex1,(CVector3f *)(&DAT_01510850 + uVar2 * 0xc),
                   (CVector3f *)(_DAT_01510910 * 0xc + 0x1510914),0.0,1.0,0.0,(double)-max_y_plane);
        break;
      default:
        goto switchD_00443fbc_caseD_3;
      }
      _DAT_01510910 = _DAT_01510910 + 1;
switchD_00443fbc_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_0151084c);
  }
  return;
}
