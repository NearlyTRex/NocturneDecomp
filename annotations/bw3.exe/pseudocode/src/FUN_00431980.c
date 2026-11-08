// Name: FUN_00431980
// Address: 00431980
// Address Range: [[00431980, 004319a5]]
// Convention: unknown
// Signature: void FUN_00431980(int param_1)

#include "nocturne.h"

void FUN_00431980(int param_1)

{
  if (*(int *)(param_1 + 0x2740) == 0) {
    return;
  }
  FUN_00463d10(*(int *)(param_1 + 0x2740));
  *(uint *)(param_1 + 0x2740) = 0;
  return;
}
