// Name: FUN_004503f0
// Address: 004503f0
// Address Range: [[004503f0, 004504ae]]
// Convention: unknown
// Signature: void FUN_004503f0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004503f0(uint param_1,int *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_005f17e4 = *param_2;
  DAT_005f17e8 = param_2[1];
  DAT_005f17ec = param_2[2];
  FUN_005661b0(*(uint *)(&DAT_00b9e14c + *param_2 * 4) & 0xff,
               *(uint *)(&DAT_00b9e14c + param_2[1] * 4) & 0xff,
               *(uint *)(&DAT_00b9e14c + DAT_005f17ec * 4) & 0xff);
  fVar1 = (float10)_DAT_005ba05e;
  fVar2 = (float10)(float)param_2[3] * fVar1;
  fVar3 = (float10)(float)param_2[4] * fVar1;
  fVar4 = (float10)(float)param_2[5] * fVar1;
  fVar5 = (float10)(float)param_2[6] * (float10)_DAT_005ba066;
  fVar1 = (float10)(float)param_2[7] * fVar1;
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  FUN_005a3120();
  _DAT_0149e6e8 = (int)ROUND(fVar2);
  _DAT_0149e6ec = (int)ROUND(fVar3);
  _DAT_0149e6f0 = (int)ROUND(fVar4);
  _DAT_0149e6f4 = (int)ROUND(fVar5);
  _DAT_0149e6f8 = (int)ROUND(fVar1);
  return;
}
