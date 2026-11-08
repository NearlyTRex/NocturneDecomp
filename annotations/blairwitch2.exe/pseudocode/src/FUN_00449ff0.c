// Name: FUN_00449ff0
// Address: 00449ff0
// Address Range: [[00449ff0, 0044a012]]
// Convention: unknown
// Signature: void FUN_00449ff0(int param_1)

#include "nocturne.h"

void FUN_00449ff0(int param_1)

{
  if (*(int *)(param_1 + 0x2f9c) == 0) {
    return;
  }
  *(uint *)(param_1 + 0x164) = 0;
  *(uint *)(param_1 + 0x2f9c) = 0;
  return;
}
