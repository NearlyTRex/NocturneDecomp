// Name: FUN_00573e70
// Address: 00573e70
// Address Range: [[00573e70, 00573eab]]
// Convention: unknown
// Signature: void FUN_00573e70(int param_1)

#include "nocturne.h"

void FUN_00573e70(int param_1)

{
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x14));
    *(uint *)(param_1 + 0x14) = 0;
  }
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  return;
}
