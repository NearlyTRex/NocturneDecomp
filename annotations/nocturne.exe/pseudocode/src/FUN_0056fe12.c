// Name: FUN_0056fe12
// Address: 0056fe12
// Address Range: [[0056fe12, 0056fe64]]
// Convention: unknown
// Signature: void FUN_0056fe12(undefined4 *param_1)

#include "nocturne.h"

void FUN_0056fe12(uint *param_1)

{
  param_1[10] = &PTR_FUN_005a4ab0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  *(byte *)(param_1 + 9) = *(byte *)(param_1 + 9) & 0xfc;
  return;
}
