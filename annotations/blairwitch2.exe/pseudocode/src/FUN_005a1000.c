// Name: FUN_005a1000
// Address: 005a1000
// Address Range: [[005a1000, 005a1020]]
// Convention: unknown
// Signature: void FUN_005a1000(int param_1)

#include "nocturne.h"

void FUN_005a1000(int param_1)

{
  *(uint *)(param_1 + 0x342c) = 0;
  FUN_00503620(param_1 + 0x2b4,6,1);
  return;
}
