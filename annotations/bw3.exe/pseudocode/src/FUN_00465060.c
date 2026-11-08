// Name: FUN_00465060
// Address: 00465060
// Address Range: [[00465060, 0046506e]]
// Convention: unknown
// Signature: void FUN_00465060(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00465060(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x9cc) = param_2;
  return;
}
