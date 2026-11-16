// Name: FUN_004518b0
// Address: 004518b0
// Address Range: [[004518b0, 00451a00]]
// Convention: unknown
// Signature: void FUN_004518b0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004518b0(float param_1)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_015486c0) {
    vertex1 = (CVector3f *)0x15486c4;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_015486c0) {
        uVar2 = uVar2 ^ _DAT_015486c0;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x15486c4);
      bVar1 = vertex1->y < param_1;
      if (*(float *)(uVar2 * 0xc + 0x15486c8) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01548784 * 0xc;
        if ((CVector3f *)(iVar3 + 0x1548788) != vertex1) {
          ((CVector3f *)(iVar3 + 0x1548788))->x = vertex1->x;
          *(float *)(iVar3 + 0x154878c) = vertex1->y;
          *(float *)(iVar3 + 0x1548790) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex2,vertex1,(CVector3f *)(_DAT_01548784 * 0xc + 0x1548788),0.0,-1.0,0.0,
                   (double)param_1);
        break;
      case 2:
        iVar3 = _DAT_01548784 * 0xc;
        if ((CVector3f *)(iVar3 + 0x1548788) != vertex1) {
          ((CVector3f *)(iVar3 + 0x1548788))->x = vertex1->x;
          *(float *)(iVar3 + 0x154878c) = vertex1->y;
          *(float *)(iVar3 + 0x1548790) = vertex1->z;
        }
        _DAT_01548784 = _DAT_01548784 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004515b0
                  (vertex1,vertex2,(CVector3f *)(_DAT_01548784 * 0xc + 0x1548788),0.0,-1.0,0.0,
                   (double)param_1);
        break;
      default:
        goto switchD_00451924_caseD_3;
      }
      _DAT_01548784 = _DAT_01548784 + 1;
switchD_00451924_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_015486c0);
  }
  return;
}
