// Name: FUN_0046b350
// Address: 0046b350
// Address Range: [[0046b350, 0046b481]]
// Convention: unknown
// Signature: void FUN_0046b350(undefined4 param_1,float *param_2,float *param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046b350(uint param_1,float *param_2,float *param_3)

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
    fVar1 = (float10)param_2[1] * (float10)_DAT_005d1593 * (float10)_DAT_005d159b;
    fVar5 = (float10)*param_2 * (float10)_DAT_005d1593 * (float10)_DAT_005d159b;
    FUN_005b7ff0(0,0,0);
    FUN_005b7ff0();
    FUN_005b7ff0((int)ROUND(fVar1));
    FUN_004e8fd0((int)ROUND(fVar5),extraout_ECX);
    return;
  }
  fVar5 = (float10)param_3[1] * (float10)_DAT_005d158b;
  fVar6 = (float10)*param_3 * (float10)_DAT_005d158b;
  fVar1 = (float10)_DAT_005d1593;
  fVar2 = (float10)_DAT_005d159b;
  fVar3 = (float10)param_2[1] * fVar1 * fVar2;
  fVar4 = (float10)param_2[2] * fVar1 * fVar2;
  fVar2 = (float10)*param_2 * fVar1 * fVar2;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0((int)ROUND(fVar3),(int)ROUND(fVar6),(int)ROUND(fVar5),extraout_ECX_00);
  FUN_004e8fd0((int)ROUND(fVar2),(int)ROUND(fVar4));
  return;
}
