// Name: FUN_004a2c90
// Address: 004a2c90
// Address Range: [[004a2c90, 004a2cbb]]
// Convention: unknown
// Signature: void FUN_004a2c90(int param_1)

#include "nocturne.h"

void FUN_004a2c90(int param_1)

{
  FUN_004a2b30(param_1);
  *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x20);
  FUN_004a31c0(param_1);
  return;
}
