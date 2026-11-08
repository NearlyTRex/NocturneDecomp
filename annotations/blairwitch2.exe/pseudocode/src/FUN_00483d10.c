// Name: FUN_00483d10
// Address: 00483d10
// Address Range: [[00483d10, 00483d73]]
// Convention: unknown
// Signature: void FUN_00483d10(int param_1)

#include "nocturne.h"

void FUN_00483d10(int param_1)

{
  if (*(int *)(param_1 + 0x1b0) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x1b0));
    *(uint *)(param_1 + 0x1b0) = 0;
  }
  *(uint *)(param_1 + 0x1ac) = 0;
  if (*(int *)(param_1 + 0x1b8) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x1b8));
    *(uint *)(param_1 + 0x1b8) = 0;
  }
  *(uint *)(param_1 + 0x1b4) = 0;
  FUN_00480e10(param_1);
  return;
}
