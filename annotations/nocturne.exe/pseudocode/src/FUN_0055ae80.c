// Name: FUN_0055ae80
// Address: 0055ae80
// Address Range: [[0055ae80, 0055afad]]
// Convention: unknown
// Signature: void FUN_0055ae80(float *param_1,float *param_2,float *param_3)

#include "nocturne.h"

void FUN_0055ae80(float *param_1,float *param_2,float *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)*param_3);
  fVar7 = (float10)fcos((float10)*param_3);
  fVar8 = (float10)fsin((float10)param_3[2]);
  fVar9 = (float10)fcos((float10)param_3[2]);
  fVar10 = (float10)fsin((float10)param_3[1]);
  fVar11 = (float10)fcos((float10)param_3[1]);
  dVar1 = (double)fVar10;
  dVar2 = (double)fVar7;
  dVar3 = (double)fVar8;
  dVar4 = (double)fVar9;
  dVar5 = (double)fVar11;
  param_1[9] = (float)-fVar6;
  param_1[8] = (float)((float10)dVar1 * (float10)dVar2);
  param_1[1] = (float)(fVar8 * (float10)dVar2);
  param_1[5] = (float)(fVar9 * (float10)dVar2);
  param_1[10] = (float)((float10)dVar5 * (float10)dVar2);
  *param_1 = (float)((float10)dVar5 * (float10)dVar4 + fVar10 * fVar6 * (float10)dVar3);
  param_1[6] = (float)((float10)dVar3 * (float10)dVar1 + fVar11 * fVar6 * (float10)dVar4);
  param_1[4] = (float)(-(float10)dVar5 * (float10)dVar3 + fVar10 * fVar6 * (float10)dVar4);
  param_1[2] = (float)(-(float10)dVar1 * (float10)dVar4 + fVar11 * fVar6 * (float10)dVar3);
  param_1[3] = -(param_2[2] * param_1[2] + *param_2 * *param_1 + param_2[1] * param_1[1]);
  param_1[7] = -(param_2[2] * param_1[6] + *param_2 * param_1[4] + param_2[1] * param_1[5]);
  param_1[0xb] = -(param_2[2] * param_1[10] + *param_2 * param_1[8] + param_2[1] * param_1[9]);
  return;
}
