// Name: FUN_004b4710
// Address: 004b4710
// Address Range: [[004b4710, 004b472f]]
// Convention: unknown
// Signature: void FUN_004b4710(int param_1)

#include "nocturne.h"

void FUN_004b4710(int param_1)

{
  *(uint *)(param_1 + 0x43c) = 0;
  *(byte *)(param_1 + 0xb80) = 0;
  *(uint *)(param_1 + 0x434) = 0;
  return;
}
