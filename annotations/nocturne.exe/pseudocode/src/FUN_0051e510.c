// Name: FUN_0051e510
// Address: 0051e510
// Address Range: [[0051e510, 0051e582]]
// Convention: unknown
// Signature: void FUN_0051e510(int param_1,undefined4 param_2,undefined4 param_3,float param_4)

#include "nocturne.h"

void FUN_0051e510(int param_1,uint param_2,uint param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  byte local_c [12];
  
  pfVar3 = (float *)FUN_0051e590(param_1,local_c,param_2,param_3);
  fVar1 = pfVar3[1];
  fVar2 = pfVar3[2];
  *(float *)(param_1 + 0x2254) = *(float *)(param_1 + 0x2254) + *pfVar3 * param_4;
  *(float *)(param_1 + 0x2258) = *(float *)(param_1 + 0x2258) + fVar1 * param_4;
  *(float *)(param_1 + 0x225c) = *(float *)(param_1 + 0x225c) + param_4 * fVar2;
  return;
}
