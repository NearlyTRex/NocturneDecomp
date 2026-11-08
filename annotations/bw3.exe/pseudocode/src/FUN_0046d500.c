// Name: FUN_0046d500
// Address: 0046d500
// Address Range: [[0046d500, 0046d510]]
// Convention: unknown
// Signature: void FUN_0046d500(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0046d500(int param_1,uint param_2)

{
  DAT_005fba40 = param_2;
  *(uint *)(param_1 + 0x10) = param_2;
  return;
}
