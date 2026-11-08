// Name: FUN_00591530
// Address: 00591530
// Address Range: [[00591530, 005915af]]
// Convention: unknown
// Signature: void FUN_00591530(float *param_1,float *param_2)

#include "nocturne.h"

void FUN_00591530(float *param_1,float *param_2)

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
  float *unaff_ESI;
  
  fVar1 = param_1[1];
  fVar2 = param_2[5];
  fVar3 = param_1[1];
  fVar4 = param_2[9];
  fVar5 = *param_1;
  fVar6 = param_2[4];
  fVar7 = *param_1;
  fVar8 = param_2[8];
  fVar9 = param_1[2];
  fVar10 = param_2[6];
  fVar11 = param_1[2];
  fVar12 = param_2[10];
  fVar13 = param_2[7];
  fVar14 = param_2[0xb];
  *unaff_ESI = param_1[2] * param_2[2] + *param_1 * *param_2 + param_1[1] * param_2[1] + param_2[3];
  unaff_ESI[1] = fVar9 * fVar10 + fVar5 * fVar6 + fVar1 * fVar2 + fVar13;
  unaff_ESI[2] = fVar11 * fVar12 + fVar7 * fVar8 + fVar3 * fVar4 + fVar14;
  return;
}
