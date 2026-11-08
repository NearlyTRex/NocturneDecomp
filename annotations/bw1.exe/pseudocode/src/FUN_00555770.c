// Name: FUN_00555770
// Address: 00555770
// Address Range: [[00555770, 00555792]]
// Convention: unknown
// Signature: void FUN_00555770(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00555770(int param_1,uint param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0x15ae9c) = param_2;
  *(uint *)(param_1 + 0x15aea0) = param_3;
  *(uint *)(param_1 + 0x15aea4) = param_4;
  return;
}
