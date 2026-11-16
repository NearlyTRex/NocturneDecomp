// Name: FUN_0047a0a0
// Address: 0047a0a0
// Address Range: [[0047a0a0, 0047a1f0]]
// Convention: unknown
// Signature: void FUN_0047a0a0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a0a0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c59cec) {
    point1_ptr = (CVector3f *)&DAT_01c59cf0;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c59cec) {
        uVar2 = uVar2 ^ _DAT_01c59cec;
      }
      bVar1 = point1_ptr->z < param_1;
      if (*(float *)(&DAT_01c59cf8 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c59db0 * 0xc;
        if ((CVector3f *)(&DAT_01c59db4 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59db4 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59db8 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59dbc + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)(&DAT_01c59cf0 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c59db4 + _DAT_01c59db0 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01c59db0 * 0xc;
        if ((CVector3f *)(&DAT_01c59db4 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59db4 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59db8 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59dbc + iVar3) = point1_ptr->z;
        }
        _DAT_01c59db0 = _DAT_01c59db0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,(CVector3f *)(&DAT_01c59cf0 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c59db4 + _DAT_01c59db0 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_0047a114_caseD_3;
      }
      _DAT_01c59db0 = _DAT_01c59db0 + 1;
switchD_0047a114_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c59cec);
  }
  return;
}
