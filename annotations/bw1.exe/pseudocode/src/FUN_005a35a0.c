// Name: FUN_005a35a0
// Address: 005a35a0
// Address Range: [[005a35a0, 005a35bf]]
// Convention: unknown
// Signature: undefined4 FUN_005a35a0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_005a35a0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x85c) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x85c) = param_2;
  return 1;
}
