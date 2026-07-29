// Name: core_dtri.cpp_FUN_0046d680
// Address: 0046d680
// Address Range: [[0046d680, 0046d7cc]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046d680(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046d680(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01bc996c) {
    point1_ptr = (CVector3f *)&DAT_01bc9970;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01bc996c) {
        uVar2 = uVar2 ^ _DAT_01bc996c;
      }
      bVar1 = param_1 < point1_ptr->y;
      if (param_1 < *(float *)(&DAT_01bc9974 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9a30 * 0xc;
        if ((CVector3f *)(&DAT_01bc9a34 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9a34 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9a38 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9a3c + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  ((CVector3f *)(&DAT_01bc9970 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc),0.0,1.0,0.0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9a30 * 0xc;
        if ((CVector3f *)(&DAT_01bc9a34 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9a34 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9a38 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9a3c + iVar3) = point1_ptr->z;
        }
        _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,(CVector3f *)(&DAT_01bc9970 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01bc9a34 + _DAT_01bc9a30 * 0xc),0.0,1.0,0.0,(double)-param_1);
        break;
      default:
        goto switchD_0046d6ec_caseD_3;
      }
      _DAT_01bc9a30 = _DAT_01bc9a30 + 1;
switchD_0046d6ec_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01bc996c);
  }
  return;
}
