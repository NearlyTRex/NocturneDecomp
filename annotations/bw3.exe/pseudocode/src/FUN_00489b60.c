// Name: FUN_00489b60
// Address: 00489b60
// Address Range: [[00489b60, 00489b78]]
// Convention: unknown
// Signature: void FUN_00489b60(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00489b60(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0xcde8) = 0;
  *(uint *)(param_1 + 0xd04c) = param_2;
  return;
}
