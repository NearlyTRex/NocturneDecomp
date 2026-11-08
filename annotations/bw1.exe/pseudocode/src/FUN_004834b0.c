// Name: FUN_004834b0
// Address: 004834b0
// Address Range: [[004834b0, 00483506]]
// Convention: unknown
// Signature: void FUN_004834b0(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004834b0(uint param_1,float *param_2)

{
  uint extraout_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)_DAT_005db35c;
  fVar2 = (float10)param_2[2] * fVar1;
  fVar3 = (float10)param_2[1] * fVar1;
  fVar1 = (float10)*param_2 * fVar1;
  FUN_005c03a0();
  FUN_005c03a0();
  FUN_005c03a0((int)ROUND(fVar2),(int)ROUND(fVar2),(int)ROUND(fVar3));
  FUN_00509000((int)ROUND(fVar1),extraout_ECX);
  return;
}
