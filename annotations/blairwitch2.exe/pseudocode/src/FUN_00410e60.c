// Name: FUN_00410e60
// Address: 00410e60
// Address Range: [[00410e60, 00410e7e]]
// Convention: unknown
// Signature: void FUN_00410e60(int param_1)

#include "nocturne.h"

void FUN_00410e60(int param_1)

{
  if (*(int *)(param_1 + 0x2c0) == 0) {
    return;
  }
  FUN_00538020(0x01E661B8,param_1);
  return;
}
