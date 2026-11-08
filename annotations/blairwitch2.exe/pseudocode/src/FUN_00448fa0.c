// Name: FUN_00448fa0
// Address: 00448fa0
// Address Range: [[00448fa0, 00448fc5]]
// Convention: unknown
// Signature: void FUN_00448fa0(int param_1)

#include "nocturne.h"

void FUN_00448fa0(int param_1)

{
  if (*(int *)(param_1 + 0x300) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x300));
  *(uint *)(param_1 + 0x300) = 0;
  return;
}
