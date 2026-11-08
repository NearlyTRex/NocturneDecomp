// Name: FUN_00460310
// Address: 00460310
// Address Range: [[00460310, 0046031e]]
// Convention: unknown
// Signature: void FUN_00460310(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00460310(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xb28) = param_2;
  return;
}
