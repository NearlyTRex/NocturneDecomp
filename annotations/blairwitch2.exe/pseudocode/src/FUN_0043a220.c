// Name: FUN_0043a220
// Address: 0043a220
// Address Range: [[0043a220, 0043a23a]]
// Convention: unknown
// Signature: undefined4 FUN_0043a220(int param_1)

#include "nocturne.h"

uint FUN_0043a220(int param_1)

{
  if ((*(int *)(param_1 + 0x70) == 1) && (*(int *)(param_1 + 0x430) == 0)) {
    return 1;
  }
  return 0;
}
