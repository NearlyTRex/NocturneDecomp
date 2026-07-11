// Name: FUN_0044d7a0
// Address: 0044d7a0
// Address Range: [[0044d7a0, 0044d878]]
// Convention: unknown
// Signature: void FUN_0044d7a0(float *param_1,float *param_2)

#include "nocturne.h"

void FUN_0044d7a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  
  fVar6 = (float10)fsin((float10)*param_2);
  fVar7 = (float10)fsin((float10)param_2[2]);
  fVar8 = (float10)fsin((float10)param_2[1]);
  fVar9 = (float10)fcos((float10)*param_2);
  fVar10 = (float10)fcos((float10)param_2[2]);
  fVar11 = (float10)fcos((float10)param_2[1]);
  fVar1 = (float)fVar8;
  fVar2 = (float)fVar6;
  fVar3 = (float)fVar7;
  fVar4 = (float)fVar10;
  fVar5 = (float)fVar11;
  param_1[2] = (float)((float10)fVar1 * fVar9);
  param_1[5] = -fVar2;
  param_1[3] = (float)(fVar7 * fVar9);
  param_1[4] = (float)(fVar10 * fVar9);
  param_1[8] = (float)((float10)fVar5 * fVar9);
  *param_1 = (float)((float10)fVar5 * (float10)fVar4 + fVar8 * (float10)fVar2 * (float10)fVar3);
  param_1[1] = (float)(-(float10)fVar5 * (float10)fVar3 + fVar8 * (float10)fVar2 * (float10)fVar4);
  param_1[7] = (float)((float10)fVar3 * (float10)fVar1 + fVar11 * (float10)fVar2 * (float10)fVar4);
  param_1[6] = (float)(-(float10)fVar1 * (float10)fVar4 + fVar11 * (float10)fVar2 * (float10)fVar3);
  return;
}
