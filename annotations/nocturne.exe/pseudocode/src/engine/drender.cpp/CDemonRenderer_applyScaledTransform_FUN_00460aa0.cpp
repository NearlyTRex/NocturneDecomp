// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
// Address: 00460aa0
// Address Range: [[00460aa0, 00460bd1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer *this_ptr,CVector3f *position,CVector3f *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(CDemonRenderer *this_ptr,CVector3f *position,CVector3f *rotation)

{
  double value;
  double value_00;
  double dVar1;
  double dVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (rotation == (CVector3f *)0x0) {
    dVar2 = (double)position->z * 0.31830988619288902 * 32768;
    dVar3 = (double)position->x * 0.31830988619288902 * 32768;
    iVar7 = 0x460ae3;
    dVar1 = round((double)position->y * 0.31830988619288902 * 32768);
    iVar6 = 0x460aea;
    dVar2 = round(dVar2);
    iVar4 = (int)ROUND(dVar1);
    iVar5 = 0x460b04;
    dVar3 = round(dVar3);
    engine_matrix_c_matrixPushAndTransform_FUN_004cd380
              ((int)ROUND(dVar3),(int)ROUND(dVar2),iVar5,iVar4,iVar6,iVar7);
    return;
  }
  dVar3 = (double)rotation->y * 256;
  dVar2 = (double)rotation->x * 256;
  value = (double)position->y * 0.31830988619288902 * 32768;
  value_00 = (double)position->z * 0.31830988619288902 * 32768;
  dVar1 = (double)position->x * 0.31830988619288902 * 32768;
  round((double)rotation->z * 256);
  dVar3 = round(dVar3);
  dVar2 = round(dVar2);
  iVar4 = (int)ROUND(dVar3);
  iVar5 = (int)ROUND(dVar2);
  dVar3 = round(value);
  dVar2 = round(value_00);
  iVar6 = (int)ROUND(dVar3);
  iVar7 = 0x460bb8;
  dVar3 = round(dVar1);
  engine_matrix_c_matrixPushAndTransform_FUN_004cd380
            ((int)ROUND(dVar3),(int)ROUND(dVar2),iVar7,iVar6,iVar5,iVar4);
  return;
}
