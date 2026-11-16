// Name: FUN_00455760
// Address: 00455760
// Address Range: [[00455760, 004558b0]]
// Convention: unknown
// Signature: void FUN_00455760(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455760(float param_1)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_0152be10) {
    vertex1 = (CVector3f *)0x152be14;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_0152be10) {
        uVar2 = uVar2 ^ _DAT_0152be10;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x152be14);
      bVar1 = vertex1->y < param_1;
      if (*(float *)(uVar2 * 0xc + 0x152be18) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_0152bed4 * 0xc;
        if ((CVector3f *)(iVar3 + 0x152bed8) != vertex1) {
          ((CVector3f *)(iVar3 + 0x152bed8))->x = vertex1->x;
          *(float *)(iVar3 + 0x152bedc) = vertex1->y;
          *(float *)(iVar3 + 0x152bee0) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex2,vertex1,(CVector3f *)(_DAT_0152bed4 * 0xc + 0x152bed8),0.0,-1.0,0.0,
                   (double)param_1);
        break;
      case 2:
        iVar3 = _DAT_0152bed4 * 0xc;
        if ((CVector3f *)(iVar3 + 0x152bed8) != vertex1) {
          ((CVector3f *)(iVar3 + 0x152bed8))->x = vertex1->x;
          *(float *)(iVar3 + 0x152bedc) = vertex1->y;
          *(float *)(iVar3 + 0x152bee0) = vertex1->z;
        }
        _DAT_0152bed4 = _DAT_0152bed4 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex1,vertex2,(CVector3f *)(_DAT_0152bed4 * 0xc + 0x152bed8),0.0,-1.0,0.0,
                   (double)param_1);
        break;
      default:
        goto switchD_004557d4_caseD_3;
      }
      _DAT_0152bed4 = _DAT_0152bed4 + 1;
switchD_004557d4_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_0152be10);
  }
  return;
}
