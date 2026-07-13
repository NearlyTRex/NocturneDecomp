// Name: FUN_00547730
// Address: 00547730
// Address Range: [[00547730, 005477ee]]
// Convention: unknown
// Signature: float * FUN_00547730(int param_1,float *param_2)

#include "nocturne.h"

float * FUN_00547730(int param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  
  iVar2 = FUN_00454530(param_1 + 0x150);
  pfVar1 = *(float **)(iVar2 + 0x350);
  *param_2 = *pfVar1;
  param_2[1] = pfVar1[1];
  param_2[2] = pfVar1[2];
  param_2[3] = pfVar1[3];
  param_2[4] = pfVar1[4];
  param_2[5] = pfVar1[5];
  local_10 = *(uint *)(param_1 + 0x308);
  local_14 = 0;
  local_c = 0;
  FUN_0040a220(param_1,&local_20,&local_14);
  *param_2 = *param_2 + local_20;
  param_2[1] = param_2[1] + local_1c;
  param_2[2] = param_2[2] + local_18;
  param_2[3] = param_2[3] + local_20;
  param_2[4] = param_2[4] + local_1c;
  param_2[5] = param_2[5] + local_18;
  return param_2;
}
