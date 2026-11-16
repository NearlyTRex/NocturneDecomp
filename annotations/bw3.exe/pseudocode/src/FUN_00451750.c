// Name: FUN_00451750
// Address: 00451750
// Address Range: [[00451750, 0045189c]]
// Convention: unknown
// Signature: void FUN_00451750(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00451750(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *vertex1;
  
  iVar4 = 0;
  if (0 < (int)_DAT_015485fc) {
    vertex1 = (CVector3f *)&DAT_01548600;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_015485fc) {
        uVar2 = uVar2 ^ _DAT_015485fc;
      }
      bVar1 = param_1 < vertex1->y;
      if (param_1 < *(float *)(&DAT_01548604 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_015486c0 * 0xc;
        if ((CVector3f *)(iVar3 + 0x15486c4) != vertex1) {
          ((CVector3f *)(iVar3 + 0x15486c4))->x = vertex1->x;
          *(float *)(iVar3 + 0x15486c8) = vertex1->y;
          *(float *)(iVar3 + 0x15486cc) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  ((CVector3f *)(&DAT_01548600 + uVar2 * 0xc),vertex1,
                   (CVector3f *)(_DAT_015486c0 * 0xc + 0x15486c4),0.0,1.0,0.0,(double)-param_1);
        break;
      case 2:
        iVar3 = _DAT_015486c0 * 0xc;
        if ((CVector3f *)(iVar3 + 0x15486c4) != vertex1) {
          ((CVector3f *)(iVar3 + 0x15486c4))->x = vertex1->x;
          *(float *)(iVar3 + 0x15486c8) = vertex1->y;
          *(float *)(iVar3 + 0x15486cc) = vertex1->z;
        }
        _DAT_015486c0 = _DAT_015486c0 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,(CVector3f *)(&DAT_01548600 + uVar2 * 0xc),
                   (CVector3f *)(_DAT_015486c0 * 0xc + 0x15486c4),0.0,1.0,0.0,(double)-param_1);
        break;
      default:
        goto switchD_004517bc_caseD_3;
      }
      _DAT_015486c0 = _DAT_015486c0 + 1;
switchD_004517bc_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_015485fc);
  }
  return;
}
