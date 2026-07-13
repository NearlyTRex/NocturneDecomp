// Name: FUN_004accc0
// Address: 004accc0
// Address Range: [[004accc0, 004acce8]]
// Convention: unknown
// Signature: undefined4 FUN_004accc0(int param_1)

#include "nocturne.h"

uint FUN_004accc0(int param_1)

{
  if ((*(int *)(param_1 + 0x178) != 0) && (*(int *)(param_1 + 0x1e0) == 0)) {
    *(uint *)(param_1 + 0x100) = 1;
    return 0;
  }
  return 1;
}
