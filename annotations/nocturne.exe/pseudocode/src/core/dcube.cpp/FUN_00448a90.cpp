// Name: core_dcube.cpp_FUN_00448a90
// Address: 00448a90
// Address Range: [[00448a90, 00448bde]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448a90(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448a90(float param_1)

{
  CVector3f *vertex2;
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_014b86d8) {
    vertex1 = g_CVector3f_ARRAY_014b86dc;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_014b86d8) {
        uVar2 = uVar2 ^ _DAT_014b86d8;
      }
      vertex2 = g_CVector3f_ARRAY_014b86dc + uVar2;
      bVar1 = vertex1->x < param_1;
      if (vertex2->x < param_1) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c != vertex1) {
          g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].x = vertex1->x;
          g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].y = vertex1->y;
          g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex2,vertex1,g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c,-1.0,0.0,0.0,
                   (double)param_1);
        break;
      case 2:
        if (g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c != vertex1) {
          g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].x = vertex1->x;
          g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].y = vertex1->y;
          g_CVector3f_ARRAY_014b87a0[_DAT_014b879c].z = vertex1->z;
        }
        _DAT_014b879c = _DAT_014b879c + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,vertex2,g_CVector3f_ARRAY_014b87a0 + _DAT_014b879c,-1.0,0.0,0.0,
                   (double)param_1);
        break;
      default:
        goto switchD_00448b02_caseD_3;
      }
      _DAT_014b879c = _DAT_014b879c + 1;
switchD_00448b02_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)_DAT_014b86d8);
  }
  return;
}
