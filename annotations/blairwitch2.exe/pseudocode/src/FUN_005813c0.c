// Name: FUN_005813c0
// Address: 005813c0
// Address Range: [[005813c0, 00581423]]
// Convention: unknown
// Signature: void FUN_005813c0(int param_1,int param_2)

#include "nocturne.h"

void FUN_005813c0(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x281c) == 0) {
    fVar1 = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x25a8) = fVar1;
    uVar2 = 0x01CB8284;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x25a8) = 0;
      FUN_004c9850(uVar2,param_1 + 0x20,0,10,0);
      *(uint *)(param_1 + 0x10cb4) = 1;
    }
    FUN_00488890(param_1,param_2);
  }
  return;
}
