// Name: FUN_005062a0
// Address: 005062a0
// Address Range: [[005062a0, 00506389]]
// Convention: unknown
// Signature: void FUN_005062a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005062a0(int param_1,int param_2)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  float afStack_48 [16];
  
  pfVar3 = (float *)(param_1 + 0x1340 + param_2 * 0x60);
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
