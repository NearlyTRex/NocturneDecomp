// Name: FUN_00434250
// Address: 00434250
// Address Range: [[00434250, 00434267]]
// Convention: unknown
// Signature: void FUN_00434250(undefined4 *param_1)

#include "nocturne.h"

void FUN_00434250(uint *param_1)

{
  param_1[3] = 0;
  param_1[4] = 0;
  *param_1 = param_1[3];
  return;
}
