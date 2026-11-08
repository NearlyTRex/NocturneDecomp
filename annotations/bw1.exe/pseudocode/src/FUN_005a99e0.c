// Name: FUN_005a99e0
// Address: 005a99e0
// Address Range: [[005a99e0, 005a99f8]]
// Convention: unknown
// Signature: void FUN_005a99e0(undefined4 *param_1)

#include "nocturne.h"

void FUN_005a99e0(uint *param_1)

{
  param_1[2] = 0x42000000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
