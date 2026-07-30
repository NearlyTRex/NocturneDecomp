// Name: core_dcube.cpp_FUN_00448d60
// Address: 00448d60
// Address Range: [[00448d60, 00448eb0]]
// Convention: unknown
// Signature: void core_dcube_cpp_FUN_00448d60(float param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dcube_cpp_FUN_00448d60(float param_1)

{
  byte bVar1;
  uint uVar2;
  CVector3f *vertex1;
  int iVar3;
  
  iVar3 = 0;
  if (0 < (int)_DAT_014b8860) {
    vertex1 = CVector3f_ARRAY_014b8864;
    do {
      uVar2 = iVar3 + 1;
      if (uVar2 == _DAT_014b8860) {
        uVar2 = uVar2 ^ _DAT_014b8860;
      }
      bVar1 = param_1 < vertex1->z;
      if (param_1 < CVector3f_ARRAY_014b8864[uVar2].z) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        if (CVector3f_ARRAY_014b8928 + _DAT_014b8924 != vertex1) {
          CVector3f_ARRAY_014b8928[_DAT_014b8924].x = vertex1->x;
          CVector3f_ARRAY_014b8928[_DAT_014b8924].y = vertex1->y;
          CVector3f_ARRAY_014b8928[_DAT_014b8924].z = vertex1->z;
        }
        break;
      case 1:
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (CVector3f_ARRAY_014b8864 + uVar2,vertex1,CVector3f_ARRAY_014b8928 + _DAT_014b8924
                   ,0.0,0.0,-1.0,(double)param_1);
        break;
      case 2:
        if (CVector3f_ARRAY_014b8928 + _DAT_014b8924 != vertex1) {
          CVector3f_ARRAY_014b8928[_DAT_014b8924].x = vertex1->x;
          CVector3f_ARRAY_014b8928[_DAT_014b8924].y = vertex1->y;
          CVector3f_ARRAY_014b8928[_DAT_014b8924].z = vertex1->z;
        }
        _DAT_014b8924 = _DAT_014b8924 + 1;
        core_dcube_cpp_clipEdgeToPlane_FUN_004484c0
                  (vertex1,CVector3f_ARRAY_014b8864 + uVar2,CVector3f_ARRAY_014b8928 + _DAT_014b8924
                   ,0.0,0.0,-1.0,(double)param_1);
        break;
      default:
        goto switchD_00448dd4_caseD_3;
      }
      _DAT_014b8924 = _DAT_014b8924 + 1;
switchD_00448dd4_caseD_3:
      iVar3 = iVar3 + 1;
      vertex1 = vertex1 + 1;
    } while (iVar3 < (int)_DAT_014b8860);
  }
  return;
}
