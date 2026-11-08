// Name: FUN_005559b0
// Address: 005559b0
// Address Range: [[005559b0, 005559c6]]
// Convention: unknown
// Signature: void FUN_005559b0(int param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_005559b0(int param_1,int param_2,uint param_3)

{
  *(uint *)(param_2 * 0x1a4 + param_1 + 0x1a4) = param_3;
  return;
}
