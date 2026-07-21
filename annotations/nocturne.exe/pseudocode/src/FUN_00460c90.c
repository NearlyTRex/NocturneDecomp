// Name: FUN_00460c90
// Address: 00460c90
// Address Range: [[00460c90, 00460ce6]]
// Convention: unknown
// Signature: void FUN_00460c90(undefined4 param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00460c90(uint param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  uint uVar6;
  int iVar7;
  
  fVar3 = (float10)_DAT_0057dc65;
  fVar1 = param_2[1];
  fVar2 = *param_2;
  fVar4 = (float10)round((float10)param_2[2] * fVar3);
  fVar5 = (float10)round((float10)fVar1 * fVar3);
  iVar7 = (int)ROUND(fVar4);
  uVar6 = 0x460cd0;
  fVar3 = (float10)round((float10)fVar2 * fVar3);
  engine_light_cpp_setDirectionalLightVector_FUN_004c6a10
            ((int)ROUND(fVar3),(int)ROUND(fVar5),uVar6,iVar7);
  return;
}
