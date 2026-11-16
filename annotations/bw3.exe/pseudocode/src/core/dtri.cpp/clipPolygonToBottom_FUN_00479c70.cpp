// Name: core_dtri.cpp_clipPolygonToBottom_FUN_00479c70
// Address: 00479c70
// Address Range: [[00479c70, 00479dc0]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00479c70(float y_min)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToBottom_FUN_00479c70(float y_min)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  int iVar4;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c59aa0) {
    point1_ptr = (CVector3f *)&DAT_01c59aa4;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c59aa0) {
        uVar2 = uVar2 ^ _DAT_01c59aa0;
      }
      bVar1 = point1_ptr->y < y_min;
      if (*(float *)(&DAT_01c59aa8 + uVar2 * 0xc) < y_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c59b64 * 0xc;
        if ((CVector3f *)(&DAT_01c59b68 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59b68 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59b6c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59b70 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  ((CVector3f *)(&DAT_01c59aa4 + uVar2 * 0xc),point1_ptr,
                   (CVector3f *)(&DAT_01c59b68 + _DAT_01c59b64 * 0xc),0.0,-1.0,0.0,(double)y_min);
        break;
      case 2:
        iVar3 = _DAT_01c59b64 * 0xc;
        if ((CVector3f *)(&DAT_01c59b68 + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59b68 + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59b6c + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59b70 + iVar3) = point1_ptr->z;
        }
        _DAT_01c59b64 = _DAT_01c59b64 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,(CVector3f *)(&DAT_01c59aa4 + uVar2 * 0xc),
                   (CVector3f *)(&DAT_01c59b68 + _DAT_01c59b64 * 0xc),0.0,-1.0,0.0,(double)y_min);
        break;
      default:
        goto switchD_00479ce4_caseD_3;
      }
      _DAT_01c59b64 = _DAT_01c59b64 + 1;
switchD_00479ce4_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c59aa0);
  }
  return;
}
