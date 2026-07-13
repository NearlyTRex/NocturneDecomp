// Name: FUN_00554600
// Address: 00554600
// Address Range: [[00554600, 00554623]]
// Convention: unknown
// Signature: undefined4 FUN_00554600(int param_1)

#include "nocturne.h"

uint FUN_00554600(int param_1)

{
  if (0 < *(int *)(param_1 + 0x560)) {
    *(int *)(param_1 + 0x560) = *(int *)(param_1 + 0x560) + -1;
    return 1;
  }
  return 0;
}
