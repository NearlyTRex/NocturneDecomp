// Name: FUN_00479b10
// Address: 00479b10
// Address Range: [[00479b10, 00479c5c]]
// Convention: unknown
// Signature: void FUN_00479b10(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479b10(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c599dc) {
    point1_ptr = (CVector3f *)&DAT_01c599e0;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c599dc) {
        uVar2 = uVar2 ^ _DAT_01c599dc;
      }
      bVar1 = param_1 < point1_ptr->y;
      if (param_1 < *(float *)(&DAT_01c599e4 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c59aa0 * 0xc;
        if ((CVector3f *)(&DAT_01c59aa4 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59aa4 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59aa8 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59aac + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)(&DAT_01c599e0 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c59aa4 + _DAT_01c59aa0 * 0xc),0.0,1.0,0.0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_01c59aa0 * 0xc;
        if ((CVector3f *)(&DAT_01c59aa4 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59aa4 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59aa8 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59aac + iVar3) = point1_ptr->z;
        }
        _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,(CVector3f *)(&DAT_01c599e0 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c59aa4 + _DAT_01c59aa0 * 0xc),0.0,1.0,0.0,(double)-param_1);
        break;
      default:
        goto switchD_00479b7c_caseD_3;
      }
      _DAT_01c59aa0 = _DAT_01c59aa0 + 1;
switchD_00479b7c_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c599dc);
  }
  return;
}
