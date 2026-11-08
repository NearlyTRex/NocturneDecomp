// Name: FUN_00421ab0
// Address: 00421ab0
// Address Range: [[00421ab0, 00421acd]]
// Convention: unknown
// Signature: undefined4 FUN_00421ab0(int param_1)

#include "nocturne.h"

uint FUN_00421ab0(int param_1)

{
  if (*(int *)(param_1 + 0x70) == 2) {
    return 2;
  }
  if (*(int *)(param_1 + 0xd054) == 3) {
    return 2;
  }
  return 0;
}
