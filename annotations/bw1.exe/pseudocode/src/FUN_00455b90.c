// Name: FUN_00455b90
// Address: 00455b90
// Address Range: [[00455b90, 00455ce0]]
// Convention: unknown
// Signature: void FUN_00455b90(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00455b90(float param_1)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_0152c05c) {
    vertex1 = (CVector3f *)0x152c060;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_0152c05c) {
        uVar2 = uVar2 ^ _DAT_0152c05c;
      }
      vertex2 = (CVector3f *)(uVar2 * 0xc + 0x152c060);
      bVar1 = vertex1->z < param_1;
      if (*(float *)(uVar2 * 0xc + 0x152c068) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_0152c120 * 0xc;
        if ((CVector3f *)(iVar3 + 0x152c124) != vertex1) {
          ((CVector3f *)(iVar3 + 0x152c124))->x = vertex1->x;
          *(float *)(iVar3 + 0x152c128) = vertex1->y;
          *(float *)(iVar3 + 0x152c12c) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex2,vertex1,(CVector3f *)(_DAT_0152c120 * 0xc + 0x152c124),0.0,0.0,-1.0,
                   (double)param_1);
        break;
      case 2:
        iVar3 = _DAT_0152c120 * 0xc;
        if ((CVector3f *)(iVar3 + 0x152c124) != vertex1) {
          ((CVector3f *)(iVar3 + 0x152c124))->x = vertex1->x;
          *(float *)(iVar3 + 0x152c128) = vertex1->y;
          *(float *)(iVar3 + 0x152c12c) = vertex1->z;
        }
        _DAT_0152c120 = _DAT_0152c120 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_00455460
                  (vertex1,vertex2,(CVector3f *)(_DAT_0152c120 * 0xc + 0x152c124),0.0,0.0,-1.0,
                   (double)param_1);
        break;
      default:
        goto switchD_00455c04_caseD_3;
      }
      _DAT_0152c120 = _DAT_0152c120 + 1;
switchD_00455c04_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_0152c05c);
  }
  return;
}
