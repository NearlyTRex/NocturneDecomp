// Name: FUN_004434e0
// Address: 004434e0
// Address Range: [[004434e0, 00443526]]
// Convention: unknown
// Signature: void FUN_004434e0(int param_1)

#include "nocturne.h"

void FUN_004434e0(int param_1)

{
  FUN_00442ff0(param_1 + 4,*(uint *)(param_1 + 0x20),*(uint *)(param_1 + 0x24));
  FUN_00442470(param_1 + 0x18);
  *(uint *)(param_1 + 0x30) = 0xffffffff;
  *(uint *)(param_1 + 0x34) = 0xffffffff;
  *(uint *)(param_1 + 0x38) = 0xffffffff;
  *(uint *)(param_1 + 0x3c) = 0xffffffff;
  return;
}
