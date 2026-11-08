// Name: FUN_005a8030
// Address: 005a8030
// Address Range: [[005a8030, 005a8042]]
// Convention: unknown
// Signature: void FUN_005a8030(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005a8030(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x3c) != 0) {
    return;
  }
  *(uint *)(param_1 + 0x18) = param_2;
  return;
}
