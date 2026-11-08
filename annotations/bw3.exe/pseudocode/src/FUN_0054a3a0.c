// Name: FUN_0054a3a0
// Address: 0054a3a0
// Address Range: [[0054a3a0, 0054a3bb]]
// Convention: unknown
// Signature: undefined4 FUN_0054a3a0(int param_1,int param_2)

#include "nocturne.h"

uint FUN_0054a3a0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0xc00) < 2) {
    return 0;
  }
  return *(uint *)(param_1 + 0x323c + param_2 * 4);
}
