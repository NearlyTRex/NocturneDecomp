// Name: FUN_00449e70
// Address: 00449e70
// Address Range: [[00449e70, 00449eef]]
// Convention: unknown
// Signature: void FUN_00449e70(int param_1)

#include "nocturne.h"

void FUN_00449e70(int param_1)

{
  if (*(int *)(param_1 + 0x2f94) != 0) {
    FUN_005b86a0(*(uint *)(param_1 + 0x2f98));
    *(uint *)(param_1 + 0x2f94) = 0;
    *(uint *)(param_1 + 0x2f98) = 0;
  }
  FUN_00449ff0(param_1);
  if (*(int *)(param_1 + 0x2fa0) != 0) {
    FUN_005b86a0(*(int *)(param_1 + 0x2fa0));
    *(uint *)(param_1 + 0x2fa0) = 0;
  }
  if (*(int *)(param_1 + 0x1c6c) == 0) {
    return;
  }
  FUN_005b86a0(*(int *)(param_1 + 0x1c6c));
  *(uint *)(param_1 + 0x1c6c) = 0;
  return;
}
