// Name: FUN_004727f0
// Address: 004727f0
// Address Range: [[004727f0, 00472831]]
// Convention: unknown
// Signature: void FUN_004727f0(int param_1)

#include "nocturne.h"

void FUN_004727f0(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    FUN_005b7fce(*(int *)(param_1 + 8));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    FUN_005b7fce(*(int *)(param_1 + 0xc));
  }
  *(uint *)(param_1 + 0xc) = 0;
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  return;
}
