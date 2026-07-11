// Name: FUN_00548580
// Address: 00548580
// Address Range: [[00548580, 00548598]]
// Convention: unknown
// Signature: void FUN_00548580(int param_1)

#include "nocturne.h"

void FUN_00548580(int param_1)

{
  if (*(int *)(param_1 + 0x16c) != 4) {
    return;
  }
  *(uint *)(param_1 + 0x2e8) = 1;
  return;
}
