// Name: FUN_00462670
// Address: 00462670
// Address Range: [[00462670, 004626ef]]
// Convention: unknown
// Signature: void FUN_00462670(int param_1)

#include "nocturne.h"

void FUN_00462670(int param_1)

{
  if (*(int *)(param_1 + 0x2f94) != 0) {
    FUN_005c09f0(*(uint *)(param_1 + 0x2f98));
    *(uint *)(param_1 + 0x2f94) = 0;
    *(uint *)(param_1 + 0x2f98) = 0;
  }
  FUN_004627f0(param_1);
  if (*(int *)(param_1 + 0x2fa0) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x2fa0));
    *(uint *)(param_1 + 0x2fa0) = 0;
  }
  if (*(int *)(param_1 + 0x1c6c) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x1c6c));
  *(uint *)(param_1 + 0x1c6c) = 0;
  return;
}
