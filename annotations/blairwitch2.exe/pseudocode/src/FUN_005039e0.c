// Name: FUN_005039e0
// Address: 005039e0
// Address Range: [[005039e0, 005039f2]]
// Convention: unknown
// Signature: void FUN_005039e0(int param_1)

#include "nocturne.h"

void FUN_005039e0(int param_1)

{
  *(uint *)(param_1 + 0x14) = 0xbf800000;
  *(uint *)(param_1 + 0xc) = 0;
  return;
}
