// Name: FUN_005a98a0
// Address: 005a98a0
// Address Range: [[005a98a0, 005a98ba]]
// Convention: unknown
// Signature: undefined4 FUN_005a98a0(int param_1)

#include "nocturne.h"

uint FUN_005a98a0(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x2d4) == 0)) {
    return 1;
  }
  return 0;
}
