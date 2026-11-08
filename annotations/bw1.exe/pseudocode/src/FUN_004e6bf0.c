// Name: FUN_004e6bf0
// Address: 004e6bf0
// Address Range: [[004e6bf0, 004e6c47]]
// Convention: unknown
// Signature: void FUN_004e6bf0(int param_1)

#include "nocturne.h"

void FUN_004e6bf0(int param_1)

{
  if ((*(int *)(param_1 + 0x2dc) == 0) && (*(int *)(param_1 + 0x2e0) == 0)) {
    *(uint *)(param_1 + 0x2e0) = 1;
    *(uint *)(param_1 + 0x2d4) = 0;
    if (*(char *)(param_1 + 0x34c) != '\0') {
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,param_1 + 0x34c);
    }
    FUN_0054f060(0x01E82168,param_1);
  }
  return;
}
