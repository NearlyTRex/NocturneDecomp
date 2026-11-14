// Name: core_dtri.cpp_clipPolygonToRight_FUN_00491260
// Address: 00491260
// Address Range: [[00491260, 004913aa]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00491260(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c3d5c8) {
    point1_ptr = (CVector3f *)&DAT_01c3d5cc;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c3d5c8) {
        uVar2 = uVar2 ^ _DAT_01c3d5c8;
      }
      point2_ptr = (CVector3f *)(&DAT_01c3d5cc + uVar2 * 0xc);
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c3d68c * 0xc;
        if ((CVector3f *)(&DAT_01c3d690 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d690 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d694 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d698 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point2_ptr,point1_ptr,(CVector3f *)(&DAT_01c3d690 + _DAT_01c3d68c * 0xc),1.0,0.0,
                   0.0,(double)-x_max);
        break;
      case 2:
        iVar3 = _DAT_01c3d68c * 0xc;
        if ((CVector3f *)(&DAT_01c3d690 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d690 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d694 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d698 + iVar3) = point1_ptr->z;
        }
        _DAT_01c3d68c = _DAT_01c3d68c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,point2_ptr,(CVector3f *)(&DAT_01c3d690 + _DAT_01c3d68c * 0xc),1.0,0.0,
                   0.0,(double)-x_max);
        break;
      default:
        goto switchD_004912ca_caseD_3;
      }
      _DAT_01c3d68c = _DAT_01c3d68c + 1;
switchD_004912ca_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c3d5c8);
  }
  return;
}
