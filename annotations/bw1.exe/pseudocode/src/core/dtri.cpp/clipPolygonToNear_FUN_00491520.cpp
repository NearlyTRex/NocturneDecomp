// Name: core_dtri.cpp_clipPolygonToNear_FUN_00491520
// Address: 00491520
// Address Range: [[00491520, 00491670]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_00491520(float z_near)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToNear_FUN_00491520(float z_near)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c3d750) {
    point1_ptr = (CVector3f *)&DAT_01c3d754;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c3d750) {
        uVar2 = uVar2 ^ _DAT_01c3d750;
      }
      bVar1 = point1_ptr->z < z_near;
      if (*(float *)(&DAT_01c3d75c + uVar2 * 0xc) < z_near) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c3d814 * 0xc;
        if ((CVector3f *)(&DAT_01c3d818 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d818 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d81c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d820 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&DAT_01c3d754 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c3d818 + _DAT_01c3d814 * 0xc),0.0,0.0,-1.0,(double)z_near);
        break;
      case 2:
        iVar3 = _DAT_01c3d814 * 0xc;
        if ((CVector3f *)(&DAT_01c3d818 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d818 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d81c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d820 + iVar3) = point1_ptr->z;
        }
        _DAT_01c3d814 = _DAT_01c3d814 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,(CVector3f *)(&DAT_01c3d754 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c3d818 + _DAT_01c3d814 * 0xc),0.0,0.0,-1.0,(double)z_near);
        break;
      default:
        goto switchD_00491594_caseD_3;
      }
      _DAT_01c3d814 = _DAT_01c3d814 + 1;
switchD_00491594_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c3d750);
  }
  return;
}
