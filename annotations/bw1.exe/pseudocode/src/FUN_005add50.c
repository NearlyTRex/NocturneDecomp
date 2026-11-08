// Name: FUN_005add50
// Address: 005add50
// Address Range: [[005add50, 005add5e]]
// Convention: unknown
// Signature: void FUN_005add50(int param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_005add50(int param_1,uint param_2)

{
  *(uint *)(param_1 + 0x2d4) = param_2;
  return;
}
