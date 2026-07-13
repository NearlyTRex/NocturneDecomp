// Name: FUN_00415900
// Address: 00415900
// Address Range: [[00415900, 004159b3]]
// Convention: unknown
// Signature: void FUN_00415900(int param_1,int param_2)

#include "nocturne.h"

void FUN_00415900(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  
  fVar1 = *(float *)(param_1 + 0x2434) - *(float *)(param_2 + 4);
  *(float *)(param_1 + 0x2434) = fVar1;
  if (fVar1 <= 0.0) {
    *(uint *)(param_1 + 0x2434) = 0;
    FUN_004e16b0(param_1 + 0x150,7,1);
  }
  else {
    iVar2 = FUN_0040de00(0,2);
    if (iVar2 == 0) {
      FUN_004e16b0(param_1 + 0x150,4,1);
    }
    if (iVar2 == 1) {
      FUN_004e16b0(param_1 + 0x150,5,1);
    }
    if (iVar2 == 2) {
      FUN_004e16b0(param_1 + 0x150,6,1);
      FUN_00479f70(param_1,param_2);
      return;
    }
  }
  FUN_00479f70(param_1,param_2);
  return;
}
