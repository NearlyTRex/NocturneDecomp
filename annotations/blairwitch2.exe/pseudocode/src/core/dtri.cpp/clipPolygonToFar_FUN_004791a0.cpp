// Name: core_dtri.cpp_clipPolygonToFar_FUN_004791a0
// Address: 004791a0
// Address Range: [[004791a0, 004792f0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_004791a0(float z_far)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToFar_FUN_004791a0(float z_far)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c22258) {
    point1_ptr = (CVector3f *)&DAT_01c2225c;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c22258) {
        uVar2 = uVar2 ^ _DAT_01c22258;
      }
      bVar1 = z_far < point1_ptr->z;
      if (z_far < *(float *)(&DAT_01c22264 + uVar2 * 0xc)) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c2231c * 0xc;
        if ((CVector3f *)(&DAT_01c22320 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c22320 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c22324 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c22328 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)(&DAT_01c2225c + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c22320 + _DAT_01c2231c * 0xc),0.0,0.0,-1.0,(double)z_far);
        break;
      case 2:
        iVar3 = _DAT_01c2231c * 0xc;
        if ((CVector3f *)(&DAT_01c22320 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c22320 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c22324 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c22328 + iVar3) = point1_ptr->z;
        }
        _DAT_01c2231c = _DAT_01c2231c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,(CVector3f *)(&DAT_01c2225c + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c22320 + _DAT_01c2231c * 0xc),0.0,0.0,-1.0,(double)z_far);
        break;
      default:
        goto switchD_00479214_caseD_3;
      }
      _DAT_01c2231c = _DAT_01c2231c + 1;
switchD_00479214_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c22258);
  }
  return;
}
