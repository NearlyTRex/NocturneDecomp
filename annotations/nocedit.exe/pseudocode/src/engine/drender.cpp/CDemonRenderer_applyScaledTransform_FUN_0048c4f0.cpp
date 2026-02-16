// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
// Address Range: [[0048c4f0, 0048c621]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

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
  
  if (rotation == (CVector3i *)0x0) {
    dVar2 = (double)(float)position->z * 0.31830988619288902 * 32768;
    dVar3 = (double)(float)position->x * 0.31830988619288902 * 32768;
    iVar7 = 0x48c533;
    dVar1 = round
                      ((double)(float)position->y * 0.31830988619288902 * 32768);
    iVar6 = 0x48c53a;
    dVar2 = round(dVar2);
    iVar4 = (int)ROUND(dVar1);
    iVar5 = 0x48c554;
    dVar3 = round(dVar3);
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((int)ROUND(dVar3),(int)ROUND(dVar2),iVar5,iVar4,iVar6,iVar7);
    return;
  }
  dVar3 = (double)(float)rotation->y * 256;
  dVar2 = (double)(float)rotation->x * 256;
  value = (double)(float)position->y * 0.31830988619288902 * 32768;
  value_00 = (double)(float)position->z * 0.31830988619288902 * 32768;
  dVar1 = (double)(float)position->x * 0.31830988619288902 * 32768;
  round((double)(float)rotation->z * 256);
  dVar3 = round(dVar3);
  dVar2 = round(dVar2);
  iVar4 = (int)ROUND(dVar3);
  iVar5 = (int)ROUND(dVar2);
  dVar3 = round(value);
  dVar2 = round(value_00);
  iVar6 = (int)ROUND(dVar3);
  iVar7 = 0x48c608;
  dVar3 = round(dVar1);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((int)ROUND(dVar3),(int)ROUND(dVar2),iVar7,iVar6,iVar5,iVar4);
  return;
}
