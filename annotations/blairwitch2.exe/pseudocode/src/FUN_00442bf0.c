// Name: FUN_00442bf0
// Address: 00442bf0
// Address Range: [[00442bf0, 00442cae]]
// Convention: unknown
// Signature: void FUN_00442bf0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00442bf0(uint param_1,int *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_00609fa4 = *param_2;
  DAT_00609fa8 = param_2[1];
  DAT_00609fac = param_2[2];
  FUN_0055fe90(*(uint *)(&DAT_00b6639c + *param_2 * 4) & 0xff,
               *(uint *)(&DAT_00b6639c + param_2[1] * 4) & 0xff,
               *(uint *)(&DAT_00b6639c + DAT_00609fac * 4) & 0xff);
  fVar1 = (float10)_DAT_005ce72e;
  fVar2 = (float10)(float)param_2[3] * fVar1;
  fVar3 = (float10)(float)param_2[4] * fVar1;
  fVar4 = (float10)(float)param_2[5] * fVar1;
  fVar5 = (float10)(float)param_2[6] * (float10)_DAT_005ce736;
  fVar1 = (float10)(float)param_2[7] * fVar1;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0();
  _DAT_01466938 = (int)ROUND(fVar2);
  _DAT_0146693c = (int)ROUND(fVar3);
  _DAT_01466940 = (int)ROUND(fVar4);
  _DAT_01466944 = (int)ROUND(fVar5);
  _DAT_01466948 = (int)ROUND(fVar1);
  return;
}
