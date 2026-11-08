// Name: FUN_004a1e90
// Address: 004a1e90
// Address Range: [[004a1e90, 004a1eba]]
// Convention: unknown
// Signature: int FUN_004a1e90(int param_1)

#include "nocturne.h"

int FUN_004a1e90(int param_1)

{
  *(byte ***)(param_1 + 0x14) = &PTR_FUN_005f6ec4;
  if (*(int *)(param_1 + 0x10) == 0) {
    return param_1;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x10));
  *(uint *)(param_1 + 0x10) = 0;
  return param_1;
}
