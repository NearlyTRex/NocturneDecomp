// Name: core_dirmat.cpp_CMatrix3x3f_invert_FUN_0044d880
// Address: 0044d880
// Address Range: [[0044d880, 0044da32]]
// Convention: unknown
// Signature: void core_dirmat_cpp_CMatrix3x3f_invert_FUN_0044d880(float *param_1)

#include "nocturne.h"

void core_dirmat_cpp_CMatrix3x3f_invert_FUN_0044d880(float *param_1)

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
  
  fVar16 = (param_1[3] * param_1[7] - param_1[4] * param_1[6]) * param_1[2] +
           ((param_1[4] * param_1[8] - param_1[5] * param_1[7]) * *param_1 -
           (param_1[3] * param_1[8] - param_1[5] * param_1[6]) * param_1[1]);
  if (ABS(fVar16) == 0.0) {
    PTR_01cc4800 = "..\\core\\dirmat.cpp";
    INT_01cc4804 = 0x69;
    core_main_c_FUN_004c8440("CMatrix::invert - Singular matrix");
  }
  fVar1 = param_1[3];
  fVar2 = param_1[2];
  fVar3 = param_1[4];
  fVar4 = param_1[1];
  fVar5 = param_1[6];
  fVar16 = 1.0 / fVar16;
  fVar6 = param_1[1];
  fVar7 = *param_1;
  fVar8 = param_1[1];
  fVar9 = param_1[3];
  fVar10 = *param_1;
  fVar11 = *param_1;
  fVar12 = param_1[4];
  fVar13 = param_1[2];
  fVar14 = param_1[3];
  fVar15 = *param_1;
  *param_1 = (param_1[4] * param_1[8] - param_1[5] * param_1[7]) * fVar16;
  param_1[1] = -(param_1[1] * param_1[8] - param_1[2] * param_1[7]) * fVar16;
  param_1[2] = (fVar6 * param_1[5] - param_1[2] * param_1[4]) * fVar16;
  param_1[3] = -(param_1[3] * param_1[8] - param_1[5] * param_1[6]) * fVar16;
  param_1[4] = (fVar7 * param_1[8] - fVar2 * param_1[6]) * fVar16;
  param_1[5] = -(fVar15 * param_1[5] - fVar13 * fVar14) * fVar16;
  param_1[6] = (fVar1 * param_1[7] - fVar3 * param_1[6]) * fVar16;
  param_1[7] = -(fVar10 * param_1[7] - fVar4 * fVar5) * fVar16;
  param_1[8] = (fVar11 * fVar12 - fVar8 * fVar9) * fVar16;
  return;
}
