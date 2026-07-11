// Name: FUN_00439390
// Address: 00439390
// Address Range: [[00439390, 004393c7]]
// Convention: unknown
// Signature: void FUN_00439390(undefined4 *param_1)

#include "nocturne.h"

void FUN_00439390(uint *param_1)

{
  if (param_1[4] == 0) {
    param_1[3] = 0;
    *param_1 = param_1[3];
    return;
  }
  FUN_005638d0(param_1[4]);
  param_1[4] = 0;
  param_1[3] = 0;
  *param_1 = param_1[3];
  return;
}
