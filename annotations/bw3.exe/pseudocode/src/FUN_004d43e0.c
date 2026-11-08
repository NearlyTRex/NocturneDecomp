// Name: FUN_004d43e0
// Address: 004d43e0
// Address Range: [[004d43e0, 004d4405]]
// Convention: unknown
// Signature: void FUN_004d43e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_004d43e0(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0xcdcc) = 0;
  FUN_0042c0d0(param_1,param_2,param_3,param_4);
  return;
}
