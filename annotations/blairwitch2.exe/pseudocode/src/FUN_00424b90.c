// Name: FUN_00424b90
// Address: 00424b90
// Address Range: [[00424b90, 00424ba8]]
// Convention: unknown
// Signature: void FUN_00424b90(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void FUN_00424b90(int param_1,uint param_2,uint param_3)

{
  *(uint *)(param_1 + 0x109c8) = param_2;
  *(uint *)(param_1 + 0x109d4) = param_3;
  return;
}
