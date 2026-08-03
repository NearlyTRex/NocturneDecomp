// Name: core_dtri.cpp_FUN_0046dd80
// Address: 0046dd80
// Address Range: [[0046dd80, 0046ded0]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_0046dd80(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_0046dd80(float param_1)

{
  byte bVar1;
  uint uVar2;
  CVector3f *point1_ptr;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_01bc9d40) {
    point1_ptr = g_CVector3f_ARRAY_01bc9d44;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_01bc9d40) {
        uVar2 = uVar2 ^ _DAT_01bc9d40;
      }
      bVar1 = param_1 < point1_ptr->z;
      if (param_1 < g_CVector3f_ARRAY_01bc9d44[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04 != point1_ptr) {
          g_CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].z = point1_ptr->z;
        }
        break;
      case 1:
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (g_CVector3f_ARRAY_01bc9d44 + uVar2,point1_ptr,
                   g_CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04,0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        if (g_CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04 != point1_ptr) {
          g_CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].x = point1_ptr->x;
          g_CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].y = point1_ptr->y;
          g_CVector3f_ARRAY_01bc9e08[_DAT_01bc9e04].z = point1_ptr->z;
        }
        _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
        core_dtri_cpp_clipLineToPlane_FUN_0046d4e0
                  (point1_ptr,g_CVector3f_ARRAY_01bc9d44 + uVar2,
                   g_CVector3f_ARRAY_01bc9e08 + _DAT_01bc9e04,0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_0046ddf4_caseD_3;
      }
      _DAT_01bc9e04 = _DAT_01bc9e04 + 1;
switchD_0046ddf4_caseD_3:
      iVar3 = iVar3 + 1;
      point1_ptr = point1_ptr + 1;
    } while (iVar3 < (int)_DAT_01bc9d40);
  }
  return;
}
