// Name: FUN_004421a0
// Address: 004421a0
// Address Range: [[004421a0, 004421cf]]
// Convention: unknown
// Signature: void FUN_004421a0(int param_1,int param_2)

#include "nocturne.h"

void FUN_004421a0(int param_1,int param_2)

{
  param_1 = param_2 * 0x11c + param_1;
  *(uint *)(param_1 + 0x470) = 0xffffffff;
  *(uint *)(param_1 + 0x40c) = 0;
  return;
}
