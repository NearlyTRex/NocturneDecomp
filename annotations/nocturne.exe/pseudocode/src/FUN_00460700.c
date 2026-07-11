// Name: FUN_00460700
// Address: 00460700
// Address Range: [[00460700, 00460756]]
// Convention: unknown
// Signature: void FUN_00460700(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460700(uint param_1,float *param_2)

{
  uint extraout_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)_DAT_0057dc05;
  fVar2 = (float10)param_2[2] * fVar1;
  fVar3 = (float10)param_2[1] * fVar1;
  fVar1 = (float10)*param_2 * fVar1;
  FUN_00563a30();
  FUN_00563a30();
  FUN_00563a30((int)ROUND(fVar2),(int)ROUND(fVar2),(int)ROUND(fVar3));
  FUN_004ce710((int)ROUND(fVar1),extraout_ECX);
  return;
}
