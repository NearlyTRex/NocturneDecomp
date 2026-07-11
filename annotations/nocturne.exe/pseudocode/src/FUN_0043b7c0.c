// Name: FUN_0043b7c0
// Address: 0043b7c0
// Address Range: [[0043b7c0, 0043b7f5]]
// Convention: unknown
// Signature: void FUN_0043b7c0(undefined4 *param_1)

#include "nocturne.h"

void FUN_0043b7c0(uint *param_1)

{
  if (param_1[1] == 0) {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  FUN_00564486(param_1[1] + -4);
  *param_1 = 0;
  param_1[1] = 0;
  return;
}
