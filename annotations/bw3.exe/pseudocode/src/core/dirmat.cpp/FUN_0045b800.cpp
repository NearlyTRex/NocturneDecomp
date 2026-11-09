// Name: core_dirmat.cpp_FUN_0045b800
// Address: 0045b800
// Address Range: [[0045b800, 0045b86e]]
// Convention: unknown
// Signature: void core_dirmat_cpp_FUN_0045b800(float *param_1,float *param_2)

#include "nocturne.h"

void core_dirmat_cpp_FUN_0045b800(float *param_1,float *param_2)

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
  float *unaff_ESI;
  
  fVar1 = param_2[1];
  fVar2 = param_1[4];
  fVar3 = param_2[1];
  fVar4 = param_1[7];
  fVar5 = *param_2;
  fVar6 = param_1[3];
  fVar7 = *param_2;
  fVar8 = param_1[6];
  fVar9 = param_2[2];
  fVar10 = param_1[5];
  fVar11 = param_2[2];
  fVar12 = param_1[8];
  *unaff_ESI = param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1];
  unaff_ESI[1] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2;
  unaff_ESI[2] = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4;
  return;
}
