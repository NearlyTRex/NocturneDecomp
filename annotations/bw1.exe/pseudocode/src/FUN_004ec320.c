// Name: FUN_004ec320
// Address: 004ec320
// Address Range: [[004ec320, 004ec340]]
// Convention: unknown
// Signature: void FUN_004ec320(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ec320(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x1ffa8) = param_2;
  FUN_005bfb70(param_1 + 0xc1d8,0,0x30);
  return;
}
