// Name: FUN_004e19f0
// Address: 004e19f0
// Address Range: [[004e19f0, 004e1a02]]
// Convention: unknown
// Signature: void FUN_004e19f0(int param_1)

#include "nocturne.h"

void FUN_004e19f0(int param_1)

{
  *(uint *)(param_1 + 0x14) = 0xbf800000;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
