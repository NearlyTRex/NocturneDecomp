// Name: FUN_005a5010
// Address: 005a5010
// Address Range: [[005a5010, 005a5073]]
// Convention: unknown
// Signature: void FUN_005a5010(int param_1,int param_2)

#include "nocturne.h"

void FUN_005a5010(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x27b0) == 0) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    uVar2 = 0x01CD0E3C;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      FUN_004e6060(uVar2,param_1 + 0x20,0,10,0);
      *(uint *)(param_1 + 0xc424) = 1;
    }
    FUN_004a0f00(param_1,param_2);
  }
  return;
}
