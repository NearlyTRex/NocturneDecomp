// Name: FUN_00455600
// Address: 00455600
// Address Range: [[00455600, 0045574c]]
// Convention: unknown
// Signature: void FUN_00455600(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455600(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *vertex1;
  
  iVar4 = 0;
  if (0 < (int)_DAT_0152bd4c) {
    vertex1 = (CVector3f *)&DAT_0152bd50;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_0152bd4c) {
        uVar2 = uVar2 ^ _DAT_0152bd4c;
      }
      bVar1 = param_1 < vertex1->y;
      if (param_1 < *(float *)(&DAT_0152bd54 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_0152be10 * 0xc;
        if ((CVector3f *)(iVar3 + 0x152be14) != vertex1) {
          ((CVector3f *)(iVar3 + 0x152be14))->x = vertex1->x;
          *(float *)(iVar3 + 0x152be18) = vertex1->y;
          *(float *)(iVar3 + 0x152be1c) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  ((CVector3f *)(&DAT_0152bd50 + uVar2 * 0xc),vertex1,
                   (CVector3f *)(_DAT_0152be10 * 0xc + 0x152be14),0.0,1.0,0.0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_0152be10 * 0xc;
        if ((CVector3f *)(iVar3 + 0x152be14) != vertex1) {
          ((CVector3f *)(iVar3 + 0x152be14))->x = vertex1->x;
          *(float *)(iVar3 + 0x152be18) = vertex1->y;
          *(float *)(iVar3 + 0x152be1c) = vertex1->z;
        }
        _DAT_0152be10 = _DAT_0152be10 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex1,(CVector3f *)(&DAT_0152bd50 + uVar2 * 0xc),
                   (CVector3f *)(_DAT_0152be10 * 0xc + 0x152be14),0.0,1.0,0.0,(double)-param_1);
        break;
      default:
        goto switchD_0045566c_caseD_3;
      }
      _DAT_0152be10 = _DAT_0152be10 + 1;
switchD_0045566c_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_0152bd4c);
  }
  return;
}
