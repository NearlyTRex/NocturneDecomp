// Name: FUN_00468880
// Address: 00468880
// Address Range: [[00468880, 00468896]]
// Convention: unknown
// Signature: void FUN_00468880(undefined4 *param_1)

#include "nocturne.h"

void FUN_00468880(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = param_1 + 0x1e;
  do {
    *param_1 = 1;
    param_1 = param_1 + 1;
  } while (param_1 != puVar1);
  return;
}
