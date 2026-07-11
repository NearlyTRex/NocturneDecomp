// Name: FUN_0056ff2a
// Address: 0056ff2a
// Address Range: [[0056ff2a, 0056ff81]]
// Convention: unknown
// Signature: void FUN_0056ff2a(undefined4 *param_1,int param_2)

#include "nocturne.h"

void FUN_0056ff2a(uint *param_1,int param_2)

{
  *param_1 = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 6;
  param_1[7] = 0;
  *(byte *)(param_1 + 9) = 0x20;
  param_1[2] = 0;
  param_1[8] = 0;
  if (param_2 == 0) {
    param_1[4] = 1;
  }
  param_1[1] = param_2;
  return;
}
