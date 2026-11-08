// Name: FUN_004cb700
// Address: 004cb700
// Address Range: [[004cb700, 004cb791]]
// Convention: unknown
// Signature: void FUN_004cb700(int param_1)

#include "nocturne.h"

void FUN_004cb700(int param_1)

{
  uint local_18;
  uint local_10;
  
  FUN_004ea3b0();
  *(int *)(param_1 + 0x2c) = local_18 / (*(int *)(param_1 + 0x1c) << 8);
  *(int *)(param_1 + 0x30) = local_10 / (*(int *)(param_1 + 0x1c) << 8);
  if (*(int *)(param_1 + 0x2c) < 0) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  }
  if (*(int *)(param_1 + 0x30) < 0) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
  }
  FUN_004caf00(param_1);
  FUN_0046b880(DAT_0060b280,1);
  FUN_004cb5e0(param_1);
  FUN_0046b880(DAT_0060b280,0);
  return;
}
