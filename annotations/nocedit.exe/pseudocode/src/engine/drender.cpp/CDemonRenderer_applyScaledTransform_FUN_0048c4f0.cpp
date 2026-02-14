// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
// Address Range: [[0048c4f0, 0048c621]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if (rotation == (CVector3i *)0x0) {
    fVar2 = (float10)0.31830988619288902;
    fVar1 = (float)position->x;
    fVar3 = (float10)32768;
    fVar4 = (float10)(float)position->z * fVar2 * fVar3;
    iVar14 = 0x48c533;
    dVar9 = round((double)((float10)(float)position->y * fVar2 * fVar3));
    fVar5 = (float10)dVar9;
    iVar13 = 0x48c53a;
    dVar9 = round((double)fVar4);
    iVar11 = (int)ROUND(fVar5);
    iVar12 = 0x48c554;
    dVar10 = round((double)((float10)fVar1 * fVar2 * fVar3));
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((int)ROUND(dVar10),(int)ROUND(dVar9),iVar12,iVar11,iVar13,iVar14);
    return;
  }
  fVar2 = (float10)256;
  fVar3 = (float10)(float)rotation->y * fVar2;
  fVar8 = (float10)(float)rotation->x * fVar2;
  fVar4 = (float10)0.31830988619288902;
  fVar1 = (float)position->y;
  fVar5 = (float10)32768;
  fVar6 = (float10)(float)position->z * fVar4 * fVar5;
  fVar7 = (float10)(float)position->x * fVar4 * fVar5;
  round((double)((float10)(float)rotation->z * fVar2));
  dVar9 = round((double)fVar3);
  fVar2 = (float10)dVar9;
  dVar9 = round((double)fVar8);
  iVar11 = (int)ROUND(fVar2);
  iVar12 = (int)ROUND(dVar9);
  dVar9 = round((double)((float10)fVar1 * fVar4 * fVar5));
  fVar2 = (float10)dVar9;
  dVar9 = round((double)fVar6);
  iVar13 = (int)ROUND(fVar2);
  iVar14 = 0x48c608;
  dVar10 = round((double)fVar7);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((int)ROUND(dVar10),(int)ROUND(dVar9),iVar14,iVar13,iVar12,iVar11);
  return;
}
