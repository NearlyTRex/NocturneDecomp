// Name: FUN_00415710
// Address: 00415710
// Address Range: [[00415710, 0041572e]]
// Convention: unknown
// Signature: undefined4 FUN_00415710(int param_1)

#include "nocturne.h"

uint FUN_00415710(int param_1)

{
  if ((*(int *)(param_1 + 0x158) == 0) && (*(int *)(param_1 + 0xcc4) == 0)) {
    return 3;
  }
  return 0;
}
