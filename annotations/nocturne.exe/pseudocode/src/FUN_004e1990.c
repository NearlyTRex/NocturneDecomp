// Name: FUN_004e1990
// Address: 004e1990
// Address Range: [[004e1990, 004e19eb]]
// Convention: unknown
// Signature: void FUN_004e1990(int param_1,undefined4 param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e1990(int param_1,uint param_2,float param_3)

{
  int iVar1;
  
  if (param_3 == _DAT_0058b381) {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x50) + 4))
                      (param_1,*(uint *)(param_1 + 4),*(uint *)(param_1 + 8),param_2);
    param_3 = (float)iVar1;
  }
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 4) = param_2;
  *(float *)(param_1 + 8) = param_3;
  FUN_004e19f0(param_1);
  return;
}
