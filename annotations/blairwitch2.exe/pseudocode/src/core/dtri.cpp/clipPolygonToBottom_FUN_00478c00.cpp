// Name: core_dtri.cpp_clipPolygonToBottom_FUN_00478c00
// Address: 00478c00
// Address Range: [[00478c00, 00478d50]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00478c00(float y_min)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00478c00(float y_min)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c21f48) {
    point1_ptr = (CVector3f *)&DAT_01c21f4c;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c21f48) {
        uVar2 = uVar2 ^ _DAT_01c21f48;
      }
      bVar1 = point1_ptr->y < y_min;
      if (*(float *)(&DAT_01c21f50 + uVar2 * 0xc) < y_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c2200c * 0xc;
        if ((CVector3f *)(&DAT_01c22010 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c22010 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c22014 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c22018 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  ((CVector3f *)(&DAT_01c21f4c + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c22010 + _DAT_01c2200c * 0xc),0.0,-1.0,0.0,(double)y_min);
        break;
      case 2:
        iVar3 = _DAT_01c2200c * 0xc;
        if ((CVector3f *)(&DAT_01c22010 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c22010 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c22014 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c22018 + iVar3) = point1_ptr->z;
        }
        _DAT_01c2200c = _DAT_01c2200c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,(CVector3f *)(&DAT_01c21f4c + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c22010 + _DAT_01c2200c * 0xc),0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_00478c74_caseD_3;
      }
      _DAT_01c2200c = _DAT_01c2200c + 1;
switchD_00478c74_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c21f48);
  }
  return;
}
