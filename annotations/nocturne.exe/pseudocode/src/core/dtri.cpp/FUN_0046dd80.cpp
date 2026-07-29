// Name: core_dtri.cpp_FUN_0046dd80
// Address: 0046dd80
// Address Range: [[0046dd80, 0046ded0]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046dd80(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046dd80(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01bc9d40) {
    point1_ptr = (CVector3f *)&DAT_01bc9d44;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01bc9d40) {
        uVar2 = uVar2 ^ _DAT_01bc9d40;
      }
      bVar1 = param_1 < point1_ptr->z;
      if (param_1 < *(float *)(&DAT_01bc9d4c + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9e04 * 0xc;
        if ((CVector3f *)(&DAT_01bc9e08 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9e08 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9e0c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9e10 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  ((CVector3f *)(&DAT_01bc9d44 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01bc9e08 + _DAT_01bc9e04 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9e04 * 0xc;
        if ((CVector3f *)(&DAT_01bc9e08 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9e08 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9e0c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9e10 + iVar3) = point1_ptr->z;
        }
        _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,(CVector3f *)(&DAT_01bc9d44 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01bc9e08 + _DAT_01bc9e04 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_0046ddf4_caseD_3;
      }
      _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
switchD_0046ddf4_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01bc9d40);
  }
  return;
}
