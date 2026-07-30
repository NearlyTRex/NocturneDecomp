// Name: core_dtri.cpp_FUN_0046d7e0
// Address: 0046d7e0
// Address Range: [[0046d7e0, 0046d930]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046d7e0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046d7e0(float param_1)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_01bc9a30) {
    point1_ptr = CVector3f_ARRAY_01bc9a34;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_01bc9a30) {
        uVar2 = uVar2 ^ _DAT_01bc9a30;
      }
      bVar1 = point1_ptr->y < param_1;
      if (CVector3f_ARRAY_01bc9a34[uVar2].y < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4 != point1_ptr) {
          CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].x = point1_ptr->x;
          CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].y = point1_ptr->y;
          CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (CVector3f_ARRAY_01bc9a34 + uVar2,point1_ptr,
                   CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4,0.0,-1.0,0.0,(double)param_1);
        break;
      case 2:
        if (CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4 != point1_ptr) {
          CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].x = point1_ptr->x;
          CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].y = point1_ptr->y;
          CVector3f_ARRAY_01bc9af8[_DAT_01bc9af4].z = point1_ptr->z;
        }
        _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,CVector3f_ARRAY_01bc9a34 + uVar2,
                   CVector3f_ARRAY_01bc9af8 + _DAT_01bc9af4,0.0,-1.0,0.0,(double)param_1);
        break;
      default:
        goto switchD_0046d854_caseD_3;
      }
      _DAT_01bc9af4 = _DAT_01bc9af4 + 1;
switchD_0046d854_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < (int)_DAT_01bc9a30);
  }
  return;
}
