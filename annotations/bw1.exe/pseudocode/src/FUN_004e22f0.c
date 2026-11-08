// Name: FUN_004e22f0
// Address: 004e22f0
// Address Range: [[004e22f0, 004e2318]]
// Convention: unknown
// Signature: undefined4 FUN_004e22f0(int param_1)

#include "nocturne.h"

uint FUN_004e22f0(int param_1)

{
  if ((*(int *)(param_1 + 0x180) != 0) && (*(int *)(param_1 + 0x1e8) == 0)) {
    *(uint *)(param_1 + 0x100) = 1;
    return 0;
  }
  return 1;
}
