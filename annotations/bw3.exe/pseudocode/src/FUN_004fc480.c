// Name: FUN_004fc480
// Address: 004fc480
// Address Range: [[004fc480, 004fc492]]
// Convention: unknown
// Signature: void FUN_004fc480(int param_1)

#include "nocturne.h"

void FUN_004fc480(int param_1)

{
  *(uint *)(param_1 + 0x14) = 0xbf800000;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
