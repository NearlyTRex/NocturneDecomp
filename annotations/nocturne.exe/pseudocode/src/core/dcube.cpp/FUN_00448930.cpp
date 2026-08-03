// Name: core_dcube.cpp_FUN_00448930
// Address: 00448930
// Address Range: [[00448930, 00448a7a]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448930(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448930(float param_1)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)_DAT_014b8614) {
    vertex1 = g_CVector3f_ARRAY_014b8618;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_014b8614) {
        uVar2 = uVar2 ^ _DAT_014b8614;
      }
      vertex2 = g_CVector3f_ARRAY_014b8618 + uVar2;
      bVar1 = param_1 < vertex1->x;
      if (param_1 < vertex2->x) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8 != vertex1) {
          g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].x = vertex1->x;
          g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].y = vertex1->y;
          g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex2,vertex1,g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8,1.0,0.0,0.0,
                   (double)-param_1);
        break;
      case 2:
        if (g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8 != vertex1) {
          g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].x = vertex1->x;
          g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].y = vertex1->y;
          g_CVector3f_ARRAY_014b86dc[_DAT_014b86d8].z = vertex1->z;
        }
        _DAT_014b86d8 = _DAT_014b86d8 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,vertex2,g_CVector3f_ARRAY_014b86dc + _DAT_014b86d8,1.0,0.0,0.0,
                   (double)-param_1);
        break;
      default:
        goto switchD_0044899a_caseD_3;
      }
      _DAT_014b86d8 = _DAT_014b86d8 + 1;
switchD_0044899a_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)_DAT_014b8614);
  }
  return;
}
