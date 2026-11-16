// Name: FUN_00478aa0
// Address: 00478aa0
// Address Range: [[00478aa0, 00478bec]]
// Convention: unknown
// Signature: void FUN_00478aa0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00478aa0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c21e84) {
    point1_ptr = (CVector3f *)&DAT_01c21e88;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c21e84) {
        uVar2 = uVar2 ^ _DAT_01c21e84;
      }
      bVar1 = param_1 < point1_ptr->y;
      if (param_1 < *(float *)(&DAT_01c21e8c + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c21f48 * 0xc;
        if ((CVector3f *)(&DAT_01c21f4c + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c21f4c + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c21f50 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c21f54 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)(&DAT_01c21e88 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c21f4c + _DAT_01c21f48 * 0xc),0.0,1.0,0.0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_01c21f48 * 0xc;
        if ((CVector3f *)(&DAT_01c21f4c + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c21f4c + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c21f50 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c21f54 + iVar3) = point1_ptr->z;
        }
        _DAT_01c21f48 = _DAT_01c21f48 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,(CVector3f *)(&DAT_01c21e88 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c21f4c + _DAT_01c21f48 * 0xc),0.0,1.0,0.0,(double)-param_1);
        break;
      default:
        goto switchD_00478b0c_caseD_3;
      }
      _DAT_01c21f48 = _DAT_01c21f48 + 1;
switchD_00478b0c_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c21e84);
  }
  return;
}
