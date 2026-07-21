// Name: core_xform.cpp_multiplyQuaternion_FUN_0055d130
// Address: 0055d130
// Address Range: [[0055d130, 0055d1e1]]
// Convention: unknown
// Signature: void core_xform_cpp_multiplyQuaternion_FUN_0055d130(float *param_1,float *param_2)

#include "nocturne.h"

void core_xform_cpp_multiplyQuaternion_FUN_0055d130(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float *unaff_ESI;
  
  fVar1 = *param_2;
  fVar2 = param_1[1];
  fVar3 = *param_2;
  fVar4 = param_1[2];
  fVar5 = *param_2;
  fVar6 = param_1[3];
  fVar7 = *param_1;
  fVar8 = param_2[1];
  fVar9 = *param_1;
  fVar10 = param_2[2];
  fVar11 = *param_1;
  fVar12 = param_2[3];
  fVar13 = param_2[2];
  fVar14 = param_1[3];
  fVar15 = param_2[3];
  fVar16 = param_1[1];
  fVar17 = param_2[3];
  fVar18 = param_1[2];
  fVar19 = param_2[1];
  fVar20 = param_1[2];
  fVar21 = param_2[1];
  fVar22 = param_1[3];
  fVar23 = param_2[2];
  fVar24 = param_1[1];
  *unaff_ESI = *param_2 * *param_1 -
               (param_2[3] * param_1[3] + param_2[2] * param_1[2] + param_2[1] * param_1[1]);
  unaff_ESI[1] = (fVar13 * fVar14 + fVar7 * fVar8 + fVar1 * fVar2) - fVar17 * fVar18;
  unaff_ESI[2] = (fVar15 * fVar16 + fVar9 * fVar10 + fVar3 * fVar4) - fVar21 * fVar22;
  unaff_ESI[3] = (fVar19 * fVar20 + fVar11 * fVar12 + fVar5 * fVar6) - fVar23 * fVar24;
  return;
}
