// Name: FUN_004eacc0
// Address: 004eacc0
// Address Range: [[004eacc0, 004eacee]]
// Convention: unknown
// Signature: void FUN_004eacc0(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_004eacc0(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x6f4) = 0x3f800000;
  *(uint *)(param_1 + 0x6e8) = param_3;
  *(uint *)(param_1 + 0x6f0) = *(uint *)(param_1 + 0x6f4);
  *(uint *)(param_1 + 0x6ec) = param_2;
  return;
}
