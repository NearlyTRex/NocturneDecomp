// Name: FUN_00565810
// Address: 00565810
// Address Range: [[00565810, 0056582b]]
// Convention: unknown
// Signature: undefined4 FUN_00565810(int param_1,int param_2)

#include "nocturne.h"

uint FUN_00565810(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc00) < 2) {
    return 0;
  }
  return *(uint *)(param_1 + 0x323c + param_2 * 4);
}
