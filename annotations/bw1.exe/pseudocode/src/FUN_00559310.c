// Name: FUN_00559310
// Address: 00559310
// Address Range: [[00559310, 00559346]]
// Convention: unknown
// Signature: void FUN_00559310(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void FUN_00559310(int param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  *(uint *)(param_1 + 0x15f698) = 3;
  *(uint *)(param_1 + 0x15f69c) = param_2;
  *(uint *)(param_1 + 0x15f6a0) = param_3;
  *(uint *)(param_1 + 0x15f6a4) = param_4;
  *(uint *)(param_1 + 0x15f6a8) = param_5;
  return;
}
