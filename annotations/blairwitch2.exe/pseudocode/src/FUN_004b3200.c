// Name: FUN_004b3200
// Address: 004b3200
// Address Range: [[004b3200, 004b3218]]
// Convention: unknown
// Signature: void FUN_004b3200(int param_1)

#include "nocturne.h"

void FUN_004b3200(int param_1)

{
  *(uint *)(param_1 + 0x3ac) = 0;
  *(uint *)(param_1 + 0x3a4) = 0;
  return;
}
