// Name: FUN_005340d0
// Address: 005340d0
// Address Range: [[005340d0, 005341e3]]
// Convention: unknown
// Signature: float * FUN_005340d0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

#include "nocturne.h"

float * FUN_005340d0(int param_1,float *param_2,float *param_3,float *param_4,float *param_5,float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
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
  
  pfVar1 = (float *)(param_1 + 0x1c);
  fVar5 = param_6[1];
  fVar6 = *pfVar1;
  fVar7 = param_6[2];
  fVar8 = *pfVar1;
  pfVar2 = (float *)(param_1 + 0x18);
  fVar9 = param_5[1];
  fVar10 = *pfVar2;
  fVar11 = param_5[2];
  fVar12 = *pfVar2;
  pfVar3 = (float *)(param_1 + 0x14);
  fVar13 = param_4[1];
  fVar14 = *pfVar3;
  fVar15 = param_4[2];
  fVar16 = *pfVar3;
  pfVar4 = (float *)(param_1 + 0x10);
  fVar17 = param_3[1];
  fVar18 = *pfVar4;
  fVar19 = param_3[2];
  fVar20 = *pfVar4;
  *param_2 = *param_3 * *pfVar4 + *param_4 * *pfVar3 + *param_5 * *pfVar2 + *param_6 * *pfVar1;
  param_2[1] = fVar17 * fVar18 + fVar13 * fVar14 + fVar9 * fVar10 + fVar5 * fVar6;
  param_2[2] = fVar19 * fVar20 + fVar15 * fVar16 + fVar11 * fVar12 + fVar7 * fVar8;
  return param_2;
}
