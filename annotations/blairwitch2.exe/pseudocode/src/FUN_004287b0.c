// Name: FUN_004287b0
// Address: 004287b0
// Address Range: [[004287b0, 004287e2]]
// Convention: unknown
// Signature: undefined4 FUN_004287b0(int param_1)

#include "nocturne.h"

uint FUN_004287b0(int param_1)

{
  if ((*(int *)(param_1 + 0x2774) != 0) &&
     ((*(int *)(param_1 + 0x27ac) != 0 || (*(int *)(param_1 + 0x27b0) != 0)))) {
    return 0;
  }
  return 1;
}
