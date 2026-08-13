// Name: core_dtri.cpp_clipPolygonToLeft_FUN_0046dab0
// Address: 0046dab0
// Address Range: [[0046dab0, 0046dbfe]]
// Convention: __cdecl
// Signature: void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0046dab0(float x_min)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtri_cpp_clipPolygonToLeft_FUN_0046dab0(float x_min)

{
  CVector3f *point2_ptr;
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_01bc9bb8) {
    point1_ptr = g_CVector3f_ARRAY_01bc9bbc;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_01bc9bb8) {
        uVar2 = uVar2 ^ _DAT_01bc9bb8;
      }
      point2_ptr = g_CVector3f_ARRAY_01bc9bbc + uVar2;
      bVar1 = point1_ptr->x < x_min;
      if (point2_ptr->x < x_min) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c != point1_ptr) {
          g_CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point2_ptr,point1_ptr,g_CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c,-1.0,0.0,0.0,
                   (double)x_min);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c != point1_ptr) {
          g_CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9c80[_DAT_01bc9c7c].z = point1_ptr->z;
        }
        _DAT_01bc9c7c = _DAT_01bc9c7c + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,point2_ptr,g_CVector3f_ARRAY_01bc9c80 + _DAT_01bc9c7c,-1.0,0.0,0.0,
                   (double)x_min);
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
