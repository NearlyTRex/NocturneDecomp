// Name: FUN_00440c10
// Address: 00440c10
// Address Range: [[00440c10, 00440c47]]
// Convention: unknown
// Signature: void FUN_00440c10(undefined4 *param_1)

#include "nocturne.h"

void FUN_00440c10(uint *param_1)

{
  if (param_1[4] == 0) {
    param_1[3] = 0;
    *param_1 = param_1[3];
    return;
  }
  FUN_005a3770(param_1[4]);
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = param_1[3];
  return;
}
