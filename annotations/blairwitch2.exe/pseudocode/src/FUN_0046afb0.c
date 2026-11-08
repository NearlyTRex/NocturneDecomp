// Name: FUN_0046afb0
// Address: 0046afb0
// Address Range: [[0046afb0, 0046b006]]
// Convention: unknown
// Signature: void FUN_0046afb0(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0046afb0(uint param_1,float *param_2)

{
  uint extraout_ECX;
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)_DAT_005d1563;
  fVar2 = (float10)param_2[2] * fVar1;
  fVar3 = (float10)param_2[1] * fVar1;
  fVar1 = (float10)*param_2 * fVar1;
  FUN_005b7ff0();
  FUN_005b7ff0();
  FUN_005b7ff0((int)ROUND(fVar2),(int)ROUND(fVar2),(int)ROUND(fVar3));
  FUN_004ea360((int)ROUND(fVar1),extraout_ECX);
  return;
}
