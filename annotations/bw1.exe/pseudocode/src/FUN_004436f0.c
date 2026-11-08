// Name: FUN_004436f0
// Address: 004436f0
// Address Range: [[004436f0, 0044372f]]
// Convention: unknown
// Signature: void FUN_004436f0(int param_1)

#include "nocturne.h"

void FUN_004436f0(int param_1)

{
  FUN_00442ff0(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_00442470(param_1 + 0x18);
  *(uint *)(param_1 + 0x2c) = 0xffffffff;
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x28) = 0xffffffff;
  return;
}
