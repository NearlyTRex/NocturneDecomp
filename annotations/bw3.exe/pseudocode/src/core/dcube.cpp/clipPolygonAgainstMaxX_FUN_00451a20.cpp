// Name: core_dcube.cpp_clipPolygonAgainstMaxX_FUN_00451a20
// Address: 00451a20
// Address Range: [[00451a20, 00451b6a]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00451a20(float max_x_plane)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_clipPolygonAgainstMaxX_FUN_00451a20(float max_x_plane)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *vertex1;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01548784) {
    vertex1 = (CVector3f *)0x1548788;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01548784) {
        uVar2 = uVar2 ^ _DAT_01548784;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x1548788);
      bVar1 = max_x_plane < vertex1->x;
      if (max_x_plane < vertex2->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01548848 * 0xc;
        if ((CVector3f *)(iVar3 + 0x154884c) != vertex1) {
          ((CVector3f *)(iVar3 + 0x154884c))->x = vertex1->x;
          *(float *)(iVar3 + 0x1548850) = vertex1->y;
          *(float *)(iVar3 + 0x1548854) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex2,vertex1,(CVector3f *)(_DAT_01548848 * 0xc + 0x154884c),1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      case 2:
        iVar3 = _DAT_01548848 * 0xc;
        if ((CVector3f *)(iVar3 + 0x154884c) != vertex1) {
          ((CVector3f *)(iVar3 + 0x154884c))->x = vertex1->x;
          *(float *)(iVar3 + 0x1548850) = vertex1->y;
          *(float *)(iVar3 + 0x1548854) = vertex1->z;
        }
        _DAT_01548848 = _DAT_01548848 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,vertex2,(CVector3f *)(_DAT_01548848 * 0xc + 0x154884c),1.0,0.0,0.0,
                   (double)-max_x_plane);
        break;
      default:
        goto switchD_00451a8a_caseD_3;
      }
      _DAT_01548848 = _DAT_01548848 + 1;
switchD_00451a8a_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_01548784);
  }
  return;
}
