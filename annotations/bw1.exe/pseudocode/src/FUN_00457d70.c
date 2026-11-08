// Name: FUN_00457d70
// Address: 00457d70
// Address Range: [[00457d70, 00457df1]]
// Convention: unknown
// Signature: void FUN_00457d70(int *param_1)

#include "nocturne.h"

void FUN_00457d70(int *param_1)

{
  if (param_1[9] != 0) {
    FUN_005c0336(param_1[9]);
    param_1[9] = 0;
  }
  if (param_1[0xb] != 0) {
    FUN_005c0336(param_1[0xb]);
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    FUN_005c09f0(param_1[0xc]);
    param_1[0xc] = 0;
  }
  if (*param_1 != 0) {
    FUN_005c09f0(*param_1);
    *param_1 = 0;
  }
  if (param_1[1] == 0) {
    return;
  }
  FUN_005c09f0(param_1[1]);
  param_1[1] = 0;
  return;
}
