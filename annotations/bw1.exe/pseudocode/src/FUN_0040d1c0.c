// Name: FUN_0040d1c0
// Address: 0040d1c0
// Address Range: [[0040d1c0, 0040d213]]
// Convention: unknown
// Signature: void FUN_0040d1c0(int *param_1)

#include "nocturne.h"

void FUN_0040d1c0(int *param_1)

{
  if (*param_1 != 0) {
    FUN_005c09f0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005c09f0(param_1[1]);
    param_1[1] = 0;
  }
  if (param_1[2] == 0) {
    return;
  }
  FUN_005c09f0(param_1[2]);
  param_1[2] = 0;
  return;
}
