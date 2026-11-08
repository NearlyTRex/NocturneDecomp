// Name: FUN_005b1980
// Address: 005b1980
// Address Range: [[005b1980, 005b19af]]
// Convention: unknown
// Signature: void FUN_005b1980(int param_1,int param_2)

#include "nocturne.h"

void FUN_005b1980(int param_1,int param_2)

{
  param_1 = param_2 * 0x11c + param_1;
  *(uint *)(param_1 + 0x470) = 0xffffffff;
  *(uint *)(param_1 + 0x40c) = 0;
  return;
}
