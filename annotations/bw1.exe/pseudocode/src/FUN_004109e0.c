// Name: FUN_004109e0
// Address: 004109e0
// Address Range: [[004109e0, 004109fe]]
// Convention: unknown
// Signature: void FUN_004109e0(int param_1)

#include "nocturne.h"

void FUN_004109e0(int param_1)

{
  if (*(int *)(param_1 + 0x164) == 0) {
    return;
  }
  FUN_00559440(0x01E82168,param_1);
  return;
}
