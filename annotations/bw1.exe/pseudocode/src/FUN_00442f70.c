// Name: FUN_00442f70
// Address: 00442f70
// Address Range: [[00442f70, 00442f87]]
// Convention: unknown
// Signature: void FUN_00442f70(undefined4 *param_1)

#include "nocturne.h"

void FUN_00442f70(uint *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_1[3];
  return;
}
