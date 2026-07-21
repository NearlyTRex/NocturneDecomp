// Name: engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
// Address: 00460aa0
// Address Range: [[00460aa0, 00460bd1]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(undefined4 param_1,float *param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(uint param_1,float *param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  
  if (param_3 == 0) {
    fVar4 = (float10)_DAT_0057dc35;
    fVar1 = param_2[2];
    fVar2 = *param_2;
    fVar5 = (float10)_DAT_0057dc3d;
    uVar16 = 0x460ae3;
    fVar6 = (float10)round((float10)param_2[1] * fVar4 * fVar5);
    uVar14 = 0x460aea;
    fVar7 = (float10)round((float10)fVar1 * fVar4 * fVar5);
    iVar12 = (int)ROUND(fVar6);
    uVar13 = 0x460b04;
    fVar4 = (float10)round((float10)fVar2 * fVar4 * fVar5);
    engine_matrix_c_matrixPushAndTransform_FUN_004cd380
              ((int)ROUND(fVar4),(int)ROUND(fVar7),uVar13,iVar12,uVar14,uVar16);
    return;
  }
  fVar4 = (float10)_DAT_0057dc35;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = *param_2;
  fVar5 = (float10)_DAT_0057dc3d;
  fVar6 = (float10)round();
  fVar7 = (float10)round();
  uVar15 = 0x460b6f;
  fVar8 = (float10)round();
  iVar12 = (int)ROUND(fVar6);
  iVar11 = (int)ROUND(fVar7);
  iVar10 = (int)ROUND(fVar8);
  uVar16 = 0x460b94;
  fVar6 = (float10)round((float10)fVar1 * fVar4 * fVar5);
  uVar14 = 0x460b9b;
  fVar7 = (float10)round((float10)fVar2 * fVar4 * fVar5);
  iVar9 = (int)ROUND(fVar6);
  uVar13 = 0x460bb8;
  fVar4 = (float10)round((float10)fVar3 * fVar4 * fVar5);
  engine_matrix_c_matrixPushAndTransform_FUN_004cd380
            ((int)ROUND(fVar4),(int)ROUND(fVar7),uVar13,iVar9,iVar10,iVar11,iVar12,uVar14,uVar16,
             uVar15);
  return;
}
