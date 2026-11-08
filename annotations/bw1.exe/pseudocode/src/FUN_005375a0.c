// Name: FUN_005375a0
// Address: 005375a0
// Address Range: [[005375a0, 005375be]]
// Convention: unknown
// Signature: int FUN_005375a0(int param_1)

#include "nocturne.h"

int FUN_005375a0(int param_1)

{
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  return (*(int *)(param_1 + 0x1c) + 1) * 4 +
         *(int *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
}
