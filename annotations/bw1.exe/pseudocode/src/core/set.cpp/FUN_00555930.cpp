// Name: core_set.cpp_FUN_00555930
// Address: 00555930
// Address Range: [[00555930, 0055596b]]
// Convention: unknown
// Signature: void core_set_cpp_FUN_00555930(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void core_set_cpp_FUN_00555930(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

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
