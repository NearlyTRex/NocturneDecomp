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
  ushort rotY;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  
  if (rotation == (CVector3i *)0x0) {
    fVar1 = (float10)0.31830988619288902;
    fVar2 = (float10)32768;
    fVar3 = (float10)(float)position->z * fVar1 * fVar2;
    fVar6 = (float10)(float)position->x * fVar1 * fVar2;
    iVar13 = 0x48c533;
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)(float)position->y * fVar1 * fVar2));
    fVar1 = (float10)dVar8;
    iVar12 = 0x48c53a;
    crt_math_c_round_FUN_005fe6b0((double)fVar3);
    iVar10 = (int)ROUND(fVar1);
    uVar11 = 0xc554;
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
    engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
              ((ushort)(int)ROUND(dVar8),rotY,uVar11,iVar10,iVar12,iVar13);
    return;
  }
  fVar1 = (float10)256;
  fVar2 = (float10)(float)rotation->y * fVar1;
  fVar7 = (float10)(float)rotation->x * fVar1;
  fVar3 = (float10)0.31830988619288902;
  fVar6 = (float10)32768;
  fVar4 = (float10)(float)position->y * fVar3 * fVar6;
  fVar5 = (float10)(float)position->z * fVar3 * fVar6;
  fVar6 = (float10)(float)position->x * fVar3 * fVar6;
  crt_math_c_round_FUN_005fe6b0((double)((float10)(float)rotation->z * fVar1));
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar2);
  fVar1 = (float10)dVar8;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  iVar10 = (int)ROUND(fVar1);
  iVar12 = (int)ROUND(dVar8);
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar4);
  fVar1 = (float10)dVar8;
  dVar8 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
  iVar13 = (int)ROUND(fVar1);
  uVar11 = 0xc608;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  engine_matrix_c_matrixPushAndTransform_FUN_0050cee0
            ((ushort)(int)ROUND(dVar9),(ushort)(int)ROUND(dVar8),uVar11,iVar13,iVar12,iVar10);
  return;
}
