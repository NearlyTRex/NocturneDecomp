// Name: FUN_004fcd40
// Address: 004fcd40
// Address Range: [[004fbb84, 004fbb89] [004fcd40, 004fcd66]]
// Convention: unknown
// Signature: undefined4 FUN_004fcd40(int param_1)

#include "nocturne.h"

uint FUN_004fcd40(int param_1)

{
  if (((*(int *)(param_1 + 0x1fa3c) != 0) && (*(int *)(param_1 + 0x1fa50) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x1fa50) + 0x2d8) == 8)) {
    return 1;
  }
  return 0;
}
