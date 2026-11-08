// Name: FUN_00570130
// Address: 00570130
// Address Range: [[00570130, 00570155]]
// Convention: unknown
// Signature: void FUN_00570130(int param_1)

#include "nocturne.h"

void FUN_00570130(int param_1)

{
  if (*(int *)(param_1 + 0x120) == 0) {
    return;
  }
  FUN_005c09f0(*(int *)(param_1 + 0x120));
  *(uint *)(param_1 + 0x120) = 0;
  return;
}
