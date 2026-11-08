// Name: FUN_0046cf30
// Address: 0046cf30
// Address Range: [[0046cf30, 0046d061]]
// Convention: unknown
// Signature: void FUN_0046cf30(undefined4 param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046cf30(uint param_1,float *param_2,float *param_3)

{
  uint extraout_ECX;
  uint extraout_ECX_00;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  
  if (param_3 == (float *)0x0) {
    fVar1 = (float10)param_2[1] * (float10)_DAT_005bc523 * (float10)_DAT_005bc52b;
    fVar5 = (float10)*param_2 * (float10)_DAT_005bc523 * (float10)_DAT_005bc52b;
    FUN_005a3120(0,0,0);
    FUN_005a3120();
    FUN_005a3120((int)ROUND(fVar1));
    FUN_004e56b0((int)ROUND(fVar5),extraout_ECX);
    return;
  }
  fVar5 = (float10)param_3[1] * (float10)_DAT_005bc51b;
  fVar6 = (float10)*param_3 * (float10)_DAT_005bc51b;
  fVar1 = (float10)_DAT_005bc523;
  fVar2 = (float10)_DAT_005bc52b;
  fVar3 = (float10)param_2[1] * fVar1 * fVar2;
  fVar4 = (float10)param_2[2] * fVar1 * fVar2;
  fVar2 = (float10)*param_2 * fVar1 * fVar2;
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120((int)ROUND(fVar3),(int)ROUND(fVar6),(int)ROUND(fVar5),extraout_ECX_00);
  FUN_004e56b0((int)ROUND(fVar2),(int)ROUND(fVar4));
  return;
}
