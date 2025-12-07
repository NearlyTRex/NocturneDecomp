// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
// Address: 0048c4f0
// Address Range: [[0048c4f0, 0048c621]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0(CDemonRenderer * this_ptr, CVector3i * position, CVector3i * rotation)

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
          (CDemonRenderer *this_ptr,CVector3i *position,CVector3i *rotation)

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
  ushort uVar12;
  int iVar13;
  int iVar14;
  
  if (rotation == (CVector3i *)0x0) {
    fVar2 = (float10)0.31830988619288902;
    fVar1 = (float)position->x;
    fVar3 = (float10)32768;
    fVar4 = (float10)(float)position->z * fVar2 * fVar3;
    iVar14 = 0x48c533;
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)(float)position->y * fVar2 * fVar3));
    fVar5 = (float10)dVar9;
    iVar13 = 0x48c53a;
    dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
    iVar11 = (int)ROUND(fVar5);
    uVar12 = 0xc554;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar2 * fVar3));
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((ushort)(int)ROUND(dVar10),(ushort)(int)ROUND(dVar9),uVar12,iVar11,iVar13,iVar14);
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
  crt_math_c_round_FUN_005fe6b0((double)((float10)(float)rotation->z * fVar2));
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
  fVar2 = (float10)dVar9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  iVar11 = (int)ROUND(fVar2);
  iVar13 = (int)ROUND(dVar9);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)fVar1 * fVar4 * fVar5));
  fVar2 = (float10)dVar9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  iVar14 = (int)ROUND(fVar2);
  uVar12 = 0xc608;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)(int)ROUND(dVar10),(ushort)(int)ROUND(dVar9),uVar12,iVar14,iVar13,iVar11);
  return;
}
