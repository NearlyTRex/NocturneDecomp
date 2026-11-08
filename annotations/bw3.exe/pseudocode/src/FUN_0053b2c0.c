// Name: FUN_0053b2c0
// Address: 0053b2c0
// Address Range: [[0053b2c0, 0053b2fb]]
// Convention: unknown
// Signature: void FUN_0053b2c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_0053b2c0(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  if ((uint *)(param_1 + 0x14d154) == &param_2) {
    *(uint *)(param_1 + 0x14d160) = param_5;
    return;
  }
  *(uint *)(param_1 + 0x14d154) = param_2;
  *(uint *)(param_1 + 0x14d158) = param_3;
  *(uint *)(param_1 + 0x14d15c) = param_4;
  *(uint *)(param_1 + 0x14d160) = param_5;
  return;
}
