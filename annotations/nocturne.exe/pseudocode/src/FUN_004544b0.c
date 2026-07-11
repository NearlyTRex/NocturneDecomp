// Name: FUN_004544b0
// Address: 004544b0
// Address Range: [[004544b0, 004544c6]]
// Convention: unknown
// Signature: void FUN_004544b0(undefined4 *param_1)

#include "nocturne.h"

void FUN_004544b0(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 0x1e;
  do {
    *param_1 = 1;
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  return;
}
