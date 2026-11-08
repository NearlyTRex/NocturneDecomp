// Name: FUN_00482240
// Address: 00482240
// Address Range: [[00482240, 0048224b]]
// Convention: unknown
// Signature: void FUN_00482240(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00482240(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x54) = param_2;
  return;
}
