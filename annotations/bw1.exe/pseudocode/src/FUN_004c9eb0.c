// Name: FUN_004c9eb0
// Address: 004c9eb0
// Address Range: [[004c9eb0, 004c9ee2]]
// Convention: unknown
// Signature: undefined4 FUN_004c9eb0(int param_1)

#include "nocturne.h"

uint FUN_004c9eb0(int param_1)

{
  *(uint *)(param_1 + 0x1ff78) = 0;
  if (*(int *)(param_1 + 0x25b0) == 0) {
    return 0;
  }
  FUN_005247c0(param_1 + 0x158,5,1);
  return 1;
}
