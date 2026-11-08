// Name: FUN_005a0240
// Address: 005a0240
// Address Range: [[005a0240, 005a0261]]
// Convention: unknown
// Signature: void FUN_005a0240(int param_1)

#include "nocturne.h"

void FUN_005a0240(int param_1)

{
  *(uint *)(param_1 + 0x11360) = *(uint *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x11364) = *(uint *)(param_1 + 0x24);
  *(uint *)(param_1 + 0x11368) = *(uint *)(param_1 + 0x28);
  *(uint *)(param_1 + 0x1136c) = *(uint *)(param_1 + 0x2c);
  return;
}
