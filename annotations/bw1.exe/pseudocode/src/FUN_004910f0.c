// Name: FUN_004910f0
// Address: 004910f0
// Address Range: [[004910f0, 00491240]]
// Convention: unknown
// Signature: void FUN_004910f0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004910f0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c3d504) {
    point1_ptr = (CVector3f *)&DAT_01c3d508;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c3d504) {
        uVar2 = uVar2 ^ _DAT_01c3d504;
      }
      bVar1 = point1_ptr->y < param_1;
      if (*(float *)(&DAT_01c3d50c + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c3d5c8 * 0xc;
        if ((CVector3f *)(&DAT_01c3d5cc + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d5cc + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d5d0 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d5d4 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  ((CVector3f *)(&DAT_01c3d508 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c3d5cc + _DAT_01c3d5c8 * 0xc),0.0,-1.0,0.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01c3d5c8 * 0xc;
        if ((CVector3f *)(&DAT_01c3d5cc + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c3d5cc + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c3d5d0 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c3d5d4 + iVar3) = point1_ptr->z;
        }
        _DAT_01c3d5c8 = _DAT_01c3d5c8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00490df0
                  (point1_ptr,(CVector3f *)(&DAT_01c3d508 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c3d5cc + _DAT_01c3d5c8 * 0xc),0.0,-1.0,0.0,(double)param_1);
        break;
      default:
        goto switchD_00491164_caseD_3;
      }
      _DAT_01c3d5c8 = _DAT_01c3d5c8 + 1;
switchD_00491164_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c3d504);
  }
  return;
}
