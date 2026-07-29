// Name: core_dtri.cpp_FUN_0046d7e0
// Address: 0046d7e0
// Address Range: [[0046d7e0, 0046d930]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046d7e0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046d7e0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01bc9a30) {
    point1_ptr = (CVector3f *)&DAT_01bc9a34;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01bc9a30) {
        uVar2 = uVar2 ^ _DAT_01bc9a30;
      }
      bVar1 = point1_ptr->y < param_1;
      if (*(float *)(&DAT_01bc9a38 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9af4 * 0xc;
        if ((CVector3f *)(&DAT_01bc9af8 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9af8 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9afc + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9b00 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  ((CVector3f *)(&DAT_01bc9a34 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc),0.0,-1.0,0.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9af4 * 0xc;
        if ((CVector3f *)(&DAT_01bc9af8 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9af8 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9afc + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9b00 + iVar3) = point1_ptr->z;
        }
        _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,(CVector3f *)(&DAT_01bc9a34 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01bc9af8 + _DAT_01bc9af4 * 0xc),0.0,-1.0,0.0,(double)param_1);
        break;
      default:
        goto switchD_0046d854_caseD_3;
      }
      _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
switchD_0046d854_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01bc9a30);
  }
  return;
}
