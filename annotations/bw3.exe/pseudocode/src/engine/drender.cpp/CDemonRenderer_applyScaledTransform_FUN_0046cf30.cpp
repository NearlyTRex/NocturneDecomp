// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
// Address: 0046cf30
// Address Range: [[0046cf30, 0046d061]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30(CDemonRenderer *this_ptr,CVector3f *euler_angles,CVector3f *translation)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  double dVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (translation == (CVector3f *)0x0) {
    fVar1 = euler_angles->z * _DAT_005bc523;
    fVar2 = euler_angles->x * _DAT_005bc523;
    fVar3 = (float)_DAT_005bc52b;
    iVar10 = 0x46cf73;
    dVar5 = round((double)(euler_angles->y * _DAT_005bc523 * fVar3));
    iVar9 = 0x46cf7a;
    dVar6 = round((double)(fVar1 * fVar3));
    iVar7 = (int)ROUND(dVar5);
    iVar8 = 0x46cf94;
    dVar5 = round((double)(fVar2 * fVar3));
    engine_matrix_c_matrixPushAndTransform_FUN_004e56b0
              ((int)ROUND(dVar5),(int)ROUND(dVar6),iVar8,iVar7,iVar9,iVar10);
    return;
  }
  dVar5 = (double)translation->y * _DAT_005bc51b;
  dVar6 = (double)translation->x * _DAT_005bc51b;
  fVar1 = euler_angles->y * _DAT_005bc523;
  fVar2 = euler_angles->z * _DAT_005bc523;
  fVar3 = euler_angles->x * _DAT_005bc523;
  fVar4 = (float)_DAT_005bc52b;
  round((double)translation->z * _DAT_005bc51b);
  dVar5 = round(dVar5);
  dVar6 = round(dVar6);
  iVar7 = (int)ROUND(dVar5);
  iVar8 = (int)ROUND(dVar6);
  dVar5 = round((double)(fVar1 * fVar4));
  dVar6 = round((double)(fVar2 * fVar4));
  iVar9 = (int)ROUND(dVar5);
  iVar10 = 0x46d048;
  dVar5 = round((double)(fVar3 * fVar4));
  engine_matrix_c_matrixPushAndTransform_FUN_004e56b0
            ((int)ROUND(dVar5),(int)ROUND(dVar6),iVar10,iVar9,iVar8,iVar7);
  return;
}
