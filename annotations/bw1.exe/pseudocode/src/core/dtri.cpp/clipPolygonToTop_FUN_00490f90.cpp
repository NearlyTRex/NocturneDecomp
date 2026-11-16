// Name: core_dtri.cpp_clipPolygonToTop_FUN_00490f90
// Address: 00490f90
// Address Range: [[00490f90, 004910dc]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00490f90(float y_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToTop_FUN_00490f90(float y_max)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c3d440) {
    point1_ptr = (CVector3f *)&DAT_01c3d444;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c3d440) {
        uVar2 = uVar2 ^ _DAT_01c3d440;
      }
      bVar1 = y_max < point1_ptr->y;
      if (y_max < *(float *)(&DAT_01c3d448 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c3d504 * 0xc;
        if ((CVector3f *)(&DAT_01c3d508 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d508 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d50c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d510 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&DAT_01c3d444 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c3d508 + _DAT_01c3d504 * 0xc),0.0,1.0,0.0,(double)-y_max);
        break;
      case 2:
        iVar3 = _DAT_01c3d504 * 0xc;
        if ((CVector3f *)(&DAT_01c3d508 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d508 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d50c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d510 + iVar3) = point1_ptr->z;
        }
        _DAT_01c3d504 = _DAT_01c3d504 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,(CVector3f *)(&DAT_01c3d444 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c3d508 + _DAT_01c3d504 * 0xc),0.0,1.0,0.0,(double)-y_max);
        break;
      default:
        goto switchD_00490ffc_caseD_3;
      }
      _DAT_01c3d504 = _DAT_01c3d504 + 1;
switchD_00490ffc_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c3d440);
  }
  return;
}
