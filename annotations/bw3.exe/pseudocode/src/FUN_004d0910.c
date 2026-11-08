// Name: FUN_004d0910
// Address: 004d0910
// Address Range: [[004d0910, 004d09a1]]
// Convention: unknown
// Signature: void FUN_004d0910(int param_1)

#include "nocturne.h"

void FUN_004d0910(int param_1)

{
  uint local_18;
  uint local_10;
  
  FUN_004e6a90();
  *(int *)(param_1 + 0x2c) = local_18 / (*(int *)(param_1 + 0x1c) << 8);
  *(int *)(param_1 + 0x30) = local_10 / (*(int *)(param_1 + 0x1c) << 8);
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  FUN_004d0110(param_1);
  FUN_0046d460(DAT_005f2afc,1);
  FUN_004d07f0(param_1);
  FUN_0046d460(DAT_005f2afc,0);
  return;
}
