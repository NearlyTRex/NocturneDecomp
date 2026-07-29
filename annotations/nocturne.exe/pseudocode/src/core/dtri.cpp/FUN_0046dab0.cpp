// Name: core_dtri.cpp_FUN_0046dab0
// Address: 0046dab0
// Address Range: [[0046dab0, 0046dbfe]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046dab0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046dab0(float param_1)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01bc9bb8) {
    point1_ptr = (CVector3f *)&DAT_01bc9bbc;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01bc9bb8) {
        uVar2 = uVar2 ^ _DAT_01bc9bb8;
      }
      point2_ptr = (CVector3f *)(&DAT_01bc9bbc + uVar2 * 0xc);
      bVar1 = point1_ptr->x < param_1;
      if (point2_ptr->x < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01bc9c7c * 0xc;
        if ((CVector3f *)(&DAT_01bc9c80 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9c80 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9c84 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9c88 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point2_ptr,point1_ptr,(CVector3f *)(&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc),-1.0,0.0
                   ,0.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01bc9c7c * 0xc;
        if ((CVector3f *)(&DAT_01bc9c80 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01bc9c80 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01bc9c84 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01bc9c88 + iVar3) = point1_ptr->z;
        }
        _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,point2_ptr,(CVector3f *)(&DAT_01bc9c80 + _DAT_01bc9c7c * 0xc),-1.0,0.0
                   ,0.0,(double)param_1);
        break;
      default:
        goto switchD_0046db22_caseD_3;
      }
      _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
switchD_0046db22_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01bc9bb8);
  }
  return;
}
