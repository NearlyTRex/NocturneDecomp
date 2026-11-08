// Name: FUN_005b5600
// Address: 005b5600
// Address Range: [[005b5600, 005b5617]]
// Convention: unknown
// Signature: void FUN_005b5600(int param_1)

#include "nocturne.h"

void FUN_005b5600(int param_1)

{
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x2c);
  *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x1c);
  return;
}
