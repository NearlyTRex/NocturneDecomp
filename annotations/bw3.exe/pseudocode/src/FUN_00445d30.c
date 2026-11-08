// Name: FUN_00445d30
// Address: 00445d30
// Address Range: [[00445d30, 00445d3e]]
// Convention: unknown
// Signature: void FUN_00445d30(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00445d30(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2d4) = param_2;
  return;
}
