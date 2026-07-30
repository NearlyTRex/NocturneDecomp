// Name: core_dtri.cpp_FUN_0046dc10
// Address: 0046dc10
// Address Range: [[0046dc10, 0046dd60]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046dc10(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046dc10(float param_1)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_01bc9c7c) {
    point1_ptr = CVector3f_ARRAY_01bc9c80;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_01bc9c7c) {
        uVar2 = uVar2 ^ _DAT_01bc9c7c;
      }
      bVar1 = point1_ptr->z < param_1;
      if (CVector3f_ARRAY_01bc9c80[uVar2].z < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40 != point1_ptr) {
          CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].x = point1_ptr->x;
          CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].y = point1_ptr->y;
          CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (CVector3f_ARRAY_01bc9c80 + uVar2,point1_ptr,
                   CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40,0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        if (CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40 != point1_ptr) {
          CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].x = point1_ptr->x;
          CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].y = point1_ptr->y;
          CVector3f_ARRAY_01bc9d44[_DAT_01bc9d40].z = point1_ptr->z;
        }
        _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,CVector3f_ARRAY_01bc9c80 + uVar2,
                   CVector3f_ARRAY_01bc9d44 + _DAT_01bc9d40,0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_0046dc84_caseD_3;
      }
      _DAT_01bc9d40 = _DAT_01bc9d40 + 1;
switchD_0046dc84_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < (int)_DAT_01bc9c7c);
  }
  return;
}
