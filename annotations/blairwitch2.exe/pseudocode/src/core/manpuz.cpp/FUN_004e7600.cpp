// Name: core_manpuz.cpp_FUN_004e7600
// Address: 004e7600
// Address Range: [[004e7600, 004e76e9]]
// Convention: unknown
// Signature: void core_manpuz_cpp_FUN_004e7600(int param_1,int param_2)

#include "nocturne.h"

void core_manpuz_cpp_FUN_004e7600(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float afStack_48 [16];
  
  pfVar3 = (float *)(param_1 + 0x149c + param_2 * 0x60);
  pfVar1 = pfVar3 + 6;
  fVar2 = 1.0 - pfVar3[6];
  if (pfVar3 + 7 == afStack_48) {
    return;
  }
  pfVar3[7] = *pfVar3 * fVar2 + pfVar3[3] * *pfVar1;
  pfVar3[8] = pfVar3[1] * fVar2 + pfVar3[4] * *pfVar1;
  pfVar3[9] = pfVar3[2] * fVar2 + pfVar3[5] * *pfVar1;
  return;
}
