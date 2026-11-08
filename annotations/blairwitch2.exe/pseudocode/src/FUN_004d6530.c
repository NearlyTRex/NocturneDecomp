// Name: FUN_004d6530
// Address: 004d6530
// Address Range: [[004d6530, 004d653e]]
// Convention: unknown
// Signature: void FUN_004d6530(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004d6530(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x25640) = param_2;
  return;
}
