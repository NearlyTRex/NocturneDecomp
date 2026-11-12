// Name: core_dtri.cpp_clipPolygonToRight_FUN_00479de0
// Address: 00479de0
// Address Range: [[00479de0, 00479f2a]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00479de0(float x_max)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToRight_FUN_00479de0(float x_max)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  CVector3f *point1_ptr;
  
  iVar4 = 0;
  if (0 < (int)_DAT_01c59b64) {
    point1_ptr = (CVector3f *)&DAT_01c59b68;
    do {
      uVar2 = iVar4 + 1;
      if (uVar2 == _DAT_01c59b64) {
        uVar2 = uVar2 ^ _DAT_01c59b64;
      }
      point2_ptr = (CVector3f *)(&DAT_01c59b68 + uVar2 * 0xc);
      bVar1 = x_max < point1_ptr->x;
      if (x_max < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        iVar3 = _DAT_01c59c28 * 0xc;
        if ((CVector3f *)(&DAT_01c59c2c + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59c2c + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59c30 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59c34 + iVar3) = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point2_ptr,point1_ptr,(CVector3f *)(&DAT_01c59c2c + _DAT_01c59c28 * 0xc),1.0,0.0,
                   0.0,(double)-x_max);
        break;
      case 2:
        iVar3 = _DAT_01c59c28 * 0xc;
        if ((CVector3f *)(&DAT_01c59c2c + iVar3) != point1_ptr) {
          ((CVector3f *)(&DAT_01c59c2c + iVar3))->x = point1_ptr->x;
          *(float *)(&DAT_01c59c30 + iVar3) = point1_ptr->y;
          *(float *)(&DAT_01c59c34 + iVar3) = point1_ptr->z;
        }
        _DAT_01c59c28 = _DAT_01c59c28 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_00479970
                  (point1_ptr,point2_ptr,(CVector3f *)(&DAT_01c59c2c + _DAT_01c59c28 * 0xc),1.0,0.0,
                   0.0,(double)-x_max);
        break;
      default:
        goto switchD_00479e4a_caseD_3;
      }
      _DAT_01c59c28 = _DAT_01c59c28 + 1;
switchD_00479e4a_caseD_3:
      iVar4 = iVar4 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar4 < (int)_DAT_01c59b64);
  }
  return;
}
