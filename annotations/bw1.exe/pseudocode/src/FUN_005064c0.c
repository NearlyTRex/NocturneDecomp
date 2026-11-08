// Name: FUN_005064c0
// Address: 005064c0
// Address Range: [[005064c0, 0050650e]]
// Convention: unknown
// Signature: undefined4 FUN_005064c0(int param_1)

#include "nocturne.h"

uint FUN_005064c0(int param_1)

{
  FUN_004087b0(param_1);
  *(uint *)(0x01CCF390 + 0x210) = 1;
  FUN_004688a0(param_1 + 0x158,0,0xffffffff);
  *(uint *)(0x01CCF390 + 0x210) = 0;
  FUN_004087f0(param_1);
  return 1;
}
