// Name: FUN_004ec540
// Address: 004ec540
// Address Range: [[004ec540, 004ec565]]
// Convention: unknown
// Signature: void FUN_004ec540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004ec540(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0xc1d0) = 0;
  FUN_0042d5f0(param_1,param_2,param_3,param_4);
  return;
}
