// Name: core_dtri.cpp_clipPolygonToRight_FUN_00478d70
// Address: 00478d70
// Address Range: [[00478d70, 00478eba]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00478d70(float x_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00478d70(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c2200c) {
    point1_ptr = (CVector3f *)&DAT_01c22010;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c2200c) {
        uVar2 = uVar2 ^ _DAT_01c2200c;
      }
      point2_ptr = (CVector3f *)(&DAT_01c22010 + uVar2 * 0xc);
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c220d0 * 0xc;
        if ((CVector3f *)(&DAT_01c220d4 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c220d4 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c220d8 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c220dc + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point2_ptr,point1_ptr,(CVector3f *)(&DAT_01c220d4 + _DAT_01c220d0 * 0xc),1.0,0.0,
                   0.0,(double)-x_max);
        break;
      case 2:
        iVar3 = _DAT_01c220d0 * 0xc;
        if ((CVector3f *)(&DAT_01c220d4 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c220d4 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c220d8 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c220dc + iVar3) = point1_ptr->z;
        }
        _DAT_01c220d0 = _DAT_01c220d0 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00478900
                  (point1_ptr,point2_ptr,(CVector3f *)(&DAT_01c220d4 + _DAT_01c220d0 * 0xc),1.0,0.0,
                   0.0,(double)-x_max);
        break;
      default:
        goto switchD_00478dda_caseD_3;
      }
      _DAT_01c220d0 = _DAT_01c220d0 + 1;
switchD_00478dda_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c2200c);
  }
  return;
}
