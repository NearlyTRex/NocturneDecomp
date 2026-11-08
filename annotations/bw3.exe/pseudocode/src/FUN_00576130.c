// Name: FUN_00576130
// Address: 00576130
// Address Range: [[00576130, 00576193]]
// Convention: unknown
// Signature: void FUN_00576130(int param_1,int param_2)

#include "nocturne.h"

void FUN_00576130(int param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0x27b0) == 0) {
    fVar1 = *(float *)(param_1 + 0x2538) - *(float *)(param_2 + 4);
    *(float *)(param_1 + 0x2538) = fVar1;
    uVar2 = 0x01D22E44;
    if (fVar1 <= 0.0) {
      *(uint *)(param_1 + 0x2538) = 0;
      FUN_004ce9c0(uVar2,param_1 + 0x20,0,10,0);
      *(uint *)(param_1 + 0xd210) = 1;
    }
    FUN_00489b80(param_1,param_2);
  }
  return;
}
