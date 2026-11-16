// Name: FUN_00479030
// Address: 00479030
// Address Range: [[00479030, 00479180]]
// Convention: unknown
// Signature: void FUN_00479030(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00479030(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c22194) {
    point1_ptr = (CVector3f *)&DAT_01c22198;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c22194) {
        uVar2 = uVar2 ^ _DAT_01c22194;
      }
      bVar1 = point1_ptr->z < param_1;
      if (*(float *)(&DAT_01c221a0 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c22258 * 0xc;
        if ((CVector3f *)(&DAT_01c2225c + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c2225c + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c22260 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c22264 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)(&DAT_01c22198 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c2225c + _DAT_01c22258 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01c22258 * 0xc;
        if ((CVector3f *)(&DAT_01c2225c + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c2225c + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c22260 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c22264 + iVar3) = point1_ptr->z;
        }
        _DAT_01c22258 = _DAT_01c22258 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,(CVector3f *)(&DAT_01c22198 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c2225c + _DAT_01c22258 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_004790a4_caseD_3;
      }
      _DAT_01c22258 = _DAT_01c22258 + 1;
switchD_004790a4_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c22194);
  }
  return;
}
