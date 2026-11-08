// Name: FUN_004542a0
// Address: 004542a0
// Address Range: [[004542a0, 0045435e]]
// Convention: unknown
// Signature: void FUN_004542a0(undefined4 param_1,int *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004542a0(uint param_1,int *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  
  DAT_00611230 = *param_2;
  DAT_00611234 = param_2[1];
  DAT_00611238 = param_2[2];
  FUN_005828e0(*(uint *)(&DAT_00b8189c + *param_2 * 4) & 0xff,
               *(uint *)(&DAT_00b8189c + param_2[1] * 4) & 0xff,
               *(uint *)(&DAT_00b8189c + DAT_00611238 * 4) & 0xff);
  fVar1 = (float10)_DAT_005d79f7;
  fVar2 = (float10)(float)param_2[3] * fVar1;
  fVar3 = (float10)(float)param_2[4] * fVar1;
  fVar4 = (float10)(float)param_2[5] * fVar1;
  fVar5 = (float10)(float)param_2[6] * (float10)_DAT_005d79ff;
  fVar1 = (float10)(float)param_2[7] * fVar1;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0();
  _DAT_01481e38 = (int)ROUND(fVar2);
  _DAT_01481e3c = (int)ROUND(fVar3);
  _DAT_01481e40 = (int)ROUND(fVar4);
  _DAT_01481e44 = (int)ROUND(fVar5);
  _DAT_01481e48 = (int)ROUND(fVar1);
  return;
}
