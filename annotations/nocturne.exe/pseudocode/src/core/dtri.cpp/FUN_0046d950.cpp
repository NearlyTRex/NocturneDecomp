// Name: core_dtri.cpp_FUN_0046d950
// Address: 0046d950
// Address Range: [[0046d950, 0046da9a]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046d950(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046d950(float param_1)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *point1_ptr;
  
  iVar3 = 0;
  if (0 < (int)_DAT_01bc9af4) {
    point1_ptr = g_CVector3f_ARRAY_01bc9af8;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_01bc9af4) {
        uVar2 = uVar2 ^ _DAT_01bc9af4;
      }
      point2_ptr = g_CVector3f_ARRAY_01bc9af8 + uVar2;
      bVar1 = param_1 < point1_ptr->x;
      if (param_1 < point2_ptr->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8 != point1_ptr) {
          g_CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point2_ptr,point1_ptr,g_CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8,1.0,0.0,0.0,
                   (double)-param_1);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8 != point1_ptr) {
          g_CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9bbc[_DAT_01bc9bb8].z = point1_ptr->z;
        }
        _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,point2_ptr,g_CVector3f_ARRAY_01bc9bbc + _DAT_01bc9bb8,1.0,0.0,0.0,
                   (double)-param_1);
        break;
      default:
        goto switchD_0046d9ba_caseD_3;
      }
      _DAT_01bc9bb8 = _DAT_01bc9bb8 + 1;
switchD_0046d9ba_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < (int)_DAT_01bc9af4);
  }
  return;
}
