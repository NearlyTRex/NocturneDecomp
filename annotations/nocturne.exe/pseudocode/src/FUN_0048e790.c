// Name: FUN_0048e790
// Address: 0048e790
// Address Range: [[0048e790, 0048e820]]
// Convention: unknown
// Signature: undefined4 FUN_0048e790(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0048e790(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte auStack_34 [36];
  float afStack_10 [3];
  
  pfVar3 = (float *)(**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,auStack_34);
  fVar1 = (pfVar3[1] + pfVar3[4]) * _DAT_0058165b;
  fVar2 = (pfVar3[2] + pfVar3[5]) * _DAT_0058165b;
  if (param_2 == afStack_10) {
    return 1;
  }
  *param_2 = (*pfVar3 + pfVar3[3]) * _DAT_0058165b;
  param_2[1] = fVar1;
  param_2[2] = fVar2;
  return 1;
}
