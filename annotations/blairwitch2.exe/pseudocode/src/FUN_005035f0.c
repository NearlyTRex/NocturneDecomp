// Name: FUN_005035f0
// Address: 005035f0
// Address Range: [[005035f0, 00503619]]
// Convention: unknown
// Signature: void FUN_005035f0(int param_1)

#include "nocturne.h"

void FUN_005035f0(int param_1)

{
  *(uint *)(param_1 + 4) = 0;
  *(uint *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  FUN_005039e0(param_1);
  return;
}
