// Name: core_dtri.cpp_clipPolygonToFar_FUN_00491690
// Address: 00491690
// Address Range: [[00491690, 004917e0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_00491690(float z_far)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_00491690(float z_far)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c3d814) {
    point1_ptr = (CVector3f *)&DAT_01c3d818;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c3d814) {
        uVar2 = uVar2 ^ _DAT_01c3d814;
      }
      bVar1 = z_far < point1_ptr->z;
      if (z_far < *(float *)(&DAT_01c3d820 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c3d8d8 * 0xc;
        if ((CVector3f *)(&DAT_01c3d8dc + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d8dc + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d8e0 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d8e4 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&DAT_01c3d818 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c3d8dc + _DAT_01c3d8d8 * 0xc),0.0,0.0,-1.0,(double)z_far);
        break;
      case 2:
        iVar3 = _DAT_01c3d8d8 * 0xc;
        if ((CVector3f *)(&DAT_01c3d8dc + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d8dc + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d8e0 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d8e4 + iVar3) = point1_ptr->z;
        }
        _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,(CVector3f *)(&DAT_01c3d818 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c3d8dc + _DAT_01c3d8d8 * 0xc),0.0,0.0,-1.0,(double)z_far);
        break;
      default:
        goto switchD_00491704_caseD_3;
      }
      _DAT_01c3d8d8 = _DAT_01c3d8d8 + 1;
switchD_00491704_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c3d814);
  }
  return;
}
