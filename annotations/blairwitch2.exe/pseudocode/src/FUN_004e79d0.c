// Name: FUN_004e79d0
// Address: 004e79d0
// Address Range: [[004e79d0, 004e79ef]]
// Convention: unknown
// Signature: undefined4 FUN_004e79d0(int param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_004e79d0(int param_1,uint param_2)

{
  if (*(int *)(param_1 + 0x430) != 0) {
    return 0;
  }
  *(uint *)(param_1 + 0x430) = param_2;
  return 1;
}
