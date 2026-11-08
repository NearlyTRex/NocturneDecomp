// Name: FUN_004ead10
// Address: 004ead10
// Address Range: [[004ead10, 004ead2c]]
// Convention: unknown
// Signature: void FUN_004ead10(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_004ead10(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x6ec) = 0;
  FUN_0058a200(param_1,param_2);
  return;
}
