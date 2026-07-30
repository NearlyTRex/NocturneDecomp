// Name: core_dtri.cpp_FUN_0046dab0
// Address: 0046dab0
// Address Range: [[0046dab0, 0046dbfe]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046dab0(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046dab0(float param_1)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_01bc9bb8) {
    point1_ptr = CVector3f_ARRAY_01bc9bbc;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_01bc9bb8) {
        uVar2 = uVar2 ^ _DAT_01bc9bb8;
      }
      point2_ptr = CVector3f_ARRAY_01bc9bbc + uVar2;
      bVar1 = point1_ptr->x < param_1;
      if (point2_ptr->x < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c != point1_ptr) {
          CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].x = point1_ptr->x;
          CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].y = point1_ptr->y;
          CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point2_ptr,point1_ptr,CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c,-1.0,0.0,0.0,
                   (double)param_1);
        break;
      case 2:
        if (CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c != point1_ptr) {
          CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].x = point1_ptr->x;
          CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].y = point1_ptr->y;
          CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].z = point1_ptr->z;
        }
        _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,point2_ptr,CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c,-1.0,0.0,0.0,
                   (double)param_1);
        break;
      default:
        goto switchD_0046db22_caseD_3;
      }
      _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
switchD_0046db22_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < (int)_DAT_01bc9bb8);
  }
  return;
}
