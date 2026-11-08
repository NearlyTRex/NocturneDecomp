// Name: FUN_0045f700
// Address: 0045f700
// Address Range: [[0045f700, 0045f76e]]
// Convention: unknown
// Signature: void FUN_0045f700(float *param_1,float *param_2)

#include "nocturne.h"

void FUN_0045f700(float *param_1,float *param_2)

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
  fVar4 = param_1[5];
  fVar5 = *param_2;
  fVar6 = param_1[1];
  fVar7 = *param_2;
  fVar8 = param_1[2];
  fVar9 = param_2[2];
  fVar10 = param_1[7];
  fVar11 = param_2[2];
  fVar12 = param_1[8];
  *unaff_ESI = param_2[2] * param_1[6] + *param_2 * *param_1 + param_2[1] * param_1[3];
  unaff_ESI[1] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2;
  unaff_ESI[2] = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4;
  return;
}
