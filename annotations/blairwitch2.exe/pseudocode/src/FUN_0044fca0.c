// Name: FUN_0044fca0
// Address: 0044fca0
// Address Range: [[0044fca0, 0044fcb6]]
// Convention: unknown
// Signature: void FUN_0044fca0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0044fca0(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 0x1e;
  do {
    *param_1 = 1;
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  return;
}
