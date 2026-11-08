// Name: FUN_0040d970
// Address: 0040d970
// Address Range: [[0040d970, 0040d991]]
// Convention: unknown
// Signature: void FUN_0040d970(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040d970(int param_1,uint param_2)

{
  FUN_005bfb70(*(uint *)(param_1 + 4),param_2,
               *(int *)(param_1 + 0xc) * *(int *)(param_1 + 0x10));
  return;
}
