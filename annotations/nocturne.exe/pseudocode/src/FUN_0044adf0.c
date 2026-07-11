// Name: FUN_0044adf0
// Address: 0044adf0
// Address Range: [[0044adf0, 0044ae73]]
// Convention: unknown
// Signature: void FUN_0044adf0(int *param_1)

#include "nocturne.h"

void FUN_0044adf0(int *param_1)

{
  if (param_1[9] != 0) {
    FUN_00564486(param_1[9] + -4);
    param_1[9] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_00564486(param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_005638d0(param_1[0xc]);
    param_1[0xc] = 0;
  }
  if (*param_1 != 0) {
    FUN_005638d0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    FUN_005638d0(param_1[1]);
    param_1[1] = 0;
    return;
  }
  return;
}
