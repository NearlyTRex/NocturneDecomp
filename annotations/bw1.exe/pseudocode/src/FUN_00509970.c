// Name: FUN_00509970
// Address: 00509970
// Address Range: [[00509970, 0050999e]]
// Convention: unknown
// Signature: void FUN_00509970(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00509970(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x598) = 0x3f800000;
  *(uint *)(param_1 + 0x58c) = param_3;
  *(uint *)(param_1 + 0x594) = *(uint *)(param_1 + 0x598);
  *(uint *)(param_1 + 0x590) = param_2;
  return;
}
