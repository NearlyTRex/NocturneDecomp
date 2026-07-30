// Name: core_dcube.cpp_FUN_00448660
// Address: 00448660
// Address Range: [[00448660, 004487ac]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448660(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448660(float param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  CVector3f *vertex1;
  
  iVar3 = 0;
  if (0 < (int)_DAT_014b848c) {
    vertex1 = CVector3f_ARRAY_014b8490;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_014b848c) {
        uVar2 = uVar2 ^ _DAT_014b848c;
      }
      bVar1 = param_1 < vertex1->y;
      if (param_1 < CVector3f_ARRAY_014b8490[uVar2].y) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (CVector3f_ARRAY_014b8554 + _DAT_014b8550 != vertex1) {
          CVector3f_ARRAY_014b8554[_DAT_014b8550].x = vertex1->x;
          CVector3f_ARRAY_014b8554[_DAT_014b8550].y = vertex1->y;
          CVector3f_ARRAY_014b8554[_DAT_014b8550].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (CVector3f_ARRAY_014b8490 + uVar2,vertex1,CVector3f_ARRAY_014b8554 + _DAT_014b8550
                   ,0.0,1.0,0.0,(double)-param_1);
        break;
      case 2:
        if (CVector3f_ARRAY_014b8554 + _DAT_014b8550 != vertex1) {
          CVector3f_ARRAY_014b8554[_DAT_014b8550].x = vertex1->x;
          CVector3f_ARRAY_014b8554[_DAT_014b8550].y = vertex1->y;
          CVector3f_ARRAY_014b8554[_DAT_014b8550].z = vertex1->z;
        }
        _DAT_014b8550 = _DAT_014b8550 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,CVector3f_ARRAY_014b8490 + uVar2,CVector3f_ARRAY_014b8554 + _DAT_014b8550
                   ,0.0,1.0,0.0,(double)-param_1);
        break;
      default:
        goto switchD_004486cc_caseD_3;
      }
      _DAT_014b8550 = _DAT_014b8550 + 1;
switchD_004486cc_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)_DAT_014b848c);
  }
  return;
}
