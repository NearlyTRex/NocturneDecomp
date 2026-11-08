// Name: FUN_004c4d10
// Address: 004c4d10
// Address Range: [[004c4d10, 004c4d43]]
// Convention: unknown
// Signature: void FUN_004c4d10(int param_1)

#include "nocturne.h"

void FUN_004c4d10(int param_1)

{
  *(uint *)(param_1 + 0x2fc) = 0;
  *(uint *)(param_1 + 0x300) = 0;
  *(uint *)(param_1 + 0x304) = 0;
  *(uint *)(param_1 + 0x308) = 0x3f800000;
  *(byte *)(param_1 + 0x298) = 0;
  return;
}
