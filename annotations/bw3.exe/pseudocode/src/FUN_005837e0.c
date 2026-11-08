// Name: FUN_005837e0
// Address: 005837e0
// Address Range: [[005837e0, 005837f7]]
// Convention: unknown
// Signature: void FUN_005837e0(int param_1)

#include "nocturne.h"

void FUN_005837e0(int param_1)

{
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x1c);
  return;
}
