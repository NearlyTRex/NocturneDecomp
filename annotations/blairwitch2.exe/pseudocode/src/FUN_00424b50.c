// Name: FUN_00424b50
// Address: 00424b50
// Address Range: [[00424b50, 00424b81]]
// Convention: unknown
// Signature: void FUN_00424b50(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

#include "nocturne.h"

void FUN_00424b50(int param_1,int param_2,uint param_3,uint param_4)

{
  *(uint *)(param_1 + 0x109d0) = param_4;
  *(uint *)(param_1 + 0x109cc) = 0;
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x109c0) = param_3;
    return;
  }
  *(uint *)(param_1 + 0x109c4) = param_3;
  return;
}
