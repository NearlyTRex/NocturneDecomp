// Name: core_dcube.cpp_FUN_00448a90
// Address: 00448a90
// Address Range: [[00448a90, 00448bde]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448a90(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448a90(float param_1)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_014b86d8) {
    vertex1 = (CVector3f *)&DAT_014b86dc;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_014b86d8) {
        uVar2 = uVar2 ^ _DAT_014b86d8;
      }
      vertex2 = (CVector3f *)(&DAT_014b86dc + uVar2 * 0xc);
      bVar1 = vertex1->x < param_1;
      if (vertex2->x < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_014b879c * 0xc;
        if ((CVector3f *)(&DAT_014b87a0 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_014b87a0 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_014b87a4 + iVar3) = vertex1->y;
          *(float *)(&DAT_014b87a8 + iVar3) = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex2,vertex1,(CVector3f *)(&DAT_014b87a0 + _DAT_014b879c * 0xc),-1.0,0.0,0.0,
                   (double)param_1);
        break;
      case 2:
        iVar3 = _DAT_014b879c * 0xc;
        if ((CVector3f *)(&DAT_014b87a0 + iVar3) != vertex1) {
          ((CVector3f *)(&DAT_014b87a0 + iVar3))->x = vertex1->x;
          *(float *)(&DAT_014b87a4 + iVar3) = vertex1->y;
          *(float *)(&DAT_014b87a8 + iVar3) = vertex1->z;
        }
        _DAT_014b879c = _DAT_014b879c + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,vertex2,(CVector3f *)(&DAT_014b87a0 + _DAT_014b879c * 0xc),-1.0,0.0,0.0,
                   (double)param_1);
        break;
      default:
        goto switchD_00448b02_caseD_3;
      }
      _DAT_014b879c = _DAT_014b879c + 1;
switchD_00448b02_caseD_3:
      iVar4 = iVar4 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar4 < (int)_DAT_014b86d8);
  }
  return;
}
