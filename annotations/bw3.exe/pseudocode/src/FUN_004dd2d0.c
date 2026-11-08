// Name: FUN_004dd2d0
// Address: 004dd2d0
// Address Range: [[004dd2d0, 004dd309]]
// Convention: unknown
// Signature: void FUN_004dd2d0(int param_1)

#include "nocturne.h"

void FUN_004dd2d0(int param_1)

{
  if (*(int *)(param_1 + 0x338) == 0) {
    return;
  }
  *(uint *)(*(int *)(param_1 + 0x464) + 0x314) =
       *(uint *)(*(int *)(param_1 + 0x338) + 0x568);
  *(uint *)(*(int *)(param_1 + 0x464) + 0x318) =
       *(uint *)(*(int *)(param_1 + 0x338) + 0x56c);
  return;
}
