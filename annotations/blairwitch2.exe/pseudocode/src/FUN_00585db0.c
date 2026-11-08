// Name: FUN_00585db0
// Address: 00585db0
// Address Range: [[00585db0, 00585dc8]]
// Convention: unknown
// Signature: void FUN_00585db0(undefined4 *param_1)

#include "nocturne.h"

void FUN_00585db0(uint *param_1)

{
  param_1[2] = 0x42000000;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
