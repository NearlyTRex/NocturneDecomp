// Name: core_dcube.cpp_FUN_00448bf0
// Address: 00448bf0
// Address Range: [[00448bf0, 00448d40]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448bf0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448bf0(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_014b879c) {
    vertex1 = (CVector3f *)&DAT_014b87a0;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_014b879c) {
        uVar2 = uVar2 ^ _DAT_014b879c;
      }
      bVar1 = vertex1->z < param_1;
      if (*(float *)(&DAT_014b87a8 + uVar2 * 0xc) < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_014b8860 * 0xc;
        if ((CVector3f *)(&DAT_014b8864 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_014b8864 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_014b8868 + iVar3) = vertex1->y;
          *(float *)(&DAT_014b886c + iVar3) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  ((CVector3f *)(&DAT_014b87a0 + uVar2 * 0xc),vertex1,
                   (CVector3f *)(&DAT_014b8864 + _DAT_014b8860 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        iVar3 = _DAT_014b8860 * 0xc;
        if ((CVector3f *)(&DAT_014b8864 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_014b8864 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_014b8868 + iVar3) = vertex1->y;
          *(float *)(&DAT_014b886c + iVar3) = vertex1->z;
        }
        _DAT_014b8860 = _DAT_014b8860 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,(CVector3f *)(&DAT_014b87a0 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_014b8864 + _DAT_014b8860 * 0xc),0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_00448c64_caseD_3;
      }
      _DAT_014b8860 = _DAT_014b8860 + 1;
switchD_00448c64_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_014b879c);
  }
  return;
}
